#include"inc/tm4c123gh6pm.h"
#include "lcd.h"

int main(void)
{
    // bu kod �al��mas� gerekecek
    LCDilkayarlar();
    LCDgit(1,7); // sat�r 1, sutun 7
    lcdkarakteryaz('A');

	return 0;
}
