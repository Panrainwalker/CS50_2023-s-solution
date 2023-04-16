/*
 * @Author: PYX (⊙ˍ⊙)
 * @Date: 2023-04-15 16:49:36
 * @LastEditors: PYX   ▄︻┻┳═一 Ｏ(≧口≦)Ｏ
 * @LastEditTime: 2023-04-16 14:04:04
 */
#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int Start_size;
    printf("Start size is: ");
    scanf("%i", &Start_size);
    for (int i = 0; i < 100; i++)
    {
        if (Start_size < 9)
        {
            printf("Start size is: ");
            scanf("%i", &Start_size);
        }
        else
        {
            break;
        }
        
    }


    int End_size;
    printf("End size is: ");
    scanf("%i", &End_size);
    for (int i = 0; i < 100; i++)
    {
        if (Start_size > End_size)
        {
            printf("End size is: ");
            scanf("%i", &End_size);
        }
        else
        {
            break;
        }
        
    }
    int years;
    int total = Start_size;
    for (int i = 1, born = 0, death = 0; total < End_size; i++ )
    {
        born = (int)total / 3;
        death = (int)total / 4;
        total = (int)total + born - death;
        years = i;
    }


    printf("Years: %i\n", years);    


}