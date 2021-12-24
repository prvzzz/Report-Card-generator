 // Report card generator application.

  #include<stdio.h>
  #include<stdlib.h>

  int main()
  {

    printf("----------WELCOME----------\n\n");
    printf("----ANNUAL REPORT CARD----\n\n");

      char Name[30],Section;

      int Standard,Mathematics,English,Hindi,Science,sst,sum;

// Taking the Desired input from the user.

      printf("Please Enter The Student Name\n",Name);
          scanf("%[^\n]%*c",&Name);
          printf("\n");
      printf("Enter Your Section\n ");
          scanf("%c",&Section);

      printf("Enter your class\n",Standard);
          scanf("%d",&Standard);
          printf("\n");

      printf("Enter the Marks secured out of 100");
          printf("\n");

      printf("Enter the Marks of Mathematics  ");
          scanf("%d",&Mathematics);

      printf("Enter The Marks In English  ");
          scanf("%d",&English);

      printf("Enter The Marks In Hindi  ");
          scanf("%d",&Hindi);

      printf("Enter The Marks In Science  ");
          scanf("%d",&Science);

      printf("Enter The Marks In Social Science  ");
          scanf("%d",&sst);
          printf("\n\n");

// Calculating the total Marks.

      sum=Mathematics+Hindi+Science+English+sst;
//we need to exit the program if sum is greater than than 500 or less than 0
  if (sum<=0||sum>500)
    {
      printf("Invalid entry of marks \n please try again");
      exit(0);
      }


//Take pause To print result
      printf("---please wait---\n\n");
      usleep(2000*2000);

// Now we will print according to the output

      printf("Jawahar Navodaya Vidhalaya\n  Annual Report Card");
           printf("\n");

      printf("Name  %s",Name);
           printf("\n");

      printf("Standard  %d",Standard);
           printf("\n");

      printf("Section  %c",Section);
           printf("\n\n");

      printf("Marks secured out of 100");
           printf("\n");

      printf("Mathematics %d\n",Mathematics);

      printf("English %d\n",English);

      printf("Hindi %d\n",Hindi);

      printf("Science %d\n",Science);

      printf("social Science %d\n",sst);
           printf("\n\n");
      printf("Total Marks Secured:- %d",sum);
           printf("\n");
// Taking if else ladder statements for finding the Grade.

       if (sum>=450&&sum<=500)
             printf("Grade A");

       else if (sum>=400&&sum>=449)
             printf("Grade B");

        else if (sum>=350&&sum<=399)
             printf("Grade C");

         else if (sum>=300&&sum<=349)
              printf("Grade D");

          else if (sum>=200&&sum<=299)
               printf("Grade E");

            else
               printf("Grade F");
     exit(0);
  }
