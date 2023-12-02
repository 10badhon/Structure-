#include<iostream>
using namespace std;
struct complex
{
  double real=0;
  double img=0;

  void show(){
    if(real!=0){cout<<real;}

    if(img>0){
      cout<<"+"<<img<<"i";
      
    }
    else if(img<0){
      cout<<img<<"i";
    }
    cout<<endl;
  }
  /*
  void add(complex c){
    complex result;
    result.real= real + c.real;
    result.img= img + c.img;
    result.show();
  }
  */
  
  complex add(complex c){
    complex result;
    result.real= real+c.real;
    result.img= img+c.img;
    return result;
  }
  
  /*
  void sub(complex c){
    complex result;
    result.real=real-c.real;
    result.img=img-c.img;
    result.show();
  }
  */
  complex sub(complex c){
    complex result;
    result.real=real-c.real;
    result.img=img-c.img;
    return result;
  }

  complex operator+(complex c){
    return add(c);
  }

  complex operator-(complex c){
    return sub(c);
  }
   
  complex mul(complex c){
    complex result;
    result.real=real*c.real + img*c.img*(-1);
    result.img =real*c.img + img*c.real;
    return result;
  }


  };
int main(){

  complex c1={3,-5};
  complex c2;
  c2.real=6;
  c2.img=-10;
  complex c3={4,-3};
  
  c1.show();
  c2.show();

  //c1.add(c2);
  c1.add(c2).show();
  //c1.sub(c2);
  c1.sub(c2).show();

  c3.add(c1.add(c2)).show();
  complex ans = c3.sub(c1.sub(c2));
  ans.show();

  complex sum_res= c1+c2;
  sum_res.show();
  complex sub_res= c1-c2;
  sub_res.show();

  
  
  complex c4={2,3};
  complex c5={2,-3};
  c4.mul(c5).show();

  




  return 0;
}
