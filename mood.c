#include<stdio.h>
int main()


{
    char mood;


    printf("                                          Set your Mood                 \n\n\n");

    printf("Enter 'A' if your mood is happy \nEnter 'B' if you're in displeased Mood\n\n\n\n\n\n");



    printf("\nEnter Mood Status..'A' or 'B' : ");
    scanf("%c",&mood);


    switch(mood)
    {
    case'A':
        printf("Say Alhamdulillah and The almighty will make you more happy\n\n");
        break;

    case'B':
        printf("Say Alhamdulillah and say your prayer, Your problem will be solved soon\n\n");
        break;

    default:
        printf("It seems you're depressed!!!,\nDo Oju and say your Prayer\n\n");

    }



   return 0;

}
