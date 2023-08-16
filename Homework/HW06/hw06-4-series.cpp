/*
    จงเขียนโปรแกรมภาษาซีเพื่อรับข้อมูลจากผู้ใช้เป็นตัวเลข และให้แสดงชุดอนุกรมตามจำนวนตัวเลขที่กรอก พร้อมกับแสดงผลรวมของชุดอนุกรมนี้ 9 + 99 + 999 + 9999 + 9999 + .... เช่น ผู้ใช้กรอกเลข 5 ให้แสดงชุดอนุกรมคือ 9 + 99 + 999 + 9999 + 99999 และแสดงผลรวมคือ 111105
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)
    
    Test case:
        Enter number :
            5
    Output:
        Series = 9 + 99 + 999 + 9999 + 99999
        Sum = 111105

    Test case:
        Enter number :
            7
    Output:
        Series = 9 + 99 + 999 + 9999 + 99999 + 999999 + 9999999
        Sum = 11111103
*/
#include <stdio.h>

int main() {
    int n; 
    printf("Enter number: ");
    scanf("%d", &n); 

    int sum = 0; 
    int term = 9; 
    for (int i = 1; i <= n; i++) {
        if (i > 1) {
            printf(" + ");
        }
        printf("%d", term); 

        sum += term; 
        term = term * 10 + 9; 
    }
    
    printf("\nSeries = ");
    for (int i = 1; i <= n; i++) {
        if (i > 1) {
            printf(" + ");
        }
        printf("9");
        for (int j = 1; j < i; j++) {
            printf("9");
        }
    }
    printf("\nSum = %d\n", sum);

    return 0;
}