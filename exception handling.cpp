#include<iostream>
using namespace std;

double divide(int numerator , int denominator){
  if( denominator==0){
    throw " division by zero error!";
  }
  return static_cast<double>(numerator)/denominator;
}
int main(){
  int num,denom;
  cout<<" enter numerator:";
  cin>>num;
  cout<<" enter denominator:";
  cin>>denom;
  try{
    double result = divide( num , denom);
    cout<< " result:"<<result<<endl;
  }
  catch ( const char*e){
    cout<<" exception caught:"<<e<<endl;
  }
  return 0;
}