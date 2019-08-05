#include<conio.h>
#include<string.h>
#include<iostream.h>
#include<fstream.h>


fstream inpfile,outfile;
void main()
{
	int i,j,k,l,m,n,c=0;
	//i=printf("hello");
       //	printf("%d",i);
	char a[20][20],temp[20],dummy[20];
	clrscr();
	inpfile.open("friends.txt",ios::in);
       //	cout<<"Enter n"<<endl;
       //	cin>>n;
	//fflush(stdin);

       //	cout<<"Enter Strings\n"<<endl;
       /*	for(i=0;i<n;i++){

	gets(a[i]);

	}   */
       for(l=0;!inpfile.eof();l++)
	{
	      if(inpfile.eof()) break;
		inpfile.getline(dummy,20,'\n');
		c+=1;
	      }
		inpfile.close();
	n=c;
	inpfile.open("friends.txt",ios::in);
	for(k=0;k<n;k++)
	{       if(inpfile.eof()) break;
		inpfile.getline(dummy,20,'\n');
		strcpy(a[k],dummy);
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
		if(strcmp(a[j],a[j+1])<=0)
			continue  ;
		else{
			strcpy(temp,a[j]);
			strcpy(a[j],a[j+1]);
			strcpy(a[j+1],temp);
		}
		}
	}

	inpfile.close();
	cout<<"Sorted lists are"<<endl;
	outfile.open("sorted.txt",ios::out);
	for(i=0;i<n;i++){
       outfile<<a[i]<<endl;
       //cout<<a[i];
       //cout<<a[i]<<endl;
       }   outfile.close();
	for(i=0;i<n;i++){
       //outfile<<a[i]<<endl;
      cout<<a[i]<<endl;
       }
       getch();
;
}
