#include <stdio.h>
#include <stdlib.h>



// int main() {
//   char name[11];
//   printf("input your name %s\n", name);
//   fgets(name,30,stdin);
//   printf("hello %s\n",name );
//   return 0;
// }

// int main(){
// int card_count = 11;
// if (card_count > 10) {
//   puts("card is successful");
// }
// }



// int main() {
//   int c = 10;
//   while(c > 0) {
//     printf("sup\n");
//     c = c - 1;
//   }
// }



// int main() {
//   char ex[20];
//   puts("input your girlfriend name here");
//   fgets(ex,20,stdin);
//   printf("good luck %s\n",ex );
//   return 0;
// }

// int main() {
// char suit = 'H';
// switch (suit) {
//   case 'c':
//   puts("clubs");
//   break;
//   case 'D':
//   puts("diamond");
//   break;
//   case 'A':
//   puts("heart");
//   break;
//   default:
//   puts("spades");
// }
// }




// int main() {
//   int decks;
//   puts("input your colods");
//   scanf("%i\n",decks );
//   if(decks < 1) {
//     puts("you are introduced incorrect data ");
//     return 1;
//   }
//   printf("total cards %i\n", (decks * 52));
//   return 0;
// }



// int main() {
//   char card_name[3];
//   puts("input card name");
//   scanf("%2s",card_name );
//   int val = 0;
//   if (card_name[0] == 'K') {
//     val = 10;
//   } else if (card_name[0] == 'Q') {
//     val = 110;
//   }
//   else if (card_name[0] == 'J'){
//     val = 10;
//   }
//   else if(card_name[0] == 'A') {
//     val = 11;
//   }
//   else {
//     val = atoi(card_name);
//   }

//   if((val  >=3) & (val <= 6 )) 
//   puts("counter increased");
//   else if  (val == 10) 
//     puts("counter decreased");
//   else if (!val)
//     puts("invalid numbers");
//   return 0;
// }


// int main() {
//   int card = 1;
//   if(card > 1) {
//   card = card - 1;
// }
//   else if (card < 7) { 
//     puts("too cheap card");
//     }
//     else {
//       puts("ace");
//     }
//   return 0;
//   }


// int main() {
//   int card = 1;
//   if(card > 1) {
//     card = card - 1;
//     if(card < 7)
//       puts("cheap card");
//     else
//       puts("ace");
  
//   return 0;
// }


// int main() {
//   int train = 65;
//   int winnings = 0;
//   switch(train) {
//     case 37:
//     winnings = winnings + 50;
//     break;
//     case 65:
//     puts("jackpot");
//     winnings = winnings + 80;
//     case 12:
//     winnings = winnings + 20;
//     break;
//     default: 
//     winnings = 0;
//   }
//   return 0;
// }


// int main() {
//   char card_name[3];
//   puts("input your card name");
//   scanf("%3s",card_name);
//   int val = 0;
//   switch(card_name[0]) {
//     case 'k':
//     puts('k');
//     val = 10;
//     break;
//     case 'q':
//     puts('Q');
//     val = 10;
//     break;
//     case 'j':
//     puts('j');
//     val = 10;
//     break;
//     case 'a':
//     puts('A');
//     val = 11;
//     default:
//     val = atoi(card_name);
//   }
//   return 0;
// }


// int main() {
//   int x = 1;
//   while (x < 10) {
//     printf("%i bottles here\n",x );
//     x++;
//   }
//   return 0;
// }


// int main() {
// int x = 1;
// while(x != 14) {
// if(x == 14) {
//   printf("%i nice your number is \n",x );
//   break;
// }

// else if  (x < 10) {
//   printf("%i one more \n",x );
//   x++;
//   continue;

// }
// else 
// printf("this is  not number");

// }
// return 0;
// }




// int larger(int a, int b) {
//   if(a > b) {
//     return a;
//     return b;
//   }
//   return 0;
// }

// int main() {
//   int c = 1;
//   int greatest = larger(10,3);
//   while(greatest > 1){
//     if(greatest > c){
//       printf("%iups\n",greatest );
//     greatest--;
//   }
// }


  
//   return 0;
// }


int main() {
  int x = 0;
  int y = 0;
  while(x< 5) {
   // y = x - y;
	y = y + x;
  printf("%i%i",x,y );
  x = x + 1;
  }
  return 0;
}

