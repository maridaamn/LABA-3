#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n = 100, array[100], choice = 1, res, res01, res02, res03,x=0;

    do
    {
        printf("Select array size : \n 1)random\n2)ur size \n");
        res = scanf("%d", &choice);

        while (getchar() != '\n');

        if (res == 1)
        {
            switch (choice)

            {
            case 1:
                do
                {
                    printf("Enter the number of array elements : \n");
                    res01 = scanf("%d", &n);
                    while (getchar() != '\n');

                    if (res01 == 1)
                    {

                        for (i = 0; i < n; i++)
                        {
                            array[i] = rand() % 100; // диапазон случайных чисел от 0 до 100
                            printf(" %d ", array[i]);

                        }
                        for (int i = 0; i < n; i++)
                        {
                            array[x] = array[i];
                            if ((i-1) % 2 != 0)
                                x++;
                        }
                        printf("\n");
                        for (int i = x; i < n; i++)
                            array[i] = 0;
                        for (int i = 0; i < x; i++)
                            printf(" %d", array[i]);

                        return 0;
                    }

                } while (res01 != 1);

                break;

            case 2:
                do {
                    printf("Enter the number of array elements : \n");
                    res02 = scanf("%d", &n);
                    while (getchar() != '\n');

                    if (res02 == 1)
                    {

                        printf("Enter array element : \n");

                        for (int i = 0; i < n; i++)
                        {
                            scanf("%d", &array[i]);
                        }

                        for (int i = 0; i < n; i++)
                        {
                            printf("%d ", array[i]);
                        }
                        for (int i = 0; i < n; i++)
                        {
                            array[x] = array[i];
                            if ((i - 1) % 2 != 0)
                                x++;
                        }
                        printf("\n");
                        for (int i = x; i < n; i++)
                            array[i] = 0;
                        for (int i = 0; i < x; i++)
                            printf(" %d", array[i]);

                        return 0;
                    }
                } while (res02 != 1);

                break;

            }
        }

    } while (res != 1);

    return 0;
}