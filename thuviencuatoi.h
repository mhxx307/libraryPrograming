#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
using namespace std;

//ham xoa so nguyen trong mang tai vi tri vt
void xoa(int a[], int &n, int vt);

//ham them so nguyen k vao trong mang tai vi tri vt
void them(int a[], int &n, int vt, int k);

//ham xoa 1 ki tu
void xoakitu(char s[], int vt);

//ham them ki tu
void themkitu(char s[], int vt, char kituthem);

//xoa ki tu khoang trang dau chuoi
void xoa_khoang_trang_dau(char s[]);

//xoa ki tu khoang trang cuoi chuoi
void xoa_khoang_trang_cuoi(char s[]);

//chuyen ki tu thanh so nguyen
int Chuyen_Doi(char s[]);

//ham kiem tra so nguyen to
bool kiem_tra_so_nguyen_to(int n);
