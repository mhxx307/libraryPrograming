#include "thuviencuatoi.h"

//ham xoa so nguyen
void xoa(int a[], int &n, int vt)
{
    for(int i = vt + 1 ; i < n ; i++)
    {
        a[i-1] = a[i];
    }
    n--;
}

//ham them so nguyen
void them(int a[], int &n, int vt, int k)
{
    for(int i = n - 1 ; i >= vt ; i--)
    {
        a[i+1] = a[i];
    }
    a[vt] = k;
    n++;
}

//ham xoa ki tu
void xoakitu(char s[], int vt)
{
    for(int i = vt + 1 ; i < strlen(s) ; i++)
    {
        s[i-1] = s[i];
    }
    s[strlen(s)-1] = '\0';
}

//ham them ki tu
void themkitu(char s[], int vt, char kituthem)
{
    int n = strlen(s);
    for(int i = n - 1 ; i >= vt ; i--)
    {
        s[i+1] = s[i];
    }
    s[vt] = kituthem;
    s[n + 1] = '\0';
}

//xoa ki tu khoang trang dau chuoi
void xoa_khoang_trang_dau(char s[])
{
    while(true)
    {
        if(s[0] == ' ')
        {
            xoakitu(s,0);
        }
        else
        {
            break;
        }
    }
}

//xoa ki tu khoang trang cuoi chuoi
void xoa_khoang_trang_cuoi(char s[])
{
    while(true)
    {
        if(s[strlen(s)-1] == ' ')
        {
            xoakitu(s,strlen(s) - 1);
        }
        else
        {
            break;
        }
    }
}

//chuyen ki tu thanh so nguyen
int Chuyen_Doi(char s[])
{
    int sum = 0 ;//chua ket qua so nguyen sau khi chuyen doi
    int mu = 0 ;
    for(int i = strlen(s) - 1 ; i >= 0 ; i--)
    {
        sum = sum + ( (s[i]-48) * pow(10,mu) );
        mu++;
    }
    return sum;
}

//Ham kiem tra so nguyen to
bool kiem_tra_so_nguyen_to(int n)
{
    if (n < 2)
    {
        return false;
    }
    else
    {
        if(n == 2)
        {
            return true;
        }
        else
        {
            if(n % 2 == 0)
            {
                return false;
            }
            else
            {
                for (int i = 2; i < n; i++)
                {
                    if (n % i == 0)
                    {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}
