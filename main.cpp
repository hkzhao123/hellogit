#include<stdio.h>
#include<iostream>
#include<fstream>
using namespace std;

int main(){
int average=0;
int j=0;
int t=0;
int p=0;
ifstream infile;
infile.open("score.csv");
struct student
{string name[100];
string sex[100];
string  score[100];
};
for(int i=0;i<100;i++)
{infile>>student.name[i]<<student.sex[i]<<student.score[i]
}
for(int i=0;i<100;i++)
{if (student.sex[i]=="male")
{average = average + student.score[i];
j=j+1;}
}
cout<<"male average"<<average<F2>j<<endl;
average=0;
for(int i=0;i<100;i++)
{if(student.sex[i]=="female")
average = average + student.score[i];
}
cout<<"female average"<<average<F2>(100-j)<<endl;
average =0;
for(int i=0;i<100;i++)
{average = average + student.score[i];
}
cout<<"all average"<<average<F2>100<<endl;
for(int i=0;i<100;i++)
{t= student.socre[i];
p=i;
for(int j=i+1;j<101;j++)
{if(student.score[j]>t)
{t=student.score[j];
p=j;
}
}
student.score[p]=student.score[i];
student.socre[i]=t;
}
for(int i=0;i<100;i++)
{cout<<student.name[i]<<student.score[i]<<endl;
}
return 0;
}
