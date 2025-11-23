#include <stdio.h>
#include <conio.h>

int main()
{
    int cost_price,selling_price;
    printf("\t\tName: NAMUGWANYA MARIAM\n REGISTRATION NUMBER: 2025/DSWE/DAY/1576/G\n");
    printf("\t\t\.......................................................\n");
    printf("Enter Cost Price: ");
    scanf("%d",& cost_price);
    printf("Enter Selling Price: ");
    scanf("%d",& selling_price);
    if(selling_price>cost_price)
    {
        printf("Seller made a profit\n");
        printf("Profit: Ugshs. %d",(selling_price-cost_price));
        
    }
    else
    {
        printf("Seller made a Loss\n");
        printf("Loss:Ugshs. %d",abs(selling_price-cost_price));
        
        
    }
    
    
    return 0;
}