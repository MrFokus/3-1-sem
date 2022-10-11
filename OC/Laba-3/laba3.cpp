#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <termios.h>
#include <unistd.h>
#include <iostream>
 
using namespace std;
int main(){
  char* arr[1000];
  try{
    for(int i=0;;i++){
    cin>>arr[i];
    system(arr[i]);
    if(i==999){
      for(i=0;i<1000;i++){
        arr[i]="";
      }
    }
    }
  }
  catch(char* arr[]){
    
  }

}