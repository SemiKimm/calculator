/**
* v 1.0
*/

//hhhhhhhhh
#include <stdio.h>

gggggggg
int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);

//충돌 연습22
int main(int argc, char* argv[])
{
    int a, b, c;
    char operator

    printf("Please enter a expression");
    scanf("%d %c %d",&a, &operator, &b);

    switch(operator){
        case '+':
            c=add(a,b);
            break;
        case '-':
            c = sub(a,b);
            break;
        case '*':
            c=multi(a,b);
            break;
        case '/':
            c = div(a,b);
            break;
    }
    printf("result is %d.\n",c);
    return 0;
}

int add(int a, int a)
{
	//TODO implementation
	return 0;
}
int sub(int a, int b)
{	
	//TODO implementation
	return 0;
}
int multi(int a, int b)
{
	//TODO implementation
	return 0;
}
int div(int a, int b)
{
	//TODO implementation
	return 0;
}//덮어쓰기33??
