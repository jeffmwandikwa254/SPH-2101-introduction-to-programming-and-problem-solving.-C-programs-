Name:Jeff Mwandikwa
Reg No:ct101/101/g/26533/25
*//

#include <stidio.h>

int main() {
	 int units;
	 float total_bill;
	 
	 prompt user to enter water units consumed
	  printf("Enter water units consumed: ");
	  scanf("%d , &units");
	  
	  //caculate total bill based on
	  cosumption rules
	   if (units <= 30) {
	   	total bill =
	   units * 20;
	   }
	   else if (umits <= 60){
	   	total_bill = (30
	   * 20.0) + ((units - 30)
	   *25.0)
	   }
	   else {
	   	total_bill = 30
	   *20.0) + (30 * 25.0) + 
	   ((units - 60) * 30.0);
	   }
	   
	    //Display the total bill with two decimal places
	    printf("total water bill:% .2f KES n",
	    tota_bill) ;
	    
	    return 0;
}