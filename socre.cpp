#include<stdio.h>
#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

typedef struct student{
string name;
bool sex;
double score;
}student;
vector<student>sss;
bool tmd(student s1,student s2)
{if(s1.score!=s2.score)
return s1.score>s2.score;
else
return s1.name<s2.name;
}
int main()
{freopen("score.csv","r",stdin);
string stl;
getline(cin,stl);
int num=0;
while(getline(cin,stl))
{student students;
stringstream s;
s<<stl;
s>>students.name;
students.name.pop_back();
s>>stl;
if(stl[0]=='F') students.sex=false;
else students.sex = true;
s>>students.score;
sss.push_back(students);
}  
double average =0;
double fav=0,mav =0;
int fnum=0,mnum=0;
num=sss.size();
for(int i=0;i<num;i++)
{average = average + sss[i].score;
if(sss[i].sex) mnum++,mav=mav+sss[i].score;
else fnum++,fav+=sss[i].score; 
}
average=average/num;
fav = fav/fnum;
mav = average/mnum;
sort(sss.begin(),sss.end(),tmd);
cout<<"all of the students' average:"<<average<<endl;
cout<<"all of the females' average:"<<fav<<endl;
cout<<"all of the males' average:"<<mav<<endl;
for(int i=0;i<num;i++)
{cout<<sss[i].name<<" "<<(sss[i].sex?"Male":"Female")<<" "<<sss[i].score<<endl;
} 
return 0;
}
