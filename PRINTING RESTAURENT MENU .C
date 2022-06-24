#include<stdio.h>
int main()
{
    int n,choice;
    printf("enter the choice : \n");
    scanf("%d",&choice);
    printf("enter the combo : \n");
    scanf("%d",&n);
    switch(choice)
    {
        case 1: 
        printf("--------BIRYANI's--------\n\n");
        switch(n)
        {
            case 1: 
            printf("Plain Biryani\t\t$10");
            break;
            case 2:
            printf("Mini Chicken Biryani\t\t$15");
            break;
            case 3:
            printf("Egg Biryani\t\t$12");
            break;
            case 4:
            printf("Chicken Biryani\t\t$18");
            break;
            case 5:
            printf("Hyderabadi Chicken Dhum Biryani\t\t$19");
            break;
            case 6:
            printf("Chicken Fry Piece Biryani\t\t$20");
            break;
            default:
            printf("invalid combo");
            break;
        }
        break;
        case 2:
        printf("--------STARTERS--------\n\n");
        switch(n)
        {
            case 1:
            printf("Chillie Chicken\t\t$12");
            break;
            case 2:
            printf("Garlic Chicken\t\t$14");
            break;
            case 3:
            printf("Salt 'n' Pepper Chicken\t\t$15");
            break;
            case 4:
            printf("Chicken Lolipop\t\t$18");
            break;
            case 5:
            printf("Chicken 65 Boneless\t\t$18");
            break;
            case 6:
            printf("Dragon Chicken\t\t$19");
            break;
            default:
            printf("invalid combo");
            break;
        }
        break;
        case 3:
        printf("--------DRINKS--------\n\n");
        switch(n)
        {
            case 1:
            printf("Coke\t\t$10");
            break;
            case 2:
            printf("Sprite\t\t$10");
            break;
            case 3:
            printf("Marinda\t\t$10");
            break;
            case 4:
            printf("Limca\t\t$10");
            break;
            default:
            printf("invalid combo");
        }
        break;
        default:
        printf("invalid choice");
        break;
    }
    
    return 0;
}
