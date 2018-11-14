#include<stdio.h>

int main(){
	double pointEng[]={44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84}
	double pointSie[]={65,80,67,35,58,60,72,75,68,92,36,50,2,58.5,46,42,78,62,84,70}
	// 合計の計算
double sum(double data[], int n)
{
    int i;                  // 変数の宣言
    double total = 0.0;
   
    for(i=0; i<n; i++){
        total += data[i];   // 合計を計算
    }
       
    return total;           // 合計を返す
}
 
// 平均の計算
double ave(double data[], int n)
{
    double total = sum(data, n);    // 合計
    return total/n;                     // 平均=合計/データ数
}

// 分散の計算
double var(double data[], int n) {
    int i;
    double a = ave(data, n);    // 平均値
    double v = 0.0;                             // 分散
    // 分散を計算
    for (i=0; i<n; i++)
        v += (data[i] - a) * (data[i] - a);
    return v/n;                                 // 分散の平均
}

// 標準偏差の計算
double std(double data[], int n) {
    return sqrt(var(data, n));
}

int main(){
    double pointEng[]={44.0,87.0,100.0,63.0,52.0,60.0,58.0,73.0,55.0,86.0,29.0,56.0,89.0,23.0,65.0,84.0,64.0,27.0,86.0,84.0}
    double pointSie[]={65.0,80.0,67.0,35.0,58.0,60.0,72.0,75.0,68.0,92.0,36.0,50.0,2.0,58.5,46.0,42.0,78.0,62.0,84.0,70.0}
    int n = sizeof(pointEng) / sizeof(pointEng[0]);

    return 0;
}

