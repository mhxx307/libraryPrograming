#include "thuviencuatoi.h"

int main()
{
    char s[30];
    char s1[30];
    gets(s);
    gets(s1);
    int num = Chuyen_Doi(s);
    int num1 = Chuyen_Doi(s1);
    int sum = num + num1;
    cout<<sum;
    return 0;
}
