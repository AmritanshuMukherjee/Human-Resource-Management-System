#include <iostream>
using namespace std;
#ifndef _JOBTRAINING_H 
#define _JOBTRAINING_H 
class JobTraining 
{ 
public: int no_of_skills; 
int no_of_skills_req = 10; 
int trainning_programms = 20;
void check_train()
{ 
  int choice1; 
  cout<<"\t\t\t\t\tIf logging first time choose 1 or else choose any other number : "; 
  cin>>choice1; 
  if(choice1==1)
  { 
    cout<<"\t\t\t\t\tDear user ,Enter no of skills you have = : "; 
    cin>>no_of_skills; 
  } else
  { 
    cout<<"\n\t\t\t\t\tYou have "<<no_of_skills<<" Skills\n"; 
  } 
}
void skillsupdate()
{ 
  int tt; 
  cout<<"\t\t\t\t\tEnter Number of training program you want to take out of "<<trainning_programms<<" : "; 
  cin>>tt; 
  trainning_programms -=tt; 
  no_of_skills+=tt; 
  cout<<"\t\t\t\t\tYou have "<<no_of_skills<<" Skills\n\t\t\t\t\tIf you want more then You can take "<<trainning_programms<<" programms\n"; 
} 
JobTraining()
{ 
  check_train(); 
  skillsupdate(); 
} 
}; 
#ifndef _PROMOTION_H 
#define _PROMOTION_H 
class PROMOTION 
{ 
public:
// USER DEFINED ON THE BASIS OF DATA BASE HERE I HAVE TOOK PROMOTION RECUIRMENT FOR ONE USER 
int acurracy = 80; 
char grade = 'A'; 
int workingexperience = 25; 
int year_before_promotions = 0; 
int retiring_people = 20; 
void checkpromotin()
{ 
  cout<<"\n\t\t\t\t\tDear User, You have "<<workingexperience<<" working experience"; 
  cout<<"\n\t\t\t\t\tYou got "<<grade<<" Grade, You have got "<<acurracy<<" %accuracy \n"; 
} 
void update()
{ 
  if(retiring_people>15)
  { 
    cout<<"\t\t\t\t\tYou are eligible for promotion ,Thanks for working with us...\n"; 
  } else
  { 
    cout<<"\t\t\t\t\tYou are not eligible for promotion ,Thanks for working with us...\n"; 
  } 
}; 
void checkretire()
{ 
  if(workingexperience>30)
  { 
    cout<<"\t\t\t\t\tYou are retired"; 
  }
  else
  { 
    cout<<"\t\t\t\t\tYou are going to get retired in"<<workingexperience-30<<" years\n"; 
  } 
}; 
PROMOTION()
{ 
  int choice2; 
  cout<<"\t\t\t\t\tYOU WANA CHECK 1 - RETIREMENT 2 - PROMOTION "; 
  cin>>choice2; 
  if(choice2==1)
  { 
    checkretire(); 
  } 
  else if(choice2 == 2)
  { 
    checkpromotin(); 
    update(); 
  } 
} 
}; 
#ifndef _RECRUITMENT_H 
#define _RECRUITMENT_H 
class Recruitment 
{ 
public: string job_name = "Technical Department assitants"; 
int no_of_vacancy = 3;
int experience = 3;
int age = 27; 
int interview_prob = 78;
void checkeligi()
{ 
  if(age>25 && experience>2 && interview_prob>75)
  { 
    cout<<"\t\t\t\t\tYou are eligible for "<<job_name<<"\n"; 
  } 
  else
  { 
    cout<<"\t\t\t\t\tYou are not eligible for "<<job_name<<"\n"; 
  } 
} 
void joincomp()
{ 
  if(no_of_vacancy>2)
  { 
    cout<<"\t\t\t\t\tYou can join the company\n"; 
  } 
  else
  { 
    cout<<"\t\t\t\t\tYou cant join the company\n"; 
  } 
} 
void vacancy_left()
{ 
  cout<<"\t\t\t\t\tNo of vacancy left are :"<<no_of_vacancy<<"\n"; 
} 
Recruitment()
{ 
  int choice3;
  cout<<"\t\t\t\t\tWhat you want to check 1- Eligibility 2-Vacancy of jobs left : "; 
  cin>>choice3;
  if(choice3==1)
  { 
    checkeligi(); 
    joincomp(); 
  } 
  else if(choice3==2)
  { 
    vacancy_left(); 
  } 
} 
}; 
#ifndef _MAIN_H 
#define _MAIN_H 
class MAIN 
{ 
public: int noofworkers; 
string name_company; 
MAIN(){ 
  noofworkers = 1000; 
  name_company = "RUBESH-DHRUV-SOLUTIONS"; 
  cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\tWELCOME TO "<<name_company<<"\n"<<"\t\t\t\tWe are human resource department, managing : "<<noofworkers<<" Workers"; } 
};
#endif
#endif
#endif
#endif 
int main()
{ 
  MAIN();
  cout<<"\n\n\n\t\t\t\t\tWhat would you like to do today : \n\t\t\t\t\t 1:JobTraining \n\t\t\t\t\t 2:Recruitment\n\t\t\t\t\t 3:PROMOTION\n"; 
  int i,choise;
  while(1)
  { 
    cout<<"\t\t\t\t\tEnter choice : "; 
    cin>>choise; 
    if(choise == 1){
      JobTraining(); 
    } 
    else if(choise == 2)
    { 
      Recruitment(); 
    } else if(choise == 3)
    { PROMOTION(); 
    } else
    { 
      cout<<"\t\t\t\t\tEnter right choice .....\n\t\t\t\t\tAgain Choose\n"; 
    } 
  } 
  return 0; 
}
