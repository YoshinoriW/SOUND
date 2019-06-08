#pragma once
#ifndef _CONSTANTS_H_
#define _CONSTANTS_H_
#define WIN32_LEAN_AND_MEAN

#include <windows.h>

#define SAFE_DELETE(ptr)       { if (ptr) { delete (ptr); (ptr)=NULL; } }

//流すBGMのファイル場所及び表題取得

const char WAVE_BANK[] = "data/Win/Wave Bank.xwb";
const char SOUND_BANK[] = "data/Win/Sound Bank.xsb";


const char TITLE_BGM[] = "タイトル";
const char ENTER_SE[] = "決定SE";


#endif