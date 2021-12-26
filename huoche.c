#include<stdio.h>
#include <windows.h>
int main()
{
	for(int y=0;y<=3;y++){
	//Sleep(60); 
	int a=0,b;
	while(a<=70)
	{
		system("cls"); b=1;
 		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n"); 
		while(b<=a)
		{
			printf(" ");b++;
		}
		printf("┌════════┐...┌════════┐...┌.═════════┐   ╭═════╮\n");
		b=1;
		while(b<=a)
		{
			printf(" ");b++;
		}
		printf("║        ║ ═ ║        ║ ═ ║          ║═  ║ 　  ║\n");
		b=1;
		while(b<=a)
		{
			printf(" ");b++;
		}
		printf("└⊙═⊙═⊙═⊙ ⊙═⊙═⊙═⊙  └⊙═⊙═⊙═⊙~~ ╰⊙═⊙╯\n");
		Sleep(1);
		a=a+1;
		}	
	}
}
