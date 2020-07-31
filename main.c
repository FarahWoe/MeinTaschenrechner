#include <stdio.h>
#include <stdlib.h>



    int addieren (int a, int b);
    int subtrahieren (int a, int b);
    int multiplizieren (int a, int b);
    float dividieren (int a , int b);

int main()
{
    int auswahl =1;
    int a=0;
    int b=0;
    int erg =0;
    float quotient =0;



        while (auswahl!=0)
    {
        printf("Willkommen zu unserer Taschenrechner-Software\n");
        printf("Addieren ...................1\n");
        printf("Subtrahieren ...............2\n");
        printf("Multiplizieren .............3\n");
        printf("Dividieren .................4\n");
        printf("Beenden.....................0\n");

        scanf("%d", &auswahl);

        switch(auswahl)
        {
            case 1: printf("Lass uns nun Addieren! \n");
                    printf("Bitte gib die erste Zahl ein \n");
                    scanf("%d", &a);
                    printf("Bitte gib die zweite Zahl ein \n");
                    scanf("%d", &b);
                    erg = addieren(a,b);
                    printf("Das Ergebnis ist: %d \n \n", erg);
                    break;
            case 2: printf("Lass uns nun Subtrahieren \n");
                    printf("Bitte gib die erste Zahl ein \n");
                    scanf("%d", &a);
                    printf("Bitte gib die zweite Zahl ein \n");
                    scanf("%d", &b);
                    erg = subtrahieren(a,b);
                    printf("Das Ergebnis ist: %d \n \n", erg);
                    break;
            case 3: printf("Lass uns nun Multiplizieren \n");
                    printf("Bitte gib die erste Zahl ein \n");
                    scanf("%d", &a);
                    printf("Bitte gib die zweite Zahl ein \n");
                    scanf("%d", &b);
                    erg = multiplizieren(a,b);
                    printf("Das Ergebnis ist: %d \n \n", erg);
                    break;
            case 4: printf("Lass uns nun die K\x94nigsdiziplin, das Dividieren ausprobieren \n");
                    printf("Bitte gib die erste Zahl ein \n");
                    scanf("%d", &a);
                    printf("Bitte gib die zweite Zahl ein \n");
                    scanf("%d", &b);
                    quotient = dividieren(a,b);
                    printf("Das Ergebnis ist: %f \n \n", quotient);
                    break;
            case 0: printf("Multiplizieren \n");
                    break;
            default:printf("Herst gib a Zahl von 0 bis 4 ein! \n \n");
                    break;
        }
    }
return 0;
}

int addieren (int a, int b)
{
    return a+b;
}

int subtrahieren (int a, int b)
{
    return a-b;
}

int multiplizieren(int a, int b)
{
    return a*b;
}

float dividieren(int a, int b)
{
    float quotient= 0;
    quotient=(float)a / b;
    return quotient;
}
 
