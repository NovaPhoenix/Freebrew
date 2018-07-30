#include <3ds.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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



		while (aptMainLoop())
	{
		C = C+1;
		R = rand();
		hidScanInput();
		u32 kDown = hidKeysDown();
		if(C == 100) printf("\x1b[41m ");
		if(C == 150) printf("\x1b[41m ");
		if(C == 175) printf("\x1b[41m ");
		if(C == 225) printf("\x1b[41m ");
		if(C == 300) printf("\x1b[41m ");
		if(C == 325) printf("\x1b[41m ");
		if(C == 350) printf("\x1b[41m ");
		if(C == 375) printf("\x1b[41m ");
		if(C == 400) printf("\x1b[41m ");
		if(C == 450) printf("\x1b[41m ");
		if(C == 500) printf("\x1b[41m ");
		if(C == 550) printf("\x1b[41m ");
		if(C == 575) printf("\x1b[15;25H");
		if(C > 575)	printf("%d" , R);
		if(C == 700) printf(C);

		gfxFlushBuffers();
		gfxSwapBuffers();
		gspWaitForVBlank();
	}
	Exit:
	// Exit services
	gfxExit();
	
	return 0;
}
