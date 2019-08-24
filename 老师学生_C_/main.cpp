#include <iostream>
#include <cstring>


using namespace std;
#define SLE sizeof(Student)
#define TLE sizeof(Teacher)
typedef struct Teacher {
    char* name;
    struct Teacher *tea_next;
};
typedef struct Student{
    char* name;
    struct Student *stu_next;
};
Teacher *TMyLis(){
    Teacher*tea_head=(Teacher*)malloc(TLE);
    char* tea_a[3]={"tea1","tea2","tea3"};
    Teacher*tmp=tea_head,*ptr_T;
    for(int t=0;t<3;t++){
        //Teacher *ptr_T=(Teacher*)malloc(TLE);
        ptr_T->name=strcpy((char*)malloc(sizeof(ptr_T->name)),tea_a[t]);
       // ptr_T->name=tea_a[t];
        ptr_T->tea_next=NULL;
        tmp->tea_next=ptr_T;
        tmp=tmp->tea_next;
    }
    return tea_head;
}
Student *SMyList(){
    Student *stu_head=(Student*)malloc(SLE);
    char* stu_a[5]={"stu1","stu2","stu3","stu4","stu5"};
    Student*p=stu_head,*ptr_S;
    for(int i=0;i<5;i++) {
        ptr_S->name=strcpy((char*)malloc(sizeof(ptr_S->name)),stu_a[i]);
        ptr_S->stu_next=NULL;
        p->stu_next=ptr_S;
        p=p->stu_next;
    }
    return stu_head;
}
void Pri(char* r){
     Student*stu_head=SMyList();
     Student*tmp=stu_head;
     Teacher*tea_head=TMyLis();
     Teacher*map=tea_head;
     while(tmp!=NULL){
         if(tmp->name==r){
             for (int i = 0; i <3; i++) {
                 cout << tea_head->name;
                 tea_head=tea_head->tea_next;
             }
             break;
        }
         tmp=tmp->stu_next;
    }
     while (map!=NULL){
         if(map->name==r){
             for(int t=0;t<5;t++){
                 cout<<stu_head->name;
                 stu_head=stu_head->stu_next;
             }
             break;
         }
         map=map->tea_next;
     }


}
int main() {
    char ptr[10];
    cin>>ptr;
    Pri(ptr);

    return 0;
}