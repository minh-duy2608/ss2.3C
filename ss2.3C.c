#include <stdio.h>

int main() {
    //Khai bao va khoi tao hai bien kieu int
    int a = 5;  //Bien a duoc khoi tao voi giá tri 5
    int b = 10; //Bien b duoc khoi tao voi giá tri 10

    //Khai bao cac bien kieu int de luu ket qua tinh toan
    int difference = a - b;  //Tính hieu caa a và b
    int product = a * b;     //Tính tich cua a và b
    float quotient = (float)a / b;  // Tính thuong cua a và b (chuyen a thành float de có ket qua chinh xac)

    //In ket qua ra man hinh
    printf("Hieu cua %d va %d la %d\n", a, b, difference);    //In ra hieu
    printf("Tich cua %d va %d la %d\n", a, b, product);       //In ra tich
    printf("Thuong cua %d va %d la %.2f\n", a, b, quotient);  //In ra thuong voi 2 chu se thap phan

    return 0;
}
