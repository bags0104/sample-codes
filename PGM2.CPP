#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int a,i,j,b=0,s=9999,l=-9999,m[20],n,k,c;
	clrscr();
	cout<<"Enter n:"<<endl;
	cin>>n;
	cout<<"Enter the numbers\n";
	for(i=0;i<n;i++)
	cin>>m[i];
	for(j=0;j<n;j++)
	{
		if(m[j]<s)
			s=m[j];
	}
	for(k=0;k<n;k++)
	{
		if(m[k]>l)
			l=m[k];
	}
       //	cout<<s<<endl<<l;
		for(b=0;m[b]>=s && m[b]<=l;b++);
		if(b==l)
			cout<<"Yes"<<endl;
		else
			cout<<"No";
	getch();
}

