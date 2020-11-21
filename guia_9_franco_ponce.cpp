1:
#include <stdio.h>
#include <stdlib.h>
int main()
{

int x=0;

while (x<=9)
{
printf("%d\n",x);
x=x +1;
}
return 0;
}

2:
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i=1 , num1=0, num2=0, a=0;
    while (i <16)
    {
        printf ("Ingrese un valor \n");
        scanf ("%d",&num2);
         a=a+num2;

        if (num2 > num1)



        num1=num2;
        i ++;

    }
    printf ("El n%cmero mayor es %d \n ", 163,num1);
    printf ("EL promedio es %d",a/15);
    return 0;
}

3:

#include <stdio.h>
#include <stdlib.h>


int main()
{
int i=1, a=0, b=0, num=0;
printf ("Ingresar el valor 1 \n  ");
scanf ("%d",&a);
printf ("Ingresar el valor 2 \n");
scanf ("%d",&b);
if (a<b)
{
    i=a +1;
    printf ("Los números intermedios de %d y %d son : \n",a,b);
    do
    {

        printf ("%d \n ",i);
        i++;
    }
    while(i<b);
}
    else
    {
        if (b<a)
        {
            i=b+1;
            printf ("Los números intermedios de %d y %d son : \n",b,a);
            do
            {
                printf("%d \n",i);
                i++;
            }
            while(i<a);
        }
    }
    return 0;
}

4:

include <stdio.h>
#include <stdlib.h>


int main()
{
    int i=1, f=1 , n=0;
    printf("Ingrese un numero del cual quieras factorear");
    scanf ("%d",&n);
while (i<=n)
       {

        f=f*i;
        i++;
       }
         printf (" El factorial del número %d es %d ",n,f);
         return 0;
       }

       5:
       #include <stdio.h>
       #include <stdlib.h>


       int main ()
       {
       int i=1, n1=0, n2=0, r=1;
       printf ("Ingrese el primer numero  \n ");
       scanf ("%d",&n1);
       printf ("Ingrese el segundo numero  \n ");
       scanf ("%d",&n2);
       while (i<=n2)
       {
           r=r*n1;
           i++;
       }
       printf ("resultado es: %d",r);
       return 0;
       }

6:

#include <stdio.h>
#include <stdlib.h>


int main()
{
  int i=1, a=1;
  float p=0 , nota=0, pg=0;
  do
  {
            p=0;
      nota=0;
  printf ("El alumno: %d \n",a);
  printf ("Ingresar las notas del alumno  \n");
  a++;
  i=1;
 do
 {
       printf (" nota %d\n",i);
        scanf ("%f",&nota);
        p=p+nota;
        i++;

 }
 while (i<11);



   p=p/10;
  pg=pg+p;
  printf ("EL promedio del alumno  es  ",a);
  printf (": %.2lf \n",p);
}
while (a<30);
pg=pg/30;
printf("El promedio general es %.2lf",pg);
return 0;
}

7:

#include <stdio.h>
#include <stdlib.h>


int main()
{
  int i=0, a=1, num1=0, p=0 , uni=0, pg=0;
do
      {

      uni=0;
  printf ("El vendedor: %d \n",a);
  printf ("Ingresar las unidades vendidas  \n");
a++;
i=0;
p=0;
do
    {
      printf (" venta del día  %d\n",i+1);
        scanf ("%d",&uni);
         p=p+uni;

  if (p > num1)

        num1=p;
        i ++;

}
while(i<15);

pg=pg+p;

  printf ("EL total  de unidades vendidas  del vendedor  %d",a-1);
  printf (" es %d \n",p);
       }
while (a<21);





printf("El total general es %d\n",pg);
printf ("El vendedor con mayor venta diaria tiene %d",num1);
return 0;
}

8:

#include <stdio.h>
#include <stdlib.h>


int main()
{
int i=0, p=0, n=0, cero=0, num=0;
do
{
    printf ("Ingrese el valor %d \n ",i+1 );
scanf ("%d",&num);
i++;
if (num >0 )
{
    p=p+1 ;

}
else
{
    if (num <0 )
    {
        n=n+1;

    }
    else
    {
        cero=cero+1 ;
    }
}

}
while(i<10);
printf ("Numeros positivos %d ,numero negativos %d y numeros ceros %d",p,n,cero);
    return 0;
}

9:

#include <stdio.h>
#include <stdlib.h>


int main()
{
int i=0, p=0, n=0,  num=0;
do
{

    printf ("Ingrese el sueldo %d \n ",i+1 );
scanf ("%d",&num);
i++;
if (num >=2000 )
{
    p=p+1 ;

}
else
{
    if (num <2000 )
    {
        n=n+1;

    }

}

}
while(i<20);
printf ("Las personas que ganan mas de 2000 son %d y las que no son %d",p,n);
    return 0;
}
