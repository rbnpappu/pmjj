#include<stdio.h>
#include<stdlib.h>
#define S n
int n;

struct arr
{
int arr[100];


};
int bubble(struct arr *p);
int selection(struct arr *p);
int insertion(struct arr *p);

int main()
{
 struct arr u;
int ch;
while(1)
{
printf("Enter 1 for bubble\n");
printf("Enter 2 for selection\n");
printf("Enter 3 for insertion\n");
printf("Enter 4 for exit:\n");

printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
bubble(&u);
break;
case 2:

selection(&u);

break;
case 3:
insertion(&u);
break;
case 4:
exit(1);
break;
if(ch>4)
{
default:
printf("Enter choice is default:");
}
}
}
return 0;
}
int bubble(struct arr *p)
{
int i,j,temp,n;
printf("Enter the space in an array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter no of Elements in an array:%d",i+1);
scanf("%d",&p->arr[i]);
}
for(i=0;i<=n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(p->arr[j]>p->arr[j+1])
{
temp=p->arr[j];
p->arr[j]=p->arr[j+1];
p->arr[j+1]=temp;

}

}
}
printf("After sorting\n");
for(i=0;i<n;i++)
{

printf("%d",p->arr[i]);

}


}
int selection(struct arr *p)
{
int i,j,temp,n;
printf("Enter the space in an array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter no of Elements in an array:%d",i+1);
scanf("%d",&p->arr[i]);
}
for(i=0;i<=n-1;i++)
{
for(j=i+1;j<n-1-i;j++)
{
if(p->arr[i]>p->arr[j])
{
temp=p->arr[i];
p->arr[i]=p->arr[j];
p->arr[j]=temp;

}

}
printf("After sorting:");
for(i=0;i<n;i++)
{
	printf("%d",p->arr[i]);
}
}
int insertion(struct arr *p){
int i,j,temp,n,i1;
printf("Enter the space in an array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter no of Elements in an array:%d",i+1);
scanf("%d",&p->arr[i]);
}
for(i1=1;i<=n;i1++)
{
	temp=p->arr[i1];
	j=i1-1;
while(p->arr[i1]>temp&&j>=0)
{
{

p->arr[j+1]=p->arr[j];
j--;

}

}
arr[j+1]=temp;
printf("After sorting\n");
for(i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}
}
}
