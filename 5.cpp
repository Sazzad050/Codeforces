#include<stdio.h>
int main (){
char str[100];
int i ,c=0, d=0,e= 0;
gets(str);

for (i=0; str[i]!=NULL; i++){

if (str[i]>='A' && str[i]<='I')
{
    c++;
}
else if (str[i]>='H' && str[i]<='X')
{
    d++;
}
else{
e++;
}
}
printf ("%d %d %d ", c ,d ,e );
}
