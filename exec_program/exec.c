#include <stdio.h>
#include<unistd.h>

int main()
{
       
        
       printf("i am exec program having pid %d",getpid());
       
       char *args[]={"./add",NULL};
       execv(args[0],args);
       printf("\ncome back to exec program\n");

    return 0;
}
