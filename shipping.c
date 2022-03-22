#include <stdio.h>
#include <stdlib.h>
//Moroni Menk, 03/02/2022

/* A courier service ships packages up to 50 pounds. Cost is determined by weight and distance shipped. Packages less than or equal to 10 pounds cost $3.00, more than 10 pounds but less than or equal to 50 pounds costs $5,00.  Shipping rates are calculated in increments of 500 miles, with an extra $10 charge per package shipped when the distance is greater than 1000 miles.
*/

main ()
{
double shipCost, boxWeight, boxWeightCost, distanceCost;
int distance;

printf ("How much does the package weigh? \n");
scanf ("%lf", &boxWeight);

if (boxWeight <= 10) // calculates shipping cost according to box weight
    {
    boxWeightCost = 3.00;
    }
    else
    {
        if (boxWeight <= 50)
        {
        boxWeightCost = 5.00;
        }
            else
            {
            printf ("Sorry, we only ship packages of 50 pounds or less. \n");
            exit(0);
            }   
    }

printf ("How far will the package ship? \n");
scanf ("%d", &distance);

     distanceCost = (distance / 501) + 1; //calculates distance segments

    if (distanceCost < 1)
        {
            distanceCost = 1;
        }

shipCost = boxWeightCost * distanceCost; //calculates total shipping cost

    if (distance > 1000)
        {
            shipCost = shipCost + 10;
        }

printf ("\n Your shipping charge is $");
printf ("%.2lf", shipCost);

return 0;
}


