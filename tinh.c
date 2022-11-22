#include<stdio.h>
//tổng tiền 10 cuốn sổ tay, biết đơn giá  mỗi cuốn sổ là 500 và nhân ngày 20-11 nhà sách giảm 20% tổng tiền mỗi đơn hàng.
int main() {
    //tổng (A) tiền 10 cuốn sổ tay.
    int A,D; //khai báo biến A.
    A=(500 * 10); //tổng tiền giá gốc của 10 cuốn sổ tay.
    D= A - (A*20 / 100); // tổng tiền 10 cuốn sổ tay giảm giá 20% nhân ngày 20-11.
    printf("tổng tiền giá gốc của 10 cuốn sổ tay là : %d",A); //In ra tổng 10 cuốn sổ tay giá gốc.
    printf("\ntong tien 10 con so tay giam gia nhan ngay 20-11 la: %d",D); //In ra tổng 10 cuốn sổ tay sau khi giảm giá 20%.
}
