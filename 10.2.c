#include<stdio.h>
struct time_struct{
  int hour;
  int minute;
  int second;
} t1;
void enter(){
  printf("Enter hour, minutes and second.");
  scanf("%d%d%d",&t1.hour,&t1.minute,&t1.second);
}
void display(){
  printf("\n%d:%d:%d",t1.hour,t1.minute,t1.second);
}
void main(){
 enter();
 display();

}
