#include<conio.h>
#include<stdio.h>
#include<math.h>
int maxn(int x[],int n)
{
    int i,max;
    max=x[0];
    for(i=1;i<n;i++)
    {
                    if(x[i]!=0&&x[i]>max)   max=x[i];
    }
    return(max);
}
int minn(int x[],int n)
{
    int i,min;
    min=200;
    for(i=0;i<n;i++)
    {
                    if(x[i]!=0&&x[i]<min)   min=x[i];
    }
    return(min);
}
int zhishu(int x)
{
    int i,tag=1;
    for(i=2;i<sqrt(x);i++)
    {
             if(x%i==0)   tag=0;
             if(tag==0)   break;
    }
    return(tag);
}
main()
{
      FILE *p1,*p2;
      p1=fopen("word.in","r");
      p2=fopen("word.out","w");
      char a[200];
      int i,b[26],z;
      for(i=0;i<26;i++)
                b[i]=0;
      fscanf(p1,"%s",&a);
      for(i=0;a[i]!='\0';i++)
                b[a[i]-'a']++;
      z=maxn(b,26)-minn(b,26);
      if(z>=2&&zhishu(z)==1)     fprintf(p2,"lucky word\n%d",z);
      else   fprintf(p2,"no answer\n0");
}
