#include <iostream>
int main() {
    int c = 0;
    int jel[3];
    std::cin >> jel[0] >> jel[1] >> jel[2];
    for (int n=0;n != -1;n++){
        for (int i=0;i<3;i++){
            for (int j=1;j<3;j++){
                if (jel[j] > jel[i]){
                    int temp = jel[i];
                    jel[i] = jel[j];
                    jel[j] = temp;
                }
            }
        }
        if (jel[0] != 1 && jel[0] % 2 ==0){
            jel[0] /= 2;
            c += 1;
        }
        else if (jel[0] != 1 && jel[0] % 2 !=0){
            jel[0] -= 1;
            jel[0] /= 2;
            c += 1;
        }
        else{
            break;
        }
    }
    std::cout << c;
}