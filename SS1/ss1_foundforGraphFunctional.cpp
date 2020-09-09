#include <bits/stdc++.h>
using namespace std;

int a1,b1,a2,b2,a3,b3,a4,b4,m;

int main(){
    cin>>a1>>b1>>a2>>b2>>a3>>b3>>a4>>b4;
    // fx = (a1*m + b1)x^3 + (a2*m + b2)x^2 + (a3*m +b3)x + (a4*m + b4);

    // int f_phay_x = 3*(a1*m + b1)*pow(x,2) + 2*(a2*m+b2)*x + (a3*m + b3);


    int m1; //xet a1
    if(a1!=0){
        m1 = -b1/a1;
        //m1 lon hon -b1/a1;
    } else {
        if(b1==0){
            //dua ve bac 1;
        } else if (b1<0){
            cout<<"vo nghiem";
        } else {
            //tinh delta phay cua dao ham
            // (pow(a2,2)-3*a1*a3))*pow(m,2)+(2*a2*b2-3*a1*b3-3*a3*b1)*m+(pow(b2,2)-3*b1*b3);

        int m2;
        //delta cua dao ham :(
        // float delta = pow((2*a2*b2-3*a1*b3-3*a3*b1),2) - 4*(pow(a2,2)-3*a1*a3)*(pow(b2,2)-3*b1*b3);
        
        
        float delta_dh = pow((a2*m2+b2),2) - 3*(a1*m2+b1)*(a3*m2+b3);
        
        // (pow(a2,2)- 3*a1*a3)*pow(m2,2)+(2*a1*b1 - 3*a1*b3 - 3*a3*b1)*m2+(pow(b2,2)-3*b1*b3);
        int delta_of_delta_dh = pow((2*a1*b1 - 3*a1*b3 - 3*a3*b1),2)- 4*((pow(a2,2)- 3*a1*a3)*(pow(b2,2)-3*b1*b3));
        

        // dau cua delta 
        float dau = pow(a2,2)-3*a1*a3;


        float x1,x2;


        if(delta_of_delta_dh < 0 && dau < 0){
            // => delta_dh 
        }
        else if(delta_of_delta_dh==0){
             // => gian doan 
        }
        else{ // delta_of_delta_dh >0
            
            delta = sqrt(delta);
            x1 = (-b + delta) / (2*a);
            x2 = (-b - delta) / (2*a);
            // 2 nghiem don
            //f'x > 0 voi gia tri m nao va gia tri m nao
            
            if(dau>0){
                //f'x < 0 voi m thuoc [m1,m2];

            } else if(dau < 0){
                //f'x < 0 voi m thuoc (-oo,m1]U[m2,+oo);
                
            }
        }

        

        
                        
        }
    }
     





    return 0;
}
