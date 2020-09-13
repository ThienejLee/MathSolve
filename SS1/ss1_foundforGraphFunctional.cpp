#include <bits/stdc++.h>
using namespace std;

float a1,b1,a2,b2,a3,b3,a4,b4,m;


int main(){
    // cout<<"A1 = "; cin>>a1;
    // cout<<"A2 = "; cin>>a2;
    // cout<<"A3 = "; cin>>a3;
    // cout<<"A4 = "; cin>>a4;

    // cout<<"B1 = "; cin>>b1;
    // cout<<"B2 = "; cin>>b2;
    // cout<<"B3 = "; cin>>b3;
    // cout<<"B4 = "; cin>>b4;
    a1 = 0;    
    b1 = 1*1.0/3;
    a2 = 1; 
    b2 = 0; 
    a3 = -1;   
    b3 = 0;
    a4 = -1;   
    b4 = 0; 
    int m1; //xet a1
    if(a1!=0){
        if(a1 < 0){
            cout<<"Vo nghiem";
            return 0;
        }
        m1 = -b1/a1;
        int m2;
        float dau = pow(a2,2)-3*a1*a3;
        float delta_of_delta_dh = pow((2*a2*b2 - 3*a1*b3 - 3*a3*b1),2)- 4*((pow(a2,2)- 3*a1*a3)*(pow(b2,2)-3*b1*b3));
       
        if(delta_of_delta_dh < 0 ){
            //f'x se cung dau voi $dau
            if(dau > 0 ){
                cout<<"Vo nghiem";
                return 0;
            } else if(dau < 0 ){
                // cout<<"Voi moi m";
                cout<<"Ans: ("<<m1<<";"<<"+oo)";
                return 0;
            } 
        }
        if(delta_of_delta_dh == 0){
                if(dau > 0){                 
                    // m = -b/2a;
                    // cout<<"M = -b/2a = "<<
                    m2 = -(2*a2*b2 - 3*a1*b3 - 3*a3*b1)/(2*(pow(a2,2)- 3*a1*a3));
                        cout<<"Ans: ("<<m1<<";+oo)";
                    return 0;
                } else if(dau < 0 ){
                    // cout<<"Voi moi M";
                    cout<<"Ans: ("<<m1<<";"<<"+oo)";
                    return 0;
                }
        }
        if(delta_of_delta_dh > 0){
            float m3 = (-(2*a2*b2 - 3*a1*b3 - 3*a3*b1) + sqrt(delta_of_delta_dh))/(2*(pow(a2,2)- 3*a1*a3));
            float m4 =  (-(2*a2*b2 - 3*a1*b3 - 3*a3*b1) - sqrt(delta_of_delta_dh))/(2*(pow(a2,2)- 3*a1*a3));
            if(m3 > m4){
                swap(m3,m4);
            }
            if(dau > 0){
                // int m3 < m2 < m4 
                cout<<"Dau > 0 and delta cua delta dao ham > 0"<<endl;
                cout<<"m3 = "<<m3<<endl;
                cout<<"m4 = "<<m4<<endl;

                if(m4 < m1 ){
                    cout<<"Vo nghiem";
                } else if(m3 < m1 && m1 < m4){
                    cout<<"Ans: ["<<m1<<";"<<"+oo)";
                } else if(m1 < m3 && m3 < m4){
                    cout<<"Ans: ["<<m3<<";"<<m4<<"]";
                }
                return 0;
            } else if( dau < 0){
                /// voi dieu kien m3 < m4 
                // m2 < m3 && m2 > m4 
                cout<<"Dau < 0 and delta cua delta dao ham > 0"<<endl;
                cout<<"m3 = "<<m3<<endl;
                cout<<"m4 = "<<m4<<endl;

                if(m1 < m3){
                    cout<<"Ans: ["<<m1<<";"<<m3<<"]"<<"U"<<"["<<m4<<";"<<"+oo)";
                } else if(m3 < m1 && m1 < m4){
                    cout<<"Ans: ["<<m4<<";"<<"+oo)";
                } else if(m4 < m1){
                    cout<<"Ans: ["<<m1<<";+oo)";
                }
                return 0;
            }
        }
        
    } else if(a1 == 0){
        if(b1==0){
        //dua ve bac 1;
        cout<<"Dua ve bac 1";
        return 0;
        } else if (b1<0){
        cout<<"Vo nghiem";
        return 0;
        } 
        


        if(b1>0){
            // ko so voi m1
            int m2;
        //delta cua dao ham :(
        // float delta = pow((2*a2*b2-3*a1*b3-3*a3*b1),2) - 4*(pow(a2,2)-3*a1*a3)*(pow(b2,2)-3*b1*b3);
        
        float dau = pow(a2,2)-3*a1*a3;
                m1 = -b1/a1;
        // cant solve becuz m == null;

        // float delta_dh = pow((a2*m2+b2),2) - 3*(a1*m2+b1)*(a3*m2+b3);
        

        // (pow(a2,2)- 3*a1*a3)*pow(m2,2)+(2*a2*b2 - 3*a1*b3 - 3*a3*b1)*m2+(pow(b2,2)-3*b1*b3);

        float delta_of_delta_dh = pow((2*a2*b2 - 3*a1*b3 - 3*a3*b1),2)- 4*((pow(a2,2)- 3*a1*a3)*(pow(b2,2)-3*b1*b3));
 
        if(delta_of_delta_dh < 0 ){
            //f'x se cung dau voi $dau
            if(dau > 0 ){
                cout<<"Vo nghiem";
                return 0;
            } else if(dau < 0 ){
                // cout<<"Voi moi m";
                cout<<"Ans: ("<<m1<<";"<<"+oo)";
                return 0;
            } 
        }
        if(delta_of_delta_dh == 0){
                if(dau > 0){                 
                    // m = -b/2a;
                    // het ruj
                    // cout<<"M = -b/2a = "<<
                    m2 = -(2*a2*b2 - 3*a1*b3 - 3*a3*b1)/(2*(pow(a2,2)- 3*a1*a3));
                    // if(m2 > m1){
                    //     cout<<"Tu ("<<m1<<";"<<m2<<")";
                    // } else {
                    //     cout<<"Tu ("<<m1<<";+oo)";
                    // }
                        cout<<"Ans: ("<<m1<<";+oo)";
                    return 0;
                } else if(dau < 0 ){
                    // cout<<"Voi moi M";
                    cout<<"Ans: ("<<m1<<";"<<"+oo)";
                    return 0;
                }
        }
        if(delta_of_delta_dh > 0){
            float m3 = (-(2*a2*b2 - 3*a1*b3 - 3*a3*b1) + sqrt(delta_of_delta_dh))/(2*(pow(a2,2)- 3*a1*a3));
            float m4 =  (-(2*a2*b2 - 3*a1*b3 - 3*a3*b1) - sqrt(delta_of_delta_dh))/(2*(pow(a2,2)- 3*a1*a3));
            // if(m3 > m4){
            //     swap(m3,m4);
            // }
            if(dau > 0){
                // int m3 < m2 < m4 
                cout<<"Dau > 0 and delta cua delta dao ham > 0"<<endl;
                cout<<"m3 = "<<m3<<endl;
                cout<<"m4 = "<<m4<<endl;
                // cout<<"m1= "<<m1;
                if(m2 < m1 && m1 < m3){
                    cout<<"Ans: ["<<m1<<";"<<"+oo)";
                } else if(m1 < m2 && m2 < m3){
                    cout<<"Ans: ["<<m2<<";"<<m3<<"]";
                }
                return 0;
            } else if( dau < 0){
                /// voi dieu kien m3 < m4 
                // m2 < m3 && m2 > m4 
                cout<<"Dau < 0 and delta cua delta dao ham > 0"<<endl;
                cout<<"m3 = "<<m3<<endl;
                cout<<"m4 = "<<m4<<endl;
                if(m1 < m3){
                    cout<<"Ans: ["<<m1<<";"<<m3<<"]"<<"U"<<"["<<m4<<";"<<"+oo)";
                } else if(m3 < m1 && m1 < m4){
                    cout<<"Ans: ["<<m4<<";"<<"+oo)";
                } else if(m4 < m1){
                    cout<<"Ans: ["<<m1<<";+oo)";
                }
                return 0;
            }
        }
        }
    }
    return 0;
}
