#include <3ds.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{	

		int(C);
		C = 0;
		gfxInitDefault();
		PrintConsole topScreen, bottomScreen;
		consoleInit(GFX_TOP, &topScreen);
		consoleInit(GFX_BOTTOM, &bottomScreen);
		int(A);
		A = 0;
		bool(maybe);
		maybe = true;
		srand(time(NULL));
		int(R);
		R = 0;
		bool(crash);
		crash = false;
		int(B);
		B = 0;
		int(GreyScreen);
		GreyScreen = 0;
		bool(init);
		init = true;
		bool(load);
		load = true;
		int(menu);
		menu = 0;
		int(numb);
		numb = 0;


		while (maybe == true){
			consoleSelect(&topScreen);			
			hidScanInput();
			u32 kDown = hidKeysDown();
			A = A+2;
			printf("\x1b[33m");
			if(A < 25) printf("\x1b[1;1H/ / / / / / / / / / / / / / / / / / / / / / / / / ");
			if(A > 25) printf("\x1b[1;1H / / / / / / / / / / / / / / / / / / / / / / / / /");
			if(A > 25) printf("\x1b[2;1H/ / / / / / / / / / / / / / / / / / / / / / / / / ");
			if(A < 25) printf("\x1b[2;1H / / / / / / / / / / / / / / / / / / / / / / / / /");

			if(A < 25) printf("\x1b[29;1H/ / / / / / / / / / / / / / / / / / / / / / / / / ");
			if(A > 25) printf("\x1b[29;1H / / / / / / / / / / / / / / / / / / / / / / / / /");
			if(A > 25) printf("\x1b[30;1H/ / / / / / / / / / / / / / / / / / / / / / / / / ");
			if(A < 25) printf("\x1b[30;1H / / / / / / / / / / / / / / / / / / / / / / / / /");

			printf("\x1b[31m");
			printf("\x1b[14;22HWarning:");
			printf("\x1b[33m");
			if(A < 25) printf("\x1b[14;20H !"), printf("\x1b[14;30H !");
			if(A > 25) printf("\x1b[14;20H! "), printf("\x1b[14;30H! ");
			printf("\x1b[0m");
			printf("\x1b[15;17HPiracy is illegal");
			printf("\x1b[32m");
			printf("\x1b[16;16HPress A to continue");

			consoleSelect(&bottomScreen);
			printf("\x1b[31m");
			printf("\x1b[15;13HPress B to exit");
			printf("\x1b[33m");
			if(A < 25) printf("\x1b[1;1H/ / / / / / / / / / / / / / / / / / / / ");
			if(A > 25) printf("\x1b[1;1H / / / / / / / / / / / / / / / / / / / /");
			if(A > 25) printf("\x1b[2;1H/ / / / / / / / / / / / / / / / / / / / ");
			if(A < 25) printf("\x1b[2;1H / / / / / / / / / / / / / / / / / / / /");

			if(A < 25) printf("\x1b[29;1H/ / / / / / / / / / / / / / / / / / / /");
			if(A > 25) printf("\x1b[29;1H / / / / / / / / / / / / / / / / / / / ");
			if(A > 25) printf("\x1b[30;1H/ / / / / / / / / / / / / / / / / / / /");
			if(A < 25) printf("\x1b[30;1H / / / / / / / / / / / / / / / / / / / ");

			if (kDown & KEY_X) goto Lol;
			if (kDown & KEY_A) break;
			if (kDown & KEY_B) goto Exit;


			gfxFlushBuffers();
			gfxSwapBuffers();
			if(A == 50) A = 0;
			gspWaitForVBlank();

	}
		consoleInit(GFX_TOP, &topScreen);
		consoleInit(GFX_BOTTOM, &bottomScreen);	
		consoleSelect(&topScreen);


		printf("\x1b[36m");
		printf("\x1b[4;15H+------------------+");
		printf("\x1b[5;15H|Loading Freebrew..|");
		printf("\x1b[6;15H+------------------+");
		printf("\x1b[0m");
		printf("\x1b[30;1H");

	crash:
	while (crash == true){
		B = B+1;
		R = rand();
		if(B == 1) printf("\x1b[15;25H");
		printf("\x1b[41m%d" , R);
		if(B == 150) printf(B);
		gfxFlushBuffers();
		gfxSwapBuffers();
		gspWaitForVBlank();
	}

		R = rand();
		while (load == true){
		C = C+1;
		if(C == 25) printf("\x1b[41m ");
		if(C == 75) printf("\x1b[41m ");
		if(C == 100) printf("\x1b[41m ");
		if(C == 110) printf("\x1b[41m ");
		if(C == 135) printf("\x1b[41m ");
		if(C == 135) printf("\x1b[41m ");
		if(C == 135) printf("\x1b[41m ");
		if(C == 150) printf("\x1b[41m ");
		if(C == 155) printf("\x1b[41m ");
		if(C == 170) printf("\x1b[41m ");
		if(C == 200) printf("\x1b[41m ");
		if(C == 200) printf("\x1b[41m ");
		if(C == 200) printf("\x1b[41m ");
		if(C == 200) printf("\x1b[41m ");
		if(C == 220) printf("\x1b[41m ");
		if(C == 220) printf("\x1b[41m ");
		if(C == 220) printf("\x1b[41m ");
		if(C == 250) printf("\x1b[41m ");
		if(C == 250) printf("\x1b[41m ");
		if(C == 250) printf("\x1b[41m ");
		if(C == 250) printf("\x1b[41m ");
		if(C == 250) printf("\x1b[41m ");
		if(C == 250) printf("\x1b[41m ");
		if(C == 260) printf("\x1b[41m ");
		if(C == 280) printf("\x1b[41m ");
		if(C == 300) printf("\x1b[41m ");
		if(C == 375) printf("\x1b[41m ");
		if(C == 400) printf("\x1b[41m ");
		if(C == 475) printf("\x1b[41m ");
		if(C == 475) printf("\x1b[41m ");
		if(C == 475) printf("\x1b[41m ");
		if(C == 475) printf("\x1b[41m ");
		if(C == 475) printf("\x1b[41m ");
		if(C == 475) printf("\x1b[41m ");
		if(C == 475) printf("\x1b[41m ");
		if(C == 485) printf("\x1b[41m ");
		if(C == 500) printf("\x1b[41m ");
		if(C == 550) printf("\x1b[41m ");
		if(C == 550) printf("\x1b[41m ");
		if(C == 575) printf("\x1b[41m ");
		if(C == 575) printf("\x1b[41m ");
		if(C == 600) printf("\x1b[41m ");
		if(C == 600) printf("\x1b[41m ");
		if(C == 600) printf("\x1b[41m ");
		if(C == 600) printf("\x1b[41m ");
		if(C == 700) printf("\x1b[41m ");
		if(C == 700) printf("\x1b[41m ");
		if(C == 700) printf("\x1b[41m ");
		if(C == 700) printf("\x1b[41m ");
		if(C == 750) printf("\x1b[41m ");
		if(C == 750) printf("\x1b[41m ");
		if(C == 575 && R > 1600000000) crash = true;
		if(crash == true) goto crash;
		if(C == 751) break;

		gfxFlushBuffers();
		gfxSwapBuffers();
		gspWaitForVBlank();
	}
	Lol:
	consoleInit(GFX_TOP, &topScreen);
	consoleInit(GFX_BOTTOM, &bottomScreen);	
	consoleSelect(&topScreen);
	u8 param[0x300];
	u8 hmac[0x20];
	while(aptMainLoop()){
		hidScanInput();
		u32 kDown = hidKeysDown();
		if (kDown & KEY_START) break;
		if (kDown & KEY_DUP) menu = menu-1, init = true;
		if (kDown & KEY_DDOWN) menu = menu+1, init = true;
		if (menu == 0) menu = 1;
		if (menu == 5) menu = 4;



		while(numb < 100){
		consoleSelect(&bottomScreen);
		R = rand();
		printf("\x1b[41m%d" , R);
		consoleSelect(&topScreen);
		numb = numb+1;
		}





			printf("\x1b[1;1H");
		while(GreyScreen < 1501){
			printf("\x1b[2m");
			printf("\x1b[43m ");
			GreyScreen = GreyScreen+1;
		}
		printf("\x1b[0m");
		while(init == true){

			printf("\x1b[1;1H\x1b[46m                                                  ");
			printf("\x1b[2;1H\x1b[46m                                                  ");
			printf("\x1b[1;1H\x1b[31mFreeBrew");
			printf("\x1b[2;1H\x1b[31mVersion: 1.1.0");

			printf("\x1b[3;1H\x1b[2;43m\x1b[30mCrash your 3ds!");
			printf("\x1b[4;1H\x1b[2;43m\x1b[30mGet Free Games (EUR)");
			printf("\x1b[5;1H\x1b[2;43m\x1b[30mGet Free Games (USA)");
			printf("\x1b[6;1H\x1b[2;43m\x1b[30mExit");

			init = false;
		}


		if (menu == 1) printf("\x1b[3;1H\x1b[2;47m\x1b[30mCrash your 3ds!");
		if (menu == 2) printf("\x1b[4;1H\x1b[2;47m\x1b[30mGet Free Games (EUR)");
		if (menu == 3) printf("\x1b[5;1H\x1b[2;47m\x1b[30mGet Free Games (USA)");
		if (menu == 4) printf("\x1b[6;1H\x1b[2;47m\x1b[30mExit");

		if (menu == 1 && kDown & KEY_A) crash = true; 
		if (menu == 1 && kDown & KEY_A)	goto crash;
		if (menu == 2 && kDown & KEY_A){ 
		  memset(param, 0, sizeof(param));
		  memset(hmac, 0, sizeof(hmac));
		  APT_PrepareToDoApplicationJump(0, 0x0004001000022900LL, 0);
		  APT_DoApplicationJump(param, sizeof(param), hmac); }

		if (menu == 3 && kDown & KEY_A){	
		  memset(param, 0, sizeof(param));
		  memset(hmac, 0, sizeof(hmac));
		  APT_PrepareToDoApplicationJump(0, 0x0004001000021900LL, 0);
		  APT_DoApplicationJump(param, sizeof(param), hmac); }
		if (menu == 4 && kDown & KEY_A)	break;


		consoleSelect(&bottomScreen);
		R = rand();
		printf("\x1b[41m%d" , R);
		consoleSelect(&topScreen);

		gfxFlushBuffers();
		gfxSwapBuffers();
		gspWaitForVBlank();
	}




	Exit:
	// Exit services
	gfxExit();
	
	return 0;
}
