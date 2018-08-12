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
		int(menu);
		menu = 1;
		int(numb);
		numb = 0;
		int(LoadS);
		LoadS = 0;
		bool(BSOD);
		BSOD = false;
		int(A1);
		A1 = 0;
		int(A2);
		A2 = 0;
		int(A4);
		A4 = 0;
		char*(Q);
		int(mysterymenu);
		mysterymenu = 1;
		int(bricc);
		bricc = 0;




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
		Brick:
		consoleInit(GFX_TOP, &topScreen);
		consoleInit(GFX_BOTTOM, &bottomScreen);	
		consoleSelect(&topScreen);

		while (BSOD == true){
			consoleSelect(&topScreen);
		    printf("\x1b[1;1H\x1b[44m");
		    	while (A1 != 300){
				printf("     ");
				A1 = A1+1; }
			printf("\x1b[33;44m");
			printf("\x1b[2;2HBOOTROM 8046");
			printf("\x1b[4;2HERRCODE: 00F800EF");
			printf("\x1b[5;11HFFFFFFFF FFFFFFFF");
			printf("\x1b[6;11H00000008 00000000");
				gfxFlushBuffers();
				gfxSwapBuffers();
				gspWaitForVBlank();
			consoleSelect(&bottomScreen);
		    printf("\x1b[1;1H\x1b[44m");
		    	while (A2 != 240){
				printf("     ");
				A2 = A2+1; }
				printf("\x1b[33;44m");
			printf("\x1b[2;2HBOOTROM 8046");
			printf("\x1b[4;2HERRCODE: 00F800EF");
			printf("\x1b[5;11HFFFFFFFF FFFFFFFF");
			printf("\x1b[6;11H00000008 00000000");



				while (BSOD == true){
					hidScanInput();
					u32 kDown = hidKeysDown();
					if(kDown & KEY_B && kDown & KEY_SELECT) break;
					gfxFlushBuffers();
					gfxSwapBuffers();
					gspWaitForVBlank();
				}
				break;
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
		if (R > 1900000000) crash = true;

	while (C != 51){

		LoadS = LoadS+50000000;
		R = rand();
		if(LoadS > R) printf("\x1b[41m "), C = C+1;
		if (C == 35 && crash == true) goto crash;

		gfxFlushBuffers();
		gfxSwapBuffers();
		gspWaitForVBlank();
	}

	void initN(){
			printf("\x1b[1;1H\x1b[46m                                                  ");
			printf("\x1b[2;1H\x1b[46m                                                  ");
			printf("\x1b[0m");
			printf("\x1b[1;42H\x1b[31;46mTime:");
			printf("\x1b[1;1H\x1b[31;46mFreeBrew");
			printf("\x1b[2;1H\x1b[31mVersion: 1.5.0");


			printf("\x1b[3;1H\x1b[2;43m\x1b[30m--- CFW ONLY! ---");
			printf("\x1b[5;1H\x1b[2;43m\x1b[30mGet Free Games");
			printf("\x1b[6;1H\x1b[2;43m\x1b[30mPiracy Note");
			printf("\x1b[8;1H\x1b[2;43m\x1b[30mGet Titlekeys(Warning!)");
			printf("\x1b[7;1H\x1b[2;43m\x1b[30mMysterious Text setter O_O");
			printf("\x1b[11;1H\x1b[2;43m\x1b[30m--- HB ONLY! ---");
			printf("\x1b[13;1H\x1b[2;43m\x1b[30mGet Free Games on HB");
			printf("\x1b[14;1H\x1b[2;43m\x1b[30mWhat you can do with HB only access");
			printf("\x1b[17;1H\x1b[2;43m\x1b[30m--- CFW and HB ---");
			printf("\x1b[19;1H\x1b[2;43m\x1b[30mCrash your 3ds!");
			printf("\x1b[20;1H\x1b[2;43m\x1b[30mInstall Games");
			printf("\x1b[21;1H\x1b[2;43m\x1b[30mExit"); }

	void BottomCode(){
	while(numb < 120){
		consoleSelect(&bottomScreen);
		R = rand();
		printf("\x1b[41m%d" , R);
		consoleSelect(&topScreen);
		numb = numb+1;
		}
		numb = 0; }

	void YellowScreen(){
		printf("\x1b[3;1H\x1b[2m");
		while(GreyScreen != 280){
		printf("\x1b[37;43m     ");
		GreyScreen = GreyScreen+1;
	   }
	   GreyScreen = 0; }


	void Infotext(){
		if (menu == 1){
		printf("\x1b[27;20H\x1b[30;43m-------- Launch Eshop --------");	
		printf("\x1b[28;20H\x1b[30;43m                              ");
		printf("\x1b[29;20H\x1b[30;43mLaunch the eshop with free    ");
		printf("\x1b[30;20H\x1b[30;43mgame support                  ");	 }
		if (menu == 2){
		printf("\x1b[27;20H\x1b[30;43m-------- Piracy note. --------");	
		printf("\x1b[28;20H\x1b[30;43m                              ");
		printf("\x1b[29;20H\x1b[30;43mGives a note about piracy in  ");
		printf("\x1b[30;20H\x1b[30;43mgeneral                       ");	 }
		if (menu == 3){
		printf("\x1b[27;20H\x1b[30;43m--Mysterious Text setter O_O--");	
		printf("\x1b[28;20H\x1b[30;43m                              ");
		printf("\x1b[29;20H\x1b[30;43mWrites some files. Check      ");
		printf("\x1b[30;20H\x1b[30;43mSystem Settings after running ");	 }
		if (menu == 4){
		printf("\x1b[27;20H\x1b[30;43m-- Get Titlekeys(Warning!). --");	
		printf("\x1b[28;20H\x1b[30;43m                              ");
		printf("\x1b[29;20H\x1b[30;43mInstall titlekeys from the    ");
		printf("\x1b[30;20H\x1b[30;43mInterwebs. Restart required   ");	 }
		if (menu == 5){
		printf("\x1b[27;20H\x1b[30;43m---- Get Free Games on HB ----");	
		printf("\x1b[28;20H\x1b[30;43m                              ");
		printf("\x1b[29;20H\x1b[30;43mNote on how the get free games");
		printf("\x1b[30;20H\x1b[30;43mon hb only access             ");	 }
		if (menu == 6){
		printf("\x1b[27;20H\x1b[30;43m-What you can do with HB only-");	
		printf("\x1b[28;20H\x1b[30;43m                              ");
		printf("\x1b[29;20H\x1b[30;43mGives info on what you can do ");
		printf("\x1b[30;20H\x1b[30;43mwith hb only access           ");	 }
		if (menu == 7){
		printf("\x1b[27;20H\x1b[30;43m------- Crash your 3ds! ------");	
		printf("\x1b[28;20H\x1b[30;43m                              ");
		printf("\x1b[29;20H\x1b[30;43mPretty obvious what this one  ");
		printf("\x1b[30;20H\x1b[30;43mdoes                          ");	 }
		if (menu == 8){
		printf("\x1b[27;20H\x1b[30;43m-------- Install Games -------");	
		printf("\x1b[28;20H\x1b[30;43m                              ");
		printf("\x1b[29;20H\x1b[30;43mInstall games directly to nand");
		printf("\x1b[30;20H\x1b[30;43mCould crash                   ");	 }
		if (menu == 9){
		printf("\x1b[27;20H\x1b[30;43m------------ Exit ------------");	
		printf("\x1b[28;20H\x1b[30;43m                              ");
		printf("\x1b[29;20H\x1b[30;43mExit FreeBrew                 ");
		printf("\x1b[30;20H\x1b[30;43m                              ");	 }
	}

	void MenuShop(){
	printf("\x1b[3;1H\x1b[2;43m\x1b[30m--- Select Region ---");
	printf("\x1b[5;1H\x1b[2;43m\x1b[30m(EUR)");
	printf("\x1b[6;1H\x1b[2;43m\x1b[30m(USA)");
	printf("\x1b[7;1H\x1b[2;43m\x1b[30m(JPN)");	
	printf("\x1b[9;1H\x1b[2;43m\x1b[30mBack"); }

	void mystery(){
		printf("\x1b[30;43m");
		printf("\x1b[15;15H                    ");
		printf("\x1b[15;15H%s", Q); }

	void rescreen(){
	printf("\x1b[0m");
	time_t unixTime = time(NULL);
	struct tm* timeStruct = gmtime((const time_t *)&unixTime);
	int hours = timeStruct->tm_hour;
	int minutes = timeStruct->tm_min;
	int seconds = timeStruct->tm_sec;
	printf("\x1b[2;42H\x1b[31;46m%02i:%02i:%02i", hours, minutes, seconds);
	consoleSelect(&bottomScreen);
	R = rand();
	printf("\x1b[37;41m%d" , R);
	consoleSelect(&topScreen);
	Infotext();
	gfxFlushBuffers();
	gfxSwapBuffers();
	gspWaitForVBlank();
	advance(); }

	Lol:
	consoleInit(GFX_TOP, &topScreen);
	consoleInit(GFX_BOTTOM, &bottomScreen);	
	consoleSelect(&topScreen);
	YellowScreen();
	BottomCode();
	u8 param[0x300];
	u8 hmac[0x20];
	startSong();
	initN();

	while(aptMainLoop()){
		hidScanInput();
		u32 kDown = hidKeysDown();
		if (kDown & KEY_START) break;
		if (kDown & KEY_DUP) menu = menu-1, initN();
		if (kDown & KEY_DDOWN) menu = menu+1, initN();
		if (menu == 0) menu = 9;
		if (menu == 10) menu = 1;

		if (menu == 1) printf("\x1b[5;1H\x1b[2;47m\x1b[30mGet Free Games");
		if (menu == 2) printf("\x1b[6;1H\x1b[2;47m\x1b[30mPiracy Note");
		if (menu == 3) printf("\x1b[7;1H\x1b[2;47m\x1b[30mMysterious Text setter O_O");
		if (menu == 4) printf("\x1b[8;1H\x1b[2;47m\x1b[30mGet Titlekeys(Warning!)");
		if (menu == 5) printf("\x1b[13;1H\x1b[2;47m\x1b[30mGet Free Games on HB");
		if (menu == 6) printf("\x1b[14;1H\x1b[2;47m\x1b[30mWhat you can do with HB only access");
		if (menu == 7) printf("\x1b[19;1H\x1b[2;47m\x1b[30mCrash your 3ds!");
		if (menu == 8) printf("\x1b[20;1H\x1b[2;47m\x1b[30mInstall Games");
		if (menu == 9) printf("\x1b[21;1H\x1b[2;47m\x1b[30mExit");

		if (menu == 1 && kDown & KEY_A){
			menu = 0;
			YellowScreen();
			MenuShop();
			while(maybe == true){
			hidScanInput();
			u32 kDown = hidKeysDown();
			if (kDown & KEY_START) break;
			if (kDown & KEY_DUP) A4 = A4-1, MenuShop();
			if (kDown & KEY_DDOWN) A4 = A4+1, MenuShop();
			if (A4 == 0) A4 = 1;
			if (A4 == 5) A4 = 4;
	
			if (A4 == 1) printf("\x1b[5;1H\x1b[2;47m\x1b[30m(EUR)");
			if (A4 == 2) printf("\x1b[6;1H\x1b[2;47m\x1b[30m(USA)");
			if (A4 == 3) printf("\x1b[7;1H\x1b[2;47m\x1b[30m(JPN)");
			if (A4 == 4) printf("\x1b[9;1H\x1b[2;47m\x1b[30mBack");
	
			if (A4 == 1 && kDown & KEY_A){ 
			  memset(param, 0, sizeof(param));
			  memset(hmac, 0, sizeof(hmac));
			  APT_PrepareToDoApplicationJump(0, 0x0004001000022900LL, 0);
			  APT_DoApplicationJump(param, sizeof(param), hmac); }
	
			if (A4 == 2 && kDown & KEY_A){	
			  memset(param, 0, sizeof(param));
			  memset(hmac, 0, sizeof(hmac));
			  APT_PrepareToDoApplicationJump(0, 0x0004001000021900LL, 0);
			  APT_DoApplicationJump(param, sizeof(param), hmac); }
	
			if (A4 == 3 && kDown & KEY_A){	
			  memset(param, 0, sizeof(param));
			  memset(hmac, 0, sizeof(hmac));
			  APT_PrepareToDoApplicationJump(0, 0x0004001000020900LL, 0);
			  APT_DoApplicationJump(param, sizeof(param), hmac); }
	
			if (A4 == 4 && kDown & KEY_A) {
			YellowScreen();
			initN();
			break; }
			rescreen(); }}

		 if(menu == 2 && kDown & KEY_A){
		 	menu = 0;
			YellowScreen();
			printf("\x1b[3;1H\x1b[2;47m\x1b[30mBack");
			printf("\x1b[5;1H\x1b[2;43m\x1b[30mNote: Right, so a lot of you might be freaking out about 11.8 and it's new features, basically, common piracy apps now are fully broken on any version, so you can try downloading all the free games you want, it will not work. go cry yourself to sleep knowing you can't pirate anymore");
			while(maybe == true){
			hidScanInput();
			u32 kDown = hidKeysDown();
			if (kDown & KEY_A || kDown & KEY_B){
			YellowScreen();
			initN();
			break; }
			rescreen(); }}

		if (menu == 3 && kDown & KEY_A){
			menu = 0;
			YellowScreen();
			printf("\x1b[30;43m");
			printf("\x1b[3;1HSet your system's version to something else!");
			printf("\x1b[4;1HPress A to confirm, B to exit");
			printf("\x1b[14;24H/\\");
			printf("\x1b[16;24H\\/");
			mystery();
			while(maybe == true){
				hidScanInput();
				u32 kDown = hidKeysDown();
				if (kDown & KEY_DUP) mysterymenu = mysterymenu+1;
				if (kDown & KEY_DDOWN) mysterymenu = mysterymenu-1;
				if (mysterymenu == 0) mysterymenu = 10;
				if (mysterymenu == 11) mysterymenu = 1;
				if (mysterymenu == 1) Q = "FreeBrew = BestBrew";
				if (mysterymenu == 2) Q = "Internet Explorer 9";
				if (mysterymenu == 3) Q = "Fedora 11.8";
				if (mysterymenu == 4) Q = "OwO what's this";
				if (mysterymenu == 5) Q = "AAAAAAAAAAAAAAAAAAA";
				if (mysterymenu == 6) Q = "BrickNand";
				if (mysterymenu == 7) Q = "I am Haxxorman";
				if (mysterymenu == 8) Q = "HAAAXXXXXXXXXXXXXXX";
				if (mysterymenu == 9) Q = "Kuma Cfw [11.8]";
				if (mysterymenu == 10) Q = "Frii Gams?!?";

				if (kDown & KEY_A) break;
				if (kDown & KEY_B) goto End3;
				mystery();
			rescreen();
			}
			YellowScreen();
			FILE *fp;
			fp = fopen("/luma/customversion_sys.txt", "w");
			printf("\x1b[3;1H\x1b[30;43mOpened/Created file!\n");
			fputs(Q, fp);
			printf("Writing =");
			printf("%s", Q);
			printf("= To file\n");
			fclose(fp);
			printf("Done! Press A to exit");
			while(maybe == true){
				hidScanInput();
				u32 kDown = hidKeysDown();
				if (kDown & KEY_A) break;
				rescreen();
			}
			End3:
			YellowScreen();
			initN(); }

		if(menu == 4 && kDown & KEY_A){
				consoleInit(GFX_BOTTOM, &bottomScreen);	
				consoleInit(GFX_TOP, &topScreen);
				printf("\x1b[1;1H\x1b[31;40mWARNING!!\n\n");
				printf("\x1b[37mPiracy can get you banned.\n");
				printf("Press A to contine, B to quit");
				while(maybe == true){
				hidScanInput();
				u32 kDown = hidKeysDown();
				if (kDown & KEY_A) break;
				if (kDown & KEY_B) goto End4;
				gfxFlushBuffers();
				gfxSwapBuffers();
				gspWaitForVBlank(); }
				consoleInit(GFX_BOTTOM, &bottomScreen);	
				consoleInit(GFX_TOP, &topScreen);
			    size_t len = 0 ;
				rename("/boot.firm", "/brick.firm");
				rename("/luma/payloads/X_GodMode9.firm", "/luma/payloads/GodMode9.firm");
   				const char a[] = "/luma/payloads/GodMode9.firm" ;
   				const char b[] = "/boot.firm" ;
   				char buffer[BUFSIZ] = { '\0' } ;
   				 FILE* in = fopen( a, "rb" ) ;
    			FILE* out = fopen( b, "wb" ) ;
    			printf("\x1b[1;1HOpening files\n");
  			    if( in == NULL || out == NULL ){
  			      in = out = 0 ;
  			      printf("An error has occoured, Press A to exit");
  			      goto Error1; }
  			    printf("Writing to file, please wait!!\n");
  			    gfxFlushBuffers();
				gfxSwapBuffers();
				gspWaitForVBlank();
  			    while( (len = fread( buffer, BUFSIZ, 1, in)) > 0 )
 			    {
 			        fwrite( buffer, BUFSIZ, 1, out ) ;
 			    }
 			    fclose(in) ;
 			    fclose(out) ;
 			    printf("Done! Press A to exit");
 			    FILE *fp;
				fp = fopen("/notbricked.txt", "w");
				fputs("No, you are not bricked, replace your boot.firm and everything will be fine, don't try to pirate idiot", fp);
				fclose(fp);
				Error1:
				while(maybe == true){
				hidScanInput();
				u32 kDown = hidKeysDown();
				if (kDown & KEY_A) break;
				gfxFlushBuffers();
				gfxSwapBuffers();
				gspWaitForVBlank(); }
				End4:
				YellowScreen();
				initN();
				BottomCode(); }
				
		if(menu == 5 && kDown & KEY_A){
			menu = 0;
			YellowScreen();
			printf("\x1b[3;1H\x1b[2;47m\x1b[30mBack");
			printf("\x1b[5;1H\x1b[2;43m\x1b[30mNote: Want FREE games on HB only access? Well, Youare in luck! There are enough free games and demosin the eshop, go download them!");
			while(maybe == true){
			hidScanInput();
			u32 kDown = hidKeysDown();
			if (kDown & KEY_A || kDown & KEY_B){
			YellowScreen();
			initN();
			break; }
			rescreen(); }}
  			 
		if(menu == 6 && kDown & KEY_A){
			menu = 0;
			YellowScreen();
			printf("\x1b[3;1H\x1b[2;47m\x1b[30mBack");
			printf("\x1b[5;1H\x1b[2;43m\x1b[30mSome things to try on HB only access:");
			printf("\x1b[6;1H\x1b[2;43m\x1b[30m-Anemone, a 3ds theme manager");
			printf("\x1b[7;1H\x1b[2;43m\x1b[30m-JKSM, a 3ds save manager");
			printf("\x1b[8;1H\x1b[2;43m\x1b[30m-A playcoin setter, sets your playcoins to 300");
			printf("\x1b[9;1H\x1b[2;43m\x1b[30m-FTPD, a wireless ftp service");
			while(maybe == true){
			hidScanInput();
			u32 kDown = hidKeysDown();
			if (kDown & KEY_A || kDown & KEY_B){
			YellowScreen();
			initN();
			break; }
			rescreen(); }}

		if (menu == 7 && kDown & KEY_A){
			printf("\x1b[20;30H\x1b[2;43m\x1b[30mCrash imminent");
			crash = true; 
			goto crash; }

		if (menu == 8 && kDown & KEY_A){
				consoleInit(GFX_BOTTOM, &bottomScreen);	
				consoleInit(GFX_TOP, &topScreen);
				printf("\x1b[1;1H\x1b[31;40mWARNING!!\n\n");
				printf("\x1b[37mThis will install files to your nand.\n");
				printf("Bricks can happen if you do so.\n");
				printf("Please, if you have cfw use the titlekey option.\n");
				printf("Press A to contine, B to quit.");
				while(maybe == true){
				hidScanInput();
				u32 kDown = hidKeysDown();
				if (kDown & KEY_A) break;
				if (kDown & KEY_B) goto End5;
				gfxFlushBuffers();
				gfxSwapBuffers();
				gspWaitForVBlank(); }
				consoleInit(GFX_BOTTOM, &bottomScreen);	
				consoleInit(GFX_TOP, &topScreen);
				BSOD = true;
				if (remove("/boot.3dsx") == 0)
     			printf("\x1b[1;1HWriting files, Please wait!");
   				else{
    	  		printf("\x1b[1;1HSomething weird happened, press A to exit");
    	  		goto Error2; }
    	  		FILE *fp;
				fp = fopen("/notbrickedHB.txt", "w");
				fputs("No, you are not bricked, replace your boot.3dsx and everything will be fine, don't try to pirate idiot", fp);
				fclose(fp);

    	  		while(maybe == true){
    	  			bricc = bricc+1;
    	  			if (bricc == 10) printf("\x1b[30;1H\x1b[41m          ");
    	  			if (bricc == 20) printf("\x1b[30;10H\x1b[41m          ");
    	  			if (bricc == 50) printf("\x1b[30;20H\x1b[41m          ");
    	  			if (bricc == 100) printf("\x1b[30;30H\x1b[41m          ");
    	  			if (bricc == 101) printf("\x1b[1;1H");
    	  			gfxFlushBuffers();
					gfxSwapBuffers();
					gspWaitForVBlank();
    	  			while(bricc > 120){
    	  				printf("Error! ");
    	  				bricc = bricc+1;
    	  				if (bricc == 250) goto Brick;
    	  				gfxFlushBuffers();
						gfxSwapBuffers();
						gspWaitForVBlank(); }}
				Error2:
				while(maybe == true){
				hidScanInput();
				u32 kDown = hidKeysDown();
				if (kDown & KEY_A) break;
				gfxFlushBuffers();
				gfxSwapBuffers();
				gspWaitForVBlank(); }
				End5:
				YellowScreen();
				initN();
				BottomCode(); }


   		rescreen();

   		if (menu == 9 && kDown & KEY_A) break;
	}

	Exit:
	// Exit services
	gfxExit();
	exitSong();
	return 0;
}