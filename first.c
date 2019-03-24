#include <stdio.h>
#include <stdlib.h>

int main() {
  char card_name[3];
  int count = 0;
  int cardK = 0;
  while(card_name[0]!='X') {
    puts("input card value");
    scanf("%2s",card_name);
    int val = 0;
    switch(card_name[0]) {
      case 'K':
      cardK++;
      if(cardK > 4) {
        puts("quantity is limit");
        continue;
      }
      case 'Q':
      case 'J':
      val = 10;
      break;
      case 'A':
      val = 11;
      break;
      case 'X':
      continue;
      default:
      val = atoi(card_name);
      if((val < 1) || (val > 10)){
        puts("im raise this value");
        printf("current number is: %i\n",val);
        continue;
      }
    }
    if((val > 2) && (val < 7)) {
      count++;
    }
    else if(val == 10) {
      count--;
    }
    printf("current number is: %i\n",count);
  }
  return 0;
}

 

