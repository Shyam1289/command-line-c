#include <stdio.h>
//#include <stdlib.h>
int atoi(char *);
int main(int argc,char *argv[]){//argc is the first argument--usually ./a.exe
                                //argv is array of all arguments provided in command line,obviusly 1st argument is argc
    int a,b,sum;
    //goto port;
    a=atoi(argv[1]);
    b=atoi(argv[2]);sum=a+b;
    printf("Sum of %d and is %d is %d.\n",a,b,sum);
    //port:
    //printf("after port\n");
    //printf("Sum of %d & %d is %d.\n",a,b,sum);

    return 0;
}
int atoi(char *ptr){
    int num=0,dig=0,mult=1;
    while(*ptr!='\0'){
        dig++;ptr++;
    }
    for(char* i=ptr-1;i>=ptr-dig;i--){
        num+=mult*((int)(*i-'0'));
        mult*=10;
    }
    return num;
}