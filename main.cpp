#include <iostream>

using namespace std;
int det(int num1,int num2,int num3){
        string result;
        if(num1==0,num2==0,num3==0){
            result="the elements of the first row of the determinant are 0 ";

        }
        else{
            result="the elements of the first row are not zero ";
        }
        cout<<result;
        }
        int det1(int num1,int num2,int num3){
        string result;
        if(num1==0,num2==0,num3==0){
            result="the elements of the second row of the determinant are 0 ";

        }
        else{
            result="the elements of the second row are not zero ";
        }
        cout<<result;
        }
        int det2(int num1,int num2,int num3){
        string result;
        if(num1==0,num2==0,num3==0){
            result="the elements of the third row of the determinant are 0 ";

        }
        else{
            result="the elements of the third row are not zero ";
        }
        cout<<result;
        }



int main()
{
    cout << "Hello People !! Find your determinant value and get the result !!" << endl;
    int a,b,c,d,e,f,g,h,i;
    cout<<"enter a11 :"<<endl;
    cin>>a;
      cout<<"enter a12 :"<<endl;
    cin>>b;
      cout<<"enter a13 :"<<endl;
    cin>>c;
      cout<<"enter a21 :"<<endl;
    cin>>d;
      cout<<"enter a22 :"<<endl;
    cin>>e;
      cout<<"enter a23 :"<<endl;
    cin>>f;
      cout<<"enter a31 :"<<endl;
    cin>>g;
      cout<<"enter a32 :"<<endl;
    cin>>h;
      cout<<"enter a33 :"<<endl;
        cin>>i;
        int j=a*i*e-a*f*h,k=-b*d*i+b*f*g,l=c*h*d-c*e*g;
        cout<<"The value of the determinant is : "<<j+k+l<<endl;
        cout<<det(a,b,c)<<endl;
        cout<<det1(d,e,f)<<endl;
        cout<<det2(g,h,i)<<endl;




    return 0;
}
