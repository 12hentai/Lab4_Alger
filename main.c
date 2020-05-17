#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "ua");

	int abs,t;
	//zavdanya1();
	//zavdanya3();
	

	printf("Введiть номер завдання: (1-4)");
	scanf("%d", &abs);

	if(abs == 1) 
	{
		 exOne();
		
	}
	else if (abs == 2) 
	{
		printf("Введiть тип завдання: (1-3)");
		scanf("%d", &t);
		if(t == 1) {
			 exTwoA();
		}
		else if(t == 2) {
			exTwoB();
		}
		else if(t == 3) {
			exTwoC();
		}
		else {
			printf("Такого типу завдання 2 немає!");
		}
		
	} 
	else if (abs == 3) 
	{
		exThree();
	}
	else if (abs == 4) 
	{
		exFour();
	
	}	
	else {
		printf("Такого завдання немає! \n\n\n\n");
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}

int exOne() {
	int x;
    int y;
	int z;
    float a;
 
    printf("Введiть значення x= ");
	scanf("%d",&x);
	printf("Введiть значення y= ");
	scanf("%d",&y);
	printf("Введiть значення z= ");
	scanf("%d",&z);

	
	
	

	while(x < 0) {
		printf("Корінь з відємного числа!");
		printf("Введiть значення x= ");
		scanf("%d",&x);
		printf("Введiть значення y= ");
		scanf("%d",&y);
		printf("Введiть значення z= ");
		scanf("%d",&z);
	}
	while(y*z < 0) {
		printf("Корінь з відємного числа!");
		printf("Введiть значення x= ");
		scanf("%d",&x);
		printf("Введiть значення y= ");
		scanf("%d",&y);
		printf("Введiть значення z= ");
		scanf("%d",&z);
	}
	while(y < 0) {
		printf("Корінь з відємного числа!");
		printf("Введiть значення x= ");
		scanf("%d",&x);
		printf("Введiть значення y= ");
		scanf("%d",&y);
		printf("Введiть значення z= ");
		scanf("%d",&z);
	}
	while(x*z < 0) {
		printf("Корінь з відємного числа!");
		printf("Введiть значення x= ");
		scanf("%d",&x);
		printf("Введiть значення y= ");
		scanf("%d",&y);
		printf("Введiть значення z= ");
		scanf("%d",&z);
	}

	while((sqrt(y)-2*sqrt(x*z)) == 0) {
		printf("Дiлення на 0!");
		printf("Введiть значення x= ");
		scanf("%d",&x);
		printf("Введiть значення y= ");
		scanf("%d",&y);
		printf("Введiть значення z= ");
		scanf("%d",&z);
	}
	

	a = (sqrt(x) + 2*sqrt(y*z))/(sqrt(y)-2*sqrt(x*z));
	printf("%f", a);
	return 0;
}
	
int exTwoA() {
	//з використанням циклу з параметром
	int x;

	long long int multiplication = 0;
	printf("Введiть початкове число (цiле число бiльше 10): ");
	scanf("%d", &x);
	
	for(int i = x ; i <= 100; i++) {
		if(i < 10) {
			printf("Число менше 10");
			break;
		}else {
			if((i%2) == 0) {
			multiplication += i; 
			
			}
		}
		
	}
	printf("%d\n", multiplication);
	return 0;
};

int exTwoB() {
	// з використанням циклу з передумовою
	int x;

	long long int multiplication = 0;
	printf("Введiть початкове число (цiле число бiльше 10): ");
	scanf("%d", &x);

	while(x<10) {
		printf("Введiть початкове число (цiле число бiльше 10): ");
		scanf("%d", &x);
	}
	int i = x;
	while(i<=100) {
		
		if((i%2) == 0) {
			multiplication += i; 
			
		}
		i++;
	}
	printf("%d\n", multiplication);
	return 0;
}

int exTwoC() {
	//  з використанням циклу з післяумовою
	int x;

	long long int multiplication = 0;
	printf("Введiть початкове число (цiле число бiльше 10): ");
	scanf("%d", &x);
	
	int i = x;
	do {
		if (i % 2 == 0 && i >= 10) {
			multiplication += i;
		}
		i++;
	} while (i <= 100);
	printf("%d\n", multiplication);

}

int exThree() {
	int j, i, s,n;
	float x, p = 0;

	printf("Введіть n:");
	scanf("%d", &n);
	printf("Введіть x:");
	scanf("%f", &x);

	for (i = 1; i <= n; i++){ 
		for (s = 0, j = i;j <= n; j++) s += (x+i)/j;
		p += s;
	}
	printf("p=%f\n", p);
	return 0;
}
int exFour() {
	double a = -1,b = 3,dx=0.05, y,x;
	printf("\t   x\t\t|\t  y=f(x)\n\n");
	
	while(a<=b) {
		x = a;
		if(x <= 0) {
			printf("\tДілення на 0! Минусовые значения логарифма!\n");
			
		}
		else {
			y = (log10(x))/(x);
			printf("\t%f\t|\ty=%f\n",x,y);
		}
		a +=dx;
	}
	return 0;
}

