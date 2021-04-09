#include <stdio.h>
#include <stdlib.h>
#include<string.h>

    float black=200;
    float red=200;
    float green=200;
    float blue=200;
    char arr[6];
    char printingMethod[16];
    char smoothness[9];
    char color1[10];
    float grease;
    float percents;
    int numberColor;
    float saturation;
    char picture[10];
    float cvetnoMastilo;
    int i;
    float sum=0;
    float red1=0;
    float blue1=0;
    float green1=0;
    float black1=0;


 void smetka()
{
    printf("What the smoothness of the paper should be(Smooth, Ordinary, Rough)? ");
    scanf("%s",&smoothness);
    fflush(stdin);
     while(1)
        {
            printf("How much print saturation should be(from 70 to 120)? -  ");
            scanf("%f", &saturation);
            if(saturation>=70&&saturation<=120)
            {
                break;
            }

        }
        saturation=saturation/100;
    printf("Do you want to print picture(Yes or No)? ");
    scanf("%s",&picture);
    if (strcmp(picture, "Yes")==0)
    {

     if(strcmp(smoothness, "Smooth")==0)
     {
         grease=1.35*0.9*saturation;
     }
     if(strcmp(smoothness, "Ordinary")==0)
     {
         grease=1.35*saturation;
     }
     if(strcmp(smoothness, "Rough")==0)
     {
         grease=1.35*1.15*saturation;
     }

    }
    if (strcmp(picture, "No")==0)
    {
        if(strcmp(smoothness, "Smooth")==0)
     {
         grease=0.9*saturation;

     }
     if(strcmp(smoothness, "Ordinary")==0)
     {
         grease=saturation;
     }
     if(strcmp(smoothness, "Rough")==0)
     {
         grease=1.15*saturation;

     }

    }
    }


int main()
{
 while(1)
 {

    printf("Enter a command: ");
    scanf("%s",arr);
    fflush(stdin);


    if(strcmp(arr, "Print")==0)
    {
    printf("What to be printing(Colorful or Black and white)? ");
    scanf("%[^\n]s",printingMethod);
    fflush(stdin);



    if (strcmp(printingMethod, "Colorful")==0)
    {
        smetka();
        while(1)
            {
                printf("How many colors do you want to use? ");
                scanf("%d",&numberColor);
                if(numberColor<=4&&numberColor>=1)
                {
                    break;
                }

            }
            while(1)
            {
                for(i=1;i<=numberColor;i++)
                {
                    printf("Color %d(Red,Green,Blue,Black) =",i);
                    scanf("%s",&color1);
                    printf("How many percents?");
                   scanf("%f",&percents);
                    percents=percents/100;
                    if(strcmp(color1, "Red")==0)
                    {
                        sum+=percents;
                        red1=red1+(percents*grease);
                    }
                    if(strcmp(color1, "Green")==0)
                    {
                        sum+=percents;
                        green1=green1+(percents*grease);
                    }
                    if(strcmp(color1, "Blue")==0)
                    {
                        sum+=percents;
                        blue1=blue1+(percents*grease);
                    }
                    if(strcmp(color1, "Black")==0)
                    {
                        sum+=percents;
                        black1=black1+(percents*grease);
                    }
                }
                    if (sum==1)
                    {
                        break;
                    }
                    sum=0;
                    red1=0;
                    blue1=0;
                    green1=0;
                    black1=0;
                }
            if (red<red1)
    {
        printf("ERROR Cartage need replacement\n Enter a command:");
        scanf("%s",arr);
        if(strcmp(arr, "Refill")==0)
        {
            red=200;
        }
    }
    red=red-red1;
            if (blue<blue1)
    {
        printf("ERROR Cartage need replacement\n Enter a command:");
        scanf("%s",arr);
        if(strcmp(arr, "Refill")==0)
        {
            blue=200;
        }
    }
    blue-=blue1;
            if (black<black1)
    {
        printf("ERROR Cartage need replacement\n Enter a command:");
        scanf("%s",arr);
        if(strcmp(arr, "Refill")==0)
        {
            black=200;
        }
    }
    black-=black1;
            if (green<green1)
    {
        printf("ERROR Cartage need replacement\n Enter a command:");
        scanf("%s",arr);
        if(strcmp(arr, "Refill")==0)
        {
            green=200;
        }
    }
    green-=green1;
            printf("PAGE PRINTED\n You have %f ink red. You have %f ink blue. You have %f ink ink green. You have %f ink black.",red,blue,green,black);
    }
    if (strcmp(printingMethod, "Black and white")==0)
    {
    printf("What the smoothness of the paper should be(Smooth, Ordinary, Rough)? ");
    scanf("%s",&smoothness);
     while(1)
        {
            printf("How much print saturation should be(from 70 to 120)? -  ");
            scanf("%f", &saturation);
            if(saturation>=70&&saturation<=120)
            {
                break;
            }

        }
        saturation=saturation/100;
       // printf("%f",saturation);
    printf("Do you want to print picture(Yes or No)? ");
    scanf("%s",&picture);
    if (strcmp(picture, "Yes")==0)
    {

     if(strcmp(smoothness, "Smooth")==0)
     {
         grease=1.35*0.9*saturation;
     }
     if(strcmp(smoothness, "Ordinary")==0)
     {
         grease=1.35*saturation;
     }
     if(strcmp(smoothness, "Rough")==0)
     {
         grease=1.35*1.15*saturation;
         black=black-grease;
     }
     if (black<grease)
    {
        printf("ERROR Cartage need replacement\n Enter a command:");
        scanf("%s",arr);
        if(strcmp(arr, "Refill")==0)
        {
            black=200;
        }

    }
    black=black-grease;
    printf("PAGE PRINTED \n You have %f ink left",black);
    }
    if (strcmp(picture, "No")==0)
    {
        if(strcmp(smoothness, "Smooth")==0)
     {
         grease=0.9*saturation;

     }
     if(strcmp(smoothness, "Ordinary")==0)
     {
         grease=saturation;
     }
     if(strcmp(smoothness, "Rough")==0)
     {
         grease=1.15*saturation;
     }
    if (black<grease)
    {
        printf("ERROR Cartage need replacement\n Enter a command:");
        scanf("%s",arr);
        if(strcmp(arr, "Refill")==0)
        {
            black=200;
        }
    }
    black=black-grease;
    printf("PAGE PRINTED \n You have %2.f ink left",black);
    }

    }
}

 if (strcmp(arr, "Exit")==0)
 {
     exit(0);
 }
   }
    return 0;
    }
