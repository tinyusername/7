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
void bubble_sort(stud s[20],int n);
void display(stud s[20],int n);
void quick_sort(stud s[20],int,int);
int partition(stud s[20],int,int);
int main()
{
stud s[20];
int ch,n,key,result;
char x[20];
do
{
cout<<"\n 1) Create Student Database ";
cout<<"\n 2) Bubble Sort ";
cout<<"\n 3) Quick sort ";
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
quick_sort(s,0,n-1);
cout<<"\n"<< "\t"<< "Roll No"<< "\t"<<" Name" <<"\t"<< "Marks";
for(int i=n-1; i>=n-10; i--)
{
    cout<<"\n";
cout<<"\t "<< s[i].roll_num<<"\t "<<s[i].name<<"\t "<<s[i].marks;

}
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

void quick_sort(stud s[20], int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(s,l,u);
        quick_sort(s,l,j-1);
        quick_sort(s,j+1,u);
    }
}
 
int partition(stud s[20], int l,int u)
{
    int i,j;
     stud temp, v;
    
    v=s[l];
    i=l;
    j=u+1;
    
    do
    {
        do
            i++;
            
        while(s[i].marks<v.marks&&i<=u);
        
        do
            j--;
        while(v.marks<s[j].marks);
        
        if(i<j)
        {
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }while(i<j);
    
    s[l]=s[j];
    s[j]=v;
    
    return(j);
}
