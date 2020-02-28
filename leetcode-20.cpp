/*************************************************************************
	> File Name: leetcode-20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 14时06分08秒
 ************************************************************************/

bool isValid(char * s){
    int len = strlen(s), top = -1, flag = 1;
    char *stack= (char *)malloc(sizeof(char) * len);   //动态存储模拟栈的性质
    while (s[0]) {
        switch(s[0]) {
            case '(' :
            case '[':
            case '{' : {
                stack[++top] = s[0];
            } break;
            case ')' : flag = (top != -1 && stack[top--] == '(') ; break;//出栈操作
            case ']' :flag = (top != -1 && stack[top--] == '[') ; break;
            case '}' :flag = (top != -1 && stack[top--] == '{') ; break;
    }
    if(!flag) break; //flag = 0 不合法
    s++;
}
free(stack);
return (flag && top == -1);  //flag为1且栈为空
}
