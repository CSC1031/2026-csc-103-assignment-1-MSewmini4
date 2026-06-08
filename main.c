#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maths,science,english,Total,marks;
    float Average;
    char Grade;

    printf("Enter your Mathematics marks(out of 100): ");
    scanf("%d",&maths);

    printf("Enter your Science marks(out of 100): ");
    scanf("%d",&science);

    printf("Enter your English marks(out of 100): ");
    scanf("%d",&english);

    Total = maths + science + english;
    Average = Total/3.0;

    printf("Total marks = %d\n",Total);
    printf("Average = %.1f\n",Average);
    printf("%c",Grade);

    if (marks>=80)
        printf("Grade:A\n");
    else if (79>=marks && marks>=70)
        printf("Grade:B\n");
    else if (69>=marks && marks>=60)
        printf("Grade:C\n");
    else if (59>=marks && marks>=50)
        printf("Grade:D\n");
    else
        printf("Grade:F");


            if (maths>=40 && science>=40 && english>=40)
            printf("Pass\n");

            else
            printf("Fail\n");

    return 0;
}
