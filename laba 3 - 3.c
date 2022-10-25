#include <stdio.h>

int main()
{
    int a[100], i, n, j, temp = 0;
    printf("Enter the number of array elements: ");
    scanf ("%d", &n);
    printf("Enter array elements: \n");
    
    for (i = 0; i < n; i++)
    {
        printf("Item number %d = ", i + 1);
        scanf ("%d", &a[i]);
    }
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (a[i] < a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    for (i = 0; i < n ; i++)
    {
        printf("%d", a[i]);
    }
    return(0);
}



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n = 100, array[100], choice = 1, check, check01, check02, check03,check04;
    do
    {
        printf("Select array size : \n1)random\n2)ur size\n");
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
                for (i = 0; i < n - 1; i++) {// сравниваем два соседних элемента.

                    for (int j = 0; j < n - i - 1; j++) {
                        if (array[j] < array[j + 1]) // если они идут в неправильном порядке, то меняем их местами
                        {
                            int tmp = array[j + 1];
                            array[j + 1] = array[j];
                            array[j] = tmp;
                        }
                    }
                }
                printf("\n");
                for (i = 0; i < n; i++)
                {
                    printf(" %d", array[i]);
                }
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
                for (i = 0; i < n - 1; i++) 
                {
                    for (int j = 0; j < n - i - 1; j++)
                    {
                        if (array[j] < array[j + 1]) 
                        {
                            int tmp = array[j + 1];
                            array[j + 1] = array[j];
                            array[j] = tmp;
                        }
                    }
                }
                for (i = 0; i < n; i++)
                {
                    printf(" %d", array[i]);
                }
                break;
            }
            }
        }
        while (check != 1);
    return 0;
}