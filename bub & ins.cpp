#include<iostream>
#include<string.h>
using namespace std;
typedef struct student
{
int roll_num;
char name [20];
float marks;
}stud;
void create(stud s[20],int n);
void display(stud s[20],int n);
void bubble_sort(stud s[20],int n);
void insertionSort(stud s[20],int n);
int main()
{
stud s[20];
int ch,n,result;
char x[20];
do
{
cout<<"\n 1) Create Student Database ";
cout<<"\n 2) Bubble Sort ";
cout<<"\n 3) Insertion Sort ";
cout<<"\n 4) Exit ";
cout<<"\n Enter Your Choice:=";
cin>>ch;
switch(ch)
{
case 1:
cout<<"\n Enter The Number Of Records:=";
cin>>n;
create(s,n);
break;
case 2:
bubble_sort(s,n);
display(s,n);
break;
case 3:
insertionSort(s,n);
display(s,n);
break;
case 4:return 0;
      default:cout<<"\n Invalid choice !! Please enter your choice again."<<endl;
}
}while(ch!=4);
}
void create(stud s[20],int n)
{
int i;
for(i=0;i<n;i++)
{
cout<<"\n Enter the roll number:=";
cin>>s[i].roll_num;
cout<<"\n Enter the Name:=";
cin>>s[i].name;
cout<<"\n Enter the marks:=";
cin>>s[i].marks;
}
}
void display(stud s[20],int n)
{
int i;
cout<<"\n"<< "\t"<< "Roll No"<< "\t"<<" Name" <<"\t"<< "Marks";
for(i=0;i<n;i++)
{
	cout<<"\n";
cout<<"\t "<< s[i].roll_num<<"\t "<<s[i].name<<"\t "<<s[i].marks;
}
}
void bubble_sort(stud s[20],int n)
{
int i,j;
stud temp;
for(i=1;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(s[j].roll_num>s[j+1].roll_num)
{
temp=s[j];
s[j]=s[j+1];
s[j+1]=temp;
}
}
}
}
void insertionSort(stud s[20], int n)
{
    int i,  j;
    stud  key;
    for (i = 1; i<n; i++)
    {
        key= s[i];
        j = i - 1;
        while (j >= 0 && strcmp(s[j].name, key.name) >0)
        {
            s[j + 1]= s[j];
            j = j - 1;
        }
        s[j + 1]= key;
     }
}