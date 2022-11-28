#include <iostream>
using namespace std;
int main() {
    int a,angkanya[100];
        for(int a=0; a<8; a++){
            cout<<"Masukkan angka: ";cin>>angkanya[a];
    }
 int arr[2][2][2] = {
 {
    {angkanya[0], angkanya[1]},
    {angkanya[2], angkanya[3]},
    },
 {
    {angkanya[4], angkanya[5]},
    {angkanya[6], angkanya[7]},
 }
 };
    cout<<"\na|"<<arr[0][0][0]<<", "<<arr[0][0][1]<<"| b|"<<arr[1][0][0]<<", "<<arr[1][0][1]<<"|"<<endl;
    cout<<" |"<<arr[0][1][0]<<", "<<arr[0][1][1]<<"|  |"<<arr[1][1][0]<<", "<<arr[1][1][1]<<"|"<<endl<<endl;
    cout<<"a+b= "<<endl;
    cout<<"|"<<arr[0][0][0] + arr[1][0][0]<<" "<<arr[0][0][1] + arr[1][0][1]<<"|"<<endl;
    cout<<"|"<<arr[0][1][0] + arr[1][1][0]<<" "<<arr[0][1][1] + arr[1][1][1]<<"|"<<endl<<endl;

    cout<<"axb: "<<endl;
    cout<<"|("<<arr[0][0][0]<<"x"<<arr[1][0][0]<<")+("<<arr[0][0][1]<<"x"<<arr[1][1][0]<<") ("<<arr[0][0][0]<<"x"<<arr[1][0][1]<<")+("<<arr[0][0][1]<<"x"<<arr[1][1][1]<<")|"<<endl;
    cout<<"|("<<arr[0][1][0]<<"x"<<arr[1][0][0]<<")+("<<arr[0][1][1]<<"x"<<arr[1][1][0]<<") ("<<arr[0][1][0]<<"x"<<arr[1][0][1]<<")+("<<arr[0][1][1]<<"x"<<arr[1][1][1]<<")|"<<endl;
    cout<<"="<<endl;
    cout<<"|"<<(arr[0][0][0] * arr[1][0][0]) + (arr[0][0][1] * arr[1][1][0])<<" "<<(arr[0][0][0] * arr[1][0][1]) + (arr[0][0][1] * arr[1][1][1])<<"|"<<endl;
    cout<<"|"<<(arr[0][1][0] * arr[1][0][0]) + (arr[0][1][1] * arr[1][1][0])<<" "<<(arr[0][1][0] * arr[1][0][1]) + (arr[0][1][1] * arr[1][1][1])<<"|"<<endl<<endl;

    cout<<"Transpose Matriks dari a+b adalah"<<endl;
    cout<<"|"<<arr[0][0][0] + arr[1][0][0]<<" "<<arr[0][1][0] + arr[1][1][0]<<"|"<<endl;
    cout<<"|"<<arr[0][0][1] + arr[1][0][1]<<" "<<arr[0][1][1] + arr[1][1][1]<<"|"<<endl;

return 0;
}
