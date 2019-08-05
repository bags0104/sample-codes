//Calculates the number of times the max element is repeated.


#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void count(int a[20],int large,int n)
{
	  int i,m=0;
	  for(i=0;i<n;i++)
	  {
		if(a[i]==large)
		{
			m++;
		}
	  }
	  cout<<"The maximum value:\n"<<m<<endl;
}
void main()
{
	int n,i,j,large=-9999,k=0,c=0,m;
	clrscr();
	cout<<"enter the n value\n";
	cin>>n;
	int a[20];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(j=0;j<n;j++){
	if(a[j]>large){
		large=a[j];
		k=j;
	}

	}
	count(a,large,n);
	getch();
}
