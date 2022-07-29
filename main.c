#include "DAVE.h"                 //Declarations from DAVE Code Generation (includes SFR declaration)

#include <ssd1306.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <_ansi.h>

int main(void) {
	DAVE_STATUS_t status;

	status = DAVE_Init(); /* Initialization of DAVE APPs  */

	if (status != DAVE_STATUS_SUCCESS) {
		/* Placeholder for error handler code. The while loop below can be replaced with an user error handler. */
		XMC_DEBUG("DAVE APPs initialization failed\n");

		while (1U) {

		}
	}

	//****************init***************
	ssd1306_Init();
	ssd1306_Fill(Black);

	ssd1306_SetCursor(2, 0);
	ssd1306_WriteString("XMC2GO", Font_11x18, White);

	ssd1306_SetCursor(2, 20);
	ssd1306_WriteString("XMC1100", Font_11x18, White);

	ssd1306_UpdateScreen();

	while (1U) {

	}
}


