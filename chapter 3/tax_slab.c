// ✅ Explanation
// Income Range	Tax Rate	Calculation Logic
// Up to ₹2.5L	0%	No tax
// ₹2.5L – ₹5L	5%	5% of (income − 2.5L)
// ₹5L – ₹10L	20%	₹0.125L + 20% of (income − 5L)
// Above ₹10L	30%	₹0.125L + ₹1.0L + 30% of (income − 10L)
// 3. Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
//  Income Slab Tax
//  2.5 – 5.0L 5%
//  5.0L - 10.0L 20%
//  Above 10.0L 30%
 #include<stdio.h>
  int main(){
     int income;
      float tax=0;
       printf("enter the income \n");
        scanf("%d",&income);
         if(income<250000){
            tax=0;

         }
          else if(income>250000 && income<=500000){
             tax=0.05*(income-250000);

          }
           else if(income>500000 && income<=1000000){
             tax= 0.05*(500000-250000)+0.2 * (income-500000);

           }
            else if(income>1000000){
                 tax=0.05*(500000-250000)+ 0.2*(1000000-500000)+ 0.3 *(income-1000000);

            }
             printf("the total tax you need to pay is %f\n",tax);

  }