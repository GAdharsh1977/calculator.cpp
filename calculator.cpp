// name:Adharsh G
// roll no:240002004

#include<iostream>
#include<functional>

using namespace std;
int main(){
double num, num1, num2,x,n;
int operation;
cout<<endl;
cout<<("Welcome to calculator!\n");
cout<<endl;
cout << "Choose the operation you want to perform.\n";
cout<<endl;

cout<<" Press '1' for sum, \n Press '2' for difference, \n Press '3' for product, \n Press '4' for quotient, \n Press '5' for reciprocal,\n";
 cout<<" Press '6' for trigonometric functions, \n Press '7' for square root, \n Press '8' for log. \n";
cout<<endl;
cout <<"Type the corresponding number: \n";
cin >> operation;


switch(operation)
{
case 1:
{
  cout<<"enter the value of num1: \n"; 
cin>>num1; 

cout<<"enter the value of num2: \n";
cin>>num2;

cout<<"the sum is: "<< num1+num2;
     break;
}
case 2:
     
     
{
  cout<<"enter the value of num1: \n"; 
cin>>num1; 

cout<<"enter the value of num2: \n";
cin>>num2;

cout<<"the difference is: "<< num1-num2;
     break;
}
case 3:
     
{
  cout<<"enter the value of num1: \n"; 
cin>>num1; 

cout<<"enter the value of num2: \n";
cin>>num2;

cout<<"the product is: "<< (num1)*(num2);
     break;
}
case 4:
     
{
  cout<<"enter the value of num1: \n"; 
cin>>num1; 

cout<<"enter the value of num2: \n";
cin>>num2;

cout<<"the quotient is: "<< (num1)/(num2);
     break;
}

case 5:
 {
   double num;
  cout<<"Enter the number"<<endl;
  cin>>num;
  cout<<"The reciprocal is "<<1/num;
  break;
 }

case 6:
{
  double x;
    cout<<"type the value of num.\n";
    cin>>num;
 for( long double i=num; i>-3.14159265358979323846; i-=6.283185307179586476){
   cout<<i<<endl;
   
 }
   cout<<"Enter the last result for trigonometric functions"<<endl;
 cin>>x;
long double sinx;
sinx = x - ((x*x*x)/6) + ((x*x*x*x*x)/120) - ((x*x*x*x*x*x*x)/5040) + ((x*x*x*x*x*x*x*x*x)/362880) - ((x*x*x*x*x*x*x*x*x*x*x)/39916800); 
cout<<"The value of sinx = "<< sinx<<endl;

long double cosx;
cosx = 1 - ((x*x)/2) + ((x*x*x*x)/24) - ((x*x*x*x*x*x)/720) + ((x*x*x*x*x*x*x*x)/40320) - ((x*x*x*x*x*x*x*x*x*x)/3628800);
cout<<"The value of cosx = "<<cosx<<endl;

long double tanx;
tanx = (sinx/cosx);
cout<<"The value of tanx = "<<tanx<<endl;

long double cotx;
cotx = (cosx/sinx);
cout<<"The value of cotx = "<<cotx<<endl;

long double secx;
secx = (1/cosx);
cout<<"The value of secx = "<<secx<<endl;

long double cosecx;
cosecx = (1/sinx);
cout<<"The value of cosecx = "<<cosecx<<endl;
break;
}

  case 7:
{
  float n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
  float i=0;
  while(i*i<=n){
    if(i*i==n){
    cout<<"The sqrt of n is "<<i<<endl;
  }
  i++;
}
  i--;
  while(i*i<=n){
    i=i+0.00001;
  }
    i=i-0.00001;
    cout<<"The value of sqrt x is "<<i<<endl;
break;
}

case 8:
{
  int count;
int base;
cout<<"type x \n";
cin>>x;
for(double i=x; i>2; i/=2){
     cout<<i<<endl;
  count++;
}
cout<<"enter the number on the bottom row"<<endl;
cin>>num;
cout<<"enter the value "<<num/2<<" for calculating log"<<endl;
cin>>x;
long double loga = (x-1) - ((x-1)*(x-1)/2) + ((x-1)*(x-1)*(x-1)/3) - ((x-1)*(x-1)*(x-1)*(x-1)/4) + ((x-1)*(x-1)*(x-1)*(x-1)*(x-1)/5);
long double logb = -((x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/6) + ((x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/7) - ((x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/8);
long double logc = ((x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/9) - ((x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/10);
long double logd = ((x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/11) - ((x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/12);
long double loge = ((x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/13);
long double logf = -((x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/14);
long double logg = ((x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/15);
long double logh = -((x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/16);
long double logi = ((x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/17);
long double logj = -((x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/18);
long double logk = ((x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/19);
long double logl = -((x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/20);
long double logm = ((x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/21);
long double logn = -((x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/22);

long double adharshlog = loga + logb + logc + logd + loge + logf + logg + logh + logi + logj + logk + logl + logm + logn + (count-1)*(0.69314718055994531);
cout<<"enter the base for the operation, for base e, enter '1', for base 10, enter '2'."<<endl;
cin>>base;
switch(base)
{
  case 1 :
  cout<<"the value of log is "<<adharshlog;
  break;

  case 2 :
  cout<<"the value of log is "<<adharshlog/2.302585;
  break;

  default:
  cout<<"the given base is not supported!";
  break;
}
  break;
}
case 9:
{
  case 5:
cout<<"Enter the value of num: \n";
cin>>num;

if(num<0)
cout<<"the value of mod(num) is: " << (-1)*(num);

else
cout<<"the value of mod(num) is: " << num;
break;
}
return 0;
}
}





