#include <stdio.h>
#include <string.h>

int main()
{
    char romanNum[20];
    int decimalNum = 0;

    printf("Enter a Roman numeral: ");
    scanf("%s", romanNum);

    int length = strlen(romanNum);

    for (int i = 0; i < length; i++)
    {
        switch (romanNum[i])
        {
            case 'M':
                decimalNum += 1000;
                break;
            case 'D':
                decimalNum += 500;
                break;
            case 'C':
                if (romanNum[i + 1] == 'M')
                {
                    decimalNum += 900;
                    i++;
                }
                else if (romanNum[i + 1] == 'D')
                {
                    decimalNum += 400;
                    i++;
                }
                else
                {
                    decimalNum += 100;
                }
                break;
            case 'L':
                decimalNum += 50;
                break;
            case 'X':
                if (romanNum[i + 1] == 'C')
                {
                    decimalNum += 90;
                    i++;
                }
                else if (romanNum[i + 1] == 'L')
                {
                    decimalNum += 40;
                    i++;
                }
                else
                {
                    decimalNum += 10;
                }
                break;
            case 'V':
                decimalNum += 5;
                break;
            case 'I':
                if (romanNum[i + 1] == 'X')
                {
                    decimalNum += 9;
                    i++;
                }
                else if (romanNum[i + 1] == 'V')
                {
                    decimalNum += 4;
                    i++;
                }
                else
                {
                    decimalNum += 1;
                }
                break;
            default:
                printf("Invalid Roman numeral");
                return 0;
        }
    }

    printf("Decimal number: %d", decimalNum);

    return 0;
}
