#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n = 100, array[100], choice = 1,check, check01, check02, check03, check04;
    int sum = 0,min,max,multiplication = 1;
    do
    {
        printf("Select array size:\n1)random\n2)ur size\n");
        check = scanf("%d", &choice);
        while (getchar() != '\n');
        if (check == 1)
        {
            switch (choice)
            {
            case 1:
                do
                {
                    printf("Enter the number of array elements: \n");
                    check01 = scanf("%d", &n);
                    while (getchar() != '\n');
                    if (check01 == 1)
                    {
                        for (i = 0; i < n; i++)
                        {
                            array[i] = rand() % 100 - 35; // диапазон случайных чисел от 0 до 100
                            printf("%d ", array[i]);
                        }
                    }
                } while (check01 != 1);
                printf("\n Negat. elements: "); //отрицательные элементы
                for (int i = 0; i < n; i++)
                    if (array[i] < 0) {
                        printf("%i ", array[i]);
                        sum += array[i];
                    }
                printf("\nTotal negative elements = %i\n", sum); //сумма отриц. элементов
                min = 0;
                max = 0;
                for (i = 0; i < n; i++)
                {
                    if (array[min] > array[i])
                        min = i;  // запомнили индекс минимального 
                    if (array[max] < array[i])
                        max = i;  // запомнили индекс максимального
                }
                printf("min = %d  \n", array[min]);
                printf("max = %d  \n", array[max]);
                array[min] = array[n - 1];
                n--;
                array[max] = array[n - 1];
                n--;
                for (i = 0; i < n; i++)
                {
                    printf(" %d", array[i]);
                }
                for (i = 0; i < n; i++)
                {
                    multiplication *= array[i];
                }
                printf("\nProduct of numbers = %d", multiplication); //произведение чисел
                break;
            case 2:
                do {
                    printf("Enter the number of array elements: \n");
                    check02 = scanf("%d", &n);
                    while (getchar() != '\n');
                    if (check02 == 1)
                    {
                        for (int i = 0; i < n; i++)
                        {
                            printf("Enter array elements: \n");
                            do {
                                check04 = scanf("%d", &array[i]);
                                while (getchar() != '\n');
                            } while (check04 != 1);
                        }
                    }
                } while (check02 != 1);
                printf("\nNegative elements: "); //отрицательные элементы
                for (int i = 0; i < n; i++)
                    if (array[i] < 0) {
                        printf("%i ", array[i]);
                        sum += array[i];
                    }
                printf("\nTotal negative elements = %i\n", sum); //сумма отриц.элементов
                min = 0;
                max = 0;
                for (i = 0; i < n; i++)
                {
                    if (array[min] > array[i])
                        min = i;  // запомнили индекс минимального 
                    if (array[max] < array[i])
                        max = i;  // запомнили индекс максимального
                }
                printf("min = %d  \n", array[min]);
                printf("max = %d  \n", array[max]);
                array[min] = array[n - 2];
                n--;
                array[max] = array[n-1];
                n--;
                for (i = 0; i < n; i++)
                {
                    printf(" %d", array[i]);
                }
                for (i = 0; i < n; i++)
                {
                    multiplication *= array[i];
                }
                printf("\nProduct of numbers = %d", multiplication); //произведение чисел
                break;
            default :
                printf("Wrong!");
            }
        }
    } while (check != 1);
    return 0;
}