#include <stdio.h>

/*int main() {}
int main(int argc, char *argv[]) {}  argument count argument vector
int main(int argc, char *argv[], char *envp[]) {}  implementation-defined  an array of pointers to the execution environment variables.*/


int main(int argc, char* argv[], char *envp[])
{
    printf("argc = %d\n", argc);
    for (int ndx = 0; ndx != argc; ++ndx)
        printf("argv[%d] --> %s\n", ndx, argv[ndx]);
    printf("argv[argc] = %p\n", (void*)argv[argc]);

    for (int i = 0; envp[i] != NULL; i++) {
        printf("%s\n", envp[i]);
    }
    return 0;

    short x;
    printf("sizeof(type argument)：\n");
    printf("sizeof char                = %zu\n", sizeof(char));
    printf("sizeof signed char         = %zu\n", sizeof(signed char));
    printf("sizeof unsigned char       = %zu\n", sizeof(unsigned char));
    printf("sizeof int                 = %zu\n", sizeof(int));
    printf("sizeof float               = %zu\n", sizeof(float));
    printf("sizeof(void(*)(void))      = %zu\n", sizeof(void(*)(void)));
    printf("sizeof(char[10])           = %zu\n", sizeof(char[10]));
    //  printf("sizeof(void(void))     = %zu\n", sizeof(void(void))); // 错误：函数类型
    //  printf("sizeof(char[])         = %zu\n", sizeof(char[])); // 错误：不完整类型

    printf("sizeof(expression argument)：\n");
    printf("sizeof 'a'                 = %zu\n", sizeof 'a'); // 'a' 的类型为 int
    //  printf("sizeof main            = %zu\n", sizeof main); // 错误：函数类型
    printf("sizeof &main               = %zu\n", sizeof & main);
    printf("sizeof (\"hello\")         = %zu\n", sizeof("hello")); // 类型为 char[6]
    printf("sizeof x                   = %zu\n", sizeof x);   // x 的类型为 short
    printf("sizeof (x+1)               = %zu\n", sizeof x + 1); // x+1 的类型为 int





	return 0;
}