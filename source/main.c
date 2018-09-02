#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <3ds.h>
#include <citro3d.h>
#include <citro2d.h>
#include <unistd.h>

#include "sprites.h"

#include "music.h"

float A = 1;
int haxstate = 0, menu = 1, X = 0, Y = 0, options = 0, region = 0, tools = 0, R = 0, Xsnek = 15, Ysnek = 15, Xsnack = 15, Ysnack = 15, score = 0, direction = 1;
bool loop = true, debug = false, music = true;

int main(int argc, char* argv[]) {
	gfxInitDefault();

    C3D_Init(C3D_DEFAULT_CMDBUF_SIZE);
    C2D_Init(C2D_DEFAULT_MAX_OBJECTS);
    C2D_Prepare();
    C3D_RenderTarget* top = C2D_CreateScreenTarget(GFX_TOP, GFX_LEFT);
    romfsInit();
    C2D_SpriteSheet spritesheet = C2D_SpriteSheetLoad("romfs:/gfx/sprites.t3x");
    romfsExit();
    u32 backgroundColor = C2D_Color32f(0,0,0,1);
    C3D_FrameBegin(C3D_FRAME_SYNCDRAW);
    C2D_SceneBegin(top);
    C2D_TargetClear(top, backgroundColor);
    // (horizontal pixels, vertical pixels, idk, idk, horizontal stretch, vertical stretch)
    C2D_DrawImageAt(C2D_SpriteSheetGetImage(spritesheet, sprites_boottop_idx), 0, 0, 0.5f, NULL, 1.0f, 1.0f);
	C3D_FrameEnd(0);
    gspWaitForVBlank();
    //40, 167 HV begin
    //358, 193 HV end
    			u8 regionCode;
	            u64 shopID;
	            CFGU_SecureInfoGetRegion(&regionCode);
	            switch (regionCode)
	            {
	            case 0:
	            	shopID = 0x0004001000020900;
	            	region = 1;
	            	//jpn
	            	break;
	            case 1:
	            	shopID = 0x0004001000021900;
	            	region = 2;
	            	//usa
	            	break;
	            case 2:
	            	shopID = 0x0004001000022900;
	            	region = 3;
	            	//eur
	            	break;
	            default:
	            	shopID = 0x00;
	            } 



    PrintConsole bottomScreen;
    consoleInit(GFX_BOTTOM, &bottomScreen);
    for(A = 1; A < 319; A = A+2.5){
        C3D_FrameBegin(C3D_FRAME_SYNCDRAW);
        C2D_SceneBegin(top);
        C2D_DrawImageAt(C2D_SpriteSheetGetImage(spritesheet, sprites_Loadline_idx), 40, 167, 0.5f, NULL, A, 1.0f);
        C3D_FrameEnd(0);
      	if (A == (float)26.00){
      	printf("\x1b[31mChecking boot.3dsx     -\n");
      	printf("\x1b[33mChecking boot.firm     -\n");
      	printf("\x1b[33mChecking Luma config   -\n");
      	printf("\x1b[33mChecking GodMode9.firm -\n");
      	printf("\x1b[37mChecking system compatibility -\n");
      	printf("\x1b[37mChecking System region -\n");
      	printf("\x1b[31m\x1b[30;1HRed = Homebrew,\x1b[33m Yellow = Cfw"); }

     	if (A == (float)41.00){ if ( access("/boot.3dsx", F_OK ) != -1) { printf("\x1b[1;26H\x1b[32mFile Exists!"); } else { printf("\x1b[1;26H\x1b[31mFILE MISSING!!"); } }
     	if (A == (float)101.00){ if ( access("/boot.firm", F_OK ) != -1) { printf("\x1b[2;26H\x1b[32mFile Exists!"); } else { printf("\x1b[2;26H\x1b[31mFILE MISSING!!"); } }
     	if (A == (float)141.00){ if ( access("/luma/config.bin", F_OK ) != -1) { printf("\x1b[3;26H\x1b[32mFile Exists!"); } else { printf("\x1b[3;26H\x1b[31mFILE MISSING!!"); } }
     	if (A == (float)201.00){ if ( access("/luma/payloads/GodMode9.firm", F_OK ) != -1) { printf("\x1b[4;26H\x1b[32mFile Exists!"); } else { printf("\x1b[4;26H\x1b[31mFILE MISSING!!"); } }
	  	if (A == (float)251.00) printf("\x1b[5;33H\x1b[32mGood!");
	  	if (A == (float)276.00){ if (region == 1) printf("\x1b[6;26H\x1b[32mJPN/EUR"); if (region == 2) printf("\x1b[6;26H\x1b[32mUSA"); if (region == 3) printf("\x1b[6;26H\x1b[32mEUR"); }
        gspWaitForVBlank(); }

    svcSleepThread(1500000000);
    C3D_FrameBegin(C3D_FRAME_SYNCDRAW);
    C2D_SceneBegin(top);
    C2D_TargetClear(top, backgroundColor);
    C3D_FrameEnd(0);

    //consoleInit(GFX_BOTTOM, &bottomScreen);
    //printf("Press start to exit");

   // while (aptMainLoop()) {   
   //     hidScanInput();
   //     u32 kDown = hidKeysDown();
   //     if (kDown & KEY_START)
   //         break; // break in order to return to hbmenu
   //     gspWaitForVBlank();
   // }

    	void gensquare(){
 		R = rand();
 		R = R/60000000;
 		Xsnack = R;
 		R = rand();
 		R = R/75000000;
 		Ysnack = R;
 		score = score+1; }

    void snekgame(){
    	consoleSelect(&bottomScreen);
				hidScanInput();
				if (hidKeysHeld() & KEY_DUP) direction = 1;
				if (hidKeysHeld() & KEY_DDOWN) direction = 2;
				if (hidKeysHeld() & KEY_DLEFT) direction = 3;
				if (hidKeysHeld() & KEY_DRIGHT) direction = 4;

				if (direction == 1) Ysnek = Ysnek-1;
				if (direction == 2) Ysnek = Ysnek+1;
				if (direction == 3) Xsnek = Xsnek-1;
				if (direction == 4) Xsnek = Xsnek+1;


				consoleInit(GFX_BOTTOM, &bottomScreen);
				if (Xsnek == -1) Xsnek = 0;
				if (Xsnek == 41) Xsnek = 40;
				if (Ysnek == -1) Ysnek = 0;
				if (Ysnek == 31) Ysnek = 30;
				
				printf("\x1b[30;1H Score: %d   Press start to exit", score);
				printf("\x1b[31m\x1b[%d;%dH0", Ysnek, Xsnek);

				if (Xsnek == Xsnack && Ysnek == Ysnack) gensquare();
				printf("\x1b[32m\x1b[%d;%dH8", Ysnack, Xsnack);		


				gfxFlushBuffers();
				gspWaitForVBlank();
				gfxSwapBuffers();
				svcSleepThread(25000000); }

    void drawmain(){
    	C3D_FrameBegin(C3D_FRAME_SYNCDRAW);
    	C2D_SceneBegin(top);
    	C2D_TargetClear(top, backgroundColor);
    	C2D_DrawImageAt(C2D_SpriteSheetGetImage(spritesheet, sprites_freebrewmain_idx), 0, 0, 0.5f, NULL, 1.0f, 1.0f);
    	if (menu == 1) X = 7, Y = 68;
    	if (menu == 2) X = 106, Y = 68;
    	if (menu == 3) X = 205, Y = 68;
    	if (menu == 4) X = 303, Y = 68;
    	if (menu == 5) X = 7, Y = 141;
    	if (menu == 6) X = 106, Y = 141;
    	if (menu == 7) X = 205, Y = 141;
    	if (menu == 8) X = 303, Y = 141;
    	C2D_DrawImageAt(C2D_SpriteSheetGetImage(spritesheet, sprites_select_idx), X, Y, 0.5f, NULL, 1.0f, 1.0f);
    	C3D_FrameEnd(0);
    	if (music == true) advance();
    	gspWaitForVBlank();
    }
    consoleInit(GFX_BOTTOM, &bottomScreen);
    startSong();
	while (aptMainLoop()) {
		drawmain();
		hidScanInput();
        u32 kDown = hidKeysDown();
        if (kDown & KEY_DRIGHT) menu = menu+1;
        if (kDown & KEY_DLEFT) menu = menu-1;
        if (kDown & KEY_DDOWN && menu < 5) menu = menu+4;
        if (kDown & KEY_DUP && menu > 4) menu = menu-4;
        if (menu == 0) menu = 1;
        if (menu == 9) menu = 8;
        if (debug == true){
        	printf("\x1b[1;1H%d  ", X);
        	printf("\x1b[2;1H%d  ", Y);
        	printf("\x1b[3;1H%d", menu); }


        if (menu == 4 && kDown & KEY_A){
        	consoleInit(GFX_BOTTOM, &bottomScreen);
        	while(loop == true){
        	hidScanInput();
       		u32 kDown = hidKeysDown();
       		if (kDown & KEY_DOWN) options = 1;
       		if (kDown & KEY_UP) options = 0;
       		if (kDown & KEY_A && options == 0 && music == false){ music = true; goto go1; }
       		if (kDown & KEY_A && options == 0 && music == true) music = false;
       		if (kDown & KEY_A && options == 1 && debug == false){ debug = true; goto go1; } 
       		if (kDown & KEY_A && options == 1 && debug == true) debug = false;
       		go1:


        	C3D_FrameBegin(C3D_FRAME_SYNCDRAW);
    		C2D_SceneBegin(top);
    		C2D_TargetClear(top, backgroundColor);
    		C2D_DrawImageAt(C2D_SpriteSheetGetImage(spritesheet, sprites_freebrewblank_idx), 0, 0, 0.5f, NULL, 1.0f, 1.0f);
    		C2D_DrawImageAt(C2D_SpriteSheetGetImage(spritesheet, sprites_options_idx), 5, 17, 0.5f, NULL, 1.0f, 1.0f);
    		if (options == 0) C2D_DrawImageAt(C2D_SpriteSheetGetImage(spritesheet, sprites_arrow_idx), 117, 46, 0.5f, NULL, 1.0f, 1.0f);
    		if (options == 1) C2D_DrawImageAt(C2D_SpriteSheetGetImage(spritesheet, sprites_arrow_idx), 117, 61, 0.5f, NULL, 1.0f, 1.0f);
    		if (music == true) C2D_DrawImageAt(C2D_SpriteSheetGetImage(spritesheet, sprites_on_idx), 84, 46, 0.5f, NULL, 1.0f, 1.0f);
    		if (music == false) C2D_DrawImageAt(C2D_SpriteSheetGetImage(spritesheet, sprites_off_idx), 84, 46, 0.5f, NULL, 1.0f, 1.0f);
    		if (debug == true) C2D_DrawImageAt(C2D_SpriteSheetGetImage(spritesheet, sprites_on_idx), 84, 61, 0.5f, NULL, 1.0f, 1.0f);
    		if (debug == false) C2D_DrawImageAt(C2D_SpriteSheetGetImage(spritesheet, sprites_off_idx), 84, 61, 0.5f, NULL, 1.0f, 1.0f);
    		C3D_FrameEnd(0);
    		gspWaitForVBlank();
    		if (debug == true){
    		printf("\x1b[1;1H%d", options);
    		printf("\x1b[2;1H%d", music);
    		printf("\x1b[3;1H%d", debug); }
    		if (music == true) advance(); 
    		if (kDown & KEY_B) break; }
    		consoleInit(GFX_BOTTOM, &bottomScreen); }

    		if (menu == 6 && kDown & KEY_A){
    			//svcBreak(USERBREAK_PANIC);
    			consoleInit(GFX_BOTTOM, &bottomScreen);
    			while (loop == true){
    				hidScanInput();
       				u32 kDown = hidKeysDown();
       				if (kDown & KEY_DOWN) tools = tools+1;
       				if (kDown & KEY_UP) tools = tools-1;
       				if (tools == -1) tools = 0;
       				if (tools == 5) tools = 4;
       				if (kDown & KEY_B) break;

			C3D_FrameBegin(C3D_FRAME_SYNCDRAW);
    		C2D_SceneBegin(top);
    		C2D_TargetClear(top, backgroundColor);
    		C2D_DrawImageAt(C2D_SpriteSheetGetImage(spritesheet, sprites_freebrewblank_idx), 0, 0, 0.5f, NULL, 1.0f, 1.0f);
    		C2D_DrawImageAt(C2D_SpriteSheetGetImage(spritesheet, sprites_tools_idx), 5, 17, 0.5f, NULL, 1.0f, 1.0f);
    		if (tools == 0) C2D_DrawImageAt(C2D_SpriteSheetGetImage(spritesheet, sprites_arrow_idx), 147, 46, 0.5f, NULL, 1.0f, 1.0f);
    		if (tools == 1) C2D_DrawImageAt(C2D_SpriteSheetGetImage(spritesheet, sprites_arrow_idx), 254, 61, 0.5f, NULL, 1.0f, 1.0f);
    		if (tools == 2) C2D_DrawImageAt(C2D_SpriteSheetGetImage(spritesheet, sprites_arrow_idx), 88, 75, 0.5f, NULL, 1.0f, 1.0f);
    		if (tools == 3) C2D_DrawImageAt(C2D_SpriteSheetGetImage(spritesheet, sprites_arrow_idx), 147, 90, 0.5f, NULL, 1.0f, 1.0f);
    		if (tools == 4) C2D_DrawImageAt(C2D_SpriteSheetGetImage(spritesheet, sprites_arrow_idx), 107, 105, 0.5f, NULL, 1.0f, 1.0f);
    		C3D_FrameEnd(0);
    		gspWaitForVBlank();

    		if (music == true) advance(); 

    		if (tools == 0 && kDown & KEY_A) svcBreak(USERBREAK_PANIC);
    		if (tools == 2 && kDown & KEY_A){ while (loop == true) { snekgame(); hidScanInput(); u32 kDown = hidKeysDown(); if (kDown & KEY_START) break; } consoleInit(GFX_BOTTOM, &bottomScreen); } 
    		if (tools == 4 && kDown & KEY_A){
    				u8 param[0x300];
					u8 hmac[0x20];
					memset(param, 0, sizeof(param));
					memset(hmac, 0, sizeof(hmac));
					APT_PrepareToDoApplicationJump(0, shopID, 0);
					APT_DoApplicationJump(param, sizeof(param), hmac); } }
    		consoleInit(GFX_BOTTOM, &bottomScreen); }


    		if (menu == 7 && kDown & KEY_A){
    		consoleInit(GFX_BOTTOM, &bottomScreen);
    		while(loop == true){
    		hidScanInput();
       		u32 kDown = hidKeysDown();
       		if (kDown & KEY_B) break;
       		C3D_FrameBegin(C3D_FRAME_SYNCDRAW);
    		C2D_SceneBegin(top);
    		C2D_TargetClear(top, backgroundColor);
    		C2D_DrawImageAt(C2D_SpriteSheetGetImage(spritesheet, sprites_freebrewblank_idx), 0, 0, 0.5f, NULL, 1.0f, 1.0f);
    		C2D_DrawImageAt(C2D_SpriteSheetGetImage(spritesheet, sprites_credits_idx), 5, 17, 0.5f, NULL, 1.0f, 1.0f);
    		C3D_FrameEnd(0);
    		gspWaitForVBlank();
    		if (music == true) advance(); }
       		consoleInit(GFX_BOTTOM, &bottomScreen); }


    			


    		


//84,46
//84,61
        if (menu == 8 && kDown & KEY_A) break;
}


    C2D_SpriteSheetFree(spritesheet);
    
    C2D_Fini();
    C3D_Fini();
    exitSong();
    gfxExit();
    return 0;
}