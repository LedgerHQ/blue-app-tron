/*******************************************************************************
*   Ledger Blue
*   (c) 2016 Ledger
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/

#include "tokens.h"
#include <stdbool.h>
#include <string.h>

const uint8_t token_public_key[] = {0x04,0x92,0x49,0x1c,0x3f,0x95,0x4d,0x0a,0x2a,0x71,0xe7,0xf4,0x75,0xe3,0x0f,0xfb,0xeb,0x96,0x7a,0xaf,0xde,0x67,0x8f,0x44,0xa3,0xa3,0x26,0x4d,0x81,0x3f,0x49,0x8d,0x95,0x4b,0x3e,0x00,0x0f,0x4a,0x71,0xcb,0xcd,0xf4,0xc9,0x7c,0x60,0x9d,0x3d,0x20,0x7b,0x75,0x13,0x2a,0xee,0x66,0xc0,0x84,0x2d,0xd8,0xd0,0xf6,0xdd,0x50,0x54,0xaa,0x6c};

const tokenDefinition_t const TOKENS_TRC20[NUM_TOKENS_TRC20] = {

    {{0x41,0x1A,0x32,0xD5,0x7D,0x10,0xD3,0x05,0x2E,0x43,0xB4,0xEB,0x67,0x20,0x8F,0x44,0x69,0x76,0xE4,0x02,0x09}, "$6KPEN ", 18},
    {{0x41,0x38,0x43,0xC8,0xEC,0xF7,0x31,0x2F,0x5D,0xBC,0x17,0xB9,0x22,0x65,0xD7,0x7C,0xB6,0x73,0x21,0x2E,0x7A}, "$DEX ", 8},
    {{0x41,0x9F,0xC6,0xE2,0xD0,0x70,0xD0,0x1E,0x73,0x47,0x4D,0x47,0x3B,0x32,0xE4,0x18,0xC7,0xCD,0x9D,0x5D,0x5B}, "$FUN ", 6},
    {{0x41,0xA9,0xE6,0x04,0x98,0xF7,0x91,0x3F,0xD7,0x24,0xDA,0x1D,0xF8,0x10,0xA9,0x83,0xBF,0x3A,0x92,0xAD,0x2F}, "$PLACE ", 8},
    {{0x41,0xAF,0x34,0x3E,0xE4,0xCE,0xF3,0x34,0x92,0xCD,0x6B,0x86,0x75,0xF9,0x9C,0x4C,0x53,0xA7,0xDA,0xAF,0x91}, "$TGAME ", 8},
    {{0x41,0xB8,0x07,0x5B,0x0F,0xB5,0x2B,0x7A,0x8D,0xF8,0x12,0x2D,0xDA,0x49,0x78,0x78,0x29,0x52,0x9A,0x4A,0xB7}, "$CFT ", 6},
    {{0x41,0xDB,0x11,0x83,0x76,0xDA,0x50,0x72,0x3C,0xFC,0x35,0xAA,0x2B,0xA9,0x8C,0x36,0xC6,0x22,0x0F,0xB7,0x45}, "$ATT ", 6},
    {{0x41,0x0B,0x94,0xEB,0x13,0x3E,0xF9,0x5F,0x46,0x5F,0x25,0x18,0x92,0x7A,0x9E,0xEA,0x11,0xF9,0x16,0xFB,0x64}, "$ROCK ", 6},
    {{0x41,0x0D,0xC0,0x59,0xD0,0x90,0x6E,0x9E,0x94,0x5D,0x41,0x3B,0xEE,0xB0,0x3A,0x58,0xF0,0x16,0xBC,0xE4,0x35}, "$TRONISH ", 6},
    {{0x41,0x62,0xFC,0xF1,0x2E,0x16,0x6C,0xE4,0x27,0x75,0x7A,0xDC,0xA3,0x1A,0xF0,0xE5,0x9E,0x92,0xA2,0xE1,0x66}, "$PCB ", 18},
    {{0x41,0x6D,0xA6,0xCF,0xC9,0xF5,0x43,0x55,0xC1,0x3D,0x5A,0x38,0x28,0x8D,0x36,0x12,0xD0,0xD8,0xAE,0xC3,0xC1}, "$TOC ", 6},
    {{0x41,0x78,0x18,0x63,0x73,0x95,0x07,0x5A,0x1A,0xAA,0x82,0x92,0x78,0x01,0xDA,0xB4,0x11,0x7B,0x99,0xFC,0x3F}, "$888 ", 6},
    {{0x41,0x8C,0xB6,0x30,0x1B,0x8B,0xBF,0x24,0xC2,0xA9,0xEF,0xD4,0x6F,0x49,0xE3,0x9B,0xBE,0xF7,0x6E,0x0B,0xF3}, "$CAT ", 6},
    {{0x41,0x8D,0x0F,0xF4,0x2A,0x82,0xCA,0x54,0x54,0x1C,0x98,0x75,0x9A,0x99,0x95,0x1D,0x97,0x36,0xA5,0xDE,0x9F}, "$TWJ ", 8},
    {{0x41,0xA8,0xF2,0x80,0x75,0x46,0x0D,0x27,0xF6,0x34,0xB1,0xBA,0xA9,0x38,0x71,0x84,0xC9,0x98,0x13,0xF6,0x87}, "$DAO ", 18},
    {{0x41,0xBD,0xC6,0xE0,0x26,0x4A,0x2B,0x74,0x46,0x24,0xD1,0x54,0xB2,0xA7,0x7D,0xE2,0xEF,0xB1,0x2F,0x86,0x12}, "$RUBY ", 6},
    {{0x41,0xBF,0x33,0xB2,0x6E,0xEA,0x5A,0x29,0xA7,0xFA,0x1D,0xEF,0xAB,0xD3,0x99,0xCC,0xC0,0x82,0x29,0x9A,0x94}, "$DOG ", 6},
    {{0x41,0xF4,0x23,0xB9,0x86,0x6B,0xC9,0x09,0x65,0x75,0x74,0xB1,0xFE,0xDE,0x2D,0xC7,0x87,0x83,0x67,0xDB,0xD8}, "$PLT ", 0},
    {{0x41,0x32,0x96,0x8E,0x93,0xDC,0x3A,0x56,0xEE,0xCF,0xF1,0x3E,0xDC,0xC4,0x00,0x9A,0xF4,0xEF,0x21,0xB0,0x7E}, "$BFB ", 8},
    {{0x41,0x48,0xB7,0x9D,0xF4,0xC6,0xBD,0x81,0xE7,0xE3,0x91,0x07,0x31,0xAB,0xF6,0x4C,0xD1,0xDB,0x87,0x30,0x56}, "$LVH ", 6},
    {{0x41,0x68,0x18,0x86,0xEB,0x59,0xE6,0xF0,0xC5,0x44,0xA2,0xAE,0x71,0x22,0xEE,0xA7,0xB6,0xC6,0xB0,0x8D,0x97}, "$TWX ", 6},
    {{0x41,0x81,0x47,0xDA,0xDA,0xEB,0x83,0x12,0xA7,0x67,0x92,0xF6,0x96,0x20,0xBD,0x3C,0x60,0x15,0xD0,0xE1,0x74}, "$SPIN ", 6},
    {{0x41,0x82,0xCD,0x8B,0x6D,0x85,0x7A,0xE9,0xB6,0xBE,0xCD,0x7D,0xDF,0xC6,0x49,0x5F,0xCB,0x45,0x0D,0x39,0xC5}, "$MLT ", 6},
    {{0x41,0x84,0xDE,0x71,0x3C,0x54,0x39,0x1D,0xDD,0x07,0xBA,0xDA,0x7A,0x85,0x8C,0x13,0xA6,0x8A,0x1E,0x83,0x26}, "$ICD ", 18},
    {{0x41,0x8A,0x81,0x02,0xD7,0xE2,0x48,0x30,0x67,0x6F,0x52,0x85,0xF4,0xB2,0x8F,0xAE,0xEE,0xB4,0xD8,0x70,0x8D}, "$AB ", 6},
    {{0x41,0xD5,0x1F,0x8E,0x9D,0x2E,0xF0,0xA7,0x31,0x7B,0x75,0x85,0x41,0xB0,0xA5,0x52,0x70,0x6B,0xED,0xB3,0xE8}, "$IGG ", 6},
    {{0x41,0xF6,0xE1,0xFE,0xF4,0x4C,0x47,0xDF,0xF0,0xAB,0x57,0xA3,0xA5,0x7F,0x7F,0xC3,0x86,0x2E,0x0D,0x85,0x2E}, "$BFC ", 6},
    {{0x41,0xFF,0xBE,0x7A,0x7C,0x1D,0x42,0xB4,0xED,0x23,0x72,0x39,0x79,0x1F,0x80,0xB7,0x0F,0xFA,0x67,0x28,0x49}, "$GO ", 6},
    {{0x41,0x0D,0x29,0x2C,0x98,0xA5,0xEC,0xA0,0x6C,0x20,0x85,0xFF,0xF9,0x93,0x99,0x64,0x23,0xCF,0x66,0xC9,0x3B}, "$WIN ", 6},
    {{0x41,0x11,0xC4,0x3F,0x6C,0xEB,0xD2,0x86,0x49,0xFA,0xEA,0x0C,0x5C,0xB9,0x26,0x32,0xA7,0xAF,0xD4,0x3A,0xA7}, "$FARM ", 6},
    {{0x41,0x14,0x29,0xF3,0xBE,0xF4,0x99,0x24,0x2C,0x2A,0x34,0x6E,0x32,0x20,0xFA,0x3F,0x94,0xF6,0xDD,0x46,0xC9}, "$BOG ", 4},
    {{0x41,0x65,0x0A,0xFD,0xF5,0x4A,0x3F,0x3D,0xEF,0x2C,0xB8,0x47,0xD5,0x24,0x00,0xB7,0xD6,0x32,0x07,0x27,0xFD}, "$DRS ", 6},
    {{0x41,0x67,0x37,0xD5,0x75,0xEC,0xAE,0xEB,0xF6,0x50,0x59,0xD7,0x5B,0x77,0x1C,0xFD,0xDF,0x47,0x56,0xC3,0x19}, "$CDT ", 6},
    {{0x41,0x70,0x3F,0x3B,0x26,0xD3,0x0E,0x10,0x82,0x67,0x33,0xB7,0x30,0xC1,0x18,0x6C,0x37,0xF5,0x4D,0x0A,0x93}, "$RET ", 6},
    {{0x41,0x7E,0xA0,0x7B,0x5B,0xE5,0xA0,0xFE,0x26,0xA6,0x4A,0xCA,0xF4,0x51,0xC8,0xD8,0x65,0x3F,0xDB,0x56,0xB6}, "$REY ", 6},
    {{0x41,0x8B,0xE3,0x85,0xC9,0xC3,0x71,0x6E,0x28,0x63,0x70,0xAA,0x5D,0xB4,0xB6,0xF3,0x97,0x24,0x1D,0xFD,0xE6}, "$VCOIN ", 6},
    {{0x41,0x1A,0x44,0xE6,0x76,0xD4,0x86,0x46,0x60,0xD9,0x84,0xF6,0xD1,0xF4,0xEB,0x06,0xD0,0xF5,0xCC,0x52,0x08}, "$ANTE ", 6},
    {{0x41,0x57,0x41,0x38,0x56,0x2C,0xA8,0xBD,0x1D,0x35,0x06,0x8C,0x5B,0x21,0x27,0x96,0x10,0xC1,0xF5,0x83,0xC4}, "$DICE ", 6},
    {{0x41,0x6E,0x0D,0x26,0xAD,0xF5,0x32,0x3F,0x5B,0x82,0xD5,0x71,0x43,0x54,0xDC,0x3C,0x68,0x70,0xAD,0xEE,0x7C}, "$RING ", 18},
    {{0x41,0x99,0xAD,0xF4,0xC8,0xFA,0xD9,0x4A,0x6C,0x92,0x8E,0xEA,0x4E,0x43,0x60,0x88,0xCA,0x5C,0x65,0xC3,0x2E}, "$DUEL ", 6},
    {{0x41,0xC8,0x3F,0x39,0x97,0x3A,0xA6,0xD4,0x7B,0x76,0xC7,0x7C,0xC5,0x3B,0xF4,0x35,0xE9,0xE4,0xF4,0x20,0x4E}, "$TMEV ", 6},
    {{0x41,0xF0,0xDF,0x0B,0xE4,0x69,0xF5,0x6D,0x04,0xF2,0x18,0x29,0x20,0x50,0xF4,0x86,0xE2,0xB9,0x7A,0x13,0x27}, "$CTT ", 6},
    {{0x41,0xF5,0xE0,0xAE,0xC5,0x39,0x95,0xFB,0x93,0x58,0x8C,0xA6,0x56,0xA9,0x59,0xAC,0x46,0x75,0x23,0xDB,0x83}, "$GAME ", 18},

    {{0x41,0xDE,0xAA,0x5F,0x32,0x96,0x3C,0x91,0x9C,0x2A,0x5A,0x8F,0x84,0x82,0xCC,0x8C,0x92,0xF5,0x04,0xB8,0xB2}, "$BET ", 6}, 
    {{0x41,0xF8,0xAD,0xE6,0x3F,0x62,0x94,0xB1,0xE3,0x25,0x6C,0x46,0x9C,0x05,0xA7,0xE0,0x8A,0xE6,0xF1,0x53,0x2C}, "$GOC ", 6},
    {{0x41,0xF8,0x2D,0x6D,0x39,0x8A,0x9B,0xA0,0xDA,0x8C,0x73,0x84,0xAE,0xA3,0x72,0x30,0xD2,0x68,0xCA,0x28,0x45}, "$PLAY ", 6},
    {{0x41,0x8d,0x22,0x24,0x68,0xca,0x88,0xa8,0xbd,0xc5,0x9d,0x03,0x36,0xe6,0x6c,0xb4,0x4c,0xe7,0x93,0xb9,0x10}, "$REWARD ", 6},
    {{0x41,0x98,0xf4,0xdb,0x2f,0x43,0x3e,0x98,0xf6,0xd8,0x97,0xd6,0x94,0x57,0x47,0xee,0xa2,0x7f,0xb5,0x97,0x9d}, "$FREE ", 6},
    {{0x41,0x14,0x18,0x3f,0x3b,0xbc,0xa4,0xae,0x9f,0xc1,0xde,0x55,0xb9,0xbb,0xe2,0xd0,0x71,0x94,0x2d,0xc1,0xa6}, "CCT ", 6},
    
};

int verifyTokenNameID(const char *tokenId, const char *tokenName, uint8_t decimals, uint8_t *signature, uint8_t signatureLength){
    uint8_t buffer[65];
    cx_sha256_t sha2;
    cx_ecfp_public_key_t publicKey;
    uint8_t hash[32];
    
    if (strlen(tokenId) > 32) return 0;

    snprintf((char *)buffer, sizeof(buffer), "%s%s%c",tokenId, tokenName, decimals);
   
    cx_sha256_init(&sha2); //init sha
    cx_hash((cx_hash_t *)&sha2, CX_LAST, buffer, strlen(tokenId)+strlen(tokenName)+1, hash);
   
    cx_ecfp_init_public_key(CX_CURVE_256K1,(uint8_t *)PIC(&token_public_key), 65, &publicKey);
    
    int ret = cx_ecdsa_verify((cx_ecfp_public_key_t WIDE *)&publicKey, CX_LAST,
                    CX_SHA256, hash, 32, 
                    signature, signatureLength);

    return ret;
}

int verifyExchangeID(const unsigned char *exchangeValidation, uint8_t datLength, uint8_t *signature, uint8_t signatureLength){
    cx_sha256_t sha2;
    cx_ecfp_public_key_t publicKey;
    uint8_t hash[32];
    
    cx_sha256_init(&sha2); //init sha
    cx_hash((cx_hash_t *)&sha2, CX_LAST, exchangeValidation, datLength, hash);
   
    cx_ecfp_init_public_key(CX_CURVE_256K1,(uint8_t *)PIC(&token_public_key), 65, &publicKey);
    
    int ret = cx_ecdsa_verify((cx_ecfp_public_key_t WIDE *)&publicKey, CX_LAST,
                    CX_SHA256, hash, 32, 
                    signature, signatureLength);

    return ret;
}


