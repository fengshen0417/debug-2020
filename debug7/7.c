#include <stdio.h>
int main()
{
    int Year, Month, Date;
    int Leapyear, Datevalid, Februaryvalid, Month30valid, Month31valid;
    scanf("%d-%d-%d", &Year, &Month, &Date);

    Leapyear = (((Year % 100 != 0 && Year % 4 == 0) || Year % 400 == 0) == 1 ? 1 : 0);  //1代表闰年，2月有29日
    Februaryvalid = (Leapyear == 0 && Month == 2 && Date < 29) || (Leapyear == 1 && Month == 2 && Date < 30);
    Month30valid = (Month == 4 || Month == 6 || Month == 9 || Month == 11) && (Date < 31);
    Month31valid = (Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12) && (Date < 32);
    Datevalid = (Februaryvalid || Month30valid || Month31valid);
    //printf("%d\n%d\n%d\n", Month31valid, Februaryvalid, Month30valid);//调试用
    if (Month > 12 || Month < 1) {
        printf("NO");
    }
    else if (Datevalid == 1) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}