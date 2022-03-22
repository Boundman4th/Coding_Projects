#include <stdio.h>
#include <stdlib.h>
//Moroni Menk, 03/02/2022

/* Global Courier Services will ship your package based on how much it weighs and how far you are sending the package. Packages above 50 pounds will not be shipped. You need to write a program in C that calculates the shipping charge.

The shipping rates are based on per 500 miles shipped.  They are not pro-rated, i.e., 600 miles is the same rate as 900 miles or 1000 miles.

Here are the shipping charges -

Package Weight                                                     Rate per 500 miles shipped

Less than or equal to 10 pounds                                    $3.00
More than 10 pounds but less than or equal to 50 pounds            $5.00
If the shipping distance is more than 1000 miles, there is an additional charge of $10 per package shipped.
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


