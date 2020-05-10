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
	

	printf("Введiть номер завдання: (1-5)");
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
	else if (abuse == 5) 
	{
		zavdanya5();
	}	
	else {
		printf("Такого завдання немає! \n\n\n\n");
	}


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
    
    printf("Введіть місяць: ");
    scanf("%d",&n);

    switch(n) {
        case 1: printf("1 - Січень");break;
        case 2: printf("2 - Лютий");break;
        case 3: printf("3 - Березень");break;
        case 4: printf("4 - Квітень");break;
        case 5: printf("5 - Травень");break;
        case 6: printf("6 - Червень");break;
        case 7: printf("7 - Липень");break;
        case 8: printf("8 - Серпень");break;
        case 9: printf("9 - Вересень");break;
        case 10: printf("10 - Жовтень");break;
        case 11: printf("11 - Листопад");break;
        case 12: printf("12 - Грудень");break;
        default: printf("Такого місяця немає \n");break;
    }
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
    
    if (((1-y)/(1+x)+z) <= 0) {
        printf("Число меньше или равно 0");
        return 0;
    }
    
    t = log((1-y)/(1+x)+z);
    printf("%f", t);
    
   return 0;
}

int zavdanya5() 
{
	int colCount;
    printf("Введiть розмiр масиву: ");
    scanf("%d", &colCount);
    
    int a[colCount];
    for(int i = 0; i < colCount; i++)
        { printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }

    int minValueElem = a[0];
    int minValueIndexElem = 0;
    
    for(int i = 1; i < colCount; i++) {
        if (a[i] < minValueElem) {
            minValueElem = a[i];
            minValueIndexElem = i;
        }
        
    }
    
    printf("Iндекс найменшого елемента = %d\n\n", minValueIndexElem);

    return 0;
}
