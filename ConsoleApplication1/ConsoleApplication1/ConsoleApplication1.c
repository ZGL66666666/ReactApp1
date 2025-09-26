#include<stdio.h>


/*
  int main(void){}
  int main(int argc, char* argv[]){}
  another implementation-defined signature(since C99)

  int main(int ac, char** av ){}
  int main(int argc, char* argv[], char* envp[]){}
  argument count/vector  environment path
  implicit calls:exit() exit_success exit_failure
*/

int main(int argc, char* argv[], char* envp[])
{
    printf("argc = %d\n", argc);
    printf("\n");

    for (int ndx = 0; ndx != argc; ++ndx)
        printf("argv[%d] --> %s\n", ndx, argv[ndx]);
    printf("argv[argc] = %p\n", (void*)argv[argc]);
    printf("\n");

   /* int i = 0;
    while (envp)
        printf("%s\n", envp[i++]);
    */
    
        int p = 1;
        int n = 0;
        int e = 1;
        char a[] = {n};
        for (int n = 0; n < 7; ++n) 
            {
                printf("%d[]\n", a[n]);

            }
    



    return 0;
}


