#include<bits/stdc++.h>
#include <cstddef>
using namespace std;
#include<stdio.h>

int k=0, result=0, esc=0, a,b;

void menu(){
	printf("You can perform: Addition\t Subtraction\tMultiplication\tDivision\n");
	printf("*Press 'r' to reset\n");
	printf("*Press 'q' to quit.\n");
	printf("Format: 2 + 3-...<enter>\n");
}
void add(){
	if (scanf(" %d", &b) != 1) {
    return;
	}
	int a=result;
	result+=b;
	printf("%d + %d = %d\n",a,b, result);
}
void sub(){
  int b;
  if (scanf(" %d", &b) != 1) {
     return;
	}
	int a=result;
	result-=b;
	printf("%d - %d = %d\n",a,b, result);
}
void mul(){
  int b;
  if (scanf(" %d", &b) != 1) {
     return;
	}
	int a=result;
	result*=b;
	printf("%d * %d = %d\n",a,b, result);
}
void div(){
  int b;
  if (scanf(" %d", &b) != 1) {
     return;
	}
	while(b==0){
		printf("You can't divide with 0. Choose Integer value other than 0.\n");
		scanf(" %d", &b);
	}
	int a=result;
	result/=b;
	printf("%d / %d = %d\n",a,b, result);
}
int main(){
	menu();
	while(1){
		if(esc==0){
			scanf(" %d", &a);
			esc=1;
			result=a;
		}
		char op;
		scanf(" %c", &op);
		switch(op){
			case '+': add(); break;
			case '-': sub(); break;
			case '*': mul(); break;
			case '/': div(); break;
			case 'q': return 0;
			case 'r': result=0;
					 esc=0;
					 system("clear");
					 printf("Old data cleared.\n");
					 menu();
					 break;
			default: printf("Wrong. Choose right operator"); break;
		}
	}
}
