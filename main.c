#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "ua");
	int abuse;
	//zavdanya1();
	//zavdanya3();
	

	printf("Введiть номер завдання: (1-4)");
	scanf("%d", &abuse);

	if(abuse == 1) 
	{
		zavdanya1();
	}
	else if (abuse == 2) 
	{
		zavdanya2();
	} 
	else if (abuse == 3) 
	{
		zavdanya3();
	}
	else if (abuse == 4) 
	{
		zavdanya4();
	}	
	else {
		printf("Такого завдання немає! \n\n\n\n");
	}

	printf("\n\n\n");
	system("pause");
	return 0;
    
}

int zavdanya1()
{
    float x,f;
    
    printf("Введите число: ");
    scanf("%f",&x);
    
    // Калькулятор windows видає трішки не тікі значення тому-що він спочатку віднімає потім додає
    if(x <= 2.0) {
        f = pow(x,2)+5*x-6; 
		printf("f('%f') = %f^2+5*%f-6 = %f", x,x,x,f); 
    }
    else {
        f = fabs(x+cos(x));
        printf("f(%f) = (%f+cos(%f) = %f \n\n\n\n", x,x,x,f);
    }
    
    return 0;

} 

int zavdanya2() 
{
	float a,b,c;
    
    printf("Сторона а= ");
    scanf("%f", &a);
    printf("Сторона b= ");
    scanf("%f", &b);
    printf("Сторона с= ");
    scanf("%f", &c);
    
    if(a + b <=c ) {
        printf("Не можна утворити трикутник з такими сторонами!\n");
    } 
    else if(pow(c,2) == pow(a,2) + pow(b,2)) {
        printf("Це прямокутний трикутник!\n");
    }
    else if((pow(a,2) + pow(b,2) - pow(c,2)) / (2 * a * b) > 0) {
        printf("Це гострокутний трикутник! \n");
    }
    else {
       printf("Це тупокутний трикутник!\n"); 
    }
    
   return 0;

}

int zavdanya3()
{
	 
    int n;
    
    printf("Введiть мiсяць: ");
    scanf("%d",&n);

    switch(n) {
        case 1: printf("1 - Сiчень");break;
        case 2: printf("2 - Лютий");break;
        case 3: printf("3 - Березень");break;
        case 4: printf("4 - Квiтень");break;
        case 5: printf("5 - Травень");break;
        case 6: printf("6 - Червень");break;
        case 7: printf("7 - Липень");break;
        case 8: printf("8 - Серпень");break;
        case 9: printf("9 - Вересень");break;
        case 10: printf("10 - Жовтень");break;
        case 11: printf("11 - Листопад");break;
        case 12: printf("12 - Грудень");break;
        default: printf("Такого мiсяця немає \n");break;
    }
	printf("\n\n\n\n");
   return 0;
}

int zavdanya4() {
	int x,y,z;
    float t;
    printf("x= ");
    scanf("%d", &x);
    
    printf("y= ");
    scanf("%d", &y);
    
    printf("z= ");
    scanf("%d", &z);

	
    if ((1+x) == 0) {
		printf("1+%d = 0 а на ноль дiлити не можна", x);
		return 0;
	}
    else if (((1-y)/(1+x)+z) <= 0) {
        printf("Число меньше или равно 0");
        return 0;
    }
    
    t = log((1-y)/(1+x)+z);
    printf("%f", t);
    
   return 0;
}


