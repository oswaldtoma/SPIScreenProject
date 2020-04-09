//
// Created by Oswald on 09.04.2020.
//

#include <stdint.h>
#include <wchar.h>

#ifndef SPISCREENPROJECT_FONTTIMESNEWROMAN_10PT_H
#define SPISCREENPROJECT_FONTTIMESNEWROMAN_10PT_H

    // Font data for Times New Roman 10pt
    typedef struct
    {
        uint8_t characterWidth;
        uint16_t characterOffsetBytes;
    }FONT_CHAR_INFO;

    typedef struct
    {
        uint8_t characterHeight;
        wchar_t startCharacter;
        uint8_t endCharacter;
        uint8_t spaceCharWidth;
        FONT_CHAR_INFO *characterDescriptionArray;
        uint8_t *characterBitmapArray;
    }FONT_INFO;

const uint8_t timesNewRoman_10ptBitmaps[];
const FONT_INFO timesNewRoman_10ptFontInfo;
const FONT_CHAR_INFO timesNewRoman_10ptDescriptors[];

#endif //SPISCREENPROJECT_FONTTIMESNEWROMAN_10PT_H
