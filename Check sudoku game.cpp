#include <iostream>

using namespace std;

int check_row(int arr[9][9],int i)
{
    for (int j=0;j<8;j++){
        for (int k=j+1;k<9;k++){
            if(arr[i][j] == arr[i][k] && arr[i][j] != 0)
                return 0;

        }

    }
    return 1;
}

int check_column(int arr[9][9],int i)
{
    for (int j=0;j<8;j++){
        for (int k=j+1;k<9;k++){
            if(arr[j][i]==arr[k][i] && arr[j][i] != 0 )
                return 0;

        }

    }
    return 1;
}

int check_negative(int arr[9][9])
{
int var=0;

if (arr[1][2]%2==0 && arr[1][2] != 0)var++;
if (arr[1][3]%2==0 && arr[1][3] != 0)var++;
if (arr[1][5]%2==0 && arr[1][5] != 0)var++;
if (arr[1][6]%2==0 && arr[1][6] != 0)var++;

if (arr[2][1]%2==0 && arr[2][1] != 0)var++;
if (arr[2][7]%2==0 && arr[2][7] != 0)var++;

if (arr[3][1]%2==0 && arr[3][1] != 0)var++;
if (arr[3][7]%2==0 && arr[3][7] != 0)var++;

if (arr[5][1]%2==0 && arr[5][1] != 0)var++;
if (arr[5][7]%2==0 && arr[5][7] != 0)var++;

if (arr[6][1]%2==0 && arr[6][1] != 0)var++;
if (arr[6][7]%2==0 && arr[6][7] != 0)var++;

if (arr[7][2]%2==0 && arr[7][2] != 0)var++;
if (arr[7][3]%2==0 && arr[7][3] != 0)var++;
if (arr[7][5]%2==0 && arr[7][5] != 0)var++;
if (arr[7][6]%2==0 && arr[7][6] != 0)var++;

if (var){return 0;}
else{return 1;}


}


int main()
{
    int arr[9][9];

    char tmp;
    for (int i=0;i<9;i++){
        for(int j=0;j<9;j++){
          cin >> tmp ;
          if(tmp == '?'){arr[i][j]=0;}
          if(tmp == '1'){arr[i][j]=1;}
          if(tmp == '2'){arr[i][j]=2;}
          if(tmp == '3'){arr[i][j]=3;}
          if(tmp == '4'){arr[i][j]=4;}
          if(tmp == '5'){arr[i][j]=5;}
          if(tmp == '6'){arr[i][j]=6;}
          if(tmp == '7'){arr[i][j]=7;}
          if(tmp == '8'){arr[i][j]=8;}
          if(tmp == '9'){arr[i][j]=9;}
        }
    }


int f;
f=check_negative(arr);
if (!f) {cout <<"NO" << endl;
    return 0;}

for (int i=0;i<9;i++){
    f=check_row(arr,i);
if (!f) {cout <<"NO" << endl;
    return 0;}
    f=check_column(arr,i);
if (!f) {cout <<"NO" << endl;
    return 0;}

}
int ar1[9];

for (int x=0;x<9;x+=3){
    for(int y=0;y<9;y+=3){

        ar1[0]=arr[x][y+0];
        ar1[1]=arr[x][y+1];
        ar1[2]=arr[x][y+2];
        ar1[3]=arr[x+1][y+0];
        ar1[4]=arr[x+1][y+1];
        ar1[5]=arr[x+1][y+2];
        ar1[6]=arr[x+2][y+0];
        ar1[7]=arr[x+2][y+1];
        ar1[8]=arr[x+2][y+2];
    for(int p=0;p<8;p++){
            for(int x=p+1;x<9;x++){
                    if(ar1[p]==ar1[x] && ar1[p] != 0){cout <<"NO" << endl;
                    return 0;}
            }
    }


    }
}


cout <<"YES" ;
    return 0;
}
/*
for (int i=0;i<9;i++){
    for(int j=0;j<9;j++){
        cout << arr[i][j] << " ";
    }cout << endl;
}
*/
