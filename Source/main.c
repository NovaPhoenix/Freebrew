#include <3ds.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "music.h"

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
		bool(smallinit);
		smallinit = false;
		int(menu);
		menu = 0;
		int(numb);
		numb = 0;
		int(LoadS);
		LoadS = 0;
		bool(RunOnce);
		RunOnce = true;


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
		if(B == 200) goto Exit;
	}

		R = rand();
		if (R > 1800000000) crash = true;

	while (C != 51){

		LoadS = LoadS+50000000;
		R = rand();
		if(LoadS > R) printf("\x1b[41m "), C = C+1;
		if (C == 35 && crash == true) goto crash;

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


	void Sinit(){
		while(smallinit == true){
		printf("\x1b[1;1H\x1b[46m                                                  ");
		printf("\x1b[2;1H\x1b[46m                                                  ");
		printf("\x1b[1;1H\x1b[31mFreeBrew");
		printf("\x1b[2;1H\x1b[31mVersion: 1.2.0");
		smallinit = false; }
	}

	void YellowScreen(){
		while(GreyScreen < 301){
		printf("\x1b[2m");
		printf("\x1b[43m     ");
		GreyScreen = GreyScreen+1;
	   }
	}

	void BottomCode(){
	while(numb < 100){
		consoleSelect(&bottomScreen);
		R = rand();
		printf("\x1b[41m%d" , R);
		consoleSelect(&topScreen);
		numb = numb+1;
		}
	}

	startSong();
	while(aptMainLoop()){
		hidScanInput();
		u32 kDown = hidKeysDown();
		if (kDown & KEY_START) break;
		if (kDown & KEY_DUP) menu = menu-1, init = true;
		if (kDown & KEY_DDOWN) menu = menu+1, init = true;
		if (menu == 0) menu = 1;
		if (menu == 9) menu = 8;




		BottomCode();
		printf("\x1b[1;1H");
		YellowScreen();
		printf("\x1b[0m");
		Sinit();


		while(init == true){

			printf("\x1b[1;1H\x1b[46m                                                  ");
			printf("\x1b[2;1H\x1b[46m                                                  ");
			printf("\x1b[1;1H\x1b[31mFreeBrew");
			printf("\x1b[2;1H\x1b[31mVersion: 1.2.0");


			printf("\x1b[3;1H\x1b[2;43m\x1b[30m--- CFW ONLY! ---");
			printf("\x1b[5;1H\x1b[2;43m\x1b[30mGet Free Games (EUR)");
			printf("\x1b[6;1H\x1b[2;43m\x1b[30mGet Free Games (USA)");
			printf("\x1b[7;1H\x1b[2;43m\x1b[30mNote on 11.8");
			printf("\x1b[8;1H\x1b[2;43m\x1b[30mMysterious Text setter O_O");
			printf("\x1b[11;1H\x1b[2;43m\x1b[30m--- HB ONLY! ---");
			printf("\x1b[13;1H\x1b[2;43m\x1b[30mGet Free Games on HB");
			printf("\x1b[14;1H\x1b[2;43m\x1b[30mWhat you can do with HB only access");
			printf("\x1b[17;1H\x1b[2;43m\x1b[30m--- Miscellaneous Stuff ---");
			printf("\x1b[19;1H\x1b[2;43m\x1b[30mCrash your 3ds!");
			printf("\x1b[20;1H\x1b[2;43m\x1b[30mExit");
			printf("\x1b[19;30H\x1b[2;43m\x1b[30mLog:");
			init = false;
		}

		if (RunOnce == true){
			printf("\x1b[20;30H\x1b[2;43m\x1b[30mMenu Loaded!");
			printf("\x1b[21;30H\x1b[2;43m\x1b[30mMusic started!");
			RunOnce = false;
		}

		if (menu == 1) printf("\x1b[5;1H\x1b[2;47m\x1b[30mGet Free Games (EUR)");
		if (menu == 2) printf("\x1b[6;1H\x1b[2;47m\x1b[30mGet Free Games (USA)");
		if (menu == 3) printf("\x1b[7;1H\x1b[2;47m\x1b[30mNote on 11.8");
		if (menu == 4) printf("\x1b[8;1H\x1b[2;47m\x1b[30mMysterious Text setter O_O");
		if (menu == 5) printf("\x1b[13;1H\x1b[2;47m\x1b[30mGet Free Games on HB");
		if (menu == 6) printf("\x1b[14;1H\x1b[2;47m\x1b[30mWhat you can do with HB only access");
		if (menu == 7) printf("\x1b[19;1H\x1b[2;47m\x1b[30mCrash your 3ds!");
		if (menu == 8) printf("\x1b[20;1H\x1b[2;47m\x1b[30mExit");

		if (menu == 1 && kDown & KEY_A){ 
		  memset(param, 0, sizeof(param));
		  memset(hmac, 0, sizeof(hmac));
		  APT_PrepareToDoApplicationJump(0, 0x0004001000022900LL, 0);
		  APT_DoApplicationJump(param, sizeof(param), hmac); }

		if (menu == 2 && kDown & KEY_A){	
		  memset(param, 0, sizeof(param));
		  memset(hmac, 0, sizeof(hmac));
		  APT_PrepareToDoApplicationJump(0, 0x0004001000021900LL, 0);
		  APT_DoApplicationJump(param, sizeof(param), hmac); }

		if (menu == 3 && kDown & KEY_A){
			consoleInit(GFX_TOP, &topScreen);
			consoleInit(GFX_BOTTOM, &bottomScreen);
			consoleSelect(&topScreen);	
			printf("\x1b[1;1H");
			GreyScreen = 0;
			YellowScreen();
			printf("\x1b[0m");
			smallinit = true;
			Sinit();
			printf("\x1b[3;1H\x1b[2;47m\x1b[30mBack");
			printf("\x1b[5;1H\x1b[2;43m\x1b[30mNote: If you try to pirate on 11.8 with CFW you   have a high chance of being banned from nintendo'sonline services, so don't pirate!");
			numb = 0;
			BottomCode();
			while(maybe == true){
				hidScanInput();
				u32 kDown = hidKeysDown();
				if (kDown & KEY_A || kDown & KEY_B){
					init = true;
					GreyScreen = 0;
					consoleInit(GFX_TOP, &topScreen);
					consoleInit(GFX_BOTTOM, &bottomScreen);	
					numb = 0;
					break;
				}
				consoleSelect(&bottomScreen);
				R = rand();
				printf("\x1b[37;41m%d" , R);
				consoleSelect(&topScreen);
				gfxFlushBuffers();
				gfxSwapBuffers();
				gspWaitForVBlank();
				advance();
			}
		}

				if (menu == 5 && kDown & KEY_A){
			consoleInit(GFX_TOP, &topScreen);
			consoleInit(GFX_BOTTOM, &bottomScreen);
			consoleSelect(&topScreen);	
			printf("\x1b[1;1H");
			GreyScreen = 0;
			YellowScreen();
			printf("\x1b[0m");
			smallinit = true;
			Sinit();
			printf("\x1b[3;1H\x1b[2;47m\x1b[30mBack");
			printf("\x1b[5;1H\x1b[2;43m\x1b[30mNote: Want FREE games on HB only access? Well, Youare in luck! There are enough free games and demosin the eshop, go download them!");
			numb = 0;
			BottomCode();
			while(maybe == true){
				hidScanInput();
				u32 kDown = hidKeysDown();
				if (kDown & KEY_A || kDown & KEY_B){
					init = true;
					GreyScreen = 0;
					consoleInit(GFX_TOP, &topScreen);
					consoleInit(GFX_BOTTOM, &bottomScreen);	
					numb = 0;
					break;
				}
				consoleSelect(&bottomScreen);
				R = rand();
				printf("\x1b[37;41m%d" , R);
				consoleSelect(&topScreen);
				gfxFlushBuffers();
				gfxSwapBuffers();
				gspWaitForVBlank();
				advance();
			}
		}

		if (menu == 6 && kDown & KEY_A){
			consoleInit(GFX_TOP, &topScreen);
			consoleInit(GFX_BOTTOM, &bottomScreen);
			consoleSelect(&topScreen);	
			printf("\x1b[1;1H");
			GreyScreen = 0;
			YellowScreen();
			printf("\x1b[0m");
			smallinit = true;
			Sinit();
			printf("\x1b[3;1H\x1b[2;47m\x1b[30mBack");
			printf("\x1b[5;1H\x1b[2;43m\x1b[30mSome things to try on HB only access:");
			printf("\x1b[6;1H\x1b[2;43m\x1b[30m-Anemone, a 3ds theme manager");
			printf("\x1b[7;1H\x1b[2;43m\x1b[30m-JKSM, a 3ds save manager");
			printf("\x1b[8;1H\x1b[2;43m\x1b[30m-A playcoin setter, sets your playcoins to 300");
			printf("\x1b[9;1H\x1b[2;43m\x1b[30m-FTPD, a wireless ftp service");
			numb = 0;
			BottomCode();
			while(maybe == true){
				hidScanInput();
				u32 kDown = hidKeysDown();
				if (kDown & KEY_A || kDown & KEY_B){
					init = true;
					GreyScreen = 0;
					consoleInit(GFX_TOP, &topScreen);
					consoleInit(GFX_BOTTOM, &bottomScreen);	
					numb = 0;
					break;
				}
				consoleSelect(&bottomScreen);
				R = rand();
				printf("\x1b[37;41m%d" , R);
				consoleSelect(&topScreen);
				gfxFlushBuffers();
				gfxSwapBuffers();
				gspWaitForVBlank();
				advance();
			}
		}



		if (menu == 4 && kDown & KEY_A){
			FILE *fp;
			fp = fopen("/luma/customversion_sys.txt", "w");
			printf("\x1b[20;30H\x1b[2;43m\x1b[30mFile on the sdcard");
			printf("\x1b[21;30H\x1b[2;43m\x1b[30mhas been created!");
			fputs("FreeBrew = BestBrew", fp);
			printf("\x1b[22;30H\x1b[2;43m\x1b[30mWrote to File!");
			fclose(fp);
		}

		if (menu == 7 && kDown & KEY_A){
			printf("\x1b[20;30H\x1b[2;43m\x1b[30m                   ");
			printf("\x1b[21;30H\x1b[2;43m\x1b[30m                   ");
			printf("\x1b[22;30H\x1b[2;43m\x1b[30m                   ");
			printf("\x1b[20;30H\x1b[2;43m\x1b[30mCrash imminent");
			crash = true; 
			goto crash; }

		if (menu == 8 && kDown & KEY_A) break;

		
		advance();
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
	exitSong();
	return 0;
}
