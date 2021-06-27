#include<stdio.h>
#include<stdlib.h>
void swap_max(int a[], int l, int n )
{
  int i,temp=0,count=0;
  temp=a[n];
  

   for(i=n+1;i<l;i++)
     {
       if(a[i]>temp)
       {temp=a[i];
        count=i; 
       
      }
          else continue;
                 
}
if(temp>a[n])
{
a[count]=a[n];
a[n]=temp;
}
}
void ssort(int a[], int l)
{
    int i;
     for(i=0;i<l;++i)
     swap_max(a,l,i);
     
    
       
 }
