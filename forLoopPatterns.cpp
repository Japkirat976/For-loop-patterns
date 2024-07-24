#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"enter the number of rows : ";
    cin>>rows;
    
    cout<<"RIGHT HALF PYRAMID"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<"LEFT HALF PYRAMID"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows-i-1;j++){
            cout<<"  ";
        }
        for(int j=0;j<i+1;j++){
            cout<<" *";
        }
        cout<<endl;
    }

    cout<<"FULL PYRRAMID"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<2*(rows-i)-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<"INVERTED RIGHT HALF PYRAMID"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=rows;j>i;j--){
            cout<<" *";
        }
        cout<<endl;
    }

    cout<<"INVERTED LEFT HALF PYRAMID"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int j=rows;j>i;j--){
            cout<<" *";
        }
        cout<<endl;
    }

    cout<<"INVERTED FULL PYRAMID"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int j=rows;j>i;j--){
            cout<<"  * ";
        }
        cout<<endl;
    }

    cout<<"RHOMBUS PATTERN"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows-1;j++){
            cout<<" * ";
        }
        cout<<endl;
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        
    }

    cout<<"DIAMOND PATTERN"<<endl;
    for(int i=0;i<rows-1;i++){
        for(int j=0;j<rows-1-i;j++){
            cout<<"  ";
        }
        for(int j=0;j<i+1;j++){
            cout<<" *  ";
        }
        cout<<endl;
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }    
        for(int j=rows;j>i;j--){
            cout<<" *  ";
        }
        cout<<endl;
    }

    cout<<"HOURGLASS PATTERN"<<endl;
    for(int i=0;i<rows-1;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }    
        for(int j=rows;j>i;j--){
            cout<<" *  ";
        }
        cout<<endl;
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<rows-1-i;j++){
            cout<<"  ";
        }
        for(int j=0;j<i+1;j++){
            cout<<" *  ";
        }
        cout<<endl;
    }

    cout<<"HOLLOW SQUARE PATTERN"<<endl;
    for(int i=0;i<rows+1;i++){
        cout<<"* ";
    }
    cout<<endl;
    for(int i=0;i<rows-2;i++){
        cout<<"* ";
        for(int j=0;j<rows-1;j++){
            cout<<"  ";
        }
        cout<<"* ";
        cout<<endl;
    }
    for(int i=0;i<rows+1;i++){
        cout<<"* ";
    }
    cout<<endl;

    cout<<"HOLLOW FULL PYRAMID"<<endl;
    for(int i=0;i<rows;i++){

        for(int j=0;j<2*(rows-i)-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            if(j==0 || j==2*i || i==rows-1){
                cout<<"* ";
            } else {
                cout<<"  ";
            }   
        }
        cout<<endl;
    }

}