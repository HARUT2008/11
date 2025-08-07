#include <iostream>
using namespace std;


int main(){
int h = 1;
int sum1 = 0;

while(h <= 100){
  
  sum1 = h+sum1;
  h = h + 1;
}
cout<<"Sum of 1-100:"<<sum1<<endl;

return 0;
}
