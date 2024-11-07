#include <stdio.h>

int main()
{

    char category;

    int temp;
    float fah, cel, CtoF, FtoC;

    int len;
    float cm, m, km, CmtoM, MtoCm, MtoKm, KmtoM, KmtoCm, CmtoKm;

    int mass;
    float mg, g, kg, MgtoG, GtoMg, GtoKg, KgtoG, KgtoMg, MgtoKg;

    int cur;
    float inr, dol, RtoD, DtoR;

    int speed;
    float kmh, ms, KtoM, MtoK;

    printf("Welcome to Unit Converter! \n");
    printf("Here is a list of conversation to choose from: \n");
    printf("Temperature(t),Length(l),Mass(m),Currency(c),Speed(s)\n");
    printf("Please enter the letter you want to convert.\n");
    scanf(" %c", &category);

    if (category == 't')
    {
        printf("Welcome to Temperature Converter! \n");
        printf("Here is a list of conversations to choose: \n");
        printf("Enter 1 for Fahrenheit to Celsius. \n");
        printf("Enter 2 for Celsius to Fahrenheit. \n");
        scanf("%d", &temp);

        if (temp == 1)
        {
            printf("Enter Fahrenheit degree: \n");
            scanf("%f", &fah);
            FtoC = ((fah - 32) * (5.0 / 9.0));
            printf("Celcius: %f", FtoC);
        }
        else if (temp == 2)
        {
            printf("Enter Celcius degree: \n");
            scanf("%f", &cel);
            CtoF = ((9.0 / 5.0) * cel + 32);
            printf("Fahrenheit: %f", CtoF);
        }
        else
            printf("Please enter the correct choice. \n");
    }

    if (category == 'l')
    {
        printf("Welcome to Length Converter! \n");
        printf("Here is a list of conversations to choose: \n");
        printf("Enter 1 for Centimeter to Meter. \n");
        printf("Enter 2 for Meter to Centimeter. \n");
        printf("Enter 3 for Meter to Kilometer. \n");
        printf("Enter 4 for Kilometer to Meter. \n");
        printf("Enter 5 for Kilometer to Centimeter. \n");
        printf("Enter 6 for Centimeter to Kilometer. \n");
        scanf("%d", &len);

        if (len == 1)
        {
            printf("Enter Centimeter: \n");
            scanf("%f", &cm);
            CmtoM = cm / 100;
            printf("Meter: %f", CmtoM);
        }
        else if (len == 2)
        {
            printf("Enter Meter: \n");
            scanf("%f", &m);
            MtoCm = m * 100;
            printf("Centimeter: %f", MtoCm);
        }
        else if (len == 3)
        {
            printf("Enter Meter: \n");
            scanf("%f", &m);
            MtoKm = m / 1000;
            printf("Kilometer: %f", MtoKm);
        }
        else if (len == 4)
        {
            printf("Enter Kilometer: \n");
            scanf("%f", &km);
            KmtoM = km * 1000;
            printf("Meter: %f", KmtoM);
        }
        else if (len == 5)
        {
            printf("Enter Kilometer: \n");
            scanf("%f", &km);
            KmtoCm = km * 100000;
            printf("Centimeter: %f", KmtoCm);
        }
        else if (len == 6)
        {
            printf("Enter Centimeter: \n");
            scanf("%f", &cm);
            CmtoKm = cm / 100000;
            printf("Kilometer: %f", CmtoKm);
        }
        else
            printf("Please enter the correct choice. \n");
    }

    if (category == 'm')
    {
        printf("Welcome to Mass Converter! \n");
        printf("Here is a list of conversations to choose: \n");
        printf("Enter 1 for Milligram to Gram. \n");
        printf("Enter 2 for Gram to Milligram. \n");
        printf("Enter 3 for Gram to Kilogram. \n");
        printf("Enter 4 for Kilogram to Gram. \n");
        printf("Enter 5 for Kilogram to Milligram. \n");
        printf("Enter 6 for Milligram to Kilogram. \n");
        scanf("%d", &mass);

        if (mass == 1)
        {
            printf("Enter Milligram: \n");
            scanf("%f", &mg);
            MgtoG = mg / 1000;
            printf("Gram: %f", MgtoG);
        }
        else if (mass == 2)
        {
            printf("Enter Gram: \n");
            scanf("%f", &g);
            GtoMg = g * 1000;
            printf("Milligram: %f", GtoMg);
        }
        else if (mass == 3)
        {
            printf("Enter Gram: \n");
            scanf("%f", &g);
            GtoKg = g / 1000;
            printf("Kilogram: %f", GtoKg);
        }
        else if (mass == 4)
        {
            printf("Enter Kilogram: \n");
            scanf("%f", &kg);
            KgtoG = kg * 1000;
            printf("Gram: %f", KgtoG);
        }
        else if (mass == 5)
        {
            printf("Enter Kilogram: \n");
            scanf("%f", &kg);
            KgtoMg = kg * 1000000;
            printf("Milligram: %f", KgtoMg);
        }
        else if (mass == 6)
        {
            printf("Enter Milligram: \n");
            scanf("%f", &mg);
            MgtoKg = mg / 100000;
            printf("Kilogram: %f", MgtoKg);
        }
        else
            printf("Please enter the correct choice. \n");
    }
    if (category == 'c')
    {
        printf("Welcome to Currency Converter! \n");
        printf("Here is a list of conversations to choose: \n");
        printf("Enter 1 for Rupees to Dollar. \n");
        printf("Enter 2 for Dollar to Rupees. \n");
        scanf("%d", &cur);

        if (cur == 1)
        {
            printf("Enter Rupees Value: \n");
            scanf("%f", &inr);
            RtoD = inr / 82;
            printf("Dollar: %f", RtoD);
        }
        else if (cur == 2)
        {
            printf("Enter Dollar Value: \n");
            scanf("%f", &dol);
            DtoR = dol * 82;
            printf("Rupees: %f", DtoR);
        }
        else
            printf("Please enter the correct choice. \n");
    }
    if (category == 's')
    {
        printf("Welcome to Speed Converter! \n");
        printf("Here is a list of conversations to choose: \n");
        printf("Enter 1 for Km/h to M/s. \n");
        printf("Enter 2 for M/s to Km/h. \n");
        scanf("%d", &speed);

        if (speed == 1)
        {
            printf("Enter Speed in Km/h: \n");
            scanf("%f", &kmh);
            KtoM = kmh*(.278) ;
            printf("M/s: %f", KtoM);
        }
        else if (speed == 2)
        {
            printf("Enter Speed in M/s: \n");
            scanf("%f", &ms);
            MtoK = ms/0.278;
            printf("Km/h: %f", MtoK);
        }
        else
            printf("Please enter the correct choice. \n");
    }

    return 0;
}