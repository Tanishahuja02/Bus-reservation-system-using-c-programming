#include <stdio.h>

int main() {
    int n, fb, nn, tw, ii, tn;

    printf("🙏WELCOME TO JOURNEY EXPERTS BUS RESERVATIONS🙏\n\n");

    printf("HOW CAN I HELP YOU?\n");
    printf("1️⃣ Booking Ticket\n");
    printf("2️⃣ Help\n");
    printf("3️⃣ Feedback\n");
    printf("4️⃣ Info About Us\n");
    printf("5️⃣ Your Ticket\n");
    printf("6️⃣ Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &n);  

    if (n == 1) {
        printf("\nFROM:\n");
        printf("1️⃣ NASHIK\n");
        printf("2️⃣ MUMBAI\n");
        printf("3️⃣ PUNE\n");
        printf("4️⃣ NAGPUR\n");

        printf("Enter your choice: ");
        scanf("%d", &nn);

        if(nn > 0 && nn <= 4) {
            printf("\nTO:\n");
            printf("1️⃣ NASHIK\n");
            printf("2️⃣ MUMBAI\n");
            printf("3️⃣ PUNE\n");
            printf("4️⃣ NAGPUR\n");

            printf("Enter your choice: "); 
            scanf("%d", &tw);
             
             

            if(tw > 0 && tw <= 4) {
                printf("\nPlease like this project to confirm your ticket:\n");
                printf("1️⃣ Yes\n");
                printf("2️⃣ Why not\n");

                printf("Enter your choice: ");
                scanf("%d", &ii);

                if(ii == 1 || ii == 2) {
                    if(nn == tw){
                        
                        printf("can't add same destinations\n");
                    }
                    else if(nn==1 && tw==2){
                        printf ("🙏Thank you for booking 🙏");
                        printf("Your ticket number is: 1012");
                    }
                    else if(nn==2 && tw==2){
                        printf("can't add same destination");
                    }
                    else if(nn==3 && tw==2){
                       printf ("🙏Thank you for booking 🙏");
                        printf("Your ticket number is: 1032");
                    }
                    else if(nn==4 && tw==2){
                         printf ("🙏Thank you for booking 🙏");
                        printf("Your ticket number is: 1042");
                    }
                    else if(nn==1 && tw==3){
                         printf ("🙏Thank you for booking 🙏");
                        printf("Your ticket number is: 1013");
                    }
                    else if(nn==2 && tw==3){
                       printf ("🙏Thank you for booking 🙏");
                        printf("Your ticket number is: 1023");
                    }
                    else if(nn==3 && tw==3){
                        printf("can't add the same destination");
                    }
                    else if(nn==4 && tw==3){
                       printf ("🙏Thank you for booking 🙏");
                        printf("Your ticket number is: 1043");
                    }
                    else if(nn==1 && tw==4){
                       printf ("🙏Thank you for booking 🙏");
                        printf("Your ticket number is: 1014");
                    }
                    else if(nn==2 && tw==4){
                        printf ("🙏Thank you for booking 🙏");
                        printf("Your ticket number is: 1024");
                    }
                    else if(nn==3 && tw==4){
                        printf ("🙏Thank you for booking 🙏");
                        printf("Your ticket number is: 1034");
                    }
                    else if(nn==4 && tw==4){
                        printf("can't add the same destination"); 
                    }
                    else if(nn==4 && tw==1){
                         printf("🙏Thank you for booking🙏");
                         printf ("Your ticket number is:1041");
                         }
                    else {
                        printf("Enter valid number");
                    }
                } else {
                    printf("\n⚠️ Choose from the two options.\n");
                }

            } else {
                printf("\n❌ Invalid destination choice.\n");
            }
        } else {
            printf("\n❌ Invalid source choice.\n");
        }
    } 
    else if (n == 2) {
        printf("\n📞 You can call our Helpline number:\n");
        printf("HELPLINE NO: 9876543210\n");
    } 
    else if (n == 3) {
        printf("\nPlease rate your experience (1-5): ");
        scanf("%d", &fb);

        if (fb >= 1 && fb <= 5) {
            printf("⭐ Thank you for your feedback ⭐\n");
        } else {
            printf("⚠️ Invalid rating. Thank you.\n");
        }
    } 
    else if (n == 4) {
        printf("\n🚌 About Us – Journey Experts Bus Reservation System\n");
        printf("Welcome to Journey Experts, your trusted partner for safe, simple, and smart bus travel.\n");
        printf("We are dedicated to making your journey smoother with our user-friendly Bus Reservation System.\n");
        printf("Our features include:\n");
        printf("- Real-time bus schedules\n");
        printf("- Instant ticket booking\n");
        printf("- Secure payments\n");
        printf("- 24/7 customer support\n");
        printf("🧳 Your journey is our priority.\n");
    } 
    else if(n == 5){
        printf("Enter Ticket Number\n");
        scanf("%d", &tn);
        if(tn==1012){
        printf ("Ticket found\n ");
        printf ("From\t");
        printf ("To\n");
        printf ("Nashik\t");
        printf ("Mumbai\n");
        }
        else if(tn==1013){
        printf ("Ticket found\n ");
        printf ("From\t");
        printf ("To\n");
        printf ("Nashik\t");
        printf ("Pune\n");
        }
         else if(tn==1014){
        printf ("Ticket found\n ");
        printf ("From\t");
        printf ("To\n");
        printf ("Nashik\t");
        printf ("Nagpur\n");
        }
        else if(tn==1021){
        printf ("Ticket found\n ");
        printf ("From\t");
        printf ("To\n");
        printf ("Mumbai\t");
        printf ("Nashik\n");
        }
       else if(tn==1023){
        printf ("Ticket found\n ");
        printf ("From\t");
        printf ("To\n");
        printf ("Mumbai\t");
        printf ("Pune\n");
        }
       else if(tn==1024){
        printf ("Ticket found\n ");
        printf ("From\t");
        printf ("To\n");
        printf ("Mumbai\t");
        printf ("Nagpur\n");
        }
       else if(tn==1031){
        printf ("Ticket found\n ");
        printf ("From\t");
        printf ("To\n");
        printf ("Pune\t");
        printf ("Nashik\n");
        }
       else if(tn==1032){
        printf ("Ticket found\n ");
        printf ("From\t");
        printf ("To\n");
        printf ("Pune\t");
        printf ("Mumbai\n");
        }
       else if(tn==1034){
        printf ("Ticket found\n ");
        printf ("From\t");
        printf ("To\n");
        printf ("Pune\t");
        printf ("Nagpur\n");
        }
       else if(tn==1041){
        printf ("Ticket found\n ");
        printf ("From\t");
        printf ("To\n");
        printf ("Nagpur\t");
        printf ("Nashik\n");
        }
       else if(tn==1042){
        printf ("Ticket found\n ");
        printf ("From\t");
        printf ("To\n");
        printf ("Nagpur\t");
        printf ("Mumbai\n");
        }
       else if(tn==1043){
        printf ("Ticket found\n ");
        printf ("From\t");
        printf ("To\n");
        printf ("Nagpur\t");
        printf ("Pune\n");
        }
        else {
        printf("enter valid ticket number ");
        }
    }
    else if(n == 6){
        printf("🙏Thank you for visiting🙏");
    }
    else {
        printf("\n❌ Invalid choice. Please try again.\n");
    }

    return 0;
}
