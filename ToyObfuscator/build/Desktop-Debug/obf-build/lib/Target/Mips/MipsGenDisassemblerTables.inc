/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * Mips Disassembler                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper function for extracting fields from encoded instructions.
template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
    assert(startBit + numBits <= (sizeof(InsnType)*8) &&
           "Instruction field out of bounds!");
    InsnType fieldMask;
    if (numBits == sizeof(InsnType)*8)
      fieldMask = (InsnType)(-1LL);
    else
      fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
    return (insn & fieldMask) >> startBit;
}

static const uint8_t DecoderTable16[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 0, 245, 1, // Skip to: 512
/* 11 */      MCD::OPC_Decode, 234, 3, 0, // Opcode: Bimm16
/* 15 */      MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 0, 233, 1, // Skip to: 512
/* 23 */      MCD::OPC_Decode, 232, 3, 1, // Opcode: BeqzRxImm16
/* 27 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 39
/* 31 */      MCD::OPC_CheckPredicate, 0, 221, 1, // Skip to: 512
/* 35 */      MCD::OPC_Decode, 237, 3, 1, // Opcode: BnezRxImm16
/* 39 */      MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 51
/* 43 */      MCD::OPC_CheckPredicate, 0, 209, 1, // Skip to: 512
/* 47 */      MCD::OPC_Decode, 252, 1, 2, // Opcode: AddiuRxRxImm16
/* 51 */      MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 63
/* 55 */      MCD::OPC_CheckPredicate, 0, 197, 1, // Skip to: 512
/* 59 */      MCD::OPC_Decode, 207, 18, 1, // Opcode: SltiRxImm16
/* 63 */      MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 75
/* 67 */      MCD::OPC_CheckPredicate, 0, 185, 1, // Skip to: 512
/* 71 */      MCD::OPC_Decode, 210, 18, 1, // Opcode: SltiuRxImm16
/* 75 */      MCD::OPC_FilterValue, 12, 63, 0, // Skip to: 142
/* 79 */      MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 82 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 94
/* 86 */      MCD::OPC_CheckPredicate, 0, 166, 1, // Skip to: 512
/* 90 */      MCD::OPC_Decode, 240, 3, 0, // Opcode: Bteqz16
/* 94 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 106
/* 98 */      MCD::OPC_CheckPredicate, 0, 154, 1, // Skip to: 512
/* 102 */     MCD::OPC_Decode, 248, 3, 0, // Opcode: Btnez16
/* 106 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 118
/* 110 */     MCD::OPC_CheckPredicate, 0, 142, 1, // Skip to: 512
/* 114 */     MCD::OPC_Decode, 255, 1, 0, // Opcode: AddiuSpImm16
/* 118 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 130
/* 122 */     MCD::OPC_CheckPredicate, 0, 130, 1, // Skip to: 512
/* 126 */     MCD::OPC_Decode, 236, 13, 3, // Opcode: Move32R16
/* 130 */     MCD::OPC_FilterValue, 7, 122, 1, // Skip to: 512
/* 134 */     MCD::OPC_CheckPredicate, 0, 118, 1, // Skip to: 512
/* 138 */     MCD::OPC_Decode, 237, 13, 4, // Opcode: MoveR3216
/* 142 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 154
/* 146 */     MCD::OPC_CheckPredicate, 0, 106, 1, // Skip to: 512
/* 150 */     MCD::OPC_Decode, 190, 11, 1, // Opcode: LiRxImm16
/* 154 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 166
/* 158 */     MCD::OPC_CheckPredicate, 0, 94, 1, // Skip to: 512
/* 162 */     MCD::OPC_Decode, 181, 6, 1, // Opcode: CmpiRxImm16
/* 166 */     MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 178
/* 170 */     MCD::OPC_CheckPredicate, 0, 82, 1, // Skip to: 512
/* 174 */     MCD::OPC_Decode, 200, 11, 1, // Opcode: LwRxPcTcp16
/* 178 */     MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 209
/* 182 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 185 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 197
/* 189 */     MCD::OPC_CheckPredicate, 0, 63, 1, // Skip to: 512
/* 193 */     MCD::OPC_Decode, 129, 2, 5, // Opcode: AdduRxRyRz16
/* 197 */     MCD::OPC_FilterValue, 3, 55, 1, // Skip to: 512
/* 201 */     MCD::OPC_CheckPredicate, 0, 51, 1, // Skip to: 512
/* 205 */     MCD::OPC_Decode, 219, 18, 5, // Opcode: SubuRxRyRz16
/* 209 */     MCD::OPC_FilterValue, 29, 43, 1, // Skip to: 512
/* 213 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 216 */     MCD::OPC_FilterValue, 0, 63, 0, // Skip to: 283
/* 220 */     MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 223 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 235
/* 227 */     MCD::OPC_CheckPredicate, 0, 25, 1, // Skip to: 512
/* 231 */     MCD::OPC_Decode, 180, 10, 0, // Opcode: JumpLinkReg16
/* 235 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 253
/* 239 */     MCD::OPC_CheckPredicate, 0, 13, 1, // Skip to: 512
/* 243 */     MCD::OPC_CheckField, 8, 3, 0, 7, 1, // Skip to: 512
/* 249 */     MCD::OPC_Decode, 177, 10, 0, // Opcode: JrRa16
/* 253 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 265
/* 257 */     MCD::OPC_CheckPredicate, 0, 251, 0, // Skip to: 512
/* 261 */     MCD::OPC_Decode, 179, 10, 1, // Opcode: JrcRx16
/* 265 */     MCD::OPC_FilterValue, 7, 243, 0, // Skip to: 512
/* 269 */     MCD::OPC_CheckPredicate, 0, 239, 0, // Skip to: 512
/* 273 */     MCD::OPC_CheckField, 8, 3, 0, 233, 0, // Skip to: 512
/* 279 */     MCD::OPC_Decode, 178, 10, 0, // Opcode: JrcRa16
/* 283 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 295
/* 287 */     MCD::OPC_CheckPredicate, 0, 221, 0, // Skip to: 512
/* 291 */     MCD::OPC_Decode, 205, 18, 6, // Opcode: SltRxRy16
/* 295 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 307
/* 299 */     MCD::OPC_CheckPredicate, 0, 209, 0, // Skip to: 512
/* 303 */     MCD::OPC_Decode, 213, 18, 6, // Opcode: SltuRxRy16
/* 307 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 319
/* 311 */     MCD::OPC_CheckPredicate, 0, 197, 0, // Skip to: 512
/* 315 */     MCD::OPC_Decode, 203, 18, 7, // Opcode: SllvRxRy16
/* 319 */     MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 337
/* 323 */     MCD::OPC_CheckPredicate, 0, 185, 0, // Skip to: 512
/* 327 */     MCD::OPC_CheckField, 5, 6, 0, 179, 0, // Skip to: 512
/* 333 */     MCD::OPC_Decode, 239, 3, 0, // Opcode: Break16
/* 337 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 349
/* 341 */     MCD::OPC_CheckPredicate, 0, 167, 0, // Skip to: 512
/* 345 */     MCD::OPC_Decode, 218, 18, 7, // Opcode: SrlvRxRy16
/* 349 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 361
/* 353 */     MCD::OPC_CheckPredicate, 0, 155, 0, // Skip to: 512
/* 357 */     MCD::OPC_Decode, 216, 18, 7, // Opcode: SravRxRy16
/* 361 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 373
/* 365 */     MCD::OPC_CheckPredicate, 0, 143, 0, // Skip to: 512
/* 369 */     MCD::OPC_Decode, 180, 6, 6, // Opcode: CmpRxRy16
/* 373 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 385
/* 377 */     MCD::OPC_CheckPredicate, 0, 131, 0, // Skip to: 512
/* 381 */     MCD::OPC_Decode, 130, 2, 7, // Opcode: AndRxRxRy16
/* 385 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 397
/* 389 */     MCD::OPC_CheckPredicate, 0, 119, 0, // Skip to: 512
/* 393 */     MCD::OPC_Decode, 162, 14, 7, // Opcode: OrRxRxRy16
/* 397 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 409
/* 401 */     MCD::OPC_CheckPredicate, 0, 107, 0, // Skip to: 512
/* 405 */     MCD::OPC_Decode, 187, 19, 7, // Opcode: XorRxRxRy16
/* 409 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 421
/* 413 */     MCD::OPC_CheckPredicate, 0, 95, 0, // Skip to: 512
/* 417 */     MCD::OPC_Decode, 146, 14, 6, // Opcode: NotRxRy16
/* 421 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 433
/* 425 */     MCD::OPC_CheckPredicate, 0, 83, 0, // Skip to: 512
/* 429 */     MCD::OPC_Decode, 234, 13, 1, // Opcode: Mfhi16
/* 433 */     MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 464
/* 437 */     MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 440 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 452
/* 444 */     MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 512
/* 448 */     MCD::OPC_Decode, 185, 18, 2, // Opcode: SebRx16
/* 452 */     MCD::OPC_FilterValue, 5, 56, 0, // Skip to: 512
/* 456 */     MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 512
/* 460 */     MCD::OPC_Decode, 186, 18, 2, // Opcode: SehRx16
/* 464 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 476
/* 468 */     MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 512
/* 472 */     MCD::OPC_Decode, 235, 13, 1, // Opcode: Mflo16
/* 476 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 488
/* 480 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 512
/* 484 */     MCD::OPC_Decode, 239, 7, 6, // Opcode: DivRxRy16
/* 488 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 500
/* 492 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 512
/* 496 */     MCD::OPC_Decode, 240, 7, 6, // Opcode: DivuRxRy16
/* 500 */     MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 512
/* 504 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 512
/* 508 */     MCD::OPC_Decode, 145, 14, 6, // Opcode: NegRxRy16
/* 512 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 1, 20, 0, // Skip to: 27
/* 7 */       MCD::OPC_CheckPredicate, 0, 186, 1, // Skip to: 453
/* 11 */      MCD::OPC_CheckField, 27, 5, 30, 180, 1, // Skip to: 453
/* 17 */      MCD::OPC_CheckField, 5, 3, 0, 174, 1, // Skip to: 453
/* 23 */      MCD::OPC_Decode, 251, 1, 1, // Opcode: AddiuRxPcImmX16
/* 27 */      MCD::OPC_FilterValue, 2, 20, 0, // Skip to: 51
/* 31 */      MCD::OPC_CheckPredicate, 0, 162, 1, // Skip to: 453
/* 35 */      MCD::OPC_CheckField, 27, 5, 30, 156, 1, // Skip to: 453
/* 41 */      MCD::OPC_CheckField, 5, 6, 0, 150, 1, // Skip to: 453
/* 47 */      MCD::OPC_Decode, 235, 3, 8, // Opcode: BimmX16
/* 51 */      MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 75
/* 55 */      MCD::OPC_CheckPredicate, 0, 138, 1, // Skip to: 453
/* 59 */      MCD::OPC_CheckField, 27, 5, 30, 132, 1, // Skip to: 453
/* 65 */      MCD::OPC_CheckField, 5, 3, 0, 126, 1, // Skip to: 453
/* 71 */      MCD::OPC_Decode, 233, 3, 1, // Opcode: BeqzRxImmX16
/* 75 */      MCD::OPC_FilterValue, 5, 20, 0, // Skip to: 99
/* 79 */      MCD::OPC_CheckPredicate, 0, 114, 1, // Skip to: 453
/* 83 */      MCD::OPC_CheckField, 27, 5, 30, 108, 1, // Skip to: 453
/* 89 */      MCD::OPC_CheckField, 5, 3, 0, 102, 1, // Skip to: 453
/* 95 */      MCD::OPC_Decode, 238, 3, 1, // Opcode: BnezRxImmX16
/* 99 */      MCD::OPC_FilterValue, 6, 92, 0, // Skip to: 195
/* 103 */     MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 106 */     MCD::OPC_FilterValue, 30, 87, 1, // Skip to: 453
/* 110 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 113 */     MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 156
/* 117 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 120 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 132
/* 124 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 156
/* 128 */     MCD::OPC_Decode, 202, 18, 6, // Opcode: SllX16
/* 132 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 144
/* 136 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 156
/* 140 */     MCD::OPC_Decode, 217, 18, 6, // Opcode: SrlX16
/* 144 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 156
/* 148 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 156
/* 152 */     MCD::OPC_Decode, 215, 18, 6, // Opcode: SraX16
/* 156 */     MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 159 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 171
/* 163 */     MCD::OPC_CheckPredicate, 0, 30, 1, // Skip to: 453
/* 167 */     MCD::OPC_Decode, 247, 3, 0, // Opcode: BteqzX16
/* 171 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 183
/* 175 */     MCD::OPC_CheckPredicate, 0, 18, 1, // Skip to: 453
/* 179 */     MCD::OPC_Decode, 255, 3, 0, // Opcode: BtnezX16
/* 183 */     MCD::OPC_FilterValue, 24, 10, 1, // Skip to: 453
/* 187 */     MCD::OPC_CheckPredicate, 0, 6, 1, // Skip to: 453
/* 191 */     MCD::OPC_Decode, 128, 2, 0, // Opcode: AddiuSpImmX16
/* 195 */     MCD::OPC_FilterValue, 8, 20, 0, // Skip to: 219
/* 199 */     MCD::OPC_CheckPredicate, 0, 250, 0, // Skip to: 453
/* 203 */     MCD::OPC_CheckField, 27, 5, 30, 244, 0, // Skip to: 453
/* 209 */     MCD::OPC_CheckField, 4, 1, 0, 238, 0, // Skip to: 453
/* 215 */     MCD::OPC_Decode, 254, 1, 9, // Opcode: AddiuRxRyOffMemX16
/* 219 */     MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 243
/* 223 */     MCD::OPC_CheckPredicate, 0, 226, 0, // Skip to: 453
/* 227 */     MCD::OPC_CheckField, 27, 5, 30, 220, 0, // Skip to: 453
/* 233 */     MCD::OPC_CheckField, 5, 3, 0, 214, 0, // Skip to: 453
/* 239 */     MCD::OPC_Decode, 250, 1, 1, // Opcode: AddiuRxImmX16
/* 243 */     MCD::OPC_FilterValue, 10, 20, 0, // Skip to: 267
/* 247 */     MCD::OPC_CheckPredicate, 0, 202, 0, // Skip to: 453
/* 251 */     MCD::OPC_CheckField, 27, 5, 30, 196, 0, // Skip to: 453
/* 257 */     MCD::OPC_CheckField, 5, 3, 0, 190, 0, // Skip to: 453
/* 263 */     MCD::OPC_Decode, 208, 18, 1, // Opcode: SltiRxImmX16
/* 267 */     MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 291
/* 271 */     MCD::OPC_CheckPredicate, 0, 178, 0, // Skip to: 453
/* 275 */     MCD::OPC_CheckField, 27, 5, 30, 172, 0, // Skip to: 453
/* 281 */     MCD::OPC_CheckField, 5, 3, 0, 166, 0, // Skip to: 453
/* 287 */     MCD::OPC_Decode, 211, 18, 1, // Opcode: SltiuRxImmX16
/* 291 */     MCD::OPC_FilterValue, 13, 20, 0, // Skip to: 315
/* 295 */     MCD::OPC_CheckPredicate, 0, 154, 0, // Skip to: 453
/* 299 */     MCD::OPC_CheckField, 27, 5, 30, 148, 0, // Skip to: 453
/* 305 */     MCD::OPC_CheckField, 5, 3, 0, 142, 0, // Skip to: 453
/* 311 */     MCD::OPC_Decode, 192, 11, 1, // Opcode: LiRxImmX16
/* 315 */     MCD::OPC_FilterValue, 14, 20, 0, // Skip to: 339
/* 319 */     MCD::OPC_CheckPredicate, 0, 130, 0, // Skip to: 453
/* 323 */     MCD::OPC_CheckField, 27, 5, 30, 124, 0, // Skip to: 453
/* 329 */     MCD::OPC_CheckField, 5, 3, 0, 118, 0, // Skip to: 453
/* 335 */     MCD::OPC_Decode, 182, 6, 1, // Opcode: CmpiRxImmX16
/* 339 */     MCD::OPC_FilterValue, 18, 14, 0, // Skip to: 357
/* 343 */     MCD::OPC_CheckPredicate, 0, 106, 0, // Skip to: 453
/* 347 */     MCD::OPC_CheckField, 27, 5, 30, 100, 0, // Skip to: 453
/* 353 */     MCD::OPC_Decode, 203, 11, 9, // Opcode: LwRxSpImmX16
/* 357 */     MCD::OPC_FilterValue, 22, 20, 0, // Skip to: 381
/* 361 */     MCD::OPC_CheckPredicate, 0, 88, 0, // Skip to: 453
/* 365 */     MCD::OPC_CheckField, 27, 5, 30, 82, 0, // Skip to: 453
/* 371 */     MCD::OPC_CheckField, 5, 3, 0, 76, 0, // Skip to: 453
/* 377 */     MCD::OPC_Decode, 201, 11, 1, // Opcode: LwRxPcTcpX16
/* 381 */     MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 399
/* 385 */     MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 453
/* 389 */     MCD::OPC_CheckField, 27, 5, 30, 58, 0, // Skip to: 453
/* 395 */     MCD::OPC_Decode, 184, 18, 9, // Opcode: SbRxRyOffMemX16
/* 399 */     MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 417
/* 403 */     MCD::OPC_CheckPredicate, 0, 46, 0, // Skip to: 453
/* 407 */     MCD::OPC_CheckField, 27, 5, 30, 40, 0, // Skip to: 453
/* 413 */     MCD::OPC_Decode, 201, 18, 9, // Opcode: ShRxRyOffMemX16
/* 417 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 435
/* 421 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 453
/* 425 */     MCD::OPC_CheckField, 27, 5, 30, 22, 0, // Skip to: 453
/* 431 */     MCD::OPC_Decode, 221, 18, 9, // Opcode: SwRxSpImmX16
/* 435 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 453
/* 439 */     MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 453
/* 443 */     MCD::OPC_CheckField, 27, 5, 30, 4, 0, // Skip to: 453
/* 449 */     MCD::OPC_Decode, 220, 18, 9, // Opcode: SwRxRyOffMemX16
/* 453 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableCOP3_32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 1, 40, 0, // Skip to: 51
/* 11 */      MCD::OPC_Decode, 150, 11, 10, // Opcode: LWC3
/* 15 */      MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 2, 28, 0, // Skip to: 51
/* 23 */      MCD::OPC_Decode, 206, 10, 10, // Opcode: LDC3
/* 27 */      MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 39
/* 31 */      MCD::OPC_CheckPredicate, 1, 16, 0, // Skip to: 51
/* 35 */      MCD::OPC_Decode, 143, 18, 10, // Opcode: SWC3
/* 39 */      MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 51
/* 43 */      MCD::OPC_CheckPredicate, 2, 4, 0, // Skip to: 51
/* 47 */      MCD::OPC_Decode, 248, 15, 10, // Opcode: SDC3
/* 51 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableCnMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 18, 27, 0, // Skip to: 34
/* 7 */       MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 10 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 22
/* 14 */      MCD::OPC_CheckPredicate, 3, 169, 1, // Skip to: 443
/* 18 */      MCD::OPC_Decode, 250, 6, 11, // Opcode: DMFC2_OCTEON
/* 22 */      MCD::OPC_FilterValue, 5, 161, 1, // Skip to: 443
/* 26 */      MCD::OPC_CheckPredicate, 3, 157, 1, // Skip to: 443
/* 30 */      MCD::OPC_Decode, 133, 7, 11, // Opcode: DMTC2_OCTEON
/* 34 */      MCD::OPC_FilterValue, 28, 101, 1, // Skip to: 395
/* 38 */      MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 41 */      MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 59
/* 45 */      MCD::OPC_CheckPredicate, 3, 138, 1, // Skip to: 443
/* 49 */      MCD::OPC_CheckField, 6, 5, 0, 132, 1, // Skip to: 443
/* 55 */      MCD::OPC_Decode, 138, 7, 12, // Opcode: DMUL
/* 59 */      MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 77
/* 63 */      MCD::OPC_CheckPredicate, 3, 120, 1, // Skip to: 443
/* 67 */      MCD::OPC_CheckField, 6, 15, 0, 114, 1, // Skip to: 443
/* 73 */      MCD::OPC_Decode, 178, 13, 13, // Opcode: MTM0
/* 77 */      MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 95
/* 81 */      MCD::OPC_CheckPredicate, 3, 102, 1, // Skip to: 443
/* 85 */      MCD::OPC_CheckField, 6, 15, 0, 96, 1, // Skip to: 443
/* 91 */      MCD::OPC_Decode, 181, 13, 13, // Opcode: MTP0
/* 95 */      MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 113
/* 99 */      MCD::OPC_CheckPredicate, 3, 84, 1, // Skip to: 443
/* 103 */     MCD::OPC_CheckField, 6, 15, 0, 78, 1, // Skip to: 443
/* 109 */     MCD::OPC_Decode, 182, 13, 13, // Opcode: MTP1
/* 113 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 131
/* 117 */     MCD::OPC_CheckPredicate, 3, 66, 1, // Skip to: 443
/* 121 */     MCD::OPC_CheckField, 6, 15, 0, 60, 1, // Skip to: 443
/* 127 */     MCD::OPC_Decode, 183, 13, 13, // Opcode: MTP2
/* 131 */     MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 149
/* 135 */     MCD::OPC_CheckPredicate, 3, 48, 1, // Skip to: 443
/* 139 */     MCD::OPC_CheckField, 6, 15, 0, 42, 1, // Skip to: 443
/* 145 */     MCD::OPC_Decode, 179, 13, 13, // Opcode: MTM1
/* 149 */     MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 167
/* 153 */     MCD::OPC_CheckPredicate, 3, 30, 1, // Skip to: 443
/* 157 */     MCD::OPC_CheckField, 6, 15, 0, 24, 1, // Skip to: 443
/* 163 */     MCD::OPC_Decode, 180, 13, 13, // Opcode: MTM2
/* 167 */     MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 185
/* 171 */     MCD::OPC_CheckPredicate, 3, 12, 1, // Skip to: 443
/* 175 */     MCD::OPC_CheckField, 6, 5, 0, 6, 1, // Skip to: 443
/* 181 */     MCD::OPC_Decode, 158, 19, 12, // Opcode: VMULU
/* 185 */     MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 203
/* 189 */     MCD::OPC_CheckPredicate, 3, 250, 0, // Skip to: 443
/* 193 */     MCD::OPC_CheckField, 6, 5, 0, 244, 0, // Skip to: 443
/* 199 */     MCD::OPC_Decode, 157, 19, 12, // Opcode: VMM0
/* 203 */     MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 221
/* 207 */     MCD::OPC_CheckPredicate, 3, 232, 0, // Skip to: 443
/* 211 */     MCD::OPC_CheckField, 6, 5, 0, 226, 0, // Skip to: 443
/* 217 */     MCD::OPC_Decode, 156, 19, 12, // Opcode: V3MULU
/* 221 */     MCD::OPC_FilterValue, 40, 14, 0, // Skip to: 239
/* 225 */     MCD::OPC_CheckPredicate, 3, 214, 0, // Skip to: 443
/* 229 */     MCD::OPC_CheckField, 6, 5, 0, 208, 0, // Skip to: 443
/* 235 */     MCD::OPC_Decode, 133, 2, 12, // Opcode: BADDu
/* 239 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 257
/* 243 */     MCD::OPC_CheckPredicate, 3, 196, 0, // Skip to: 443
/* 247 */     MCD::OPC_CheckField, 6, 5, 0, 190, 0, // Skip to: 443
/* 253 */     MCD::OPC_Decode, 157, 16, 12, // Opcode: SEQ
/* 257 */     MCD::OPC_FilterValue, 43, 14, 0, // Skip to: 275
/* 261 */     MCD::OPC_CheckPredicate, 3, 178, 0, // Skip to: 443
/* 265 */     MCD::OPC_CheckField, 6, 5, 0, 172, 0, // Skip to: 443
/* 271 */     MCD::OPC_Decode, 130, 17, 12, // Opcode: SNE
/* 275 */     MCD::OPC_FilterValue, 44, 20, 0, // Skip to: 299
/* 279 */     MCD::OPC_CheckPredicate, 3, 160, 0, // Skip to: 443
/* 283 */     MCD::OPC_CheckField, 16, 5, 0, 154, 0, // Skip to: 443
/* 289 */     MCD::OPC_CheckField, 6, 5, 0, 148, 0, // Skip to: 443
/* 295 */     MCD::OPC_Decode, 184, 14, 14, // Opcode: POP
/* 299 */     MCD::OPC_FilterValue, 45, 20, 0, // Skip to: 323
/* 303 */     MCD::OPC_CheckPredicate, 3, 136, 0, // Skip to: 443
/* 307 */     MCD::OPC_CheckField, 16, 5, 0, 130, 0, // Skip to: 443
/* 313 */     MCD::OPC_CheckField, 6, 5, 0, 124, 0, // Skip to: 443
/* 319 */     MCD::OPC_Decode, 173, 7, 15, // Opcode: DPOP
/* 323 */     MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 335
/* 327 */     MCD::OPC_CheckPredicate, 3, 112, 0, // Skip to: 443
/* 331 */     MCD::OPC_Decode, 160, 16, 16, // Opcode: SEQi
/* 335 */     MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 347
/* 339 */     MCD::OPC_CheckPredicate, 3, 100, 0, // Skip to: 443
/* 343 */     MCD::OPC_Decode, 131, 17, 16, // Opcode: SNEi
/* 347 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 359
/* 351 */     MCD::OPC_CheckPredicate, 3, 88, 0, // Skip to: 443
/* 355 */     MCD::OPC_Decode, 160, 4, 17, // Opcode: CINS
/* 359 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 371
/* 363 */     MCD::OPC_CheckPredicate, 3, 76, 0, // Skip to: 443
/* 367 */     MCD::OPC_Decode, 161, 4, 17, // Opcode: CINS32
/* 371 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 383
/* 375 */     MCD::OPC_CheckPredicate, 3, 64, 0, // Skip to: 443
/* 379 */     MCD::OPC_Decode, 152, 8, 17, // Opcode: EXTS
/* 383 */     MCD::OPC_FilterValue, 59, 56, 0, // Skip to: 443
/* 387 */     MCD::OPC_CheckPredicate, 3, 52, 0, // Skip to: 443
/* 391 */     MCD::OPC_Decode, 153, 8, 17, // Opcode: EXTS32
/* 395 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 407
/* 399 */     MCD::OPC_CheckPredicate, 3, 40, 0, // Skip to: 443
/* 403 */     MCD::OPC_Decode, 140, 2, 18, // Opcode: BBIT0
/* 407 */     MCD::OPC_FilterValue, 54, 8, 0, // Skip to: 419
/* 411 */     MCD::OPC_CheckPredicate, 3, 28, 0, // Skip to: 443
/* 415 */     MCD::OPC_Decode, 141, 2, 18, // Opcode: BBIT032
/* 419 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 431
/* 423 */     MCD::OPC_CheckPredicate, 3, 16, 0, // Skip to: 443
/* 427 */     MCD::OPC_Decode, 142, 2, 18, // Opcode: BBIT1
/* 431 */     MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 443
/* 435 */     MCD::OPC_CheckPredicate, 3, 4, 0, // Skip to: 443
/* 439 */     MCD::OPC_Decode, 143, 2, 18, // Opcode: BBIT132
/* 443 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips16[] = {
/* 0 */       MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 3 */       MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 34
/* 7 */       MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 22
/* 14 */      MCD::OPC_CheckPredicate, 4, 22, 2, // Skip to: 552
/* 18 */      MCD::OPC_Decode, 128, 1, 19, // Opcode: ADDU16_MM
/* 22 */      MCD::OPC_FilterValue, 1, 14, 2, // Skip to: 552
/* 26 */      MCD::OPC_CheckPredicate, 4, 10, 2, // Skip to: 552
/* 30 */      MCD::OPC_Decode, 232, 17, 19, // Opcode: SUBU16_MM
/* 34 */      MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 46
/* 38 */      MCD::OPC_CheckPredicate, 5, 254, 1, // Skip to: 552
/* 42 */      MCD::OPC_Decode, 186, 10, 20, // Opcode: LBU16_MM
/* 46 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 58
/* 50 */      MCD::OPC_CheckPredicate, 5, 242, 1, // Skip to: 552
/* 54 */      MCD::OPC_Decode, 207, 12, 21, // Opcode: MOVE16_MM
/* 58 */      MCD::OPC_FilterValue, 9, 27, 0, // Skip to: 89
/* 62 */      MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 65 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 77
/* 69 */      MCD::OPC_CheckPredicate, 4, 223, 1, // Skip to: 552
/* 73 */      MCD::OPC_Decode, 230, 16, 22, // Opcode: SLL16_MM
/* 77 */      MCD::OPC_FilterValue, 1, 215, 1, // Skip to: 552
/* 81 */      MCD::OPC_CheckPredicate, 4, 211, 1, // Skip to: 552
/* 85 */      MCD::OPC_Decode, 168, 17, 22, // Opcode: SRL16_MM
/* 89 */      MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 101
/* 93 */      MCD::OPC_CheckPredicate, 5, 199, 1, // Skip to: 552
/* 97 */      MCD::OPC_Decode, 231, 10, 20, // Opcode: LHU16_MM
/* 101 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 113
/* 105 */     MCD::OPC_CheckPredicate, 4, 187, 1, // Skip to: 552
/* 109 */     MCD::OPC_Decode, 175, 1, 23, // Opcode: ANDI16_MM
/* 113 */     MCD::OPC_FilterValue, 17, 227, 0, // Skip to: 344
/* 117 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 120 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 132
/* 124 */     MCD::OPC_CheckPredicate, 4, 168, 1, // Skip to: 552
/* 128 */     MCD::OPC_Decode, 143, 14, 24, // Opcode: NOT16_MM
/* 132 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 144
/* 136 */     MCD::OPC_CheckPredicate, 4, 156, 1, // Skip to: 552
/* 140 */     MCD::OPC_Decode, 173, 19, 25, // Opcode: XOR16_MM
/* 144 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 156
/* 148 */     MCD::OPC_CheckPredicate, 4, 144, 1, // Skip to: 552
/* 152 */     MCD::OPC_Decode, 172, 1, 25, // Opcode: AND16_MM
/* 156 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 168
/* 160 */     MCD::OPC_CheckPredicate, 4, 132, 1, // Skip to: 552
/* 164 */     MCD::OPC_Decode, 148, 14, 25, // Opcode: OR16_MM
/* 168 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 180
/* 172 */     MCD::OPC_CheckPredicate, 6, 120, 1, // Skip to: 552
/* 176 */     MCD::OPC_Decode, 160, 11, 26, // Opcode: LWM16_MM
/* 180 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 192
/* 184 */     MCD::OPC_CheckPredicate, 6, 108, 1, // Skip to: 552
/* 188 */     MCD::OPC_Decode, 152, 18, 26, // Opcode: SWM16_MM
/* 192 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 223
/* 196 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 199 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 211
/* 203 */     MCD::OPC_CheckPredicate, 5, 89, 1, // Skip to: 552
/* 207 */     MCD::OPC_Decode, 163, 10, 27, // Opcode: JR16_MM
/* 211 */     MCD::OPC_FilterValue, 1, 81, 1, // Skip to: 552
/* 215 */     MCD::OPC_CheckPredicate, 5, 77, 1, // Skip to: 552
/* 219 */     MCD::OPC_Decode, 166, 10, 27, // Opcode: JRC16_MM
/* 223 */     MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 254
/* 227 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 230 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 242
/* 234 */     MCD::OPC_CheckPredicate, 6, 58, 1, // Skip to: 552
/* 238 */     MCD::OPC_Decode, 141, 10, 27, // Opcode: JALR16_MM
/* 242 */     MCD::OPC_FilterValue, 1, 50, 1, // Skip to: 552
/* 246 */     MCD::OPC_CheckPredicate, 5, 46, 1, // Skip to: 552
/* 250 */     MCD::OPC_Decode, 148, 10, 27, // Opcode: JALRS16_MM
/* 254 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 272
/* 258 */     MCD::OPC_CheckPredicate, 5, 34, 1, // Skip to: 552
/* 262 */     MCD::OPC_CheckField, 5, 1, 0, 28, 1, // Skip to: 552
/* 268 */     MCD::OPC_Decode, 152, 12, 27, // Opcode: MFHI16_MM
/* 272 */     MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 290
/* 276 */     MCD::OPC_CheckPredicate, 5, 16, 1, // Skip to: 552
/* 280 */     MCD::OPC_CheckField, 5, 1, 0, 10, 1, // Skip to: 552
/* 286 */     MCD::OPC_Decode, 158, 12, 27, // Opcode: MFLO16_MM
/* 290 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 308
/* 294 */     MCD::OPC_CheckPredicate, 4, 254, 0, // Skip to: 552
/* 298 */     MCD::OPC_CheckField, 4, 2, 0, 248, 0, // Skip to: 552
/* 304 */     MCD::OPC_Decode, 205, 3, 28, // Opcode: BREAK16_MM
/* 308 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 326
/* 312 */     MCD::OPC_CheckPredicate, 4, 236, 0, // Skip to: 552
/* 316 */     MCD::OPC_CheckField, 4, 2, 0, 230, 0, // Skip to: 552
/* 322 */     MCD::OPC_Decode, 236, 15, 28, // Opcode: SDBBP16_MM
/* 326 */     MCD::OPC_FilterValue, 12, 222, 0, // Skip to: 552
/* 330 */     MCD::OPC_CheckPredicate, 5, 218, 0, // Skip to: 552
/* 334 */     MCD::OPC_CheckField, 5, 1, 0, 212, 0, // Skip to: 552
/* 340 */     MCD::OPC_Decode, 165, 10, 29, // Opcode: JRADDIUSP
/* 344 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 356
/* 348 */     MCD::OPC_CheckPredicate, 5, 200, 0, // Skip to: 552
/* 352 */     MCD::OPC_Decode, 173, 11, 30, // Opcode: LWSP_MM
/* 356 */     MCD::OPC_FilterValue, 19, 25, 0, // Skip to: 385
/* 360 */     MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 363 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 374
/* 367 */     MCD::OPC_CheckPredicate, 5, 181, 0, // Skip to: 552
/* 371 */     MCD::OPC_Decode, 97, 31, // Opcode: ADDIUS5_MM
/* 374 */     MCD::OPC_FilterValue, 1, 174, 0, // Skip to: 552
/* 378 */     MCD::OPC_CheckPredicate, 5, 170, 0, // Skip to: 552
/* 382 */     MCD::OPC_Decode, 98, 32, // Opcode: ADDIUSP_MM
/* 385 */     MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 397
/* 389 */     MCD::OPC_CheckPredicate, 5, 159, 0, // Skip to: 552
/* 393 */     MCD::OPC_Decode, 154, 11, 33, // Opcode: LWGP_MM
/* 397 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 409
/* 401 */     MCD::OPC_CheckPredicate, 5, 147, 0, // Skip to: 552
/* 405 */     MCD::OPC_Decode, 143, 11, 20, // Opcode: LW16_MM
/* 409 */     MCD::OPC_FilterValue, 27, 25, 0, // Skip to: 438
/* 413 */     MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 416 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 427
/* 420 */     MCD::OPC_CheckPredicate, 5, 128, 0, // Skip to: 552
/* 424 */     MCD::OPC_Decode, 96, 34, // Opcode: ADDIUR2_MM
/* 427 */     MCD::OPC_FilterValue, 1, 121, 0, // Skip to: 552
/* 431 */     MCD::OPC_CheckPredicate, 5, 117, 0, // Skip to: 552
/* 435 */     MCD::OPC_Decode, 95, 35, // Opcode: ADDIUR1SP_MM
/* 438 */     MCD::OPC_FilterValue, 33, 14, 0, // Skip to: 456
/* 442 */     MCD::OPC_CheckPredicate, 5, 106, 0, // Skip to: 552
/* 446 */     MCD::OPC_CheckField, 0, 1, 0, 100, 0, // Skip to: 552
/* 452 */     MCD::OPC_Decode, 209, 12, 36, // Opcode: MOVEP_MM
/* 456 */     MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 468
/* 460 */     MCD::OPC_CheckPredicate, 5, 88, 0, // Skip to: 552
/* 464 */     MCD::OPC_Decode, 216, 15, 20, // Opcode: SB16_MM
/* 468 */     MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 480
/* 472 */     MCD::OPC_CheckPredicate, 5, 76, 0, // Skip to: 552
/* 476 */     MCD::OPC_Decode, 175, 2, 37, // Opcode: BEQZ16_MM
/* 480 */     MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 492
/* 484 */     MCD::OPC_CheckPredicate, 5, 64, 0, // Skip to: 552
/* 488 */     MCD::OPC_Decode, 162, 16, 20, // Opcode: SH16_MM
/* 492 */     MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 504
/* 496 */     MCD::OPC_CheckPredicate, 5, 52, 0, // Skip to: 552
/* 500 */     MCD::OPC_Decode, 182, 3, 37, // Opcode: BNEZ16_MM
/* 504 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 516
/* 508 */     MCD::OPC_CheckPredicate, 5, 40, 0, // Skip to: 552
/* 512 */     MCD::OPC_Decode, 163, 18, 30, // Opcode: SWSP_MM
/* 516 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 528
/* 520 */     MCD::OPC_CheckPredicate, 5, 28, 0, // Skip to: 552
/* 524 */     MCD::OPC_Decode, 132, 2, 38, // Opcode: B16_MM
/* 528 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 540
/* 532 */     MCD::OPC_CheckPredicate, 5, 16, 0, // Skip to: 552
/* 536 */     MCD::OPC_Decode, 135, 18, 20, // Opcode: SW16_MM
/* 540 */     MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 552
/* 544 */     MCD::OPC_CheckPredicate, 5, 4, 0, // Skip to: 552
/* 548 */     MCD::OPC_Decode, 240, 10, 39, // Opcode: LI16_MM
/* 552 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 51, 12, // Skip to: 3130
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 90, 0, // Skip to: 104
/* 14 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 17 */      MCD::OPC_FilterValue, 0, 47, 0, // Skip to: 68
/* 21 */      MCD::OPC_ExtractField, 11, 15,  // Inst{25-11} ...
/* 24 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 5, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 190, 17, 0, // Opcode: SSNOP_MM
/* 36 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 5, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 242, 7, 0, // Opcode: EHB_MM
/* 48 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 5, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 166, 14, 0, // Opcode: PAUSE_MM
/* 60 */      MCD::OPC_CheckPredicate, 5, 101, 16, // Skip to: 4261
/* 64 */      MCD::OPC_Decode, 243, 16, 40, // Opcode: SLL_MM
/* 68 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 80
/* 72 */      MCD::OPC_CheckPredicate, 5, 89, 16, // Skip to: 4261
/* 76 */      MCD::OPC_Decode, 187, 17, 40, // Opcode: SRL_MM
/* 80 */      MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 92
/* 84 */      MCD::OPC_CheckPredicate, 5, 77, 16, // Skip to: 4261
/* 88 */      MCD::OPC_Decode, 165, 17, 40, // Opcode: SRA_MM
/* 92 */      MCD::OPC_FilterValue, 3, 69, 16, // Skip to: 4261
/* 96 */      MCD::OPC_CheckPredicate, 5, 65, 16, // Skip to: 4261
/* 100 */     MCD::OPC_Decode, 187, 15, 40, // Opcode: ROTR_MM
/* 104 */     MCD::OPC_FilterValue, 5, 193, 0, // Skip to: 301
/* 108 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 111 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 129
/* 115 */     MCD::OPC_CheckPredicate, 7, 46, 16, // Skip to: 4261
/* 119 */     MCD::OPC_CheckField, 11, 5, 0, 40, 16, // Skip to: 4261
/* 125 */     MCD::OPC_Decode, 229, 4, 41, // Opcode: CMP_EQ_PH_MM
/* 129 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 147
/* 133 */     MCD::OPC_CheckPredicate, 7, 28, 16, // Skip to: 4261
/* 137 */     MCD::OPC_CheckField, 11, 5, 0, 22, 16, // Skip to: 4261
/* 143 */     MCD::OPC_Decode, 243, 4, 41, // Opcode: CMP_LT_PH_MM
/* 147 */     MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 165
/* 151 */     MCD::OPC_CheckPredicate, 7, 10, 16, // Skip to: 4261
/* 155 */     MCD::OPC_CheckField, 11, 5, 0, 4, 16, // Skip to: 4261
/* 161 */     MCD::OPC_Decode, 237, 4, 41, // Opcode: CMP_LE_PH_MM
/* 165 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 177
/* 169 */     MCD::OPC_CheckPredicate, 8, 248, 15, // Skip to: 4261
/* 173 */     MCD::OPC_Decode, 207, 4, 42, // Opcode: CMPGDU_EQ_QB_MMR2
/* 177 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 189
/* 181 */     MCD::OPC_CheckPredicate, 8, 236, 15, // Skip to: 4261
/* 185 */     MCD::OPC_Decode, 211, 4, 42, // Opcode: CMPGDU_LT_QB_MMR2
/* 189 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 201
/* 193 */     MCD::OPC_CheckPredicate, 8, 224, 15, // Skip to: 4261
/* 197 */     MCD::OPC_Decode, 209, 4, 42, // Opcode: CMPGDU_LE_QB_MMR2
/* 201 */     MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 219
/* 205 */     MCD::OPC_CheckPredicate, 7, 212, 15, // Skip to: 4261
/* 209 */     MCD::OPC_CheckField, 11, 5, 0, 206, 15, // Skip to: 4261
/* 215 */     MCD::OPC_Decode, 219, 4, 41, // Opcode: CMPU_EQ_QB_MM
/* 219 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 237
/* 223 */     MCD::OPC_CheckPredicate, 7, 194, 15, // Skip to: 4261
/* 227 */     MCD::OPC_CheckField, 11, 5, 0, 188, 15, // Skip to: 4261
/* 233 */     MCD::OPC_Decode, 223, 4, 41, // Opcode: CMPU_LT_QB_MM
/* 237 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 255
/* 241 */     MCD::OPC_CheckPredicate, 7, 176, 15, // Skip to: 4261
/* 245 */     MCD::OPC_CheckField, 11, 5, 0, 170, 15, // Skip to: 4261
/* 251 */     MCD::OPC_Decode, 221, 4, 41, // Opcode: CMPU_LE_QB_MM
/* 255 */     MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 266
/* 259 */     MCD::OPC_CheckPredicate, 7, 158, 15, // Skip to: 4261
/* 263 */     MCD::OPC_Decode, 113, 43, // Opcode: ADDQ_S_W_MM
/* 266 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 278
/* 270 */     MCD::OPC_CheckPredicate, 7, 147, 15, // Skip to: 4261
/* 274 */     MCD::OPC_Decode, 215, 17, 43, // Opcode: SUBQ_S_W_MM
/* 278 */     MCD::OPC_FilterValue, 14, 7, 0, // Skip to: 289
/* 282 */     MCD::OPC_CheckPredicate, 7, 135, 15, // Skip to: 4261
/* 286 */     MCD::OPC_Decode, 115, 43, // Opcode: ADDSC_MM
/* 289 */     MCD::OPC_FilterValue, 15, 128, 15, // Skip to: 4261
/* 293 */     MCD::OPC_CheckPredicate, 7, 124, 15, // Skip to: 4261
/* 297 */     MCD::OPC_Decode, 152, 1, 43, // Opcode: ADDWC_MM
/* 301 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 313
/* 305 */     MCD::OPC_CheckPredicate, 5, 112, 15, // Skip to: 4261
/* 309 */     MCD::OPC_Decode, 207, 3, 44, // Opcode: BREAK_MM
/* 313 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 325
/* 317 */     MCD::OPC_CheckPredicate, 5, 100, 15, // Skip to: 4261
/* 321 */     MCD::OPC_Decode, 136, 10, 45, // Opcode: INS_MM
/* 325 */     MCD::OPC_FilterValue, 13, 101, 1, // Skip to: 686
/* 329 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 332 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 343
/* 336 */     MCD::OPC_CheckPredicate, 7, 81, 15, // Skip to: 4261
/* 340 */     MCD::OPC_Decode, 109, 46, // Opcode: ADDQ_PH_MM
/* 343 */     MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 354
/* 347 */     MCD::OPC_CheckPredicate, 8, 70, 15, // Skip to: 4261
/* 351 */     MCD::OPC_Decode, 101, 46, // Opcode: ADDQH_PH_MMR2
/* 354 */     MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 365
/* 358 */     MCD::OPC_CheckPredicate, 8, 59, 15, // Skip to: 4261
/* 362 */     MCD::OPC_Decode, 107, 43, // Opcode: ADDQH_W_MMR2
/* 365 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 377
/* 369 */     MCD::OPC_CheckPredicate, 7, 48, 15, // Skip to: 4261
/* 373 */     MCD::OPC_Decode, 138, 1, 46, // Opcode: ADDU_QB_MM
/* 377 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 389
/* 381 */     MCD::OPC_CheckPredicate, 8, 36, 15, // Skip to: 4261
/* 385 */     MCD::OPC_Decode, 136, 1, 46, // Opcode: ADDU_PH_MMR2
/* 389 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 401
/* 393 */     MCD::OPC_CheckPredicate, 8, 24, 15, // Skip to: 4261
/* 397 */     MCD::OPC_Decode, 131, 1, 46, // Opcode: ADDUH_QB_MMR2
/* 401 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 413
/* 405 */     MCD::OPC_CheckPredicate, 7, 12, 15, // Skip to: 4261
/* 409 */     MCD::OPC_Decode, 192, 16, 47, // Opcode: SHRAV_PH_MM
/* 413 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 425
/* 417 */     MCD::OPC_CheckPredicate, 8, 0, 15, // Skip to: 4261
/* 421 */     MCD::OPC_Decode, 194, 16, 47, // Opcode: SHRAV_QB_MMR2
/* 425 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 437
/* 429 */     MCD::OPC_CheckPredicate, 7, 244, 14, // Skip to: 4261
/* 433 */     MCD::OPC_Decode, 211, 17, 46, // Opcode: SUBQ_PH_MM
/* 437 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 449
/* 441 */     MCD::OPC_CheckPredicate, 8, 232, 14, // Skip to: 4261
/* 445 */     MCD::OPC_Decode, 203, 17, 46, // Opcode: SUBQH_PH_MMR2
/* 449 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 461
/* 453 */     MCD::OPC_CheckPredicate, 8, 220, 14, // Skip to: 4261
/* 457 */     MCD::OPC_Decode, 209, 17, 43, // Opcode: SUBQH_W_MMR2
/* 461 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 473
/* 465 */     MCD::OPC_CheckPredicate, 7, 208, 14, // Skip to: 4261
/* 469 */     MCD::OPC_Decode, 242, 17, 46, // Opcode: SUBU_QB_MM
/* 473 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 485
/* 477 */     MCD::OPC_CheckPredicate, 8, 196, 14, // Skip to: 4261
/* 481 */     MCD::OPC_Decode, 240, 17, 46, // Opcode: SUBU_PH_MMR2
/* 485 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 497
/* 489 */     MCD::OPC_CheckPredicate, 8, 184, 14, // Skip to: 4261
/* 493 */     MCD::OPC_Decode, 235, 17, 46, // Opcode: SUBUH_QB_MMR2
/* 497 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 509
/* 501 */     MCD::OPC_CheckPredicate, 8, 172, 14, // Skip to: 4261
/* 505 */     MCD::OPC_Decode, 216, 14, 48, // Opcode: PRECR_SRA_PH_W_MMR2
/* 509 */     MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 520
/* 513 */     MCD::OPC_CheckPredicate, 7, 160, 14, // Skip to: 4261
/* 517 */     MCD::OPC_Decode, 111, 46, // Opcode: ADDQ_S_PH_MM
/* 520 */     MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 531
/* 524 */     MCD::OPC_CheckPredicate, 8, 149, 14, // Skip to: 4261
/* 528 */     MCD::OPC_Decode, 103, 46, // Opcode: ADDQH_R_PH_MMR2
/* 531 */     MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 542
/* 535 */     MCD::OPC_CheckPredicate, 8, 138, 14, // Skip to: 4261
/* 539 */     MCD::OPC_Decode, 105, 43, // Opcode: ADDQH_R_W_MMR2
/* 542 */     MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 554
/* 546 */     MCD::OPC_CheckPredicate, 7, 127, 14, // Skip to: 4261
/* 550 */     MCD::OPC_Decode, 142, 1, 46, // Opcode: ADDU_S_QB_MM
/* 554 */     MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 566
/* 558 */     MCD::OPC_CheckPredicate, 8, 115, 14, // Skip to: 4261
/* 562 */     MCD::OPC_Decode, 140, 1, 46, // Opcode: ADDU_S_PH_MMR2
/* 566 */     MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 578
/* 570 */     MCD::OPC_CheckPredicate, 8, 103, 14, // Skip to: 4261
/* 574 */     MCD::OPC_Decode, 133, 1, 46, // Opcode: ADDUH_R_QB_MMR2
/* 578 */     MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 590
/* 582 */     MCD::OPC_CheckPredicate, 7, 91, 14, // Skip to: 4261
/* 586 */     MCD::OPC_Decode, 196, 16, 47, // Opcode: SHRAV_R_PH_MM
/* 590 */     MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 602
/* 594 */     MCD::OPC_CheckPredicate, 8, 79, 14, // Skip to: 4261
/* 598 */     MCD::OPC_Decode, 198, 16, 47, // Opcode: SHRAV_R_QB_MMR2
/* 602 */     MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 614
/* 606 */     MCD::OPC_CheckPredicate, 7, 67, 14, // Skip to: 4261
/* 610 */     MCD::OPC_Decode, 213, 17, 46, // Opcode: SUBQ_S_PH_MM
/* 614 */     MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 626
/* 618 */     MCD::OPC_CheckPredicate, 8, 55, 14, // Skip to: 4261
/* 622 */     MCD::OPC_Decode, 205, 17, 46, // Opcode: SUBQH_R_PH_MMR2
/* 626 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 638
/* 630 */     MCD::OPC_CheckPredicate, 8, 43, 14, // Skip to: 4261
/* 634 */     MCD::OPC_Decode, 207, 17, 43, // Opcode: SUBQH_R_W_MMR2
/* 638 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 650
/* 642 */     MCD::OPC_CheckPredicate, 7, 31, 14, // Skip to: 4261
/* 646 */     MCD::OPC_Decode, 246, 17, 46, // Opcode: SUBU_S_QB_MM
/* 650 */     MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 662
/* 654 */     MCD::OPC_CheckPredicate, 8, 19, 14, // Skip to: 4261
/* 658 */     MCD::OPC_Decode, 244, 17, 46, // Opcode: SUBU_S_PH_MMR2
/* 662 */     MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 674
/* 666 */     MCD::OPC_CheckPredicate, 8, 7, 14, // Skip to: 4261
/* 670 */     MCD::OPC_Decode, 237, 17, 46, // Opcode: SUBUH_R_QB_MMR2
/* 674 */     MCD::OPC_FilterValue, 31, 255, 13, // Skip to: 4261
/* 678 */     MCD::OPC_CheckPredicate, 8, 251, 13, // Skip to: 4261
/* 682 */     MCD::OPC_Decode, 218, 14, 48, // Opcode: PRECR_SRA_R_PH_W_MMR2
/* 686 */     MCD::OPC_FilterValue, 14, 27, 0, // Skip to: 717
/* 690 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 693 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 705
/* 697 */     MCD::OPC_CheckPredicate, 7, 232, 13, // Skip to: 4261
/* 701 */     MCD::OPC_Decode, 176, 16, 47, // Opcode: SHLLV_PH_MM
/* 705 */     MCD::OPC_FilterValue, 16, 224, 13, // Skip to: 4261
/* 709 */     MCD::OPC_CheckPredicate, 7, 220, 13, // Skip to: 4261
/* 713 */     MCD::OPC_Decode, 180, 16, 47, // Opcode: SHLLV_S_PH_MM
/* 717 */     MCD::OPC_FilterValue, 16, 183, 0, // Skip to: 904
/* 721 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 724 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 736
/* 728 */     MCD::OPC_CheckPredicate, 5, 201, 13, // Skip to: 4261
/* 732 */     MCD::OPC_Decode, 239, 16, 49, // Opcode: SLLV_MM
/* 736 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 748
/* 740 */     MCD::OPC_CheckPredicate, 5, 189, 13, // Skip to: 4261
/* 744 */     MCD::OPC_Decode, 183, 17, 49, // Opcode: SRLV_MM
/* 748 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 760
/* 752 */     MCD::OPC_CheckPredicate, 5, 177, 13, // Skip to: 4261
/* 756 */     MCD::OPC_Decode, 161, 17, 49, // Opcode: SRAV_MM
/* 760 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 772
/* 764 */     MCD::OPC_CheckPredicate, 5, 165, 13, // Skip to: 4261
/* 768 */     MCD::OPC_Decode, 186, 15, 49, // Opcode: ROTRV_MM
/* 772 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 784
/* 776 */     MCD::OPC_CheckPredicate, 5, 153, 13, // Skip to: 4261
/* 780 */     MCD::OPC_Decode, 157, 1, 43, // Opcode: ADD_MM
/* 784 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 796
/* 788 */     MCD::OPC_CheckPredicate, 5, 141, 13, // Skip to: 4261
/* 792 */     MCD::OPC_Decode, 164, 1, 43, // Opcode: ADDu_MM
/* 796 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 808
/* 800 */     MCD::OPC_CheckPredicate, 5, 129, 13, // Skip to: 4261
/* 804 */     MCD::OPC_Decode, 255, 17, 43, // Opcode: SUB_MM
/* 808 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 820
/* 812 */     MCD::OPC_CheckPredicate, 5, 117, 13, // Skip to: 4261
/* 816 */     MCD::OPC_Decode, 130, 18, 43, // Opcode: SUBu_MM
/* 820 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 832
/* 824 */     MCD::OPC_CheckPredicate, 5, 105, 13, // Skip to: 4261
/* 828 */     MCD::OPC_Decode, 225, 13, 43, // Opcode: MUL_MM
/* 832 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 844
/* 836 */     MCD::OPC_CheckPredicate, 5, 93, 13, // Skip to: 4261
/* 840 */     MCD::OPC_Decode, 179, 1, 43, // Opcode: AND_MM
/* 844 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 856
/* 848 */     MCD::OPC_CheckPredicate, 5, 81, 13, // Skip to: 4261
/* 852 */     MCD::OPC_Decode, 153, 14, 43, // Opcode: OR_MM
/* 856 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 868
/* 860 */     MCD::OPC_CheckPredicate, 5, 69, 13, // Skip to: 4261
/* 864 */     MCD::OPC_Decode, 137, 14, 43, // Opcode: NOR_MM
/* 868 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 880
/* 872 */     MCD::OPC_CheckPredicate, 5, 57, 13, // Skip to: 4261
/* 876 */     MCD::OPC_Decode, 178, 19, 43, // Opcode: XOR_MM
/* 880 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 892
/* 884 */     MCD::OPC_CheckPredicate, 5, 45, 13, // Skip to: 4261
/* 888 */     MCD::OPC_Decode, 248, 16, 43, // Opcode: SLT_MM
/* 892 */     MCD::OPC_FilterValue, 14, 37, 13, // Skip to: 4261
/* 896 */     MCD::OPC_CheckPredicate, 5, 33, 13, // Skip to: 4261
/* 900 */     MCD::OPC_Decode, 129, 17, 43, // Opcode: SLTu_MM
/* 904 */     MCD::OPC_FilterValue, 21, 171, 0, // Skip to: 1079
/* 908 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 911 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 923
/* 915 */     MCD::OPC_CheckPredicate, 7, 14, 13, // Skip to: 4261
/* 919 */     MCD::OPC_Decode, 194, 13, 46, // Opcode: MULEU_S_PH_QBL_MM
/* 923 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 935
/* 927 */     MCD::OPC_CheckPredicate, 7, 2, 13, // Skip to: 4261
/* 931 */     MCD::OPC_Decode, 196, 13, 46, // Opcode: MULEU_S_PH_QBR_MM
/* 935 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 947
/* 939 */     MCD::OPC_CheckPredicate, 7, 246, 12, // Skip to: 4261
/* 943 */     MCD::OPC_Decode, 198, 13, 46, // Opcode: MULQ_RS_PH_MM
/* 947 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 959
/* 951 */     MCD::OPC_CheckPredicate, 8, 234, 12, // Skip to: 4261
/* 955 */     MCD::OPC_Decode, 202, 13, 46, // Opcode: MULQ_S_PH_MMR2
/* 959 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 971
/* 963 */     MCD::OPC_CheckPredicate, 8, 222, 12, // Skip to: 4261
/* 967 */     MCD::OPC_Decode, 200, 13, 43, // Opcode: MULQ_RS_W_MMR2
/* 971 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 983
/* 975 */     MCD::OPC_CheckPredicate, 8, 210, 12, // Skip to: 4261
/* 979 */     MCD::OPC_Decode, 204, 13, 43, // Opcode: MULQ_S_W_MMR2
/* 983 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 995
/* 987 */     MCD::OPC_CheckPredicate, 8, 198, 12, // Skip to: 4261
/* 991 */     MCD::OPC_Decode, 189, 1, 50, // Opcode: APPEND_MMR2
/* 995 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1007
/* 999 */     MCD::OPC_CheckPredicate, 8, 186, 12, // Skip to: 4261
/* 1003 */    MCD::OPC_Decode, 228, 14, 50, // Opcode: PREPEND_MMR2
/* 1007 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1019
/* 1011 */    MCD::OPC_CheckPredicate, 7, 174, 12, // Skip to: 4261
/* 1015 */    MCD::OPC_Decode, 195, 12, 43, // Opcode: MODSUB_MM
/* 1019 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1031
/* 1023 */    MCD::OPC_CheckPredicate, 7, 162, 12, // Skip to: 4261
/* 1027 */    MCD::OPC_Decode, 200, 16, 49, // Opcode: SHRAV_R_W_MM
/* 1031 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1043
/* 1035 */    MCD::OPC_CheckPredicate, 8, 150, 12, // Skip to: 4261
/* 1039 */    MCD::OPC_Decode, 212, 16, 47, // Opcode: SHRLV_PH_MMR2
/* 1043 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1055
/* 1047 */    MCD::OPC_CheckPredicate, 7, 138, 12, // Skip to: 4261
/* 1051 */    MCD::OPC_Decode, 214, 16, 47, // Opcode: SHRLV_QB_MM
/* 1055 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1067
/* 1059 */    MCD::OPC_CheckPredicate, 7, 126, 12, // Skip to: 4261
/* 1063 */    MCD::OPC_Decode, 178, 16, 47, // Opcode: SHLLV_QB_MM
/* 1067 */    MCD::OPC_FilterValue, 15, 118, 12, // Skip to: 4261
/* 1071 */    MCD::OPC_CheckPredicate, 7, 114, 12, // Skip to: 4261
/* 1075 */    MCD::OPC_Decode, 182, 16, 49, // Opcode: SHLLV_S_W_MM
/* 1079 */    MCD::OPC_FilterValue, 24, 39, 0, // Skip to: 1122
/* 1083 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1086 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1098
/* 1090 */    MCD::OPC_CheckPredicate, 5, 95, 12, // Skip to: 4261
/* 1094 */    MCD::OPC_Decode, 228, 12, 51, // Opcode: MOVN_I_MM
/* 1098 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1110
/* 1102 */    MCD::OPC_CheckPredicate, 5, 83, 12, // Skip to: 4261
/* 1106 */    MCD::OPC_Decode, 248, 12, 51, // Opcode: MOVZ_I_MM
/* 1110 */    MCD::OPC_FilterValue, 4, 75, 12, // Skip to: 4261
/* 1114 */    MCD::OPC_CheckPredicate, 5, 71, 12, // Skip to: 4261
/* 1118 */    MCD::OPC_Decode, 181, 11, 52, // Opcode: LWXS_MM
/* 1122 */    MCD::OPC_FilterValue, 29, 20, 0, // Skip to: 1146
/* 1126 */    MCD::OPC_CheckPredicate, 7, 59, 12, // Skip to: 4261
/* 1130 */    MCD::OPC_CheckField, 22, 4, 0, 53, 12, // Skip to: 4261
/* 1136 */    MCD::OPC_CheckField, 6, 8, 0, 47, 12, // Skip to: 4261
/* 1142 */    MCD::OPC_Decode, 174, 16, 53, // Opcode: SHILO_MM
/* 1146 */    MCD::OPC_FilterValue, 37, 63, 0, // Skip to: 1213
/* 1150 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1153 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1165
/* 1157 */    MCD::OPC_CheckPredicate, 7, 28, 12, // Skip to: 4261
/* 1161 */    MCD::OPC_Decode, 190, 13, 42, // Opcode: MULEQ_S_W_PHL_MM
/* 1165 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1177
/* 1169 */    MCD::OPC_CheckPredicate, 7, 16, 12, // Skip to: 4261
/* 1173 */    MCD::OPC_Decode, 192, 13, 42, // Opcode: MULEQ_S_W_PHR_MM
/* 1177 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1189
/* 1181 */    MCD::OPC_CheckPredicate, 7, 4, 12, // Skip to: 4261
/* 1185 */    MCD::OPC_Decode, 233, 10, 52, // Opcode: LHX_MM
/* 1189 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1201
/* 1193 */    MCD::OPC_CheckPredicate, 7, 248, 11, // Skip to: 4261
/* 1197 */    MCD::OPC_Decode, 182, 11, 52, // Opcode: LWX_MM
/* 1201 */    MCD::OPC_FilterValue, 8, 240, 11, // Skip to: 4261
/* 1205 */    MCD::OPC_CheckPredicate, 7, 236, 11, // Skip to: 4261
/* 1209 */    MCD::OPC_Decode, 189, 10, 52, // Opcode: LBUX_MM
/* 1213 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 1225
/* 1217 */    MCD::OPC_CheckPredicate, 5, 224, 11, // Skip to: 4261
/* 1221 */    MCD::OPC_Decode, 154, 8, 54, // Opcode: EXT_MM
/* 1225 */    MCD::OPC_FilterValue, 45, 123, 0, // Skip to: 1352
/* 1229 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1232 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1244
/* 1236 */    MCD::OPC_CheckPredicate, 8, 205, 11, // Skip to: 4261
/* 1240 */    MCD::OPC_Decode, 228, 13, 46, // Opcode: MUL_PH_MMR2
/* 1244 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1256
/* 1248 */    MCD::OPC_CheckPredicate, 8, 193, 11, // Skip to: 4261
/* 1252 */    MCD::OPC_Decode, 214, 14, 46, // Opcode: PRECR_QB_PH_MMR2
/* 1256 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1268
/* 1260 */    MCD::OPC_CheckPredicate, 7, 181, 11, // Skip to: 4261
/* 1264 */    MCD::OPC_Decode, 210, 14, 46, // Opcode: PRECRQ_QB_PH_MM
/* 1268 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1280
/* 1272 */    MCD::OPC_CheckPredicate, 7, 169, 11, // Skip to: 4261
/* 1276 */    MCD::OPC_Decode, 208, 14, 55, // Opcode: PRECRQ_PH_W_MM
/* 1280 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1292
/* 1284 */    MCD::OPC_CheckPredicate, 7, 157, 11, // Skip to: 4261
/* 1288 */    MCD::OPC_Decode, 212, 14, 55, // Opcode: PRECRQ_RS_PH_W_MM
/* 1292 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1304
/* 1296 */    MCD::OPC_CheckPredicate, 7, 145, 11, // Skip to: 4261
/* 1300 */    MCD::OPC_Decode, 206, 14, 46, // Opcode: PRECRQU_S_QB_PH_MM
/* 1304 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1316
/* 1308 */    MCD::OPC_CheckPredicate, 7, 133, 11, // Skip to: 4261
/* 1312 */    MCD::OPC_Decode, 164, 14, 46, // Opcode: PACKRL_PH_MM
/* 1316 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1328
/* 1320 */    MCD::OPC_CheckPredicate, 7, 121, 11, // Skip to: 4261
/* 1324 */    MCD::OPC_Decode, 183, 14, 46, // Opcode: PICK_QB_MM
/* 1328 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1340
/* 1332 */    MCD::OPC_CheckPredicate, 7, 109, 11, // Skip to: 4261
/* 1336 */    MCD::OPC_Decode, 181, 14, 46, // Opcode: PICK_PH_MM
/* 1340 */    MCD::OPC_FilterValue, 16, 101, 11, // Skip to: 4261
/* 1344 */    MCD::OPC_CheckPredicate, 8, 97, 11, // Skip to: 4261
/* 1348 */    MCD::OPC_Decode, 233, 13, 46, // Opcode: MUL_S_PH_MMR2
/* 1352 */    MCD::OPC_FilterValue, 53, 94, 0, // Skip to: 1450
/* 1356 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1359 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1371
/* 1363 */    MCD::OPC_CheckPredicate, 7, 78, 11, // Skip to: 4261
/* 1367 */    MCD::OPC_Decode, 210, 16, 40, // Opcode: SHRA_R_W_MM
/* 1371 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 1389
/* 1375 */    MCD::OPC_CheckPredicate, 7, 66, 11, // Skip to: 4261
/* 1379 */    MCD::OPC_CheckField, 11, 1, 0, 60, 11, // Skip to: 4261
/* 1385 */    MCD::OPC_Decode, 202, 16, 56, // Opcode: SHRA_PH_MM
/* 1389 */    MCD::OPC_FilterValue, 14, 27, 0, // Skip to: 1420
/* 1393 */    MCD::OPC_ExtractField, 11, 1,  // Inst{11} ...
/* 1396 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1408
/* 1400 */    MCD::OPC_CheckPredicate, 7, 41, 11, // Skip to: 4261
/* 1404 */    MCD::OPC_Decode, 184, 16, 56, // Opcode: SHLL_PH_MM
/* 1408 */    MCD::OPC_FilterValue, 1, 33, 11, // Skip to: 4261
/* 1412 */    MCD::OPC_CheckPredicate, 7, 29, 11, // Skip to: 4261
/* 1416 */    MCD::OPC_Decode, 188, 16, 56, // Opcode: SHLL_S_PH_MM
/* 1420 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 1432
/* 1424 */    MCD::OPC_CheckPredicate, 7, 17, 11, // Skip to: 4261
/* 1428 */    MCD::OPC_Decode, 190, 16, 40, // Opcode: SHLL_S_W_MM
/* 1432 */    MCD::OPC_FilterValue, 28, 9, 11, // Skip to: 4261
/* 1436 */    MCD::OPC_CheckPredicate, 7, 5, 11, // Skip to: 4261
/* 1440 */    MCD::OPC_CheckField, 11, 1, 0, 255, 10, // Skip to: 4261
/* 1446 */    MCD::OPC_Decode, 206, 16, 56, // Opcode: SHRA_R_PH_MM
/* 1450 */    MCD::OPC_FilterValue, 60, 122, 6, // Skip to: 3112
/* 1454 */    MCD::OPC_ExtractField, 6, 6,  // Inst{11-6} ...
/* 1457 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1469
/* 1461 */    MCD::OPC_CheckPredicate, 5, 236, 10, // Skip to: 4261
/* 1465 */    MCD::OPC_Decode, 230, 18, 57, // Opcode: TEQ_MM
/* 1469 */    MCD::OPC_FilterValue, 1, 75, 0, // Skip to: 1548
/* 1473 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1476 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1494
/* 1480 */    MCD::OPC_CheckPredicate, 7, 217, 10, // Skip to: 4261
/* 1484 */    MCD::OPC_CheckField, 21, 5, 0, 211, 10, // Skip to: 4261
/* 1490 */    MCD::OPC_Decode, 155, 12, 58, // Opcode: MFHI_DSP_MM
/* 1494 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1512
/* 1498 */    MCD::OPC_CheckPredicate, 7, 199, 10, // Skip to: 4261
/* 1502 */    MCD::OPC_CheckField, 21, 5, 0, 193, 10, // Skip to: 4261
/* 1508 */    MCD::OPC_Decode, 161, 12, 58, // Opcode: MFLO_DSP_MM
/* 1512 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1530
/* 1516 */    MCD::OPC_CheckPredicate, 7, 181, 10, // Skip to: 4261
/* 1520 */    MCD::OPC_CheckField, 21, 5, 0, 175, 10, // Skip to: 4261
/* 1526 */    MCD::OPC_Decode, 169, 13, 59, // Opcode: MTHI_DSP_MM
/* 1530 */    MCD::OPC_FilterValue, 3, 167, 10, // Skip to: 4261
/* 1534 */    MCD::OPC_CheckPredicate, 7, 163, 10, // Skip to: 4261
/* 1538 */    MCD::OPC_CheckField, 21, 5, 0, 157, 10, // Skip to: 4261
/* 1544 */    MCD::OPC_Decode, 176, 13, 60, // Opcode: MTLO_DSP_MM
/* 1548 */    MCD::OPC_FilterValue, 2, 51, 0, // Skip to: 1603
/* 1552 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1555 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1567
/* 1559 */    MCD::OPC_CheckPredicate, 8, 138, 10, // Skip to: 4261
/* 1563 */    MCD::OPC_Decode, 172, 7, 61, // Opcode: DPA_W_PH_MMR2
/* 1567 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1579
/* 1571 */    MCD::OPC_CheckPredicate, 8, 126, 10, // Skip to: 4261
/* 1575 */    MCD::OPC_Decode, 170, 7, 61, // Opcode: DPAX_W_PH_MMR2
/* 1579 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1591
/* 1583 */    MCD::OPC_CheckPredicate, 7, 114, 10, // Skip to: 4261
/* 1587 */    MCD::OPC_Decode, 166, 7, 61, // Opcode: DPAU_H_QBL_MM
/* 1591 */    MCD::OPC_FilterValue, 3, 106, 10, // Skip to: 4261
/* 1595 */    MCD::OPC_CheckPredicate, 7, 102, 10, // Skip to: 4261
/* 1599 */    MCD::OPC_Decode, 168, 7, 61, // Opcode: DPAU_H_QBR_MM
/* 1603 */    MCD::OPC_FilterValue, 4, 144, 0, // Skip to: 1751
/* 1607 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1610 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 1621
/* 1614 */    MCD::OPC_CheckPredicate, 8, 83, 10, // Skip to: 4261
/* 1618 */    MCD::OPC_Decode, 86, 62, // Opcode: ABSQ_S_QB_MMR2
/* 1621 */    MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 1632
/* 1625 */    MCD::OPC_CheckPredicate, 7, 72, 10, // Skip to: 4261
/* 1629 */    MCD::OPC_Decode, 84, 62, // Opcode: ABSQ_S_PH_MM
/* 1632 */    MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 1643
/* 1636 */    MCD::OPC_CheckPredicate, 7, 61, 10, // Skip to: 4261
/* 1640 */    MCD::OPC_Decode, 88, 63, // Opcode: ABSQ_S_W_MM
/* 1643 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1655
/* 1647 */    MCD::OPC_CheckPredicate, 7, 50, 10, // Skip to: 4261
/* 1651 */    MCD::OPC_Decode, 245, 2, 63, // Opcode: BITREV_MM
/* 1655 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1667
/* 1659 */    MCD::OPC_CheckPredicate, 7, 38, 10, // Skip to: 4261
/* 1663 */    MCD::OPC_Decode, 135, 10, 64, // Opcode: INSV_MM
/* 1667 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1679
/* 1671 */    MCD::OPC_CheckPredicate, 7, 26, 10, // Skip to: 4261
/* 1675 */    MCD::OPC_Decode, 194, 14, 65, // Opcode: PRECEQ_W_PHL_MM
/* 1679 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1691
/* 1683 */    MCD::OPC_CheckPredicate, 7, 14, 10, // Skip to: 4261
/* 1687 */    MCD::OPC_Decode, 196, 14, 65, // Opcode: PRECEQ_W_PHR_MM
/* 1691 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1703
/* 1695 */    MCD::OPC_CheckPredicate, 7, 2, 10, // Skip to: 4261
/* 1699 */    MCD::OPC_Decode, 188, 14, 62, // Opcode: PRECEQU_PH_QBL_MM
/* 1703 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1715
/* 1707 */    MCD::OPC_CheckPredicate, 7, 246, 9, // Skip to: 4261
/* 1711 */    MCD::OPC_Decode, 192, 14, 62, // Opcode: PRECEQU_PH_QBR_MM
/* 1715 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1727
/* 1719 */    MCD::OPC_CheckPredicate, 7, 234, 9, // Skip to: 4261
/* 1723 */    MCD::OPC_Decode, 200, 14, 62, // Opcode: PRECEU_PH_QBL_MM
/* 1727 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1739
/* 1731 */    MCD::OPC_CheckPredicate, 7, 222, 9, // Skip to: 4261
/* 1735 */    MCD::OPC_Decode, 204, 14, 62, // Opcode: PRECEU_PH_QBR_MM
/* 1739 */    MCD::OPC_FilterValue, 15, 214, 9, // Skip to: 4261
/* 1743 */    MCD::OPC_CheckPredicate, 7, 210, 9, // Skip to: 4261
/* 1747 */    MCD::OPC_Decode, 156, 15, 65, // Opcode: RADDU_W_QB_MM
/* 1751 */    MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 1782
/* 1755 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1758 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1770
/* 1762 */    MCD::OPC_CheckPredicate, 8, 191, 9, // Skip to: 4261
/* 1766 */    MCD::OPC_Decode, 204, 16, 66, // Opcode: SHRA_QB_MMR2
/* 1770 */    MCD::OPC_FilterValue, 1, 183, 9, // Skip to: 4261
/* 1774 */    MCD::OPC_CheckPredicate, 8, 179, 9, // Skip to: 4261
/* 1778 */    MCD::OPC_Decode, 208, 16, 66, // Opcode: SHRA_R_QB_MMR2
/* 1782 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1794
/* 1786 */    MCD::OPC_CheckPredicate, 5, 167, 9, // Skip to: 4261
/* 1790 */    MCD::OPC_Decode, 238, 18, 57, // Opcode: TGE_MM
/* 1794 */    MCD::OPC_FilterValue, 9, 39, 0, // Skip to: 1837
/* 1798 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1801 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1819
/* 1805 */    MCD::OPC_CheckPredicate, 7, 148, 9, // Skip to: 4261
/* 1809 */    MCD::OPC_CheckField, 21, 5, 0, 142, 9, // Skip to: 4261
/* 1815 */    MCD::OPC_Decode, 172, 13, 67, // Opcode: MTHLIP_MM
/* 1819 */    MCD::OPC_FilterValue, 1, 134, 9, // Skip to: 4261
/* 1823 */    MCD::OPC_CheckPredicate, 7, 130, 9, // Skip to: 4261
/* 1827 */    MCD::OPC_CheckField, 21, 5, 0, 124, 9, // Skip to: 4261
/* 1833 */    MCD::OPC_Decode, 173, 16, 67, // Opcode: SHILOV_MM
/* 1837 */    MCD::OPC_FilterValue, 10, 51, 0, // Skip to: 1892
/* 1841 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1844 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1856
/* 1848 */    MCD::OPC_CheckPredicate, 7, 105, 9, // Skip to: 4261
/* 1852 */    MCD::OPC_Decode, 164, 7, 61, // Opcode: DPAQ_S_W_PH_MM
/* 1856 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1868
/* 1860 */    MCD::OPC_CheckPredicate, 7, 93, 9, // Skip to: 4261
/* 1864 */    MCD::OPC_Decode, 162, 7, 61, // Opcode: DPAQ_SA_L_W_MM
/* 1868 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1880
/* 1872 */    MCD::OPC_CheckPredicate, 8, 81, 9, // Skip to: 4261
/* 1876 */    MCD::OPC_Decode, 160, 7, 61, // Opcode: DPAQX_S_W_PH_MMR2
/* 1880 */    MCD::OPC_FilterValue, 3, 73, 9, // Skip to: 4261
/* 1884 */    MCD::OPC_CheckPredicate, 8, 69, 9, // Skip to: 4261
/* 1888 */    MCD::OPC_Decode, 158, 7, 61, // Opcode: DPAQX_SA_W_PH_MMR2
/* 1892 */    MCD::OPC_FilterValue, 12, 75, 0, // Skip to: 1971
/* 1896 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1899 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1911
/* 1903 */    MCD::OPC_CheckPredicate, 7, 50, 9, // Skip to: 4261
/* 1907 */    MCD::OPC_Decode, 169, 15, 68, // Opcode: REPLV_PH_MM
/* 1911 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1923
/* 1915 */    MCD::OPC_CheckPredicate, 7, 38, 9, // Skip to: 4261
/* 1919 */    MCD::OPC_Decode, 171, 15, 68, // Opcode: REPLV_QB_MM
/* 1923 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1935
/* 1927 */    MCD::OPC_CheckPredicate, 7, 26, 9, // Skip to: 4261
/* 1931 */    MCD::OPC_Decode, 187, 14, 62, // Opcode: PRECEQU_PH_QBLA_MM
/* 1935 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1947
/* 1939 */    MCD::OPC_CheckPredicate, 7, 14, 9, // Skip to: 4261
/* 1943 */    MCD::OPC_Decode, 191, 14, 62, // Opcode: PRECEQU_PH_QBRA_MM
/* 1947 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1959
/* 1951 */    MCD::OPC_CheckPredicate, 7, 2, 9, // Skip to: 4261
/* 1955 */    MCD::OPC_Decode, 199, 14, 62, // Opcode: PRECEU_PH_QBLA_MM
/* 1959 */    MCD::OPC_FilterValue, 13, 250, 8, // Skip to: 4261
/* 1963 */    MCD::OPC_CheckPredicate, 7, 246, 8, // Skip to: 4261
/* 1967 */    MCD::OPC_Decode, 203, 14, 62, // Opcode: PRECEU_PH_QBRA_MM
/* 1971 */    MCD::OPC_FilterValue, 13, 123, 0, // Skip to: 2098
/* 1975 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1978 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1996
/* 1982 */    MCD::OPC_CheckPredicate, 5, 227, 8, // Skip to: 4261
/* 1986 */    MCD::OPC_CheckField, 16, 10, 0, 221, 8, // Skip to: 4261
/* 1992 */    MCD::OPC_Decode, 244, 18, 0, // Opcode: TLBP_MM
/* 1996 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 2014
/* 2000 */    MCD::OPC_CheckPredicate, 5, 209, 8, // Skip to: 4261
/* 2004 */    MCD::OPC_CheckField, 16, 10, 0, 203, 8, // Skip to: 4261
/* 2010 */    MCD::OPC_Decode, 246, 18, 0, // Opcode: TLBR_MM
/* 2014 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2032
/* 2018 */    MCD::OPC_CheckPredicate, 5, 191, 8, // Skip to: 4261
/* 2022 */    MCD::OPC_CheckField, 16, 10, 0, 185, 8, // Skip to: 4261
/* 2028 */    MCD::OPC_Decode, 248, 18, 0, // Opcode: TLBWI_MM
/* 2032 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 2050
/* 2036 */    MCD::OPC_CheckPredicate, 5, 173, 8, // Skip to: 4261
/* 2040 */    MCD::OPC_CheckField, 16, 10, 0, 167, 8, // Skip to: 4261
/* 2046 */    MCD::OPC_Decode, 250, 18, 0, // Opcode: TLBWR_MM
/* 2050 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2062
/* 2054 */    MCD::OPC_CheckPredicate, 5, 155, 8, // Skip to: 4261
/* 2058 */    MCD::OPC_Decode, 164, 19, 69, // Opcode: WAIT_MM
/* 2062 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 2080
/* 2066 */    MCD::OPC_CheckPredicate, 5, 143, 8, // Skip to: 4261
/* 2070 */    MCD::OPC_CheckField, 16, 10, 0, 137, 8, // Skip to: 4261
/* 2076 */    MCD::OPC_Decode, 212, 6, 0, // Opcode: DERET_MM
/* 2080 */    MCD::OPC_FilterValue, 15, 129, 8, // Skip to: 4261
/* 2084 */    MCD::OPC_CheckPredicate, 5, 125, 8, // Skip to: 4261
/* 2088 */    MCD::OPC_CheckField, 16, 10, 0, 119, 8, // Skip to: 4261
/* 2094 */    MCD::OPC_Decode, 250, 7, 0, // Opcode: ERET_MM
/* 2098 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 2110
/* 2102 */    MCD::OPC_CheckPredicate, 8, 107, 8, // Skip to: 4261
/* 2106 */    MCD::OPC_Decode, 216, 16, 56, // Opcode: SHRL_PH_MMR2
/* 2110 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 2122
/* 2114 */    MCD::OPC_CheckPredicate, 5, 95, 8, // Skip to: 4261
/* 2118 */    MCD::OPC_Decode, 237, 18, 57, // Opcode: TGEU_MM
/* 2122 */    MCD::OPC_FilterValue, 18, 51, 0, // Skip to: 2177
/* 2126 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2129 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2141
/* 2133 */    MCD::OPC_CheckPredicate, 8, 76, 8, // Skip to: 4261
/* 2137 */    MCD::OPC_Decode, 195, 7, 61, // Opcode: DPS_W_PH_MMR2
/* 2141 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2153
/* 2145 */    MCD::OPC_CheckPredicate, 8, 64, 8, // Skip to: 4261
/* 2149 */    MCD::OPC_Decode, 193, 7, 61, // Opcode: DPSX_W_PH_MMR2
/* 2153 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2165
/* 2157 */    MCD::OPC_CheckPredicate, 7, 52, 8, // Skip to: 4261
/* 2161 */    MCD::OPC_Decode, 189, 7, 61, // Opcode: DPSU_H_QBL_MM
/* 2165 */    MCD::OPC_FilterValue, 3, 44, 8, // Skip to: 4261
/* 2169 */    MCD::OPC_CheckPredicate, 7, 40, 8, // Skip to: 4261
/* 2173 */    MCD::OPC_Decode, 191, 7, 61, // Opcode: DPSU_H_QBR_MM
/* 2177 */    MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 2195
/* 2181 */    MCD::OPC_CheckPredicate, 7, 28, 8, // Skip to: 4261
/* 2185 */    MCD::OPC_CheckField, 12, 1, 0, 22, 8, // Skip to: 4261
/* 2191 */    MCD::OPC_Decode, 175, 15, 70, // Opcode: REPL_QB_MM
/* 2195 */    MCD::OPC_FilterValue, 25, 51, 0, // Skip to: 2250
/* 2199 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2202 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2214
/* 2206 */    MCD::OPC_CheckPredicate, 7, 3, 8, // Skip to: 4261
/* 2210 */    MCD::OPC_Decode, 158, 15, 71, // Opcode: RDDSP_MM
/* 2214 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2226
/* 2218 */    MCD::OPC_CheckPredicate, 7, 247, 7, // Skip to: 4261
/* 2222 */    MCD::OPC_Decode, 167, 19, 71, // Opcode: WRDSP_MM
/* 2226 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2238
/* 2230 */    MCD::OPC_CheckPredicate, 7, 235, 7, // Skip to: 4261
/* 2234 */    MCD::OPC_Decode, 135, 8, 72, // Opcode: EXTP_MM
/* 2238 */    MCD::OPC_FilterValue, 3, 227, 7, // Skip to: 4261
/* 2242 */    MCD::OPC_CheckPredicate, 7, 223, 7, // Skip to: 4261
/* 2246 */    MCD::OPC_Decode, 132, 8, 72, // Opcode: EXTPDP_MM
/* 2250 */    MCD::OPC_FilterValue, 26, 51, 0, // Skip to: 2305
/* 2254 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2257 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2269
/* 2261 */    MCD::OPC_CheckPredicate, 7, 204, 7, // Skip to: 4261
/* 2265 */    MCD::OPC_Decode, 181, 7, 61, // Opcode: DPSQ_S_W_PH_MM
/* 2269 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2281
/* 2273 */    MCD::OPC_CheckPredicate, 7, 192, 7, // Skip to: 4261
/* 2277 */    MCD::OPC_Decode, 179, 7, 61, // Opcode: DPSQ_SA_L_W_MM
/* 2281 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2293
/* 2285 */    MCD::OPC_CheckPredicate, 8, 180, 7, // Skip to: 4261
/* 2289 */    MCD::OPC_Decode, 177, 7, 61, // Opcode: DPSQX_S_W_PH_MMR2
/* 2293 */    MCD::OPC_FilterValue, 3, 172, 7, // Skip to: 4261
/* 2297 */    MCD::OPC_CheckPredicate, 8, 168, 7, // Skip to: 4261
/* 2301 */    MCD::OPC_Decode, 175, 7, 61, // Opcode: DPSQX_SA_W_PH_MMR2
/* 2305 */    MCD::OPC_FilterValue, 29, 39, 0, // Skip to: 2348
/* 2309 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2312 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 2330
/* 2316 */    MCD::OPC_CheckPredicate, 5, 149, 7, // Skip to: 4261
/* 2320 */    MCD::OPC_CheckField, 21, 5, 0, 143, 7, // Skip to: 4261
/* 2326 */    MCD::OPC_Decode, 239, 6, 73, // Opcode: DI_MM
/* 2330 */    MCD::OPC_FilterValue, 5, 135, 7, // Skip to: 4261
/* 2334 */    MCD::OPC_CheckPredicate, 5, 131, 7, // Skip to: 4261
/* 2338 */    MCD::OPC_CheckField, 21, 5, 0, 125, 7, // Skip to: 4261
/* 2344 */    MCD::OPC_Decode, 245, 7, 73, // Opcode: EI_MM
/* 2348 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 2360
/* 2352 */    MCD::OPC_CheckPredicate, 5, 113, 7, // Skip to: 4261
/* 2356 */    MCD::OPC_Decode, 129, 19, 57, // Opcode: TLT_MM
/* 2360 */    MCD::OPC_FilterValue, 33, 27, 0, // Skip to: 2391
/* 2364 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 2367 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2379
/* 2371 */    MCD::OPC_CheckPredicate, 7, 94, 7, // Skip to: 4261
/* 2375 */    MCD::OPC_Decode, 186, 16, 66, // Opcode: SHLL_QB_MM
/* 2379 */    MCD::OPC_FilterValue, 1, 86, 7, // Skip to: 4261
/* 2383 */    MCD::OPC_CheckPredicate, 7, 82, 7, // Skip to: 4261
/* 2387 */    MCD::OPC_Decode, 218, 16, 66, // Opcode: SHRL_QB_MM
/* 2391 */    MCD::OPC_FilterValue, 34, 39, 0, // Skip to: 2434
/* 2395 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2398 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2410
/* 2402 */    MCD::OPC_CheckPredicate, 8, 63, 7, // Skip to: 4261
/* 2406 */    MCD::OPC_Decode, 138, 2, 74, // Opcode: BALIGN_MMR2
/* 2410 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2422
/* 2414 */    MCD::OPC_CheckPredicate, 7, 51, 7, // Skip to: 4261
/* 2418 */    MCD::OPC_Decode, 134, 8, 75, // Opcode: EXTPV_MM
/* 2422 */    MCD::OPC_FilterValue, 3, 43, 7, // Skip to: 4261
/* 2426 */    MCD::OPC_CheckPredicate, 7, 39, 7, // Skip to: 4261
/* 2430 */    MCD::OPC_Decode, 131, 8, 75, // Opcode: EXTPDPV_MM
/* 2434 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 2446
/* 2438 */    MCD::OPC_CheckPredicate, 5, 27, 7, // Skip to: 4261
/* 2442 */    MCD::OPC_Decode, 128, 19, 57, // Opcode: TLTU_MM
/* 2446 */    MCD::OPC_FilterValue, 41, 51, 0, // Skip to: 2501
/* 2450 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2453 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2465
/* 2457 */    MCD::OPC_CheckPredicate, 7, 8, 7, // Skip to: 4261
/* 2461 */    MCD::OPC_Decode, 236, 11, 61, // Opcode: MAQ_S_W_PHR_MM
/* 2465 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2477
/* 2469 */    MCD::OPC_CheckPredicate, 7, 252, 6, // Skip to: 4261
/* 2473 */    MCD::OPC_Decode, 234, 11, 61, // Opcode: MAQ_S_W_PHL_MM
/* 2477 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2489
/* 2481 */    MCD::OPC_CheckPredicate, 7, 240, 6, // Skip to: 4261
/* 2485 */    MCD::OPC_Decode, 232, 11, 61, // Opcode: MAQ_SA_W_PHR_MM
/* 2489 */    MCD::OPC_FilterValue, 3, 232, 6, // Skip to: 4261
/* 2493 */    MCD::OPC_CheckPredicate, 7, 228, 6, // Skip to: 4261
/* 2497 */    MCD::OPC_Decode, 230, 11, 61, // Opcode: MAQ_SA_W_PHL_MM
/* 2501 */    MCD::OPC_FilterValue, 42, 51, 0, // Skip to: 2556
/* 2505 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2508 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2520
/* 2512 */    MCD::OPC_CheckPredicate, 7, 209, 6, // Skip to: 4261
/* 2516 */    MCD::OPC_Decode, 223, 11, 61, // Opcode: MADD_DSP_MM
/* 2520 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2532
/* 2524 */    MCD::OPC_CheckPredicate, 7, 197, 6, // Skip to: 4261
/* 2528 */    MCD::OPC_Decode, 213, 11, 61, // Opcode: MADDU_DSP_MM
/* 2532 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2544
/* 2536 */    MCD::OPC_CheckPredicate, 7, 185, 6, // Skip to: 4261
/* 2540 */    MCD::OPC_Decode, 146, 13, 61, // Opcode: MSUB_DSP_MM
/* 2544 */    MCD::OPC_FilterValue, 3, 177, 6, // Skip to: 4261
/* 2548 */    MCD::OPC_CheckPredicate, 7, 173, 6, // Skip to: 4261
/* 2552 */    MCD::OPC_Decode, 136, 13, 61, // Opcode: MSUBU_DSP_MM
/* 2556 */    MCD::OPC_FilterValue, 44, 171, 0, // Skip to: 2731
/* 2560 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2563 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2575
/* 2567 */    MCD::OPC_CheckPredicate, 5, 154, 6, // Skip to: 4261
/* 2571 */    MCD::OPC_Decode, 133, 16, 63, // Opcode: SEB_MM
/* 2575 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2587
/* 2579 */    MCD::OPC_CheckPredicate, 5, 142, 6, // Skip to: 4261
/* 2583 */    MCD::OPC_Decode, 137, 16, 63, // Opcode: SEH_MM
/* 2587 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2599
/* 2591 */    MCD::OPC_CheckPredicate, 5, 130, 6, // Skip to: 4261
/* 2595 */    MCD::OPC_Decode, 183, 4, 63, // Opcode: CLO_MM
/* 2599 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2611
/* 2603 */    MCD::OPC_CheckPredicate, 5, 118, 6, // Skip to: 4261
/* 2607 */    MCD::OPC_Decode, 203, 4, 63, // Opcode: CLZ_MM
/* 2611 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 2623
/* 2615 */    MCD::OPC_CheckPredicate, 9, 106, 6, // Skip to: 4261
/* 2619 */    MCD::OPC_Decode, 161, 15, 76, // Opcode: RDHWR_MM
/* 2623 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2635
/* 2627 */    MCD::OPC_CheckPredicate, 5, 94, 6, // Skip to: 4261
/* 2631 */    MCD::OPC_Decode, 170, 19, 63, // Opcode: WSBH_MM
/* 2635 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 2647
/* 2639 */    MCD::OPC_CheckPredicate, 5, 82, 6, // Skip to: 4261
/* 2643 */    MCD::OPC_Decode, 216, 13, 77, // Opcode: MULT_MM
/* 2647 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2659
/* 2651 */    MCD::OPC_CheckPredicate, 5, 70, 6, // Skip to: 4261
/* 2655 */    MCD::OPC_Decode, 218, 13, 77, // Opcode: MULTu_MM
/* 2659 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 2671
/* 2663 */    MCD::OPC_CheckPredicate, 5, 58, 6, // Skip to: 4261
/* 2667 */    MCD::OPC_Decode, 250, 15, 77, // Opcode: SDIV_MM
/* 2671 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 2683
/* 2675 */    MCD::OPC_CheckPredicate, 5, 46, 6, // Skip to: 4261
/* 2679 */    MCD::OPC_Decode, 148, 19, 77, // Opcode: UDIV_MM
/* 2683 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2695
/* 2687 */    MCD::OPC_CheckPredicate, 5, 34, 6, // Skip to: 4261
/* 2691 */    MCD::OPC_Decode, 224, 11, 77, // Opcode: MADD_MM
/* 2695 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 2707
/* 2699 */    MCD::OPC_CheckPredicate, 5, 22, 6, // Skip to: 4261
/* 2703 */    MCD::OPC_Decode, 214, 11, 77, // Opcode: MADDU_MM
/* 2707 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 2719
/* 2711 */    MCD::OPC_CheckPredicate, 5, 10, 6, // Skip to: 4261
/* 2715 */    MCD::OPC_Decode, 147, 13, 77, // Opcode: MSUB_MM
/* 2719 */    MCD::OPC_FilterValue, 15, 2, 6, // Skip to: 4261
/* 2723 */    MCD::OPC_CheckPredicate, 5, 254, 5, // Skip to: 4261
/* 2727 */    MCD::OPC_Decode, 137, 13, 77, // Opcode: MSUBU_MM
/* 2731 */    MCD::OPC_FilterValue, 45, 45, 0, // Skip to: 2780
/* 2735 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2738 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 2756
/* 2742 */    MCD::OPC_CheckPredicate, 5, 235, 5, // Skip to: 4261
/* 2746 */    MCD::OPC_CheckField, 21, 5, 0, 229, 5, // Skip to: 4261
/* 2752 */    MCD::OPC_Decode, 173, 18, 78, // Opcode: SYNC_MM
/* 2756 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 2768
/* 2760 */    MCD::OPC_CheckPredicate, 5, 217, 5, // Skip to: 4261
/* 2764 */    MCD::OPC_Decode, 176, 18, 69, // Opcode: SYSCALL_MM
/* 2768 */    MCD::OPC_FilterValue, 13, 209, 5, // Skip to: 4261
/* 2772 */    MCD::OPC_CheckPredicate, 5, 205, 5, // Skip to: 4261
/* 2776 */    MCD::OPC_Decode, 238, 15, 69, // Opcode: SDBBP_MM
/* 2780 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 2792
/* 2784 */    MCD::OPC_CheckPredicate, 5, 193, 5, // Skip to: 4261
/* 2788 */    MCD::OPC_Decode, 133, 19, 57, // Opcode: TNE_MM
/* 2792 */    MCD::OPC_FilterValue, 50, 51, 0, // Skip to: 2847
/* 2796 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2799 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2811
/* 2803 */    MCD::OPC_CheckPredicate, 7, 174, 5, // Skip to: 4261
/* 2807 */    MCD::OPC_Decode, 215, 13, 79, // Opcode: MULT_DSP_MM
/* 2811 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2823
/* 2815 */    MCD::OPC_CheckPredicate, 7, 162, 5, // Skip to: 4261
/* 2819 */    MCD::OPC_Decode, 213, 13, 79, // Opcode: MULTU_DSP_MM
/* 2823 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2835
/* 2827 */    MCD::OPC_CheckPredicate, 8, 150, 5, // Skip to: 4261
/* 2831 */    MCD::OPC_Decode, 210, 13, 61, // Opcode: MULSA_W_PH_MMR2
/* 2835 */    MCD::OPC_FilterValue, 3, 142, 5, // Skip to: 4261
/* 2839 */    MCD::OPC_CheckPredicate, 7, 138, 5, // Skip to: 4261
/* 2843 */    MCD::OPC_Decode, 208, 13, 61, // Opcode: MULSAQ_S_W_PH_MM
/* 2847 */    MCD::OPC_FilterValue, 52, 27, 0, // Skip to: 2878
/* 2851 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2854 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2866
/* 2858 */    MCD::OPC_CheckPredicate, 10, 119, 5, // Skip to: 4261
/* 2862 */    MCD::OPC_Decode, 158, 4, 80, // Opcode: CFC2_MM
/* 2866 */    MCD::OPC_FilterValue, 13, 111, 5, // Skip to: 4261
/* 2870 */    MCD::OPC_CheckPredicate, 10, 107, 5, // Skip to: 4261
/* 2874 */    MCD::OPC_Decode, 178, 5, 81, // Opcode: CTC2_MM
/* 2878 */    MCD::OPC_FilterValue, 53, 75, 0, // Skip to: 2957
/* 2882 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2885 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2903
/* 2889 */    MCD::OPC_CheckPredicate, 5, 88, 5, // Skip to: 4261
/* 2893 */    MCD::OPC_CheckField, 21, 5, 0, 82, 5, // Skip to: 4261
/* 2899 */    MCD::OPC_Decode, 156, 12, 73, // Opcode: MFHI_MM
/* 2903 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 2921
/* 2907 */    MCD::OPC_CheckPredicate, 5, 70, 5, // Skip to: 4261
/* 2911 */    MCD::OPC_CheckField, 21, 5, 0, 64, 5, // Skip to: 4261
/* 2917 */    MCD::OPC_Decode, 162, 12, 73, // Opcode: MFLO_MM
/* 2921 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2939
/* 2925 */    MCD::OPC_CheckPredicate, 5, 52, 5, // Skip to: 4261
/* 2929 */    MCD::OPC_CheckField, 21, 5, 0, 46, 5, // Skip to: 4261
/* 2935 */    MCD::OPC_Decode, 170, 13, 73, // Opcode: MTHI_MM
/* 2939 */    MCD::OPC_FilterValue, 3, 38, 5, // Skip to: 4261
/* 2943 */    MCD::OPC_CheckPredicate, 5, 34, 5, // Skip to: 4261
/* 2947 */    MCD::OPC_CheckField, 21, 5, 0, 28, 5, // Skip to: 4261
/* 2953 */    MCD::OPC_Decode, 177, 13, 73, // Opcode: MTLO_MM
/* 2957 */    MCD::OPC_FilterValue, 57, 51, 0, // Skip to: 3012
/* 2961 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2964 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2976
/* 2968 */    MCD::OPC_CheckPredicate, 7, 9, 5, // Skip to: 4261
/* 2972 */    MCD::OPC_Decode, 151, 8, 72, // Opcode: EXTR_W_MM
/* 2976 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2988
/* 2980 */    MCD::OPC_CheckPredicate, 7, 253, 4, // Skip to: 4261
/* 2984 */    MCD::OPC_Decode, 147, 8, 72, // Opcode: EXTR_R_W_MM
/* 2988 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3000
/* 2992 */    MCD::OPC_CheckPredicate, 7, 241, 4, // Skip to: 4261
/* 2996 */    MCD::OPC_Decode, 145, 8, 72, // Opcode: EXTR_RS_W_MM
/* 3000 */    MCD::OPC_FilterValue, 3, 233, 4, // Skip to: 4261
/* 3004 */    MCD::OPC_CheckPredicate, 7, 229, 4, // Skip to: 4261
/* 3008 */    MCD::OPC_Decode, 149, 8, 72, // Opcode: EXTR_S_H_MM
/* 3012 */    MCD::OPC_FilterValue, 58, 51, 0, // Skip to: 3067
/* 3016 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 3019 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3031
/* 3023 */    MCD::OPC_CheckPredicate, 7, 210, 4, // Skip to: 4261
/* 3027 */    MCD::OPC_Decode, 143, 8, 75, // Opcode: EXTRV_W_MM
/* 3031 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3043
/* 3035 */    MCD::OPC_CheckPredicate, 7, 198, 4, // Skip to: 4261
/* 3039 */    MCD::OPC_Decode, 139, 8, 75, // Opcode: EXTRV_R_W_MM
/* 3043 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3055
/* 3047 */    MCD::OPC_CheckPredicate, 7, 186, 4, // Skip to: 4261
/* 3051 */    MCD::OPC_Decode, 137, 8, 75, // Opcode: EXTRV_RS_W_MM
/* 3055 */    MCD::OPC_FilterValue, 3, 178, 4, // Skip to: 4261
/* 3059 */    MCD::OPC_CheckPredicate, 7, 174, 4, // Skip to: 4261
/* 3063 */    MCD::OPC_Decode, 141, 8, 75, // Opcode: EXTRV_S_H_MM
/* 3067 */    MCD::OPC_FilterValue, 60, 166, 4, // Skip to: 4261
/* 3071 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3074 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 3100
/* 3078 */    MCD::OPC_CheckPredicate, 5, 10, 0, // Skip to: 3092
/* 3082 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 3092
/* 3088 */    MCD::OPC_Decode, 171, 10, 73, // Opcode: JR_MM
/* 3092 */    MCD::OPC_CheckPredicate, 5, 141, 4, // Skip to: 4261
/* 3096 */    MCD::OPC_Decode, 151, 10, 63, // Opcode: JALR_MM
/* 3100 */    MCD::OPC_FilterValue, 4, 133, 4, // Skip to: 4261
/* 3104 */    MCD::OPC_CheckPredicate, 5, 129, 4, // Skip to: 4261
/* 3108 */    MCD::OPC_Decode, 149, 10, 63, // Opcode: JALRS_MM
/* 3112 */    MCD::OPC_FilterValue, 61, 121, 4, // Skip to: 4261
/* 3116 */    MCD::OPC_CheckPredicate, 7, 117, 4, // Skip to: 4261
/* 3120 */    MCD::OPC_CheckField, 6, 5, 0, 111, 4, // Skip to: 4261
/* 3126 */    MCD::OPC_Decode, 173, 15, 82, // Opcode: REPL_PH_MM
/* 3130 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3142
/* 3134 */    MCD::OPC_CheckPredicate, 5, 99, 4, // Skip to: 4261
/* 3138 */    MCD::OPC_Decode, 160, 1, 83, // Opcode: ADDi_MM
/* 3142 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3154
/* 3146 */    MCD::OPC_CheckPredicate, 5, 87, 4, // Skip to: 4261
/* 3150 */    MCD::OPC_Decode, 197, 10, 84, // Opcode: LBu_MM
/* 3154 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3166
/* 3158 */    MCD::OPC_CheckPredicate, 5, 75, 4, // Skip to: 4261
/* 3162 */    MCD::OPC_Decode, 222, 15, 84, // Opcode: SB_MM
/* 3166 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3178
/* 3170 */    MCD::OPC_CheckPredicate, 5, 63, 4, // Skip to: 4261
/* 3174 */    MCD::OPC_Decode, 191, 10, 84, // Opcode: LB_MM
/* 3178 */    MCD::OPC_FilterValue, 8, 63, 0, // Skip to: 3245
/* 3182 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3185 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3197
/* 3189 */    MCD::OPC_CheckPredicate, 5, 44, 4, // Skip to: 4261
/* 3193 */    MCD::OPC_Decode, 166, 11, 85, // Opcode: LWP_MM
/* 3197 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3209
/* 3201 */    MCD::OPC_CheckPredicate, 5, 32, 4, // Skip to: 4261
/* 3205 */    MCD::OPC_Decode, 162, 11, 85, // Opcode: LWM32_MM
/* 3209 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3221
/* 3213 */    MCD::OPC_CheckPredicate, 5, 20, 4, // Skip to: 4261
/* 3217 */    MCD::OPC_Decode, 134, 4, 86, // Opcode: CACHE_MM
/* 3221 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3233
/* 3225 */    MCD::OPC_CheckPredicate, 5, 8, 4, // Skip to: 4261
/* 3229 */    MCD::OPC_Decode, 156, 18, 85, // Opcode: SWP_MM
/* 3233 */    MCD::OPC_FilterValue, 13, 0, 4, // Skip to: 4261
/* 3237 */    MCD::OPC_CheckPredicate, 5, 252, 3, // Skip to: 4261
/* 3241 */    MCD::OPC_Decode, 154, 18, 85, // Opcode: SWM32_MM
/* 3245 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 3257
/* 3249 */    MCD::OPC_CheckPredicate, 5, 240, 3, // Skip to: 4261
/* 3253 */    MCD::OPC_Decode, 162, 1, 83, // Opcode: ADDiu_MM
/* 3257 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 3269
/* 3261 */    MCD::OPC_CheckPredicate, 5, 228, 3, // Skip to: 4261
/* 3265 */    MCD::OPC_Decode, 239, 10, 84, // Opcode: LHu_MM
/* 3269 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 3281
/* 3273 */    MCD::OPC_CheckPredicate, 5, 216, 3, // Skip to: 4261
/* 3277 */    MCD::OPC_Decode, 219, 16, 84, // Opcode: SH_MM
/* 3281 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 3293
/* 3285 */    MCD::OPC_CheckPredicate, 5, 204, 3, // Skip to: 4261
/* 3289 */    MCD::OPC_Decode, 234, 10, 84, // Opcode: LH_MM
/* 3293 */    MCD::OPC_FilterValue, 16, 255, 0, // Skip to: 3552
/* 3297 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 3300 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3312
/* 3304 */    MCD::OPC_CheckPredicate, 5, 185, 3, // Skip to: 4261
/* 3308 */    MCD::OPC_Decode, 163, 3, 87, // Opcode: BLTZ_MM
/* 3312 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3324
/* 3316 */    MCD::OPC_CheckPredicate, 5, 173, 3, // Skip to: 4261
/* 3320 */    MCD::OPC_Decode, 158, 3, 87, // Opcode: BLTZAL_MM
/* 3324 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3336
/* 3328 */    MCD::OPC_CheckPredicate, 5, 161, 3, // Skip to: 4261
/* 3332 */    MCD::OPC_Decode, 210, 2, 87, // Opcode: BGEZ_MM
/* 3336 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3348
/* 3340 */    MCD::OPC_CheckPredicate, 5, 149, 3, // Skip to: 4261
/* 3344 */    MCD::OPC_Decode, 205, 2, 87, // Opcode: BGEZAL_MM
/* 3348 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3360
/* 3352 */    MCD::OPC_CheckPredicate, 5, 137, 3, // Skip to: 4261
/* 3356 */    MCD::OPC_Decode, 136, 3, 87, // Opcode: BLEZ_MM
/* 3360 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3372
/* 3364 */    MCD::OPC_CheckPredicate, 4, 125, 3, // Skip to: 4261
/* 3368 */    MCD::OPC_Decode, 188, 3, 87, // Opcode: BNEZC_MM
/* 3372 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3384
/* 3376 */    MCD::OPC_CheckPredicate, 5, 113, 3, // Skip to: 4261
/* 3380 */    MCD::OPC_Decode, 227, 2, 87, // Opcode: BGTZ_MM
/* 3384 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3396
/* 3388 */    MCD::OPC_CheckPredicate, 4, 101, 3, // Skip to: 4261
/* 3392 */    MCD::OPC_Decode, 181, 2, 87, // Opcode: BEQZC_MM
/* 3396 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3408
/* 3400 */    MCD::OPC_CheckPredicate, 5, 89, 3, // Skip to: 4261
/* 3404 */    MCD::OPC_Decode, 254, 18, 88, // Opcode: TLTI_MM
/* 3408 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3420
/* 3412 */    MCD::OPC_CheckPredicate, 5, 77, 3, // Skip to: 4261
/* 3416 */    MCD::OPC_Decode, 235, 18, 88, // Opcode: TGEI_MM
/* 3420 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3432
/* 3424 */    MCD::OPC_CheckPredicate, 5, 65, 3, // Skip to: 4261
/* 3428 */    MCD::OPC_Decode, 253, 18, 88, // Opcode: TLTIU_MM
/* 3432 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3444
/* 3436 */    MCD::OPC_CheckPredicate, 5, 53, 3, // Skip to: 4261
/* 3440 */    MCD::OPC_Decode, 234, 18, 88, // Opcode: TGEIU_MM
/* 3444 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 3456
/* 3448 */    MCD::OPC_CheckPredicate, 5, 41, 3, // Skip to: 4261
/* 3452 */    MCD::OPC_Decode, 132, 19, 88, // Opcode: TNEI_MM
/* 3456 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 3468
/* 3460 */    MCD::OPC_CheckPredicate, 5, 29, 3, // Skip to: 4261
/* 3464 */    MCD::OPC_Decode, 141, 11, 89, // Opcode: LUi_MM
/* 3468 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 3480
/* 3472 */    MCD::OPC_CheckPredicate, 5, 17, 3, // Skip to: 4261
/* 3476 */    MCD::OPC_Decode, 229, 18, 88, // Opcode: TEQI_MM
/* 3480 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 3492
/* 3484 */    MCD::OPC_CheckPredicate, 5, 5, 3, // Skip to: 4261
/* 3488 */    MCD::OPC_Decode, 171, 18, 90, // Opcode: SYNCI_MM
/* 3492 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 3504
/* 3496 */    MCD::OPC_CheckPredicate, 5, 249, 2, // Skip to: 4261
/* 3500 */    MCD::OPC_Decode, 157, 3, 87, // Opcode: BLTZALS_MM
/* 3504 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 3516
/* 3508 */    MCD::OPC_CheckPredicate, 5, 237, 2, // Skip to: 4261
/* 3512 */    MCD::OPC_Decode, 204, 2, 87, // Opcode: BGEZALS_MM
/* 3516 */    MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 3534
/* 3520 */    MCD::OPC_CheckPredicate, 11, 225, 2, // Skip to: 4261
/* 3524 */    MCD::OPC_CheckField, 16, 5, 0, 219, 2, // Skip to: 4261
/* 3530 */    MCD::OPC_Decode, 201, 3, 91, // Opcode: BPOSGE32C_MMR3
/* 3534 */    MCD::OPC_FilterValue, 27, 211, 2, // Skip to: 4261
/* 3538 */    MCD::OPC_CheckPredicate, 12, 207, 2, // Skip to: 4261
/* 3542 */    MCD::OPC_CheckField, 16, 5, 0, 201, 2, // Skip to: 4261
/* 3548 */    MCD::OPC_Decode, 202, 3, 92, // Opcode: BPOSGE32_MM
/* 3552 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 3564
/* 3556 */    MCD::OPC_CheckPredicate, 5, 189, 2, // Skip to: 4261
/* 3560 */    MCD::OPC_Decode, 161, 14, 93, // Opcode: ORi_MM
/* 3564 */    MCD::OPC_FilterValue, 21, 135, 0, // Skip to: 3703
/* 3568 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 3571 */    MCD::OPC_FilterValue, 59, 27, 0, // Skip to: 3602
/* 3575 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3578 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3590
/* 3582 */    MCD::OPC_CheckPredicate, 13, 163, 2, // Skip to: 4261
/* 3586 */    MCD::OPC_Decode, 157, 4, 94, // Opcode: CFC1_MM
/* 3590 */    MCD::OPC_FilterValue, 3, 155, 2, // Skip to: 4261
/* 3594 */    MCD::OPC_CheckPredicate, 13, 151, 2, // Skip to: 4261
/* 3598 */    MCD::OPC_Decode, 177, 5, 95, // Opcode: CTC1_MM
/* 3602 */    MCD::OPC_FilterValue, 251, 2, 27, 0, // Skip to: 3634
/* 3607 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3610 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3622
/* 3614 */    MCD::OPC_CheckPredicate, 5, 131, 2, // Skip to: 4261
/* 3618 */    MCD::OPC_Decode, 216, 12, 96, // Opcode: MOVF_I_MM
/* 3622 */    MCD::OPC_FilterValue, 1, 123, 2, // Skip to: 4261
/* 3626 */    MCD::OPC_CheckPredicate, 5, 119, 2, // Skip to: 4261
/* 3630 */    MCD::OPC_Decode, 236, 12, 96, // Opcode: MOVT_I_MM
/* 3634 */    MCD::OPC_FilterValue, 160, 3, 8, 0, // Skip to: 3647
/* 3639 */    MCD::OPC_CheckPredicate, 5, 106, 2, // Skip to: 4261
/* 3643 */    MCD::OPC_Decode, 223, 14, 97, // Opcode: PREFX_MM
/* 3647 */    MCD::OPC_FilterValue, 187, 4, 97, 2, // Skip to: 4261
/* 3652 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3655 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3667
/* 3659 */    MCD::OPC_CheckPredicate, 13, 86, 2, // Skip to: 4261
/* 3663 */    MCD::OPC_Decode, 202, 15, 98, // Opcode: RSQRT_S_MM
/* 3667 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3679
/* 3671 */    MCD::OPC_CheckPredicate, 13, 74, 2, // Skip to: 4261
/* 3675 */    MCD::OPC_Decode, 167, 15, 98, // Opcode: RECIP_S_MM
/* 3679 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3691
/* 3683 */    MCD::OPC_CheckPredicate, 13, 62, 2, // Skip to: 4261
/* 3687 */    MCD::OPC_Decode, 200, 15, 99, // Opcode: RSQRT_D_MM
/* 3691 */    MCD::OPC_FilterValue, 10, 54, 2, // Skip to: 4261
/* 3695 */    MCD::OPC_CheckPredicate, 13, 50, 2, // Skip to: 4261
/* 3699 */    MCD::OPC_Decode, 165, 15, 99, // Opcode: RECIP_D_MM
/* 3703 */    MCD::OPC_FilterValue, 22, 42, 0, // Skip to: 3749
/* 3707 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 3710 */    MCD::OPC_FilterValue, 197, 1, 8, 0, // Skip to: 3723
/* 3715 */    MCD::OPC_CheckPredicate, 7, 30, 2, // Skip to: 4261
/* 3719 */    MCD::OPC_Decode, 213, 4, 42, // Opcode: CMPGU_EQ_QB_MM
/* 3723 */    MCD::OPC_FilterValue, 133, 2, 8, 0, // Skip to: 3736
/* 3728 */    MCD::OPC_CheckPredicate, 7, 17, 2, // Skip to: 4261
/* 3732 */    MCD::OPC_Decode, 217, 4, 42, // Opcode: CMPGU_LT_QB_MM
/* 3736 */    MCD::OPC_FilterValue, 197, 2, 8, 2, // Skip to: 4261
/* 3741 */    MCD::OPC_CheckPredicate, 7, 4, 2, // Skip to: 4261
/* 3745 */    MCD::OPC_Decode, 215, 4, 42, // Opcode: CMPGU_LE_QB_MM
/* 3749 */    MCD::OPC_FilterValue, 24, 49, 1, // Skip to: 4058
/* 3753 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3756 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3768
/* 3760 */    MCD::OPC_CheckPredicate, 5, 241, 1, // Skip to: 4261
/* 3764 */    MCD::OPC_Decode, 159, 11, 85, // Opcode: LWL_MM
/* 3768 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3780
/* 3772 */    MCD::OPC_CheckPredicate, 5, 229, 1, // Skip to: 4261
/* 3776 */    MCD::OPC_Decode, 172, 11, 85, // Opcode: LWR_MM
/* 3780 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3792
/* 3784 */    MCD::OPC_CheckPredicate, 5, 217, 1, // Skip to: 4261
/* 3788 */    MCD::OPC_Decode, 224, 14, 86, // Opcode: PREF_MM
/* 3792 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3804
/* 3796 */    MCD::OPC_CheckPredicate, 5, 205, 1, // Skip to: 4261
/* 3800 */    MCD::OPC_Decode, 251, 10, 85, // Opcode: LL_MM
/* 3804 */    MCD::OPC_FilterValue, 6, 99, 0, // Skip to: 3907
/* 3808 */    MCD::OPC_ExtractField, 9, 3,  // Inst{11-9} ...
/* 3811 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3823
/* 3815 */    MCD::OPC_CheckPredicate, 5, 186, 1, // Skip to: 4261
/* 3819 */    MCD::OPC_Decode, 196, 10, 100, // Opcode: LBuE_MM
/* 3823 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3835
/* 3827 */    MCD::OPC_CheckPredicate, 5, 174, 1, // Skip to: 4261
/* 3831 */    MCD::OPC_Decode, 238, 10, 100, // Opcode: LHuE_MM
/* 3835 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3847
/* 3839 */    MCD::OPC_CheckPredicate, 5, 162, 1, // Skip to: 4261
/* 3843 */    MCD::OPC_Decode, 158, 11, 100, // Opcode: LWLE_MM
/* 3847 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3859
/* 3851 */    MCD::OPC_CheckPredicate, 5, 150, 1, // Skip to: 4261
/* 3855 */    MCD::OPC_Decode, 171, 11, 100, // Opcode: LWRE_MM
/* 3859 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3871
/* 3863 */    MCD::OPC_CheckPredicate, 5, 138, 1, // Skip to: 4261
/* 3867 */    MCD::OPC_Decode, 184, 10, 100, // Opcode: LBE_MM
/* 3871 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3883
/* 3875 */    MCD::OPC_CheckPredicate, 5, 126, 1, // Skip to: 4261
/* 3879 */    MCD::OPC_Decode, 230, 10, 100, // Opcode: LHE_MM
/* 3883 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3895
/* 3887 */    MCD::OPC_CheckPredicate, 5, 114, 1, // Skip to: 4261
/* 3891 */    MCD::OPC_Decode, 249, 10, 100, // Opcode: LLE_MM
/* 3895 */    MCD::OPC_FilterValue, 7, 106, 1, // Skip to: 4261
/* 3899 */    MCD::OPC_CheckPredicate, 5, 102, 1, // Skip to: 4261
/* 3903 */    MCD::OPC_Decode, 152, 11, 100, // Opcode: LWE_MM
/* 3907 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3919
/* 3911 */    MCD::OPC_CheckPredicate, 5, 90, 1, // Skip to: 4261
/* 3915 */    MCD::OPC_Decode, 151, 18, 85, // Opcode: SWL_MM
/* 3919 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3931
/* 3923 */    MCD::OPC_CheckPredicate, 5, 78, 1, // Skip to: 4261
/* 3927 */    MCD::OPC_Decode, 162, 18, 85, // Opcode: SWR_MM
/* 3931 */    MCD::OPC_FilterValue, 10, 99, 0, // Skip to: 4034
/* 3935 */    MCD::OPC_ExtractField, 9, 3,  // Inst{11-9} ...
/* 3938 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3950
/* 3942 */    MCD::OPC_CheckPredicate, 5, 59, 1, // Skip to: 4261
/* 3946 */    MCD::OPC_Decode, 150, 18, 100, // Opcode: SWLE_MM
/* 3950 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3962
/* 3954 */    MCD::OPC_CheckPredicate, 5, 47, 1, // Skip to: 4261
/* 3958 */    MCD::OPC_Decode, 161, 18, 100, // Opcode: SWRE_MM
/* 3962 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3974
/* 3966 */    MCD::OPC_CheckPredicate, 5, 35, 1, // Skip to: 4261
/* 3970 */    MCD::OPC_Decode, 221, 14, 101, // Opcode: PREFE_MM
/* 3974 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3986
/* 3978 */    MCD::OPC_CheckPredicate, 5, 23, 1, // Skip to: 4261
/* 3982 */    MCD::OPC_Decode, 132, 4, 101, // Opcode: CACHEE_MM
/* 3986 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3998
/* 3990 */    MCD::OPC_CheckPredicate, 5, 11, 1, // Skip to: 4261
/* 3994 */    MCD::OPC_Decode, 220, 15, 100, // Opcode: SBE_MM
/* 3998 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 4010
/* 4002 */    MCD::OPC_CheckPredicate, 5, 255, 0, // Skip to: 4261
/* 4006 */    MCD::OPC_Decode, 166, 16, 100, // Opcode: SHE_MM
/* 4010 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 4022
/* 4014 */    MCD::OPC_CheckPredicate, 5, 243, 0, // Skip to: 4261
/* 4018 */    MCD::OPC_Decode, 230, 15, 100, // Opcode: SCE_MM
/* 4022 */    MCD::OPC_FilterValue, 7, 235, 0, // Skip to: 4261
/* 4026 */    MCD::OPC_CheckPredicate, 5, 231, 0, // Skip to: 4261
/* 4030 */    MCD::OPC_Decode, 145, 18, 100, // Opcode: SWE_MM
/* 4034 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 4046
/* 4038 */    MCD::OPC_CheckPredicate, 5, 219, 0, // Skip to: 4261
/* 4042 */    MCD::OPC_Decode, 232, 15, 85, // Opcode: SC_MM
/* 4046 */    MCD::OPC_FilterValue, 14, 211, 0, // Skip to: 4261
/* 4050 */    MCD::OPC_CheckPredicate, 9, 207, 0, // Skip to: 4261
/* 4054 */    MCD::OPC_Decode, 176, 11, 85, // Opcode: LWU_MM
/* 4058 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 4070
/* 4062 */    MCD::OPC_CheckPredicate, 5, 195, 0, // Skip to: 4261
/* 4066 */    MCD::OPC_Decode, 186, 19, 93, // Opcode: XORi_MM
/* 4070 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 4082
/* 4074 */    MCD::OPC_CheckPredicate, 5, 183, 0, // Skip to: 4261
/* 4078 */    MCD::OPC_Decode, 152, 10, 102, // Opcode: JALS_MM
/* 4082 */    MCD::OPC_FilterValue, 30, 7, 0, // Skip to: 4093
/* 4086 */    MCD::OPC_CheckPredicate, 5, 171, 0, // Skip to: 4261
/* 4090 */    MCD::OPC_Decode, 93, 103, // Opcode: ADDIUPC_MM
/* 4093 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 4105
/* 4097 */    MCD::OPC_CheckPredicate, 5, 160, 0, // Skip to: 4261
/* 4101 */    MCD::OPC_Decode, 251, 16, 83, // Opcode: SLTi_MM
/* 4105 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 4117
/* 4109 */    MCD::OPC_CheckPredicate, 5, 148, 0, // Skip to: 4261
/* 4113 */    MCD::OPC_Decode, 183, 2, 104, // Opcode: BEQ_MM
/* 4117 */    MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 4129
/* 4121 */    MCD::OPC_CheckPredicate, 13, 136, 0, // Skip to: 4261
/* 4125 */    MCD::OPC_Decode, 139, 18, 105, // Opcode: SWC1_MM
/* 4129 */    MCD::OPC_FilterValue, 39, 8, 0, // Skip to: 4141
/* 4133 */    MCD::OPC_CheckPredicate, 13, 124, 0, // Skip to: 4261
/* 4137 */    MCD::OPC_Decode, 146, 11, 105, // Opcode: LWC1_MM
/* 4141 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 4153
/* 4145 */    MCD::OPC_CheckPredicate, 5, 112, 0, // Skip to: 4261
/* 4149 */    MCD::OPC_Decode, 254, 16, 83, // Opcode: SLTiu_MM
/* 4153 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 4165
/* 4157 */    MCD::OPC_CheckPredicate, 5, 100, 0, // Skip to: 4261
/* 4161 */    MCD::OPC_Decode, 190, 3, 104, // Opcode: BNE_MM
/* 4165 */    MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 4177
/* 4169 */    MCD::OPC_CheckPredicate, 14, 88, 0, // Skip to: 4261
/* 4173 */    MCD::OPC_Decode, 244, 15, 105, // Opcode: SDC1_MM
/* 4177 */    MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 4189
/* 4181 */    MCD::OPC_CheckPredicate, 14, 76, 0, // Skip to: 4261
/* 4185 */    MCD::OPC_Decode, 202, 10, 105, // Opcode: LDC1_MM
/* 4189 */    MCD::OPC_FilterValue, 52, 8, 0, // Skip to: 4201
/* 4193 */    MCD::OPC_CheckPredicate, 5, 64, 0, // Skip to: 4261
/* 4197 */    MCD::OPC_Decode, 187, 1, 93, // Opcode: ANDi_MM
/* 4201 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 4213
/* 4205 */    MCD::OPC_CheckPredicate, 5, 52, 0, // Skip to: 4261
/* 4209 */    MCD::OPC_Decode, 172, 10, 102, // Opcode: J_MM
/* 4213 */    MCD::OPC_FilterValue, 60, 8, 0, // Skip to: 4225
/* 4217 */    MCD::OPC_CheckPredicate, 5, 40, 0, // Skip to: 4261
/* 4221 */    MCD::OPC_Decode, 154, 10, 102, // Opcode: JALX_MM
/* 4225 */    MCD::OPC_FilterValue, 61, 8, 0, // Skip to: 4237
/* 4229 */    MCD::OPC_CheckPredicate, 5, 28, 0, // Skip to: 4261
/* 4233 */    MCD::OPC_Decode, 155, 10, 102, // Opcode: JAL_MM
/* 4237 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 4249
/* 4241 */    MCD::OPC_CheckPredicate, 5, 16, 0, // Skip to: 4261
/* 4245 */    MCD::OPC_Decode, 167, 18, 84, // Opcode: SW_MM
/* 4249 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 4261
/* 4253 */    MCD::OPC_CheckPredicate, 5, 4, 0, // Skip to: 4261
/* 4257 */    MCD::OPC_Decode, 183, 11, 84, // Opcode: LW_MM
/* 4261 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips32r6FP6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 21, 29, 0, // Skip to: 36
/* 7 */       MCD::OPC_ExtractField, 0, 16,  // Inst{15-0} ...
/* 10 */      MCD::OPC_FilterValue, 187, 96, 8, 0, // Skip to: 23
/* 15 */      MCD::OPC_CheckPredicate, 15, 41, 0, // Skip to: 60
/* 19 */      MCD::OPC_Decode, 148, 12, 106, // Opcode: MFHC1_D64_MMR6
/* 23 */      MCD::OPC_FilterValue, 187, 112, 32, 0, // Skip to: 60
/* 28 */      MCD::OPC_CheckPredicate, 15, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 163, 13, 107, // Opcode: MTHC1_D64_MMR6
/* 36 */      MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 15, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 243, 15, 105, // Opcode: SDC1_D64_MMR6
/* 48 */      MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 15, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 201, 10, 105, // Opcode: LDC1_D64_MMR6
/* 60 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMipsR616[] = {
/* 0 */       MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 3 */       MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 34
/* 7 */       MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 22
/* 14 */      MCD::OPC_CheckPredicate, 16, 71, 1, // Skip to: 345
/* 18 */      MCD::OPC_Decode, 129, 1, 108, // Opcode: ADDU16_MMR6
/* 22 */      MCD::OPC_FilterValue, 1, 63, 1, // Skip to: 345
/* 26 */      MCD::OPC_CheckPredicate, 16, 59, 1, // Skip to: 345
/* 30 */      MCD::OPC_Decode, 233, 17, 108, // Opcode: SUBU16_MMR6
/* 34 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 46
/* 38 */      MCD::OPC_CheckPredicate, 16, 47, 1, // Skip to: 345
/* 42 */      MCD::OPC_Decode, 208, 12, 21, // Opcode: MOVE16_MMR6
/* 46 */      MCD::OPC_FilterValue, 9, 27, 0, // Skip to: 77
/* 50 */      MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 53 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 65
/* 57 */      MCD::OPC_CheckPredicate, 16, 28, 1, // Skip to: 345
/* 61 */      MCD::OPC_Decode, 231, 16, 22, // Opcode: SLL16_MMR6
/* 65 */      MCD::OPC_FilterValue, 1, 20, 1, // Skip to: 345
/* 69 */      MCD::OPC_CheckPredicate, 16, 16, 1, // Skip to: 345
/* 73 */      MCD::OPC_Decode, 169, 17, 22, // Opcode: SRL16_MMR6
/* 77 */      MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 89
/* 81 */      MCD::OPC_CheckPredicate, 16, 4, 1, // Skip to: 345
/* 85 */      MCD::OPC_Decode, 176, 1, 23, // Opcode: ANDI16_MMR6
/* 89 */      MCD::OPC_FilterValue, 17, 156, 0, // Skip to: 249
/* 93 */      MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 96 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 108
/* 100 */     MCD::OPC_CheckPredicate, 16, 241, 0, // Skip to: 345
/* 104 */     MCD::OPC_Decode, 144, 14, 109, // Opcode: NOT16_MMR6
/* 108 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 120
/* 112 */     MCD::OPC_CheckPredicate, 16, 229, 0, // Skip to: 345
/* 116 */     MCD::OPC_Decode, 173, 1, 110, // Opcode: AND16_MMR6
/* 120 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 132
/* 124 */     MCD::OPC_CheckPredicate, 16, 217, 0, // Skip to: 345
/* 128 */     MCD::OPC_Decode, 161, 11, 26, // Opcode: LWM16_MMR6
/* 132 */     MCD::OPC_FilterValue, 3, 27, 0, // Skip to: 163
/* 136 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 139 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 151
/* 143 */     MCD::OPC_CheckPredicate, 16, 198, 0, // Skip to: 345
/* 147 */     MCD::OPC_Decode, 167, 10, 111, // Opcode: JRC16_MMR6
/* 151 */     MCD::OPC_FilterValue, 1, 190, 0, // Skip to: 345
/* 155 */     MCD::OPC_CheckPredicate, 16, 186, 0, // Skip to: 345
/* 159 */     MCD::OPC_Decode, 168, 10, 112, // Opcode: JRCADDIUSP_MMR6
/* 163 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 175
/* 167 */     MCD::OPC_CheckPredicate, 16, 174, 0, // Skip to: 345
/* 171 */     MCD::OPC_Decode, 174, 19, 110, // Opcode: XOR16_MMR6
/* 175 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 187
/* 179 */     MCD::OPC_CheckPredicate, 16, 162, 0, // Skip to: 345
/* 183 */     MCD::OPC_Decode, 149, 14, 110, // Opcode: OR16_MMR6
/* 187 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 199
/* 191 */     MCD::OPC_CheckPredicate, 16, 150, 0, // Skip to: 345
/* 195 */     MCD::OPC_Decode, 153, 18, 26, // Opcode: SWM16_MMR6
/* 199 */     MCD::OPC_FilterValue, 11, 142, 0, // Skip to: 345
/* 203 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 206 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 218
/* 210 */     MCD::OPC_CheckPredicate, 16, 131, 0, // Skip to: 345
/* 214 */     MCD::OPC_Decode, 144, 10, 111, // Opcode: JALRC16_MMR6
/* 218 */     MCD::OPC_FilterValue, 1, 123, 0, // Skip to: 345
/* 222 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 225 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 237
/* 229 */     MCD::OPC_CheckPredicate, 16, 112, 0, // Skip to: 345
/* 233 */     MCD::OPC_Decode, 206, 3, 113, // Opcode: BREAK16_MMR6
/* 237 */     MCD::OPC_FilterValue, 1, 104, 0, // Skip to: 345
/* 241 */     MCD::OPC_CheckPredicate, 16, 100, 0, // Skip to: 345
/* 245 */     MCD::OPC_Decode, 237, 15, 113, // Opcode: SDBBP16_MMR6
/* 249 */     MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 261
/* 253 */     MCD::OPC_CheckPredicate, 16, 88, 0, // Skip to: 345
/* 257 */     MCD::OPC_Decode, 217, 15, 20, // Opcode: SB16_MMR6
/* 261 */     MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 273
/* 265 */     MCD::OPC_CheckPredicate, 16, 76, 0, // Skip to: 345
/* 269 */     MCD::OPC_Decode, 179, 2, 37, // Opcode: BEQZC16_MMR6
/* 273 */     MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 285
/* 277 */     MCD::OPC_CheckPredicate, 16, 64, 0, // Skip to: 345
/* 281 */     MCD::OPC_Decode, 163, 16, 20, // Opcode: SH16_MMR6
/* 285 */     MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 297
/* 289 */     MCD::OPC_CheckPredicate, 16, 52, 0, // Skip to: 345
/* 293 */     MCD::OPC_Decode, 186, 3, 37, // Opcode: BNEZC16_MMR6
/* 297 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 309
/* 301 */     MCD::OPC_CheckPredicate, 16, 40, 0, // Skip to: 345
/* 305 */     MCD::OPC_Decode, 164, 18, 30, // Opcode: SWSP_MMR6
/* 309 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 321
/* 313 */     MCD::OPC_CheckPredicate, 16, 28, 0, // Skip to: 345
/* 317 */     MCD::OPC_Decode, 145, 2, 38, // Opcode: BC16_MMR6
/* 321 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 333
/* 325 */     MCD::OPC_CheckPredicate, 16, 16, 0, // Skip to: 345
/* 329 */     MCD::OPC_Decode, 136, 18, 20, // Opcode: SW16_MMR6
/* 333 */     MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 345
/* 337 */     MCD::OPC_CheckPredicate, 16, 4, 0, // Skip to: 345
/* 341 */     MCD::OPC_Decode, 241, 10, 39, // Opcode: LI16_MMR6
/* 345 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMipsR632[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 138, 3, // Skip to: 913
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 96, 0, // Skip to: 110
/* 14 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 17 */      MCD::OPC_FilterValue, 0, 47, 0, // Skip to: 68
/* 21 */      MCD::OPC_ExtractField, 11, 15,  // Inst{25-11} ...
/* 24 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 17, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 191, 17, 0, // Opcode: SSNOP_MMR6
/* 36 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 17, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 243, 7, 0, // Opcode: EHB_MMR6
/* 48 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 17, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 167, 14, 0, // Opcode: PAUSE_MMR6
/* 60 */      MCD::OPC_CheckPredicate, 17, 155, 14, // Skip to: 3803
/* 64 */      MCD::OPC_Decode, 244, 16, 40, // Opcode: SLL_MMR6
/* 68 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 80
/* 72 */      MCD::OPC_CheckPredicate, 17, 143, 14, // Skip to: 3803
/* 76 */      MCD::OPC_Decode, 143, 16, 43, // Opcode: SELEQZ_MMR6
/* 80 */      MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 92
/* 84 */      MCD::OPC_CheckPredicate, 17, 131, 14, // Skip to: 3803
/* 88 */      MCD::OPC_Decode, 150, 16, 43, // Opcode: SELNEZ_MMR6
/* 92 */      MCD::OPC_FilterValue, 7, 123, 14, // Skip to: 3803
/* 96 */      MCD::OPC_CheckPredicate, 17, 119, 14, // Skip to: 3803
/* 100 */     MCD::OPC_CheckField, 14, 2, 0, 113, 14, // Skip to: 3803
/* 106 */     MCD::OPC_Decode, 162, 15, 114, // Opcode: RDHWR_MMR6
/* 110 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 122
/* 114 */     MCD::OPC_CheckPredicate, 17, 101, 14, // Skip to: 3803
/* 118 */     MCD::OPC_Decode, 208, 3, 44, // Opcode: BREAK_MMR6
/* 122 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 134
/* 126 */     MCD::OPC_CheckPredicate, 17, 89, 14, // Skip to: 3803
/* 130 */     MCD::OPC_Decode, 137, 10, 45, // Opcode: INS_MMR6
/* 134 */     MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 152
/* 138 */     MCD::OPC_CheckPredicate, 17, 77, 14, // Skip to: 3803
/* 142 */     MCD::OPC_CheckField, 6, 3, 0, 71, 14, // Skip to: 3803
/* 148 */     MCD::OPC_Decode, 133, 11, 115, // Opcode: LSA_MMR6
/* 152 */     MCD::OPC_FilterValue, 16, 117, 0, // Skip to: 273
/* 156 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 159 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 177
/* 163 */     MCD::OPC_CheckPredicate, 17, 52, 14, // Skip to: 3803
/* 167 */     MCD::OPC_CheckField, 16, 5, 0, 46, 14, // Skip to: 3803
/* 173 */     MCD::OPC_Decode, 204, 4, 14, // Opcode: CLZ_MMR6
/* 177 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 189
/* 181 */     MCD::OPC_CheckPredicate, 17, 34, 14, // Skip to: 3803
/* 185 */     MCD::OPC_Decode, 158, 1, 43, // Opcode: ADD_MMR6
/* 189 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 201
/* 193 */     MCD::OPC_CheckPredicate, 17, 22, 14, // Skip to: 3803
/* 197 */     MCD::OPC_Decode, 134, 1, 43, // Opcode: ADDU_MMR6
/* 201 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 213
/* 205 */     MCD::OPC_CheckPredicate, 17, 10, 14, // Skip to: 3803
/* 209 */     MCD::OPC_Decode, 128, 18, 43, // Opcode: SUB_MMR6
/* 213 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 225
/* 217 */     MCD::OPC_CheckPredicate, 17, 254, 13, // Skip to: 3803
/* 221 */     MCD::OPC_Decode, 238, 17, 43, // Opcode: SUBU_MMR6
/* 225 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 237
/* 229 */     MCD::OPC_CheckPredicate, 17, 242, 13, // Skip to: 3803
/* 233 */     MCD::OPC_Decode, 180, 1, 43, // Opcode: AND_MMR6
/* 237 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 249
/* 241 */     MCD::OPC_CheckPredicate, 17, 230, 13, // Skip to: 3803
/* 245 */     MCD::OPC_Decode, 154, 14, 43, // Opcode: OR_MMR6
/* 249 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 261
/* 253 */     MCD::OPC_CheckPredicate, 17, 218, 13, // Skip to: 3803
/* 257 */     MCD::OPC_Decode, 138, 14, 43, // Opcode: NOR_MMR6
/* 261 */     MCD::OPC_FilterValue, 12, 210, 13, // Skip to: 3803
/* 265 */     MCD::OPC_CheckPredicate, 17, 206, 13, // Skip to: 3803
/* 269 */     MCD::OPC_Decode, 179, 19, 43, // Opcode: XOR_MMR6
/* 273 */     MCD::OPC_FilterValue, 24, 99, 0, // Skip to: 376
/* 277 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 280 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 292
/* 284 */     MCD::OPC_CheckPredicate, 17, 187, 13, // Skip to: 3803
/* 288 */     MCD::OPC_Decode, 226, 13, 43, // Opcode: MUL_MMR6
/* 292 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 304
/* 296 */     MCD::OPC_CheckPredicate, 17, 175, 13, // Skip to: 3803
/* 300 */     MCD::OPC_Decode, 187, 13, 43, // Opcode: MUH_MMR6
/* 304 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 316
/* 308 */     MCD::OPC_CheckPredicate, 17, 163, 13, // Skip to: 3803
/* 312 */     MCD::OPC_Decode, 220, 13, 43, // Opcode: MULU_MMR6
/* 316 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 328
/* 320 */     MCD::OPC_CheckPredicate, 17, 151, 13, // Skip to: 3803
/* 324 */     MCD::OPC_Decode, 186, 13, 43, // Opcode: MUHU_MMR6
/* 328 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 340
/* 332 */     MCD::OPC_CheckPredicate, 17, 139, 13, // Skip to: 3803
/* 336 */     MCD::OPC_Decode, 230, 6, 43, // Opcode: DIV_MMR6
/* 340 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 352
/* 344 */     MCD::OPC_CheckPredicate, 17, 127, 13, // Skip to: 3803
/* 348 */     MCD::OPC_Decode, 198, 12, 43, // Opcode: MOD_MMR6
/* 352 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 364
/* 356 */     MCD::OPC_CheckPredicate, 17, 115, 13, // Skip to: 3803
/* 360 */     MCD::OPC_Decode, 229, 6, 43, // Opcode: DIVU_MMR6
/* 364 */     MCD::OPC_FilterValue, 7, 107, 13, // Skip to: 3803
/* 368 */     MCD::OPC_CheckPredicate, 17, 103, 13, // Skip to: 3803
/* 372 */     MCD::OPC_Decode, 197, 12, 43, // Opcode: MODU_MMR6
/* 376 */     MCD::OPC_FilterValue, 31, 14, 0, // Skip to: 394
/* 380 */     MCD::OPC_CheckPredicate, 17, 91, 13, // Skip to: 3803
/* 384 */     MCD::OPC_CheckField, 6, 3, 0, 85, 13, // Skip to: 3803
/* 390 */     MCD::OPC_Decode, 168, 1, 116, // Opcode: ALIGN_MMR6
/* 394 */     MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 406
/* 398 */     MCD::OPC_CheckPredicate, 17, 73, 13, // Skip to: 3803
/* 402 */     MCD::OPC_Decode, 155, 8, 54, // Opcode: EXT_MMR6
/* 406 */     MCD::OPC_FilterValue, 52, 39, 0, // Skip to: 449
/* 410 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 413 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 431
/* 417 */     MCD::OPC_CheckPredicate, 17, 54, 13, // Skip to: 3803
/* 421 */     MCD::OPC_CheckField, 14, 2, 0, 48, 13, // Skip to: 3803
/* 427 */     MCD::OPC_Decode, 144, 12, 117, // Opcode: MFHC0_MMR6
/* 431 */     MCD::OPC_FilterValue, 11, 40, 13, // Skip to: 3803
/* 435 */     MCD::OPC_CheckPredicate, 17, 36, 13, // Skip to: 3803
/* 439 */     MCD::OPC_CheckField, 14, 2, 0, 30, 13, // Skip to: 3803
/* 445 */     MCD::OPC_Decode, 159, 13, 118, // Opcode: MTHC0_MMR6
/* 449 */     MCD::OPC_FilterValue, 60, 22, 13, // Skip to: 3803
/* 453 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 456 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 474
/* 460 */     MCD::OPC_CheckPredicate, 17, 11, 13, // Skip to: 3803
/* 464 */     MCD::OPC_CheckField, 14, 2, 0, 5, 13, // Skip to: 3803
/* 470 */     MCD::OPC_Decode, 138, 12, 117, // Opcode: MFC0_MMR6
/* 474 */     MCD::OPC_FilterValue, 5, 63, 0, // Skip to: 541
/* 478 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 481 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 499
/* 485 */     MCD::OPC_CheckPredicate, 17, 242, 12, // Skip to: 3803
/* 489 */     MCD::OPC_CheckField, 21, 5, 0, 236, 12, // Skip to: 3803
/* 495 */     MCD::OPC_Decode, 238, 7, 73, // Opcode: DVP_MMR6
/* 499 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 517
/* 503 */     MCD::OPC_CheckPredicate, 17, 224, 12, // Skip to: 3803
/* 507 */     MCD::OPC_CheckField, 21, 5, 0, 218, 12, // Skip to: 3803
/* 513 */     MCD::OPC_Decode, 254, 7, 73, // Opcode: EVP_MMR6
/* 517 */     MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 529
/* 521 */     MCD::OPC_CheckPredicate, 17, 206, 12, // Skip to: 3803
/* 525 */     MCD::OPC_Decode, 163, 15, 63, // Opcode: RDPGPR_MMR6
/* 529 */     MCD::OPC_FilterValue, 30, 198, 12, // Skip to: 3803
/* 533 */     MCD::OPC_CheckPredicate, 17, 194, 12, // Skip to: 3803
/* 537 */     MCD::OPC_Decode, 168, 19, 63, // Opcode: WRPGPR_MMR6
/* 541 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 559
/* 545 */     MCD::OPC_CheckPredicate, 17, 182, 12, // Skip to: 3803
/* 549 */     MCD::OPC_CheckField, 14, 2, 0, 176, 12, // Skip to: 3803
/* 555 */     MCD::OPC_Decode, 153, 13, 118, // Opcode: MTC0_MMR6
/* 559 */     MCD::OPC_FilterValue, 12, 63, 0, // Skip to: 626
/* 563 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 566 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 578
/* 570 */     MCD::OPC_CheckPredicate, 17, 157, 12, // Skip to: 3803
/* 574 */     MCD::OPC_Decode, 247, 2, 77, // Opcode: BITSWAP_MMR6
/* 578 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 590
/* 582 */     MCD::OPC_CheckPredicate, 17, 145, 12, // Skip to: 3803
/* 586 */     MCD::OPC_Decode, 134, 16, 63, // Opcode: SEB_MMR6
/* 590 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 602
/* 594 */     MCD::OPC_CheckPredicate, 17, 133, 12, // Skip to: 3803
/* 598 */     MCD::OPC_Decode, 138, 16, 63, // Opcode: SEH_MMR6
/* 602 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 614
/* 606 */     MCD::OPC_CheckPredicate, 17, 121, 12, // Skip to: 3803
/* 610 */     MCD::OPC_Decode, 184, 4, 63, // Opcode: CLO_MMR6
/* 614 */     MCD::OPC_FilterValue, 15, 113, 12, // Skip to: 3803
/* 618 */     MCD::OPC_CheckPredicate, 17, 109, 12, // Skip to: 3803
/* 622 */     MCD::OPC_Decode, 171, 19, 63, // Opcode: WSBH_MMR6
/* 626 */     MCD::OPC_FilterValue, 13, 130, 0, // Skip to: 760
/* 630 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 633 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 651
/* 637 */     MCD::OPC_CheckPredicate, 17, 90, 12, // Skip to: 3803
/* 641 */     MCD::OPC_CheckField, 16, 10, 0, 84, 12, // Skip to: 3803
/* 647 */     MCD::OPC_Decode, 242, 18, 0, // Opcode: TLBINV_MMR6
/* 651 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 669
/* 655 */     MCD::OPC_CheckPredicate, 17, 72, 12, // Skip to: 3803
/* 659 */     MCD::OPC_CheckField, 16, 10, 0, 66, 12, // Skip to: 3803
/* 665 */     MCD::OPC_Decode, 241, 18, 0, // Opcode: TLBINVF_MMR6
/* 669 */     MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 687
/* 673 */     MCD::OPC_CheckPredicate, 17, 54, 12, // Skip to: 3803
/* 677 */     MCD::OPC_CheckField, 21, 5, 0, 48, 12, // Skip to: 3803
/* 683 */     MCD::OPC_Decode, 174, 18, 78, // Opcode: SYNC_MMR6
/* 687 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 699
/* 691 */     MCD::OPC_CheckPredicate, 17, 36, 12, // Skip to: 3803
/* 695 */     MCD::OPC_Decode, 165, 19, 69, // Opcode: WAIT_MMR6
/* 699 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 711
/* 703 */     MCD::OPC_CheckPredicate, 17, 24, 12, // Skip to: 3803
/* 707 */     MCD::OPC_Decode, 239, 15, 69, // Opcode: SDBBP_MMR6
/* 711 */     MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 729
/* 715 */     MCD::OPC_CheckPredicate, 17, 12, 12, // Skip to: 3803
/* 719 */     MCD::OPC_CheckField, 16, 10, 0, 6, 12, // Skip to: 3803
/* 725 */     MCD::OPC_Decode, 213, 6, 0, // Opcode: DERET_MMR6
/* 729 */     MCD::OPC_FilterValue, 30, 254, 11, // Skip to: 3803
/* 733 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 736 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 748
/* 740 */     MCD::OPC_CheckPredicate, 17, 243, 11, // Skip to: 3803
/* 744 */     MCD::OPC_Decode, 251, 7, 0, // Opcode: ERET_MMR6
/* 748 */     MCD::OPC_FilterValue, 1, 235, 11, // Skip to: 3803
/* 752 */     MCD::OPC_CheckPredicate, 17, 231, 11, // Skip to: 3803
/* 756 */     MCD::OPC_Decode, 249, 7, 0, // Opcode: ERETNC_MMR6
/* 760 */     MCD::OPC_FilterValue, 20, 75, 0, // Skip to: 839
/* 764 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 767 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 779
/* 771 */     MCD::OPC_CheckPredicate, 17, 212, 11, // Skip to: 3803
/* 775 */     MCD::OPC_Decode, 143, 12, 80, // Opcode: MFC2_MMR6
/* 779 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 791
/* 783 */     MCD::OPC_CheckPredicate, 17, 200, 11, // Skip to: 3803
/* 787 */     MCD::OPC_Decode, 158, 13, 81, // Opcode: MTC2_MMR6
/* 791 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 803
/* 795 */     MCD::OPC_CheckPredicate, 18, 188, 11, // Skip to: 3803
/* 799 */     MCD::OPC_Decode, 249, 6, 119, // Opcode: DMFC2_MM64R6
/* 803 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 815
/* 807 */     MCD::OPC_CheckPredicate, 18, 176, 11, // Skip to: 3803
/* 811 */     MCD::OPC_Decode, 132, 7, 120, // Opcode: DMTC2_MM64R6
/* 815 */     MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 827
/* 819 */     MCD::OPC_CheckPredicate, 17, 164, 11, // Skip to: 3803
/* 823 */     MCD::OPC_Decode, 150, 12, 80, // Opcode: MFHC2_MMR6
/* 827 */     MCD::OPC_FilterValue, 19, 156, 11, // Skip to: 3803
/* 831 */     MCD::OPC_CheckPredicate, 17, 152, 11, // Skip to: 3803
/* 835 */     MCD::OPC_Decode, 165, 13, 81, // Opcode: MTHC2_MMR6
/* 839 */     MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 870
/* 843 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 846 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 858
/* 850 */     MCD::OPC_CheckPredicate, 17, 133, 11, // Skip to: 3803
/* 854 */     MCD::OPC_Decode, 146, 10, 63, // Opcode: JALRC_MMR6
/* 858 */     MCD::OPC_FilterValue, 3, 125, 11, // Skip to: 3803
/* 862 */     MCD::OPC_CheckPredicate, 17, 121, 11, // Skip to: 3803
/* 866 */     MCD::OPC_Decode, 145, 10, 63, // Opcode: JALRC_HB_MMR6
/* 870 */     MCD::OPC_FilterValue, 29, 113, 11, // Skip to: 3803
/* 874 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 877 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 895
/* 881 */     MCD::OPC_CheckPredicate, 17, 102, 11, // Skip to: 3803
/* 885 */     MCD::OPC_CheckField, 21, 5, 0, 96, 11, // Skip to: 3803
/* 891 */     MCD::OPC_Decode, 240, 6, 73, // Opcode: DI_MMR6
/* 895 */     MCD::OPC_FilterValue, 10, 88, 11, // Skip to: 3803
/* 899 */     MCD::OPC_CheckPredicate, 17, 84, 11, // Skip to: 3803
/* 903 */     MCD::OPC_CheckField, 21, 5, 0, 78, 11, // Skip to: 3803
/* 909 */     MCD::OPC_Decode, 246, 7, 73, // Opcode: EI_MMR6
/* 913 */     MCD::OPC_FilterValue, 4, 22, 0, // Skip to: 939
/* 917 */     MCD::OPC_CheckPredicate, 17, 10, 0, // Skip to: 931
/* 921 */     MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 931
/* 927 */     MCD::OPC_Decode, 135, 11, 121, // Opcode: LUI_MMR6
/* 931 */     MCD::OPC_CheckPredicate, 17, 52, 11, // Skip to: 3803
/* 935 */     MCD::OPC_Decode, 233, 1, 93, // Opcode: AUI_MMR6
/* 939 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 951
/* 943 */     MCD::OPC_CheckPredicate, 17, 40, 11, // Skip to: 3803
/* 947 */     MCD::OPC_Decode, 190, 10, 122, // Opcode: LBU_MMR6
/* 951 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 963
/* 955 */     MCD::OPC_CheckPredicate, 17, 28, 11, // Skip to: 3803
/* 959 */     MCD::OPC_Decode, 223, 15, 84, // Opcode: SB_MMR6
/* 963 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 975
/* 967 */     MCD::OPC_CheckPredicate, 17, 16, 11, // Skip to: 3803
/* 971 */     MCD::OPC_Decode, 192, 10, 122, // Opcode: LB_MMR6
/* 975 */     MCD::OPC_FilterValue, 8, 111, 0, // Skip to: 1090
/* 979 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 982 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1000
/* 986 */     MCD::OPC_CheckPredicate, 17, 253, 10, // Skip to: 3803
/* 990 */     MCD::OPC_CheckField, 11, 1, 0, 247, 10, // Skip to: 3803
/* 996 */     MCD::OPC_Decode, 148, 11, 123, // Opcode: LWC2_MMR6
/* 1000 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1012
/* 1004 */    MCD::OPC_CheckPredicate, 17, 235, 10, // Skip to: 3803
/* 1008 */    MCD::OPC_Decode, 167, 11, 85, // Opcode: LWP_MMR6
/* 1012 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1030
/* 1016 */    MCD::OPC_CheckPredicate, 17, 223, 10, // Skip to: 3803
/* 1020 */    MCD::OPC_CheckField, 11, 1, 0, 217, 10, // Skip to: 3803
/* 1026 */    MCD::OPC_Decode, 204, 10, 123, // Opcode: LDC2_MMR6
/* 1030 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1042
/* 1034 */    MCD::OPC_CheckPredicate, 17, 205, 10, // Skip to: 3803
/* 1038 */    MCD::OPC_Decode, 135, 4, 86, // Opcode: CACHE_MMR6
/* 1042 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 1060
/* 1046 */    MCD::OPC_CheckPredicate, 17, 193, 10, // Skip to: 3803
/* 1050 */    MCD::OPC_CheckField, 11, 1, 0, 187, 10, // Skip to: 3803
/* 1056 */    MCD::OPC_Decode, 141, 18, 123, // Opcode: SWC2_MMR6
/* 1060 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1072
/* 1064 */    MCD::OPC_CheckPredicate, 17, 175, 10, // Skip to: 3803
/* 1068 */    MCD::OPC_Decode, 157, 18, 85, // Opcode: SWP_MMR6
/* 1072 */    MCD::OPC_FilterValue, 10, 167, 10, // Skip to: 3803
/* 1076 */    MCD::OPC_CheckPredicate, 17, 163, 10, // Skip to: 3803
/* 1080 */    MCD::OPC_CheckField, 11, 1, 0, 157, 10, // Skip to: 3803
/* 1086 */    MCD::OPC_Decode, 246, 15, 123, // Opcode: SDC2_MMR6
/* 1090 */    MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 1101
/* 1094 */    MCD::OPC_CheckPredicate, 17, 145, 10, // Skip to: 3803
/* 1098 */    MCD::OPC_Decode, 99, 83, // Opcode: ADDIU_MMR6
/* 1101 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1113
/* 1105 */    MCD::OPC_CheckPredicate, 17, 134, 10, // Skip to: 3803
/* 1109 */    MCD::OPC_Decode, 220, 16, 84, // Opcode: SH_MMR6
/* 1113 */    MCD::OPC_FilterValue, 16, 87, 0, // Skip to: 1204
/* 1117 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1120 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1132
/* 1124 */    MCD::OPC_CheckPredicate, 19, 115, 10, // Skip to: 3803
/* 1128 */    MCD::OPC_Decode, 147, 2, 124, // Opcode: BC1EQZC_MMR6
/* 1132 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1144
/* 1136 */    MCD::OPC_CheckPredicate, 19, 103, 10, // Skip to: 3803
/* 1140 */    MCD::OPC_Decode, 152, 2, 124, // Opcode: BC1NEZC_MMR6
/* 1144 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1156
/* 1148 */    MCD::OPC_CheckPredicate, 17, 91, 10, // Skip to: 3803
/* 1152 */    MCD::OPC_Decode, 157, 2, 125, // Opcode: BC2EQZC_MMR6
/* 1156 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1168
/* 1160 */    MCD::OPC_CheckPredicate, 17, 79, 10, // Skip to: 3803
/* 1164 */    MCD::OPC_Decode, 159, 2, 125, // Opcode: BC2NEZC_MMR6
/* 1168 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1180
/* 1172 */    MCD::OPC_CheckPredicate, 17, 67, 10, // Skip to: 3803
/* 1176 */    MCD::OPC_Decode, 172, 18, 126, // Opcode: SYNCI_MMR6
/* 1180 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 1192
/* 1184 */    MCD::OPC_CheckPredicate, 18, 55, 10, // Skip to: 3803
/* 1188 */    MCD::OPC_Decode, 196, 6, 127, // Opcode: DATI_MM64R6
/* 1192 */    MCD::OPC_FilterValue, 17, 47, 10, // Skip to: 3803
/* 1196 */    MCD::OPC_CheckPredicate, 18, 43, 10, // Skip to: 3803
/* 1200 */    MCD::OPC_Decode, 192, 6, 127, // Opcode: DAHI_MM64R6
/* 1204 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 1216
/* 1208 */    MCD::OPC_CheckPredicate, 17, 31, 10, // Skip to: 3803
/* 1212 */    MCD::OPC_Decode, 152, 14, 93, // Opcode: ORI_MMR6
/* 1216 */    MCD::OPC_FilterValue, 21, 159, 5, // Skip to: 2659
/* 1220 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 1223 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1236
/* 1227 */    MCD::OPC_CheckPredicate, 19, 12, 10, // Skip to: 3803
/* 1231 */    MCD::OPC_Decode, 185, 12, 128, 1, // Opcode: MIN_S_MMR6
/* 1236 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1249
/* 1240 */    MCD::OPC_CheckPredicate, 19, 255, 9, // Skip to: 3803
/* 1244 */    MCD::OPC_Decode, 225, 4, 129, 1, // Opcode: CMP_AF_S_MMR6
/* 1249 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1262
/* 1253 */    MCD::OPC_CheckPredicate, 19, 242, 9, // Skip to: 3803
/* 1257 */    MCD::OPC_Decode, 131, 12, 128, 1, // Opcode: MAX_S_MMR6
/* 1262 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 1275
/* 1266 */    MCD::OPC_CheckPredicate, 19, 229, 9, // Skip to: 3803
/* 1270 */    MCD::OPC_Decode, 224, 4, 130, 1, // Opcode: CMP_AF_D_MMR6
/* 1275 */    MCD::OPC_FilterValue, 32, 15, 0, // Skip to: 1294
/* 1279 */    MCD::OPC_CheckPredicate, 17, 216, 9, // Skip to: 3803
/* 1283 */    MCD::OPC_CheckField, 11, 5, 0, 210, 9, // Skip to: 3803
/* 1289 */    MCD::OPC_Decode, 179, 15, 131, 1, // Opcode: RINT_S_MMR6
/* 1294 */    MCD::OPC_FilterValue, 35, 9, 0, // Skip to: 1307
/* 1298 */    MCD::OPC_CheckPredicate, 19, 197, 9, // Skip to: 3803
/* 1302 */    MCD::OPC_Decode, 166, 12, 128, 1, // Opcode: MINA_S_MMR6
/* 1307 */    MCD::OPC_FilterValue, 43, 9, 0, // Skip to: 1320
/* 1311 */    MCD::OPC_CheckPredicate, 19, 184, 9, // Skip to: 3803
/* 1315 */    MCD::OPC_Decode, 240, 11, 128, 1, // Opcode: MAXA_S_MMR6
/* 1320 */    MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 1333
/* 1324 */    MCD::OPC_CheckPredicate, 19, 171, 9, // Skip to: 3803
/* 1328 */    MCD::OPC_Decode, 172, 8, 132, 1, // Opcode: FADD_S_MMR6
/* 1333 */    MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 1346
/* 1337 */    MCD::OPC_CheckPredicate, 17, 158, 9, // Skip to: 3803
/* 1341 */    MCD::OPC_Decode, 145, 16, 128, 1, // Opcode: SELEQZ_S_MMR6
/* 1346 */    MCD::OPC_FilterValue, 59, 55, 0, // Skip to: 1405
/* 1350 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1353 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1366
/* 1357 */    MCD::OPC_CheckPredicate, 19, 138, 9, // Skip to: 3803
/* 1361 */    MCD::OPC_Decode, 141, 12, 133, 1, // Opcode: MFC1_MMR6
/* 1366 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1379
/* 1370 */    MCD::OPC_CheckPredicate, 19, 125, 9, // Skip to: 3803
/* 1374 */    MCD::OPC_Decode, 156, 13, 134, 1, // Opcode: MTC1_MMR6
/* 1379 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1392
/* 1383 */    MCD::OPC_CheckPredicate, 20, 112, 9, // Skip to: 3803
/* 1387 */    MCD::OPC_Decode, 146, 12, 135, 1, // Opcode: MFHC1_D32_MMR6
/* 1392 */    MCD::OPC_FilterValue, 7, 103, 9, // Skip to: 3803
/* 1396 */    MCD::OPC_CheckPredicate, 20, 99, 9, // Skip to: 3803
/* 1400 */    MCD::OPC_Decode, 161, 13, 136, 1, // Opcode: MTHC1_D32_MMR6
/* 1405 */    MCD::OPC_FilterValue, 69, 9, 0, // Skip to: 1418
/* 1409 */    MCD::OPC_CheckPredicate, 19, 86, 9, // Skip to: 3803
/* 1413 */    MCD::OPC_Decode, 165, 5, 129, 1, // Opcode: CMP_UN_S_MMR6
/* 1418 */    MCD::OPC_FilterValue, 85, 9, 0, // Skip to: 1431
/* 1422 */    MCD::OPC_CheckPredicate, 19, 73, 9, // Skip to: 3803
/* 1426 */    MCD::OPC_Decode, 163, 5, 130, 1, // Opcode: CMP_UN_D_MMR6
/* 1431 */    MCD::OPC_FilterValue, 96, 15, 0, // Skip to: 1450
/* 1435 */    MCD::OPC_CheckPredicate, 17, 60, 9, // Skip to: 3803
/* 1439 */    MCD::OPC_CheckField, 11, 5, 0, 54, 9, // Skip to: 3803
/* 1445 */    MCD::OPC_Decode, 165, 4, 131, 1, // Opcode: CLASS_S_MMR6
/* 1450 */    MCD::OPC_FilterValue, 112, 9, 0, // Skip to: 1463
/* 1454 */    MCD::OPC_CheckPredicate, 19, 41, 9, // Skip to: 3803
/* 1458 */    MCD::OPC_Decode, 188, 9, 132, 1, // Opcode: FSUB_S_MMR6
/* 1463 */    MCD::OPC_FilterValue, 120, 9, 0, // Skip to: 1476
/* 1467 */    MCD::OPC_CheckPredicate, 17, 28, 9, // Skip to: 3803
/* 1471 */    MCD::OPC_Decode, 152, 16, 128, 1, // Opcode: SELNEZ_S_MMR6
/* 1476 */    MCD::OPC_FilterValue, 123, 27, 0, // Skip to: 1507
/* 1480 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1483 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1495
/* 1487 */    MCD::OPC_CheckPredicate, 19, 8, 9, // Skip to: 3803
/* 1491 */    MCD::OPC_Decode, 137, 9, 98, // Opcode: FMOV_S_MMR6
/* 1495 */    MCD::OPC_FilterValue, 4, 0, 9, // Skip to: 3803
/* 1499 */    MCD::OPC_CheckPredicate, 19, 252, 8, // Skip to: 3803
/* 1503 */    MCD::OPC_Decode, 134, 9, 99, // Opcode: FMOV_D_MMR6
/* 1507 */    MCD::OPC_FilterValue, 133, 1, 9, 0, // Skip to: 1521
/* 1512 */    MCD::OPC_CheckPredicate, 19, 239, 8, // Skip to: 3803
/* 1516 */    MCD::OPC_Decode, 231, 4, 129, 1, // Opcode: CMP_EQ_S_MMR6
/* 1521 */    MCD::OPC_FilterValue, 149, 1, 9, 0, // Skip to: 1535
/* 1526 */    MCD::OPC_CheckPredicate, 19, 225, 8, // Skip to: 3803
/* 1530 */    MCD::OPC_Decode, 227, 4, 130, 1, // Opcode: CMP_EQ_D_MMR6
/* 1535 */    MCD::OPC_FilterValue, 176, 1, 9, 0, // Skip to: 1549
/* 1540 */    MCD::OPC_CheckPredicate, 19, 211, 8, // Skip to: 3803
/* 1544 */    MCD::OPC_Decode, 147, 9, 132, 1, // Opcode: FMUL_S_MMR6
/* 1549 */    MCD::OPC_FilterValue, 184, 1, 9, 0, // Skip to: 1563
/* 1554 */    MCD::OPC_CheckPredicate, 17, 197, 8, // Skip to: 3803
/* 1558 */    MCD::OPC_Decode, 156, 16, 137, 1, // Opcode: SEL_S_MMR6
/* 1563 */    MCD::OPC_FilterValue, 197, 1, 9, 0, // Skip to: 1577
/* 1568 */    MCD::OPC_CheckPredicate, 19, 183, 8, // Skip to: 3803
/* 1572 */    MCD::OPC_Decode, 153, 5, 129, 1, // Opcode: CMP_UEQ_S_MMR6
/* 1577 */    MCD::OPC_FilterValue, 213, 1, 9, 0, // Skip to: 1591
/* 1582 */    MCD::OPC_CheckPredicate, 19, 169, 8, // Skip to: 3803
/* 1586 */    MCD::OPC_Decode, 151, 5, 130, 1, // Opcode: CMP_UEQ_D_MMR6
/* 1591 */    MCD::OPC_FilterValue, 240, 1, 9, 0, // Skip to: 1605
/* 1596 */    MCD::OPC_CheckPredicate, 19, 155, 8, // Skip to: 3803
/* 1600 */    MCD::OPC_Decode, 210, 8, 132, 1, // Opcode: FDIV_S_MMR6
/* 1605 */    MCD::OPC_FilterValue, 133, 2, 9, 0, // Skip to: 1619
/* 1610 */    MCD::OPC_CheckPredicate, 19, 141, 8, // Skip to: 3803
/* 1614 */    MCD::OPC_Decode, 245, 4, 129, 1, // Opcode: CMP_LT_S_MMR6
/* 1619 */    MCD::OPC_FilterValue, 149, 2, 9, 0, // Skip to: 1633
/* 1624 */    MCD::OPC_CheckPredicate, 19, 127, 8, // Skip to: 3803
/* 1628 */    MCD::OPC_Decode, 241, 4, 130, 1, // Opcode: CMP_LT_D_MMR6
/* 1633 */    MCD::OPC_FilterValue, 176, 2, 9, 0, // Skip to: 1647
/* 1638 */    MCD::OPC_CheckPredicate, 19, 113, 8, // Skip to: 3803
/* 1642 */    MCD::OPC_Decode, 168, 8, 138, 1, // Opcode: FADD_D_MMR6
/* 1647 */    MCD::OPC_FilterValue, 187, 2, 54, 0, // Skip to: 1706
/* 1652 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1655 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1668
/* 1659 */    MCD::OPC_CheckPredicate, 19, 92, 8, // Skip to: 3803
/* 1663 */    MCD::OPC_Decode, 195, 5, 139, 1, // Opcode: CVT_L_S_MMR6
/* 1668 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1680
/* 1672 */    MCD::OPC_CheckPredicate, 19, 79, 8, // Skip to: 3803
/* 1676 */    MCD::OPC_Decode, 211, 5, 98, // Opcode: CVT_W_S_MMR6
/* 1680 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1693
/* 1684 */    MCD::OPC_CheckPredicate, 19, 67, 8, // Skip to: 3803
/* 1688 */    MCD::OPC_Decode, 192, 5, 140, 1, // Opcode: CVT_L_D_MMR6
/* 1693 */    MCD::OPC_FilterValue, 9, 58, 8, // Skip to: 3803
/* 1697 */    MCD::OPC_CheckPredicate, 19, 54, 8, // Skip to: 3803
/* 1701 */    MCD::OPC_Decode, 207, 5, 141, 1, // Opcode: CVT_W_D_MMR6
/* 1706 */    MCD::OPC_FilterValue, 197, 2, 9, 0, // Skip to: 1720
/* 1711 */    MCD::OPC_CheckPredicate, 19, 40, 8, // Skip to: 3803
/* 1715 */    MCD::OPC_Decode, 161, 5, 129, 1, // Opcode: CMP_ULT_S_MMR6
/* 1720 */    MCD::OPC_FilterValue, 213, 2, 9, 0, // Skip to: 1734
/* 1725 */    MCD::OPC_CheckPredicate, 19, 26, 8, // Skip to: 3803
/* 1729 */    MCD::OPC_Decode, 159, 5, 130, 1, // Opcode: CMP_ULT_D_MMR6
/* 1734 */    MCD::OPC_FilterValue, 240, 2, 9, 0, // Skip to: 1748
/* 1739 */    MCD::OPC_CheckPredicate, 19, 12, 8, // Skip to: 3803
/* 1743 */    MCD::OPC_Decode, 184, 9, 138, 1, // Opcode: FSUB_D_MMR6
/* 1748 */    MCD::OPC_FilterValue, 133, 3, 9, 0, // Skip to: 1762
/* 1753 */    MCD::OPC_CheckPredicate, 19, 254, 7, // Skip to: 3803
/* 1757 */    MCD::OPC_Decode, 239, 4, 129, 1, // Opcode: CMP_LE_S_MMR6
/* 1762 */    MCD::OPC_FilterValue, 149, 3, 9, 0, // Skip to: 1776
/* 1767 */    MCD::OPC_CheckPredicate, 19, 240, 7, // Skip to: 3803
/* 1771 */    MCD::OPC_Decode, 235, 4, 130, 1, // Opcode: CMP_LE_D_MMR6
/* 1776 */    MCD::OPC_FilterValue, 176, 3, 9, 0, // Skip to: 1790
/* 1781 */    MCD::OPC_CheckPredicate, 19, 226, 7, // Skip to: 3803
/* 1785 */    MCD::OPC_Decode, 143, 9, 138, 1, // Opcode: FMUL_D_MMR6
/* 1790 */    MCD::OPC_FilterValue, 184, 3, 9, 0, // Skip to: 1804
/* 1795 */    MCD::OPC_CheckPredicate, 19, 212, 7, // Skip to: 3803
/* 1799 */    MCD::OPC_Decode, 208, 11, 142, 1, // Opcode: MADDF_S_MMR6
/* 1804 */    MCD::OPC_FilterValue, 197, 3, 9, 0, // Skip to: 1818
/* 1809 */    MCD::OPC_CheckPredicate, 19, 198, 7, // Skip to: 3803
/* 1813 */    MCD::OPC_Decode, 157, 5, 129, 1, // Opcode: CMP_ULE_S_MMR6
/* 1818 */    MCD::OPC_FilterValue, 213, 3, 9, 0, // Skip to: 1832
/* 1823 */    MCD::OPC_CheckPredicate, 19, 184, 7, // Skip to: 3803
/* 1827 */    MCD::OPC_Decode, 155, 5, 130, 1, // Opcode: CMP_ULE_D_MMR6
/* 1832 */    MCD::OPC_FilterValue, 240, 3, 9, 0, // Skip to: 1846
/* 1837 */    MCD::OPC_CheckPredicate, 19, 170, 7, // Skip to: 3803
/* 1841 */    MCD::OPC_Decode, 206, 8, 138, 1, // Opcode: FDIV_D_MMR6
/* 1846 */    MCD::OPC_FilterValue, 248, 3, 9, 0, // Skip to: 1860
/* 1851 */    MCD::OPC_CheckPredicate, 19, 156, 7, // Skip to: 3803
/* 1855 */    MCD::OPC_Decode, 131, 13, 142, 1, // Opcode: MSUBF_S_MMR6
/* 1860 */    MCD::OPC_FilterValue, 131, 4, 9, 0, // Skip to: 1874
/* 1865 */    MCD::OPC_CheckPredicate, 19, 142, 7, // Skip to: 3803
/* 1869 */    MCD::OPC_Decode, 180, 12, 143, 1, // Opcode: MIN_D_MMR6
/* 1874 */    MCD::OPC_FilterValue, 133, 4, 9, 0, // Skip to: 1888
/* 1879 */    MCD::OPC_CheckPredicate, 19, 128, 7, // Skip to: 3803
/* 1883 */    MCD::OPC_Decode, 249, 4, 129, 1, // Opcode: CMP_SAF_S_MMR6
/* 1888 */    MCD::OPC_FilterValue, 139, 4, 9, 0, // Skip to: 1902
/* 1893 */    MCD::OPC_CheckPredicate, 19, 114, 7, // Skip to: 3803
/* 1897 */    MCD::OPC_Decode, 254, 11, 143, 1, // Opcode: MAX_D_MMR6
/* 1902 */    MCD::OPC_FilterValue, 149, 4, 9, 0, // Skip to: 1916
/* 1907 */    MCD::OPC_CheckPredicate, 19, 100, 7, // Skip to: 3803
/* 1911 */    MCD::OPC_Decode, 247, 4, 130, 1, // Opcode: CMP_SAF_D_MMR6
/* 1916 */    MCD::OPC_FilterValue, 160, 4, 15, 0, // Skip to: 1936
/* 1921 */    MCD::OPC_CheckPredicate, 17, 86, 7, // Skip to: 3803
/* 1925 */    MCD::OPC_CheckField, 11, 5, 0, 80, 7, // Skip to: 3803
/* 1931 */    MCD::OPC_Decode, 177, 15, 144, 1, // Opcode: RINT_D_MMR6
/* 1936 */    MCD::OPC_FilterValue, 163, 4, 9, 0, // Skip to: 1950
/* 1941 */    MCD::OPC_CheckPredicate, 19, 66, 7, // Skip to: 3803
/* 1945 */    MCD::OPC_Decode, 164, 12, 143, 1, // Opcode: MINA_D_MMR6
/* 1950 */    MCD::OPC_FilterValue, 171, 4, 9, 0, // Skip to: 1964
/* 1955 */    MCD::OPC_CheckPredicate, 19, 52, 7, // Skip to: 3803
/* 1959 */    MCD::OPC_Decode, 238, 11, 143, 1, // Opcode: MAXA_D_MMR6
/* 1964 */    MCD::OPC_FilterValue, 184, 4, 9, 0, // Skip to: 1978
/* 1969 */    MCD::OPC_CheckPredicate, 17, 38, 7, // Skip to: 3803
/* 1973 */    MCD::OPC_Decode, 142, 16, 143, 1, // Opcode: SELEQZ_D_MMR6
/* 1978 */    MCD::OPC_FilterValue, 187, 4, 27, 0, // Skip to: 2010
/* 1983 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1986 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1998
/* 1990 */    MCD::OPC_CheckPredicate, 19, 17, 7, // Skip to: 3803
/* 1994 */    MCD::OPC_Decode, 146, 17, 98, // Opcode: SQRT_S_MMR6
/* 1998 */    MCD::OPC_FilterValue, 9, 9, 7, // Skip to: 3803
/* 2002 */    MCD::OPC_CheckPredicate, 19, 5, 7, // Skip to: 3803
/* 2006 */    MCD::OPC_Decode, 145, 17, 99, // Opcode: SQRT_D_MMR6
/* 2010 */    MCD::OPC_FilterValue, 197, 4, 9, 0, // Skip to: 2024
/* 2015 */    MCD::OPC_CheckPredicate, 19, 248, 6, // Skip to: 3803
/* 2019 */    MCD::OPC_Decode, 149, 5, 129, 1, // Opcode: CMP_SUN_S_MMR6
/* 2024 */    MCD::OPC_FilterValue, 213, 4, 9, 0, // Skip to: 2038
/* 2029 */    MCD::OPC_CheckPredicate, 19, 234, 6, // Skip to: 3803
/* 2033 */    MCD::OPC_Decode, 147, 5, 130, 1, // Opcode: CMP_SUN_D_MMR6
/* 2038 */    MCD::OPC_FilterValue, 224, 4, 15, 0, // Skip to: 2058
/* 2043 */    MCD::OPC_CheckPredicate, 17, 220, 6, // Skip to: 3803
/* 2047 */    MCD::OPC_CheckField, 11, 5, 0, 214, 6, // Skip to: 3803
/* 2053 */    MCD::OPC_Decode, 163, 4, 144, 1, // Opcode: CLASS_D_MMR6
/* 2058 */    MCD::OPC_FilterValue, 248, 4, 9, 0, // Skip to: 2072
/* 2063 */    MCD::OPC_CheckPredicate, 17, 200, 6, // Skip to: 3803
/* 2067 */    MCD::OPC_Decode, 149, 16, 143, 1, // Opcode: SELNEZ_D_MMR6
/* 2072 */    MCD::OPC_FilterValue, 133, 5, 9, 0, // Skip to: 2086
/* 2077 */    MCD::OPC_CheckPredicate, 19, 186, 6, // Skip to: 3803
/* 2081 */    MCD::OPC_Decode, 253, 4, 129, 1, // Opcode: CMP_SEQ_S_MMR6
/* 2086 */    MCD::OPC_FilterValue, 149, 5, 9, 0, // Skip to: 2100
/* 2091 */    MCD::OPC_CheckPredicate, 19, 172, 6, // Skip to: 3803
/* 2095 */    MCD::OPC_Decode, 251, 4, 130, 1, // Opcode: CMP_SEQ_D_MMR6
/* 2100 */    MCD::OPC_FilterValue, 184, 5, 9, 0, // Skip to: 2114
/* 2105 */    MCD::OPC_CheckPredicate, 17, 158, 6, // Skip to: 3803
/* 2109 */    MCD::OPC_Decode, 154, 16, 145, 1, // Opcode: SEL_D_MMR6
/* 2114 */    MCD::OPC_FilterValue, 197, 5, 9, 0, // Skip to: 2128
/* 2119 */    MCD::OPC_CheckPredicate, 19, 144, 6, // Skip to: 3803
/* 2123 */    MCD::OPC_Decode, 137, 5, 129, 1, // Opcode: CMP_SUEQ_S_MMR6
/* 2128 */    MCD::OPC_FilterValue, 213, 5, 9, 0, // Skip to: 2142
/* 2133 */    MCD::OPC_CheckPredicate, 19, 130, 6, // Skip to: 3803
/* 2137 */    MCD::OPC_Decode, 135, 5, 130, 1, // Opcode: CMP_SUEQ_D_MMR6
/* 2142 */    MCD::OPC_FilterValue, 133, 6, 9, 0, // Skip to: 2156
/* 2147 */    MCD::OPC_CheckPredicate, 19, 116, 6, // Skip to: 3803
/* 2151 */    MCD::OPC_Decode, 133, 5, 129, 1, // Opcode: CMP_SLT_S_MMR6
/* 2156 */    MCD::OPC_FilterValue, 149, 6, 9, 0, // Skip to: 2170
/* 2161 */    MCD::OPC_CheckPredicate, 19, 102, 6, // Skip to: 3803
/* 2165 */    MCD::OPC_Decode, 131, 5, 130, 1, // Opcode: CMP_SLT_D_MMR6
/* 2170 */    MCD::OPC_FilterValue, 187, 6, 207, 0, // Skip to: 2382
/* 2175 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 2178 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2191
/* 2182 */    MCD::OPC_CheckPredicate, 19, 81, 6, // Skip to: 3803
/* 2186 */    MCD::OPC_Decode, 241, 8, 139, 1, // Opcode: FLOOR_L_S_MMR6
/* 2191 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2203
/* 2195 */    MCD::OPC_CheckPredicate, 19, 68, 6, // Skip to: 3803
/* 2199 */    MCD::OPC_Decode, 248, 8, 98, // Opcode: FLOOR_W_S_MMR6
/* 2203 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2216
/* 2207 */    MCD::OPC_CheckPredicate, 19, 56, 6, // Skip to: 3803
/* 2211 */    MCD::OPC_Decode, 140, 4, 139, 1, // Opcode: CEIL_L_S_MMR6
/* 2216 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2228
/* 2220 */    MCD::OPC_CheckPredicate, 19, 43, 6, // Skip to: 3803
/* 2224 */    MCD::OPC_Decode, 147, 4, 98, // Opcode: CEIL_W_S_MMR6
/* 2228 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 2241
/* 2232 */    MCD::OPC_CheckPredicate, 19, 31, 6, // Skip to: 3803
/* 2236 */    MCD::OPC_Decode, 138, 19, 139, 1, // Opcode: TRUNC_L_S_MMR6
/* 2241 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2253
/* 2245 */    MCD::OPC_CheckPredicate, 19, 18, 6, // Skip to: 3803
/* 2249 */    MCD::OPC_Decode, 145, 19, 98, // Opcode: TRUNC_W_S_MMR6
/* 2253 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2266
/* 2257 */    MCD::OPC_CheckPredicate, 19, 6, 6, // Skip to: 3803
/* 2261 */    MCD::OPC_Decode, 191, 15, 139, 1, // Opcode: ROUND_L_S_MMR6
/* 2266 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2278
/* 2270 */    MCD::OPC_CheckPredicate, 19, 249, 5, // Skip to: 3803
/* 2274 */    MCD::OPC_Decode, 198, 15, 98, // Opcode: ROUND_W_S_MMR6
/* 2278 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 2291
/* 2282 */    MCD::OPC_CheckPredicate, 19, 237, 5, // Skip to: 3803
/* 2286 */    MCD::OPC_Decode, 239, 8, 140, 1, // Opcode: FLOOR_L_D_MMR6
/* 2291 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 2304
/* 2295 */    MCD::OPC_CheckPredicate, 19, 224, 5, // Skip to: 3803
/* 2299 */    MCD::OPC_Decode, 244, 8, 141, 1, // Opcode: FLOOR_W_D_MMR6
/* 2304 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 2317
/* 2308 */    MCD::OPC_CheckPredicate, 19, 211, 5, // Skip to: 3803
/* 2312 */    MCD::OPC_Decode, 138, 4, 140, 1, // Opcode: CEIL_L_D_MMR6
/* 2317 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 2330
/* 2321 */    MCD::OPC_CheckPredicate, 19, 198, 5, // Skip to: 3803
/* 2325 */    MCD::OPC_Decode, 143, 4, 141, 1, // Opcode: CEIL_W_D_MMR6
/* 2330 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 2343
/* 2334 */    MCD::OPC_CheckPredicate, 19, 185, 5, // Skip to: 3803
/* 2338 */    MCD::OPC_Decode, 136, 19, 140, 1, // Opcode: TRUNC_L_D_MMR6
/* 2343 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 2356
/* 2347 */    MCD::OPC_CheckPredicate, 19, 172, 5, // Skip to: 3803
/* 2351 */    MCD::OPC_Decode, 141, 19, 141, 1, // Opcode: TRUNC_W_D_MMR6
/* 2356 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 2369
/* 2360 */    MCD::OPC_CheckPredicate, 19, 159, 5, // Skip to: 3803
/* 2364 */    MCD::OPC_Decode, 189, 15, 140, 1, // Opcode: ROUND_L_D_MMR6
/* 2369 */    MCD::OPC_FilterValue, 15, 150, 5, // Skip to: 3803
/* 2373 */    MCD::OPC_CheckPredicate, 19, 146, 5, // Skip to: 3803
/* 2377 */    MCD::OPC_Decode, 194, 15, 140, 1, // Opcode: ROUND_W_D_MMR6
/* 2382 */    MCD::OPC_FilterValue, 197, 6, 9, 0, // Skip to: 2396
/* 2387 */    MCD::OPC_CheckPredicate, 19, 132, 5, // Skip to: 3803
/* 2391 */    MCD::OPC_Decode, 145, 5, 129, 1, // Opcode: CMP_SULT_S_MMR6
/* 2396 */    MCD::OPC_FilterValue, 213, 6, 9, 0, // Skip to: 2410
/* 2401 */    MCD::OPC_CheckPredicate, 19, 118, 5, // Skip to: 3803
/* 2405 */    MCD::OPC_Decode, 143, 5, 130, 1, // Opcode: CMP_SULT_D_MMR6
/* 2410 */    MCD::OPC_FilterValue, 251, 6, 126, 0, // Skip to: 2541
/* 2415 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 2418 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 2429
/* 2422 */    MCD::OPC_CheckPredicate, 19, 97, 5, // Skip to: 3803
/* 2426 */    MCD::OPC_Decode, 90, 98, // Opcode: ABS_S_MMR6
/* 2429 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2441
/* 2433 */    MCD::OPC_CheckPredicate, 19, 86, 5, // Skip to: 3803
/* 2437 */    MCD::OPC_Decode, 155, 9, 98, // Opcode: FNEG_S_MMR6
/* 2441 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2454
/* 2445 */    MCD::OPC_CheckPredicate, 19, 74, 5, // Skip to: 3803
/* 2449 */    MCD::OPC_Decode, 188, 5, 141, 1, // Opcode: CVT_D_S_MMR6
/* 2454 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2467
/* 2458 */    MCD::OPC_CheckPredicate, 19, 61, 5, // Skip to: 3803
/* 2462 */    MCD::OPC_Decode, 199, 5, 146, 1, // Opcode: CVT_S_D_MMR6
/* 2467 */    MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 2478
/* 2471 */    MCD::OPC_CheckPredicate, 19, 48, 5, // Skip to: 3803
/* 2475 */    MCD::OPC_Decode, 89, 99, // Opcode: ABS_D_MMR6
/* 2478 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2490
/* 2482 */    MCD::OPC_CheckPredicate, 19, 37, 5, // Skip to: 3803
/* 2486 */    MCD::OPC_Decode, 151, 9, 99, // Opcode: FNEG_D_MMR6
/* 2490 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2503
/* 2494 */    MCD::OPC_CheckPredicate, 19, 25, 5, // Skip to: 3803
/* 2498 */    MCD::OPC_Decode, 189, 5, 141, 1, // Opcode: CVT_D_W_MMR6
/* 2503 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2515
/* 2507 */    MCD::OPC_CheckPredicate, 19, 12, 5, // Skip to: 3803
/* 2511 */    MCD::OPC_Decode, 204, 5, 98, // Opcode: CVT_S_W_MMR6
/* 2515 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 2528
/* 2519 */    MCD::OPC_CheckPredicate, 15, 0, 5, // Skip to: 3803
/* 2523 */    MCD::OPC_Decode, 186, 5, 140, 1, // Opcode: CVT_D_L_MMR6
/* 2528 */    MCD::OPC_FilterValue, 11, 247, 4, // Skip to: 3803
/* 2532 */    MCD::OPC_CheckPredicate, 15, 243, 4, // Skip to: 3803
/* 2536 */    MCD::OPC_Decode, 201, 5, 139, 1, // Opcode: CVT_S_L_MMR6
/* 2541 */    MCD::OPC_FilterValue, 133, 7, 9, 0, // Skip to: 2555
/* 2546 */    MCD::OPC_CheckPredicate, 19, 229, 4, // Skip to: 3803
/* 2550 */    MCD::OPC_Decode, 129, 5, 129, 1, // Opcode: CMP_SLE_S_MMR6
/* 2555 */    MCD::OPC_FilterValue, 149, 7, 9, 0, // Skip to: 2569
/* 2560 */    MCD::OPC_CheckPredicate, 19, 215, 4, // Skip to: 3803
/* 2564 */    MCD::OPC_Decode, 255, 4, 130, 1, // Opcode: CMP_SLE_D_MMR6
/* 2569 */    MCD::OPC_FilterValue, 184, 7, 9, 0, // Skip to: 2583
/* 2574 */    MCD::OPC_CheckPredicate, 19, 201, 4, // Skip to: 3803
/* 2578 */    MCD::OPC_Decode, 206, 11, 147, 1, // Opcode: MADDF_D_MMR6
/* 2583 */    MCD::OPC_FilterValue, 197, 7, 9, 0, // Skip to: 2597
/* 2588 */    MCD::OPC_CheckPredicate, 19, 187, 4, // Skip to: 3803
/* 2592 */    MCD::OPC_Decode, 141, 5, 129, 1, // Opcode: CMP_SULE_S_MMR6
/* 2597 */    MCD::OPC_FilterValue, 213, 7, 9, 0, // Skip to: 2611
/* 2602 */    MCD::OPC_CheckPredicate, 19, 173, 4, // Skip to: 3803
/* 2606 */    MCD::OPC_Decode, 139, 5, 130, 1, // Opcode: CMP_SULE_D_MMR6
/* 2611 */    MCD::OPC_FilterValue, 248, 7, 9, 0, // Skip to: 2625
/* 2616 */    MCD::OPC_CheckPredicate, 19, 159, 4, // Skip to: 3803
/* 2620 */    MCD::OPC_Decode, 129, 13, 147, 1, // Opcode: MSUBF_D_MMR6
/* 2625 */    MCD::OPC_FilterValue, 187, 8, 149, 4, // Skip to: 3803
/* 2630 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 2633 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 2646
/* 2637 */    MCD::OPC_CheckPredicate, 18, 138, 4, // Skip to: 3803
/* 2641 */    MCD::OPC_Decode, 247, 6, 148, 1, // Opcode: DMFC1_MM64R6
/* 2646 */    MCD::OPC_FilterValue, 5, 129, 4, // Skip to: 3803
/* 2650 */    MCD::OPC_CheckPredicate, 18, 125, 4, // Skip to: 3803
/* 2654 */    MCD::OPC_Decode, 130, 7, 149, 1, // Opcode: DMTC1_MM64R6
/* 2659 */    MCD::OPC_FilterValue, 22, 62, 2, // Skip to: 3237
/* 2663 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2666 */    MCD::OPC_FilterValue, 0, 55, 0, // Skip to: 2725
/* 2670 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2673 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2686
/* 2677 */    MCD::OPC_CheckPredicate, 18, 98, 4, // Skip to: 3803
/* 2681 */    MCD::OPC_Decode, 218, 7, 150, 1, // Opcode: DSLL_MM64R6
/* 2686 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2699
/* 2690 */    MCD::OPC_CheckPredicate, 18, 85, 4, // Skip to: 3803
/* 2694 */    MCD::OPC_Decode, 230, 7, 150, 1, // Opcode: DSRL_MM64R6
/* 2699 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2712
/* 2703 */    MCD::OPC_CheckPredicate, 18, 72, 4, // Skip to: 3803
/* 2707 */    MCD::OPC_Decode, 224, 7, 150, 1, // Opcode: DSRA_MM64R6
/* 2712 */    MCD::OPC_FilterValue, 3, 63, 4, // Skip to: 3803
/* 2716 */    MCD::OPC_CheckPredicate, 18, 59, 4, // Skip to: 3803
/* 2720 */    MCD::OPC_Decode, 205, 7, 150, 1, // Opcode: DROTR_MM64R6
/* 2725 */    MCD::OPC_FilterValue, 4, 39, 0, // Skip to: 2768
/* 2729 */    MCD::OPC_CheckPredicate, 18, 11, 0, // Skip to: 2744
/* 2733 */    MCD::OPC_CheckField, 6, 5, 2, 5, 0, // Skip to: 2744
/* 2739 */    MCD::OPC_Decode, 221, 7, 150, 1, // Opcode: DSRA32_MM64R6
/* 2744 */    MCD::OPC_CheckPredicate, 18, 11, 0, // Skip to: 2759
/* 2748 */    MCD::OPC_CheckField, 6, 3, 4, 5, 0, // Skip to: 2759
/* 2754 */    MCD::OPC_Decode, 242, 6, 151, 1, // Opcode: DLSA_MM64R6
/* 2759 */    MCD::OPC_CheckPredicate, 18, 16, 4, // Skip to: 3803
/* 2763 */    MCD::OPC_Decode, 223, 6, 152, 1, // Opcode: DINSM_MM64R6
/* 2768 */    MCD::OPC_FilterValue, 8, 42, 0, // Skip to: 2814
/* 2772 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2775 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2788
/* 2779 */    MCD::OPC_CheckPredicate, 18, 252, 3, // Skip to: 3803
/* 2783 */    MCD::OPC_Decode, 214, 7, 150, 1, // Opcode: DSLL32_MM64R6
/* 2788 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2801
/* 2792 */    MCD::OPC_CheckPredicate, 18, 239, 3, // Skip to: 3803
/* 2796 */    MCD::OPC_Decode, 227, 7, 150, 1, // Opcode: DSRL32_MM64R6
/* 2801 */    MCD::OPC_FilterValue, 3, 230, 3, // Skip to: 3803
/* 2805 */    MCD::OPC_CheckPredicate, 18, 226, 3, // Skip to: 3803
/* 2809 */    MCD::OPC_Decode, 202, 7, 150, 1, // Opcode: DROTR32_MM64R6
/* 2814 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 2827
/* 2818 */    MCD::OPC_CheckPredicate, 18, 213, 3, // Skip to: 3803
/* 2822 */    MCD::OPC_Decode, 226, 6, 152, 1, // Opcode: DINS_MM64R6
/* 2827 */    MCD::OPC_FilterValue, 16, 107, 0, // Skip to: 2938
/* 2831 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2834 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2847
/* 2838 */    MCD::OPC_CheckPredicate, 18, 193, 3, // Skip to: 3803
/* 2842 */    MCD::OPC_Decode, 217, 7, 153, 1, // Opcode: DSLLV_MM64R6
/* 2847 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2860
/* 2851 */    MCD::OPC_CheckPredicate, 18, 180, 3, // Skip to: 3803
/* 2855 */    MCD::OPC_Decode, 229, 7, 153, 1, // Opcode: DSRLV_MM64R6
/* 2860 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2873
/* 2864 */    MCD::OPC_CheckPredicate, 18, 167, 3, // Skip to: 3803
/* 2868 */    MCD::OPC_Decode, 223, 7, 153, 1, // Opcode: DSRAV_MM64R6
/* 2873 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2886
/* 2877 */    MCD::OPC_CheckPredicate, 18, 154, 3, // Skip to: 3803
/* 2881 */    MCD::OPC_Decode, 204, 7, 153, 1, // Opcode: DROTRV_MM64R6
/* 2886 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 2899
/* 2890 */    MCD::OPC_CheckPredicate, 18, 141, 3, // Skip to: 3803
/* 2894 */    MCD::OPC_Decode, 187, 6, 154, 1, // Opcode: DADD_MM64R6
/* 2899 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 2912
/* 2903 */    MCD::OPC_CheckPredicate, 18, 128, 3, // Skip to: 3803
/* 2907 */    MCD::OPC_Decode, 186, 6, 154, 1, // Opcode: DADDU_MM64R6
/* 2912 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2925
/* 2916 */    MCD::OPC_CheckPredicate, 18, 115, 3, // Skip to: 3803
/* 2920 */    MCD::OPC_Decode, 233, 7, 154, 1, // Opcode: DSUB_MM64R6
/* 2925 */    MCD::OPC_FilterValue, 7, 106, 3, // Skip to: 3803
/* 2929 */    MCD::OPC_CheckPredicate, 18, 102, 3, // Skip to: 3803
/* 2933 */    MCD::OPC_Decode, 232, 7, 154, 1, // Opcode: DSUBU_MM64R6
/* 2938 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 2951
/* 2942 */    MCD::OPC_CheckPredicate, 18, 89, 3, // Skip to: 3803
/* 2946 */    MCD::OPC_Decode, 218, 6, 155, 1, // Opcode: DEXTU_MM64R6
/* 2951 */    MCD::OPC_FilterValue, 24, 107, 0, // Skip to: 3062
/* 2955 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2958 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2971
/* 2962 */    MCD::OPC_CheckPredicate, 18, 69, 3, // Skip to: 3803
/* 2966 */    MCD::OPC_Decode, 143, 7, 154, 1, // Opcode: DMUL_MM64R6
/* 2971 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2984
/* 2975 */    MCD::OPC_CheckPredicate, 18, 56, 3, // Skip to: 3803
/* 2979 */    MCD::OPC_Decode, 137, 7, 154, 1, // Opcode: DMUH_MM64R6
/* 2984 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2997
/* 2988 */    MCD::OPC_CheckPredicate, 18, 43, 3, // Skip to: 3803
/* 2992 */    MCD::OPC_Decode, 142, 7, 154, 1, // Opcode: DMULU_MM64R6
/* 2997 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 3010
/* 3001 */    MCD::OPC_CheckPredicate, 18, 30, 3, // Skip to: 3803
/* 3005 */    MCD::OPC_Decode, 136, 7, 154, 1, // Opcode: DMUHU_MM64R6
/* 3010 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 3023
/* 3014 */    MCD::OPC_CheckPredicate, 18, 17, 3, // Skip to: 3803
/* 3018 */    MCD::OPC_Decode, 210, 6, 154, 1, // Opcode: DDIV_MM64R6
/* 3023 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 3036
/* 3027 */    MCD::OPC_CheckPredicate, 18, 4, 3, // Skip to: 3803
/* 3031 */    MCD::OPC_Decode, 254, 6, 154, 1, // Opcode: DMOD_MM64R6
/* 3036 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 3049
/* 3040 */    MCD::OPC_CheckPredicate, 18, 247, 2, // Skip to: 3803
/* 3044 */    MCD::OPC_Decode, 209, 6, 154, 1, // Opcode: DDIVU_MM64R6
/* 3049 */    MCD::OPC_FilterValue, 7, 238, 2, // Skip to: 3803
/* 3053 */    MCD::OPC_CheckPredicate, 18, 234, 2, // Skip to: 3803
/* 3057 */    MCD::OPC_Decode, 253, 6, 154, 1, // Opcode: DMODU_MM64R6
/* 3062 */    MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 3081
/* 3066 */    MCD::OPC_CheckPredicate, 18, 221, 2, // Skip to: 3803
/* 3070 */    MCD::OPC_CheckField, 6, 2, 0, 215, 2, // Skip to: 3803
/* 3076 */    MCD::OPC_Decode, 194, 6, 156, 1, // Opcode: DALIGN_MM64R6
/* 3081 */    MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 3094
/* 3085 */    MCD::OPC_CheckPredicate, 18, 202, 2, // Skip to: 3803
/* 3089 */    MCD::OPC_Decode, 216, 6, 155, 1, // Opcode: DEXTM_MM64R6
/* 3094 */    MCD::OPC_FilterValue, 44, 9, 0, // Skip to: 3107
/* 3098 */    MCD::OPC_CheckPredicate, 18, 189, 2, // Skip to: 3803
/* 3102 */    MCD::OPC_Decode, 219, 6, 155, 1, // Opcode: DEXT_MM64R6
/* 3107 */    MCD::OPC_FilterValue, 52, 9, 0, // Skip to: 3120
/* 3111 */    MCD::OPC_CheckPredicate, 18, 176, 2, // Skip to: 3803
/* 3115 */    MCD::OPC_Decode, 225, 6, 152, 1, // Opcode: DINSU_MM64R6
/* 3120 */    MCD::OPC_FilterValue, 60, 167, 2, // Skip to: 3803
/* 3124 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3127 */    MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 3146
/* 3131 */    MCD::OPC_CheckPredicate, 18, 156, 2, // Skip to: 3803
/* 3135 */    MCD::OPC_CheckField, 14, 2, 0, 150, 2, // Skip to: 3803
/* 3141 */    MCD::OPC_Decode, 245, 6, 157, 1, // Opcode: DMFC0_MM64R6
/* 3146 */    MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 3165
/* 3150 */    MCD::OPC_CheckPredicate, 18, 137, 2, // Skip to: 3803
/* 3154 */    MCD::OPC_CheckField, 14, 2, 0, 131, 2, // Skip to: 3803
/* 3160 */    MCD::OPC_Decode, 128, 7, 158, 1, // Opcode: DMTC0_MM64R6
/* 3165 */    MCD::OPC_FilterValue, 12, 122, 2, // Skip to: 3803
/* 3169 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3172 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 3185
/* 3176 */    MCD::OPC_CheckPredicate, 18, 111, 2, // Skip to: 3803
/* 3180 */    MCD::OPC_Decode, 200, 6, 159, 1, // Opcode: DBITSWAP_MM64R6
/* 3185 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 3198
/* 3189 */    MCD::OPC_CheckPredicate, 18, 98, 2, // Skip to: 3803
/* 3193 */    MCD::OPC_Decode, 202, 6, 160, 1, // Opcode: DCLO_MM64R6
/* 3198 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 3211
/* 3202 */    MCD::OPC_CheckPredicate, 18, 85, 2, // Skip to: 3803
/* 3206 */    MCD::OPC_Decode, 205, 6, 160, 1, // Opcode: DCLZ_MM64R6
/* 3211 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 3224
/* 3215 */    MCD::OPC_CheckPredicate, 18, 72, 2, // Skip to: 3803
/* 3219 */    MCD::OPC_Decode, 207, 7, 160, 1, // Opcode: DSBH_MM64R6
/* 3224 */    MCD::OPC_FilterValue, 31, 63, 2, // Skip to: 3803
/* 3228 */    MCD::OPC_CheckPredicate, 18, 59, 2, // Skip to: 3803
/* 3232 */    MCD::OPC_Decode, 211, 7, 160, 1, // Opcode: DSHD_MM64R6
/* 3237 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 3250
/* 3241 */    MCD::OPC_CheckPredicate, 18, 46, 2, // Skip to: 3803
/* 3245 */    MCD::OPC_Decode, 185, 6, 161, 1, // Opcode: DADDIU_MM64R6
/* 3250 */    MCD::OPC_FilterValue, 24, 178, 0, // Skip to: 3432
/* 3254 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3257 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3269
/* 3261 */    MCD::OPC_CheckPredicate, 17, 26, 2, // Skip to: 3803
/* 3265 */    MCD::OPC_Decode, 225, 14, 86, // Opcode: PREF_MMR6
/* 3269 */    MCD::OPC_FilterValue, 6, 53, 0, // Skip to: 3326
/* 3273 */    MCD::OPC_ExtractField, 9, 3,  // Inst{11-9} ...
/* 3276 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 3289
/* 3280 */    MCD::OPC_CheckPredicate, 17, 7, 2, // Skip to: 3803
/* 3284 */    MCD::OPC_Decode, 187, 10, 162, 1, // Opcode: LBUE_MMR6
/* 3289 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 3302
/* 3293 */    MCD::OPC_CheckPredicate, 17, 250, 1, // Skip to: 3803
/* 3297 */    MCD::OPC_Decode, 185, 10, 162, 1, // Opcode: LBE_MMR6
/* 3302 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3314
/* 3306 */    MCD::OPC_CheckPredicate, 17, 237, 1, // Skip to: 3803
/* 3310 */    MCD::OPC_Decode, 250, 10, 100, // Opcode: LLE_MMR6
/* 3314 */    MCD::OPC_FilterValue, 7, 229, 1, // Skip to: 3803
/* 3318 */    MCD::OPC_CheckPredicate, 17, 225, 1, // Skip to: 3803
/* 3322 */    MCD::OPC_Decode, 153, 11, 100, // Opcode: LWE_MMR6
/* 3326 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3338
/* 3330 */    MCD::OPC_CheckPredicate, 18, 213, 1, // Skip to: 3803
/* 3334 */    MCD::OPC_Decode, 246, 10, 85, // Opcode: LLD_MM64R6
/* 3338 */    MCD::OPC_FilterValue, 10, 78, 0, // Skip to: 3420
/* 3342 */    MCD::OPC_ExtractField, 9, 3,  // Inst{11-9} ...
/* 3345 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3357
/* 3349 */    MCD::OPC_CheckPredicate, 17, 194, 1, // Skip to: 3803
/* 3353 */    MCD::OPC_Decode, 222, 14, 101, // Opcode: PREFE_MMR6
/* 3357 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3369
/* 3361 */    MCD::OPC_CheckPredicate, 17, 182, 1, // Skip to: 3803
/* 3365 */    MCD::OPC_Decode, 133, 4, 101, // Opcode: CACHEE_MMR6
/* 3369 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 3382
/* 3373 */    MCD::OPC_CheckPredicate, 17, 170, 1, // Skip to: 3803
/* 3377 */    MCD::OPC_Decode, 221, 15, 163, 1, // Opcode: SBE_MMR6
/* 3382 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 3395
/* 3386 */    MCD::OPC_CheckPredicate, 17, 157, 1, // Skip to: 3803
/* 3390 */    MCD::OPC_Decode, 167, 16, 163, 1, // Opcode: SHE_MMR6
/* 3395 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 3408
/* 3399 */    MCD::OPC_CheckPredicate, 17, 144, 1, // Skip to: 3803
/* 3403 */    MCD::OPC_Decode, 231, 15, 163, 1, // Opcode: SCE_MMR6
/* 3408 */    MCD::OPC_FilterValue, 7, 135, 1, // Skip to: 3803
/* 3412 */    MCD::OPC_CheckPredicate, 17, 131, 1, // Skip to: 3803
/* 3416 */    MCD::OPC_Decode, 146, 18, 100, // Opcode: SWE_MMR6
/* 3420 */    MCD::OPC_FilterValue, 14, 123, 1, // Skip to: 3803
/* 3424 */    MCD::OPC_CheckPredicate, 18, 119, 1, // Skip to: 3803
/* 3428 */    MCD::OPC_Decode, 177, 11, 85, // Opcode: LWU_MM64R6
/* 3432 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 3444
/* 3436 */    MCD::OPC_CheckPredicate, 17, 107, 1, // Skip to: 3803
/* 3440 */    MCD::OPC_Decode, 177, 19, 93, // Opcode: XORI_MMR6
/* 3444 */    MCD::OPC_FilterValue, 29, 24, 0, // Skip to: 3472
/* 3448 */    MCD::OPC_CheckPredicate, 17, 11, 0, // Skip to: 3463
/* 3452 */    MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 3463
/* 3458 */    MCD::OPC_Decode, 177, 2, 164, 1, // Opcode: BEQZALC_MMR6
/* 3463 */    MCD::OPC_CheckPredicate, 17, 80, 1, // Skip to: 3803
/* 3467 */    MCD::OPC_Decode, 173, 2, 164, 1, // Opcode: BEQC_MMR6
/* 3472 */    MCD::OPC_FilterValue, 30, 94, 0, // Skip to: 3570
/* 3476 */    MCD::OPC_ExtractField, 19, 2,  // Inst{20-19} ...
/* 3479 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3491
/* 3483 */    MCD::OPC_CheckPredicate, 17, 60, 1, // Skip to: 3803
/* 3487 */    MCD::OPC_Decode, 94, 165, 1, // Opcode: ADDIUPC_MMR6
/* 3491 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 3504
/* 3495 */    MCD::OPC_CheckPredicate, 17, 48, 1, // Skip to: 3803
/* 3499 */    MCD::OPC_Decode, 165, 11, 165, 1, // Opcode: LWPC_MMR6
/* 3504 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 3517
/* 3508 */    MCD::OPC_CheckPredicate, 18, 35, 1, // Skip to: 3803
/* 3512 */    MCD::OPC_Decode, 175, 11, 166, 1, // Opcode: LWUPC_MM64R6
/* 3517 */    MCD::OPC_FilterValue, 3, 26, 1, // Skip to: 3803
/* 3521 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3524 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 3537
/* 3528 */    MCD::OPC_CheckPredicate, 18, 15, 1, // Skip to: 3803
/* 3532 */    MCD::OPC_Decode, 214, 10, 167, 1, // Opcode: LDPC_MM64R6
/* 3537 */    MCD::OPC_FilterValue, 1, 6, 1, // Skip to: 3803
/* 3541 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 3544 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 3557
/* 3548 */    MCD::OPC_CheckPredicate, 17, 251, 0, // Skip to: 3803
/* 3552 */    MCD::OPC_Decode, 232, 1, 168, 1, // Opcode: AUIPC_MMR6
/* 3557 */    MCD::OPC_FilterValue, 3, 242, 0, // Skip to: 3803
/* 3561 */    MCD::OPC_CheckPredicate, 17, 238, 0, // Skip to: 3803
/* 3565 */    MCD::OPC_Decode, 170, 1, 168, 1, // Opcode: ALUIPC_MMR6
/* 3570 */    MCD::OPC_FilterValue, 31, 24, 0, // Skip to: 3598
/* 3574 */    MCD::OPC_CheckPredicate, 17, 11, 0, // Skip to: 3589
/* 3578 */    MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 3589
/* 3584 */    MCD::OPC_Decode, 184, 3, 169, 1, // Opcode: BNEZALC_MMR6
/* 3589 */    MCD::OPC_CheckPredicate, 17, 210, 0, // Skip to: 3803
/* 3593 */    MCD::OPC_Decode, 172, 3, 169, 1, // Opcode: BNEC_MMR6
/* 3598 */    MCD::OPC_FilterValue, 32, 23, 0, // Skip to: 3625
/* 3602 */    MCD::OPC_CheckPredicate, 17, 10, 0, // Skip to: 3616
/* 3606 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 3616
/* 3612 */    MCD::OPC_Decode, 158, 10, 89, // Opcode: JIALC_MMR6
/* 3616 */    MCD::OPC_CheckPredicate, 17, 183, 0, // Skip to: 3803
/* 3620 */    MCD::OPC_Decode, 182, 2, 170, 1, // Opcode: BEQZC_MMR6
/* 3625 */    MCD::OPC_FilterValue, 37, 9, 0, // Skip to: 3638
/* 3629 */    MCD::OPC_CheckPredicate, 17, 170, 0, // Skip to: 3803
/* 3633 */    MCD::OPC_Decode, 168, 2, 171, 1, // Opcode: BC_MMR6
/* 3638 */    MCD::OPC_FilterValue, 40, 23, 0, // Skip to: 3665
/* 3642 */    MCD::OPC_CheckPredicate, 17, 10, 0, // Skip to: 3656
/* 3646 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 3656
/* 3652 */    MCD::OPC_Decode, 161, 10, 89, // Opcode: JIC_MMR6
/* 3656 */    MCD::OPC_CheckPredicate, 17, 143, 0, // Skip to: 3803
/* 3660 */    MCD::OPC_Decode, 189, 3, 170, 1, // Opcode: BNEZC_MMR6
/* 3665 */    MCD::OPC_FilterValue, 45, 9, 0, // Skip to: 3678
/* 3669 */    MCD::OPC_CheckPredicate, 17, 130, 0, // Skip to: 3803
/* 3673 */    MCD::OPC_Decode, 136, 2, 171, 1, // Opcode: BALC_MMR6
/* 3678 */    MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 3691
/* 3682 */    MCD::OPC_CheckPredicate, 17, 117, 0, // Skip to: 3803
/* 3686 */    MCD::OPC_Decode, 194, 2, 172, 1, // Opcode: BGEUC_MMR6
/* 3691 */    MCD::OPC_FilterValue, 52, 8, 0, // Skip to: 3703
/* 3695 */    MCD::OPC_CheckPredicate, 17, 104, 0, // Skip to: 3803
/* 3699 */    MCD::OPC_Decode, 178, 1, 93, // Opcode: ANDI_MMR6
/* 3703 */    MCD::OPC_FilterValue, 53, 9, 0, // Skip to: 3716
/* 3707 */    MCD::OPC_CheckPredicate, 17, 92, 0, // Skip to: 3803
/* 3711 */    MCD::OPC_Decode, 140, 3, 173, 1, // Opcode: BLTC_MMR6
/* 3716 */    MCD::OPC_FilterValue, 54, 8, 0, // Skip to: 3728
/* 3720 */    MCD::OPC_CheckPredicate, 18, 79, 0, // Skip to: 3803
/* 3724 */    MCD::OPC_Decode, 129, 16, 84, // Opcode: SD_MM64R6
/* 3728 */    MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 3740
/* 3732 */    MCD::OPC_CheckPredicate, 18, 67, 0, // Skip to: 3803
/* 3736 */    MCD::OPC_Decode, 222, 10, 84, // Opcode: LD_MM64R6
/* 3740 */    MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 3753
/* 3744 */    MCD::OPC_CheckPredicate, 17, 55, 0, // Skip to: 3803
/* 3748 */    MCD::OPC_Decode, 147, 3, 174, 1, // Opcode: BLTUC_MMR6
/* 3753 */    MCD::OPC_FilterValue, 60, 9, 0, // Skip to: 3766
/* 3757 */    MCD::OPC_CheckPredicate, 18, 42, 0, // Skip to: 3803
/* 3761 */    MCD::OPC_Decode, 198, 6, 175, 1, // Opcode: DAUI_MM64R6
/* 3766 */    MCD::OPC_FilterValue, 61, 9, 0, // Skip to: 3779
/* 3770 */    MCD::OPC_CheckPredicate, 17, 29, 0, // Skip to: 3803
/* 3774 */    MCD::OPC_Decode, 187, 2, 176, 1, // Opcode: BGEC_MMR6
/* 3779 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 3791
/* 3783 */    MCD::OPC_CheckPredicate, 17, 16, 0, // Skip to: 3803
/* 3787 */    MCD::OPC_Decode, 168, 18, 84, // Opcode: SW_MMR6
/* 3791 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 3803
/* 3795 */    MCD::OPC_CheckPredicate, 17, 4, 0, // Skip to: 3803
/* 3799 */    MCD::OPC_Decode, 184, 11, 84, // Opcode: LW_MMR6
/* 3803 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMipsR6_Ambiguous32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 16
/* 7 */       MCD::OPC_CheckPredicate, 17, 74, 0, // Skip to: 85
/* 11 */      MCD::OPC_Decode, 199, 3, 164, 1, // Opcode: BOVC_MMR6
/* 16 */      MCD::OPC_FilterValue, 31, 9, 0, // Skip to: 29
/* 20 */      MCD::OPC_CheckPredicate, 17, 61, 0, // Skip to: 85
/* 24 */      MCD::OPC_Decode, 192, 3, 169, 1, // Opcode: BNVC_MMR6
/* 29 */      MCD::OPC_FilterValue, 48, 24, 0, // Skip to: 57
/* 33 */      MCD::OPC_CheckPredicate, 17, 11, 0, // Skip to: 48
/* 37 */      MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 48
/* 43 */      MCD::OPC_Decode, 131, 3, 172, 1, // Opcode: BLEZALC_MMR6
/* 48 */      MCD::OPC_CheckPredicate, 17, 33, 0, // Skip to: 85
/* 52 */      MCD::OPC_Decode, 202, 2, 172, 1, // Opcode: BGEZALC_MMR6
/* 57 */      MCD::OPC_FilterValue, 56, 24, 0, // Skip to: 85
/* 61 */      MCD::OPC_CheckPredicate, 17, 11, 0, // Skip to: 76
/* 65 */      MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 76
/* 71 */      MCD::OPC_Decode, 222, 2, 174, 1, // Opcode: BGTZALC_MMR6
/* 76 */      MCD::OPC_CheckPredicate, 17, 5, 0, // Skip to: 85
/* 80 */      MCD::OPC_Decode, 155, 3, 174, 1, // Opcode: BLTZALC_MMR6
/* 85 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 205, 3, // Skip to: 980
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 55, 0, // Skip to: 69
/* 14 */      MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 17 */      MCD::OPC_FilterValue, 0, 23, 58, // Skip to: 14892
/* 21 */      MCD::OPC_ExtractField, 6, 15,  // Inst{20-6} ...
/* 24 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 21, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 189, 17, 0, // Opcode: SSNOP
/* 36 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 21, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 241, 7, 0, // Opcode: EHB
/* 48 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 22, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 165, 14, 0, // Opcode: PAUSE
/* 60 */      MCD::OPC_CheckPredicate, 1, 236, 57, // Skip to: 14892
/* 64 */      MCD::OPC_Decode, 229, 16, 177, 1, // Opcode: SLL
/* 69 */      MCD::OPC_FilterValue, 1, 41, 0, // Skip to: 114
/* 73 */      MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 76 */      MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 95
/* 80 */      MCD::OPC_CheckPredicate, 23, 216, 57, // Skip to: 14892
/* 84 */      MCD::OPC_CheckField, 6, 5, 0, 210, 57, // Skip to: 14892
/* 90 */      MCD::OPC_Decode, 214, 12, 178, 1, // Opcode: MOVF_I
/* 95 */      MCD::OPC_FilterValue, 1, 201, 57, // Skip to: 14892
/* 99 */      MCD::OPC_CheckPredicate, 23, 197, 57, // Skip to: 14892
/* 103 */     MCD::OPC_CheckField, 6, 5, 0, 191, 57, // Skip to: 14892
/* 109 */     MCD::OPC_Decode, 234, 12, 178, 1, // Opcode: MOVT_I
/* 114 */     MCD::OPC_FilterValue, 2, 29, 0, // Skip to: 147
/* 118 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 121 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 134
/* 125 */     MCD::OPC_CheckPredicate, 1, 171, 57, // Skip to: 14892
/* 129 */     MCD::OPC_Decode, 167, 17, 177, 1, // Opcode: SRL
/* 134 */     MCD::OPC_FilterValue, 1, 162, 57, // Skip to: 14892
/* 138 */     MCD::OPC_CheckPredicate, 24, 158, 57, // Skip to: 14892
/* 142 */     MCD::OPC_Decode, 184, 15, 177, 1, // Opcode: ROTR
/* 147 */     MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 166
/* 151 */     MCD::OPC_CheckPredicate, 1, 145, 57, // Skip to: 14892
/* 155 */     MCD::OPC_CheckField, 21, 5, 0, 139, 57, // Skip to: 14892
/* 161 */     MCD::OPC_Decode, 147, 17, 177, 1, // Opcode: SRA
/* 166 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 184
/* 170 */     MCD::OPC_CheckPredicate, 1, 126, 57, // Skip to: 14892
/* 174 */     MCD::OPC_CheckField, 6, 5, 0, 120, 57, // Skip to: 14892
/* 180 */     MCD::OPC_Decode, 238, 16, 43, // Opcode: SLLV
/* 184 */     MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 203
/* 188 */     MCD::OPC_CheckPredicate, 25, 108, 57, // Skip to: 14892
/* 192 */     MCD::OPC_CheckField, 8, 3, 0, 102, 57, // Skip to: 14892
/* 198 */     MCD::OPC_Decode, 132, 11, 179, 1, // Opcode: LSA
/* 203 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 234
/* 207 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 210 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 222
/* 214 */     MCD::OPC_CheckPredicate, 1, 82, 57, // Skip to: 14892
/* 218 */     MCD::OPC_Decode, 182, 17, 43, // Opcode: SRLV
/* 222 */     MCD::OPC_FilterValue, 1, 74, 57, // Skip to: 14892
/* 226 */     MCD::OPC_CheckPredicate, 24, 70, 57, // Skip to: 14892
/* 230 */     MCD::OPC_Decode, 185, 15, 43, // Opcode: ROTRV
/* 234 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 252
/* 238 */     MCD::OPC_CheckPredicate, 1, 58, 57, // Skip to: 14892
/* 242 */     MCD::OPC_CheckField, 6, 5, 0, 52, 57, // Skip to: 14892
/* 248 */     MCD::OPC_Decode, 160, 17, 43, // Opcode: SRAV
/* 252 */     MCD::OPC_FilterValue, 8, 29, 0, // Skip to: 285
/* 256 */     MCD::OPC_ExtractField, 6, 15,  // Inst{20-6} ...
/* 259 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 272
/* 263 */     MCD::OPC_CheckPredicate, 26, 33, 57, // Skip to: 14892
/* 267 */     MCD::OPC_Decode, 162, 10, 180, 1, // Opcode: JR
/* 272 */     MCD::OPC_FilterValue, 16, 24, 57, // Skip to: 14892
/* 276 */     MCD::OPC_CheckPredicate, 27, 20, 57, // Skip to: 14892
/* 280 */     MCD::OPC_Decode, 169, 10, 180, 1, // Opcode: JR_HB
/* 285 */     MCD::OPC_FilterValue, 9, 39, 0, // Skip to: 328
/* 289 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 292 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 310
/* 296 */     MCD::OPC_CheckPredicate, 1, 0, 57, // Skip to: 14892
/* 300 */     MCD::OPC_CheckField, 16, 5, 0, 250, 56, // Skip to: 14892
/* 306 */     MCD::OPC_Decode, 140, 10, 14, // Opcode: JALR
/* 310 */     MCD::OPC_FilterValue, 16, 242, 56, // Skip to: 14892
/* 314 */     MCD::OPC_CheckPredicate, 28, 238, 56, // Skip to: 14892
/* 318 */     MCD::OPC_CheckField, 16, 5, 0, 232, 56, // Skip to: 14892
/* 324 */     MCD::OPC_Decode, 150, 10, 14, // Opcode: JALR_HB
/* 328 */     MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 347
/* 332 */     MCD::OPC_CheckPredicate, 29, 220, 56, // Skip to: 14892
/* 336 */     MCD::OPC_CheckField, 6, 5, 0, 214, 56, // Skip to: 14892
/* 342 */     MCD::OPC_Decode, 246, 12, 181, 1, // Opcode: MOVZ_I_I
/* 347 */     MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 366
/* 351 */     MCD::OPC_CheckPredicate, 29, 201, 56, // Skip to: 14892
/* 355 */     MCD::OPC_CheckField, 6, 5, 0, 195, 56, // Skip to: 14892
/* 361 */     MCD::OPC_Decode, 226, 12, 181, 1, // Opcode: MOVN_I_I
/* 366 */     MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 379
/* 370 */     MCD::OPC_CheckPredicate, 1, 182, 56, // Skip to: 14892
/* 374 */     MCD::OPC_Decode, 175, 18, 182, 1, // Opcode: SYSCALL
/* 379 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 391
/* 383 */     MCD::OPC_CheckPredicate, 1, 169, 56, // Skip to: 14892
/* 387 */     MCD::OPC_Decode, 204, 3, 44, // Opcode: BREAK
/* 391 */     MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 404
/* 395 */     MCD::OPC_CheckPredicate, 2, 157, 56, // Skip to: 14892
/* 399 */     MCD::OPC_Decode, 169, 18, 183, 1, // Opcode: SYNC
/* 404 */     MCD::OPC_FilterValue, 16, 45, 0, // Skip to: 453
/* 408 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 411 */     MCD::OPC_FilterValue, 0, 141, 56, // Skip to: 14892
/* 415 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 418 */     MCD::OPC_FilterValue, 0, 134, 56, // Skip to: 14892
/* 422 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 425 */     MCD::OPC_FilterValue, 0, 127, 56, // Skip to: 14892
/* 429 */     MCD::OPC_CheckPredicate, 30, 11, 0, // Skip to: 444
/* 433 */     MCD::OPC_CheckField, 21, 2, 0, 5, 0, // Skip to: 444
/* 439 */     MCD::OPC_Decode, 151, 12, 184, 1, // Opcode: MFHI
/* 444 */     MCD::OPC_CheckPredicate, 31, 108, 56, // Skip to: 14892
/* 448 */     MCD::OPC_Decode, 154, 12, 185, 1, // Opcode: MFHI_DSP
/* 453 */     MCD::OPC_FilterValue, 17, 38, 0, // Skip to: 495
/* 457 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 460 */     MCD::OPC_FilterValue, 0, 92, 56, // Skip to: 14892
/* 464 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 467 */     MCD::OPC_FilterValue, 0, 85, 56, // Skip to: 14892
/* 471 */     MCD::OPC_CheckPredicate, 26, 11, 0, // Skip to: 486
/* 475 */     MCD::OPC_CheckField, 11, 2, 0, 5, 0, // Skip to: 486
/* 481 */     MCD::OPC_Decode, 166, 13, 180, 1, // Opcode: MTHI
/* 486 */     MCD::OPC_CheckPredicate, 31, 66, 56, // Skip to: 14892
/* 490 */     MCD::OPC_Decode, 168, 13, 186, 1, // Opcode: MTHI_DSP
/* 495 */     MCD::OPC_FilterValue, 18, 45, 0, // Skip to: 544
/* 499 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 502 */     MCD::OPC_FilterValue, 0, 50, 56, // Skip to: 14892
/* 506 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 509 */     MCD::OPC_FilterValue, 0, 43, 56, // Skip to: 14892
/* 513 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 516 */     MCD::OPC_FilterValue, 0, 36, 56, // Skip to: 14892
/* 520 */     MCD::OPC_CheckPredicate, 30, 11, 0, // Skip to: 535
/* 524 */     MCD::OPC_CheckField, 21, 2, 0, 5, 0, // Skip to: 535
/* 530 */     MCD::OPC_Decode, 157, 12, 184, 1, // Opcode: MFLO
/* 535 */     MCD::OPC_CheckPredicate, 31, 17, 56, // Skip to: 14892
/* 539 */     MCD::OPC_Decode, 160, 12, 185, 1, // Opcode: MFLO_DSP
/* 544 */     MCD::OPC_FilterValue, 19, 38, 0, // Skip to: 586
/* 548 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 551 */     MCD::OPC_FilterValue, 0, 1, 56, // Skip to: 14892
/* 555 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 558 */     MCD::OPC_FilterValue, 0, 250, 55, // Skip to: 14892
/* 562 */     MCD::OPC_CheckPredicate, 26, 11, 0, // Skip to: 577
/* 566 */     MCD::OPC_CheckField, 11, 2, 0, 5, 0, // Skip to: 577
/* 572 */     MCD::OPC_Decode, 173, 13, 180, 1, // Opcode: MTLO
/* 577 */     MCD::OPC_CheckPredicate, 31, 231, 55, // Skip to: 14892
/* 581 */     MCD::OPC_Decode, 175, 13, 187, 1, // Opcode: MTLO_DSP
/* 586 */     MCD::OPC_FilterValue, 21, 15, 0, // Skip to: 605
/* 590 */     MCD::OPC_CheckPredicate, 32, 218, 55, // Skip to: 14892
/* 594 */     MCD::OPC_CheckField, 8, 3, 0, 212, 55, // Skip to: 14892
/* 600 */     MCD::OPC_Decode, 241, 6, 188, 1, // Opcode: DLSA
/* 605 */     MCD::OPC_FilterValue, 24, 37, 0, // Skip to: 646
/* 609 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 612 */     MCD::OPC_FilterValue, 0, 196, 55, // Skip to: 14892
/* 616 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 619 */     MCD::OPC_FilterValue, 0, 189, 55, // Skip to: 14892
/* 623 */     MCD::OPC_CheckPredicate, 26, 10, 0, // Skip to: 637
/* 627 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 637
/* 633 */     MCD::OPC_Decode, 211, 13, 63, // Opcode: MULT
/* 637 */     MCD::OPC_CheckPredicate, 31, 171, 55, // Skip to: 14892
/* 641 */     MCD::OPC_Decode, 214, 13, 189, 1, // Opcode: MULT_DSP
/* 646 */     MCD::OPC_FilterValue, 25, 37, 0, // Skip to: 687
/* 650 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 653 */     MCD::OPC_FilterValue, 0, 155, 55, // Skip to: 14892
/* 657 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 660 */     MCD::OPC_FilterValue, 0, 148, 55, // Skip to: 14892
/* 664 */     MCD::OPC_CheckPredicate, 26, 10, 0, // Skip to: 678
/* 668 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 678
/* 674 */     MCD::OPC_Decode, 217, 13, 63, // Opcode: MULTu
/* 678 */     MCD::OPC_CheckPredicate, 31, 130, 55, // Skip to: 14892
/* 682 */     MCD::OPC_Decode, 212, 13, 189, 1, // Opcode: MULTU_DSP
/* 687 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 705
/* 691 */     MCD::OPC_CheckPredicate, 33, 117, 55, // Skip to: 14892
/* 695 */     MCD::OPC_CheckField, 6, 10, 0, 111, 55, // Skip to: 14892
/* 701 */     MCD::OPC_Decode, 249, 15, 63, // Opcode: SDIV
/* 705 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 723
/* 709 */     MCD::OPC_CheckPredicate, 33, 99, 55, // Skip to: 14892
/* 713 */     MCD::OPC_CheckField, 6, 10, 0, 93, 55, // Skip to: 14892
/* 719 */     MCD::OPC_Decode, 147, 19, 63, // Opcode: UDIV
/* 723 */     MCD::OPC_FilterValue, 32, 13, 0, // Skip to: 740
/* 727 */     MCD::OPC_CheckPredicate, 21, 81, 55, // Skip to: 14892
/* 731 */     MCD::OPC_CheckField, 6, 5, 0, 75, 55, // Skip to: 14892
/* 737 */     MCD::OPC_Decode, 91, 49, // Opcode: ADD
/* 740 */     MCD::OPC_FilterValue, 33, 14, 0, // Skip to: 758
/* 744 */     MCD::OPC_CheckPredicate, 1, 64, 55, // Skip to: 14892
/* 748 */     MCD::OPC_CheckField, 6, 5, 0, 58, 55, // Skip to: 14892
/* 754 */     MCD::OPC_Decode, 163, 1, 49, // Opcode: ADDu
/* 758 */     MCD::OPC_FilterValue, 34, 14, 0, // Skip to: 776
/* 762 */     MCD::OPC_CheckPredicate, 21, 46, 55, // Skip to: 14892
/* 766 */     MCD::OPC_CheckField, 6, 5, 0, 40, 55, // Skip to: 14892
/* 772 */     MCD::OPC_Decode, 201, 17, 49, // Opcode: SUB
/* 776 */     MCD::OPC_FilterValue, 35, 14, 0, // Skip to: 794
/* 780 */     MCD::OPC_CheckPredicate, 1, 28, 55, // Skip to: 14892
/* 784 */     MCD::OPC_CheckField, 6, 5, 0, 22, 55, // Skip to: 14892
/* 790 */     MCD::OPC_Decode, 129, 18, 49, // Opcode: SUBu
/* 794 */     MCD::OPC_FilterValue, 36, 14, 0, // Skip to: 812
/* 798 */     MCD::OPC_CheckPredicate, 1, 10, 55, // Skip to: 14892
/* 802 */     MCD::OPC_CheckField, 6, 5, 0, 4, 55, // Skip to: 14892
/* 808 */     MCD::OPC_Decode, 171, 1, 49, // Opcode: AND
/* 812 */     MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 830
/* 816 */     MCD::OPC_CheckPredicate, 1, 248, 54, // Skip to: 14892
/* 820 */     MCD::OPC_CheckField, 6, 5, 0, 242, 54, // Skip to: 14892
/* 826 */     MCD::OPC_Decode, 147, 14, 49, // Opcode: OR
/* 830 */     MCD::OPC_FilterValue, 38, 14, 0, // Skip to: 848
/* 834 */     MCD::OPC_CheckPredicate, 1, 230, 54, // Skip to: 14892
/* 838 */     MCD::OPC_CheckField, 6, 5, 0, 224, 54, // Skip to: 14892
/* 844 */     MCD::OPC_Decode, 172, 19, 49, // Opcode: XOR
/* 848 */     MCD::OPC_FilterValue, 39, 14, 0, // Skip to: 866
/* 852 */     MCD::OPC_CheckPredicate, 1, 212, 54, // Skip to: 14892
/* 856 */     MCD::OPC_CheckField, 6, 5, 0, 206, 54, // Skip to: 14892
/* 862 */     MCD::OPC_Decode, 133, 14, 49, // Opcode: NOR
/* 866 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 884
/* 870 */     MCD::OPC_CheckPredicate, 1, 194, 54, // Skip to: 14892
/* 874 */     MCD::OPC_CheckField, 6, 5, 0, 188, 54, // Skip to: 14892
/* 880 */     MCD::OPC_Decode, 246, 16, 49, // Opcode: SLT
/* 884 */     MCD::OPC_FilterValue, 43, 14, 0, // Skip to: 902
/* 888 */     MCD::OPC_CheckPredicate, 1, 176, 54, // Skip to: 14892
/* 892 */     MCD::OPC_CheckField, 6, 5, 0, 170, 54, // Skip to: 14892
/* 898 */     MCD::OPC_Decode, 255, 16, 49, // Opcode: SLTu
/* 902 */     MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 915
/* 906 */     MCD::OPC_CheckPredicate, 2, 158, 54, // Skip to: 14892
/* 910 */     MCD::OPC_Decode, 231, 18, 190, 1, // Opcode: TGE
/* 915 */     MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 928
/* 919 */     MCD::OPC_CheckPredicate, 2, 145, 54, // Skip to: 14892
/* 923 */     MCD::OPC_Decode, 236, 18, 190, 1, // Opcode: TGEU
/* 928 */     MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 941
/* 932 */     MCD::OPC_CheckPredicate, 2, 132, 54, // Skip to: 14892
/* 936 */     MCD::OPC_Decode, 251, 18, 190, 1, // Opcode: TLT
/* 941 */     MCD::OPC_FilterValue, 51, 9, 0, // Skip to: 954
/* 945 */     MCD::OPC_CheckPredicate, 2, 119, 54, // Skip to: 14892
/* 949 */     MCD::OPC_Decode, 255, 18, 190, 1, // Opcode: TLTU
/* 954 */     MCD::OPC_FilterValue, 52, 9, 0, // Skip to: 967
/* 958 */     MCD::OPC_CheckPredicate, 2, 106, 54, // Skip to: 14892
/* 962 */     MCD::OPC_Decode, 227, 18, 190, 1, // Opcode: TEQ
/* 967 */     MCD::OPC_FilterValue, 54, 97, 54, // Skip to: 14892
/* 971 */     MCD::OPC_CheckPredicate, 2, 93, 54, // Skip to: 14892
/* 975 */     MCD::OPC_Decode, 130, 19, 190, 1, // Opcode: TNE
/* 980 */     MCD::OPC_FilterValue, 1, 216, 0, // Skip to: 1200
/* 984 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 987 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1000
/* 991 */     MCD::OPC_CheckPredicate, 21, 73, 54, // Skip to: 14892
/* 995 */     MCD::OPC_Decode, 151, 3, 191, 1, // Opcode: BLTZ
/* 1000 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1013
/* 1004 */    MCD::OPC_CheckPredicate, 21, 60, 54, // Skip to: 14892
/* 1008 */    MCD::OPC_Decode, 198, 2, 191, 1, // Opcode: BGEZ
/* 1013 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1026
/* 1017 */    MCD::OPC_CheckPredicate, 34, 47, 54, // Skip to: 14892
/* 1021 */    MCD::OPC_Decode, 162, 3, 191, 1, // Opcode: BLTZL
/* 1026 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1039
/* 1030 */    MCD::OPC_CheckPredicate, 34, 34, 54, // Skip to: 14892
/* 1034 */    MCD::OPC_Decode, 209, 2, 191, 1, // Opcode: BGEZL
/* 1039 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1052
/* 1043 */    MCD::OPC_CheckPredicate, 34, 21, 54, // Skip to: 14892
/* 1047 */    MCD::OPC_Decode, 232, 18, 168, 1, // Opcode: TGEI
/* 1052 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1065
/* 1056 */    MCD::OPC_CheckPredicate, 34, 8, 54, // Skip to: 14892
/* 1060 */    MCD::OPC_Decode, 233, 18, 168, 1, // Opcode: TGEIU
/* 1065 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1078
/* 1069 */    MCD::OPC_CheckPredicate, 34, 251, 53, // Skip to: 14892
/* 1073 */    MCD::OPC_Decode, 252, 18, 168, 1, // Opcode: TLTI
/* 1078 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1091
/* 1082 */    MCD::OPC_CheckPredicate, 34, 238, 53, // Skip to: 14892
/* 1086 */    MCD::OPC_Decode, 146, 19, 168, 1, // Opcode: TTLTIU
/* 1091 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1104
/* 1095 */    MCD::OPC_CheckPredicate, 34, 225, 53, // Skip to: 14892
/* 1099 */    MCD::OPC_Decode, 228, 18, 168, 1, // Opcode: TEQI
/* 1104 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1117
/* 1108 */    MCD::OPC_CheckPredicate, 34, 212, 53, // Skip to: 14892
/* 1112 */    MCD::OPC_Decode, 131, 19, 168, 1, // Opcode: TNEI
/* 1117 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 1130
/* 1121 */    MCD::OPC_CheckPredicate, 26, 199, 53, // Skip to: 14892
/* 1125 */    MCD::OPC_Decode, 153, 3, 191, 1, // Opcode: BLTZAL
/* 1130 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 1143
/* 1134 */    MCD::OPC_CheckPredicate, 26, 186, 53, // Skip to: 14892
/* 1138 */    MCD::OPC_Decode, 200, 2, 191, 1, // Opcode: BGEZAL
/* 1143 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 1156
/* 1147 */    MCD::OPC_CheckPredicate, 34, 173, 53, // Skip to: 14892
/* 1151 */    MCD::OPC_Decode, 156, 3, 191, 1, // Opcode: BLTZALL
/* 1156 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 1169
/* 1160 */    MCD::OPC_CheckPredicate, 34, 160, 53, // Skip to: 14892
/* 1164 */    MCD::OPC_Decode, 203, 2, 191, 1, // Opcode: BGEZALL
/* 1169 */    MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 1188
/* 1173 */    MCD::OPC_CheckPredicate, 35, 147, 53, // Skip to: 14892
/* 1177 */    MCD::OPC_CheckField, 21, 5, 0, 141, 53, // Skip to: 14892
/* 1183 */    MCD::OPC_Decode, 200, 3, 192, 1, // Opcode: BPOSGE32
/* 1188 */    MCD::OPC_FilterValue, 31, 132, 53, // Skip to: 14892
/* 1192 */    MCD::OPC_CheckPredicate, 24, 128, 53, // Skip to: 14892
/* 1196 */    MCD::OPC_Decode, 170, 18, 90, // Opcode: SYNCI
/* 1200 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1213
/* 1204 */    MCD::OPC_CheckPredicate, 21, 116, 53, // Skip to: 14892
/* 1208 */    MCD::OPC_Decode, 138, 10, 193, 1, // Opcode: J
/* 1213 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1226
/* 1217 */    MCD::OPC_CheckPredicate, 21, 103, 53, // Skip to: 14892
/* 1221 */    MCD::OPC_Decode, 139, 10, 193, 1, // Opcode: JAL
/* 1226 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1239
/* 1230 */    MCD::OPC_CheckPredicate, 21, 90, 53, // Skip to: 14892
/* 1234 */    MCD::OPC_Decode, 169, 2, 194, 1, // Opcode: BEQ
/* 1239 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1252
/* 1243 */    MCD::OPC_CheckPredicate, 21, 77, 53, // Skip to: 14892
/* 1247 */    MCD::OPC_Decode, 168, 3, 194, 1, // Opcode: BNE
/* 1252 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 1271
/* 1256 */    MCD::OPC_CheckPredicate, 21, 64, 53, // Skip to: 14892
/* 1260 */    MCD::OPC_CheckField, 16, 5, 0, 58, 53, // Skip to: 14892
/* 1266 */    MCD::OPC_Decode, 128, 3, 191, 1, // Opcode: BLEZ
/* 1271 */    MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 1290
/* 1275 */    MCD::OPC_CheckPredicate, 21, 45, 53, // Skip to: 14892
/* 1279 */    MCD::OPC_CheckField, 16, 5, 0, 39, 53, // Skip to: 14892
/* 1285 */    MCD::OPC_Decode, 219, 2, 191, 1, // Opcode: BGTZ
/* 1290 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1303
/* 1294 */    MCD::OPC_CheckPredicate, 26, 26, 53, // Skip to: 14892
/* 1298 */    MCD::OPC_Decode, 159, 1, 195, 1, // Opcode: ADDi
/* 1303 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1316
/* 1307 */    MCD::OPC_CheckPredicate, 1, 13, 53, // Skip to: 14892
/* 1311 */    MCD::OPC_Decode, 161, 1, 195, 1, // Opcode: ADDiu
/* 1316 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1329
/* 1320 */    MCD::OPC_CheckPredicate, 1, 0, 53, // Skip to: 14892
/* 1324 */    MCD::OPC_Decode, 249, 16, 195, 1, // Opcode: SLTi
/* 1329 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1342
/* 1333 */    MCD::OPC_CheckPredicate, 1, 243, 52, // Skip to: 14892
/* 1337 */    MCD::OPC_Decode, 252, 16, 195, 1, // Opcode: SLTiu
/* 1342 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1355
/* 1346 */    MCD::OPC_CheckPredicate, 1, 230, 52, // Skip to: 14892
/* 1350 */    MCD::OPC_Decode, 185, 1, 196, 1, // Opcode: ANDi
/* 1355 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1368
/* 1359 */    MCD::OPC_CheckPredicate, 1, 217, 52, // Skip to: 14892
/* 1363 */    MCD::OPC_Decode, 159, 14, 196, 1, // Opcode: ORi
/* 1368 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1381
/* 1372 */    MCD::OPC_CheckPredicate, 1, 204, 52, // Skip to: 14892
/* 1376 */    MCD::OPC_Decode, 184, 19, 196, 1, // Opcode: XORi
/* 1381 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 1399
/* 1385 */    MCD::OPC_CheckPredicate, 21, 191, 52, // Skip to: 14892
/* 1389 */    MCD::OPC_CheckField, 21, 5, 0, 185, 52, // Skip to: 14892
/* 1395 */    MCD::OPC_Decode, 139, 11, 89, // Opcode: LUi
/* 1399 */    MCD::OPC_FilterValue, 16, 56, 1, // Skip to: 1715
/* 1403 */    MCD::OPC_ExtractField, 3, 8,  // Inst{10-3} ...
/* 1406 */    MCD::OPC_FilterValue, 0, 150, 0, // Skip to: 1560
/* 1410 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1413 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1426
/* 1417 */    MCD::OPC_CheckPredicate, 36, 159, 52, // Skip to: 14892
/* 1421 */    MCD::OPC_Decode, 137, 12, 197, 1, // Opcode: MFC0
/* 1426 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1439
/* 1430 */    MCD::OPC_CheckPredicate, 36, 146, 52, // Skip to: 14892
/* 1434 */    MCD::OPC_Decode, 152, 13, 198, 1, // Opcode: MTC0
/* 1439 */    MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 1463
/* 1443 */    MCD::OPC_CheckPredicate, 24, 133, 52, // Skip to: 14892
/* 1447 */    MCD::OPC_CheckField, 11, 5, 12, 127, 52, // Skip to: 14892
/* 1453 */    MCD::OPC_CheckField, 0, 3, 0, 121, 52, // Skip to: 14892
/* 1459 */    MCD::OPC_Decode, 220, 6, 73, // Opcode: DI
/* 1463 */    MCD::OPC_FilterValue, 16, 113, 52, // Skip to: 14892
/* 1467 */    MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 1470 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1488
/* 1474 */    MCD::OPC_CheckPredicate, 1, 102, 52, // Skip to: 14892
/* 1478 */    MCD::OPC_CheckField, 11, 10, 0, 96, 52, // Skip to: 14892
/* 1484 */    MCD::OPC_Decode, 245, 18, 0, // Opcode: TLBR
/* 1488 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1506
/* 1492 */    MCD::OPC_CheckPredicate, 1, 84, 52, // Skip to: 14892
/* 1496 */    MCD::OPC_CheckField, 11, 10, 0, 78, 52, // Skip to: 14892
/* 1502 */    MCD::OPC_Decode, 247, 18, 0, // Opcode: TLBWI
/* 1506 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 1524
/* 1510 */    MCD::OPC_CheckPredicate, 37, 66, 52, // Skip to: 14892
/* 1514 */    MCD::OPC_CheckField, 11, 10, 0, 60, 52, // Skip to: 14892
/* 1520 */    MCD::OPC_Decode, 239, 18, 0, // Opcode: TLBINV
/* 1524 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1542
/* 1528 */    MCD::OPC_CheckPredicate, 37, 48, 52, // Skip to: 14892
/* 1532 */    MCD::OPC_CheckField, 11, 10, 0, 42, 52, // Skip to: 14892
/* 1538 */    MCD::OPC_Decode, 240, 18, 0, // Opcode: TLBINVF
/* 1542 */    MCD::OPC_FilterValue, 6, 34, 52, // Skip to: 14892
/* 1546 */    MCD::OPC_CheckPredicate, 1, 30, 52, // Skip to: 14892
/* 1550 */    MCD::OPC_CheckField, 11, 10, 0, 24, 52, // Skip to: 14892
/* 1556 */    MCD::OPC_Decode, 249, 18, 0, // Opcode: TLBWR
/* 1560 */    MCD::OPC_FilterValue, 1, 22, 0, // Skip to: 1586
/* 1564 */    MCD::OPC_CheckPredicate, 1, 12, 52, // Skip to: 14892
/* 1568 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 4, 52, // Skip to: 14892
/* 1576 */    MCD::OPC_CheckField, 0, 3, 0, 254, 51, // Skip to: 14892
/* 1582 */    MCD::OPC_Decode, 243, 18, 0, // Opcode: TLBP
/* 1586 */    MCD::OPC_FilterValue, 3, 43, 0, // Skip to: 1633
/* 1590 */    MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 1593 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 1613
/* 1597 */    MCD::OPC_CheckPredicate, 38, 235, 51, // Skip to: 14892
/* 1601 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 227, 51, // Skip to: 14892
/* 1609 */    MCD::OPC_Decode, 247, 7, 0, // Opcode: ERET
/* 1613 */    MCD::OPC_FilterValue, 7, 219, 51, // Skip to: 14892
/* 1617 */    MCD::OPC_CheckPredicate, 36, 215, 51, // Skip to: 14892
/* 1621 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 207, 51, // Skip to: 14892
/* 1629 */    MCD::OPC_Decode, 211, 6, 0, // Opcode: DERET
/* 1633 */    MCD::OPC_FilterValue, 4, 52, 0, // Skip to: 1689
/* 1637 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1640 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1665
/* 1644 */    MCD::OPC_CheckPredicate, 39, 188, 51, // Skip to: 14892
/* 1648 */    MCD::OPC_CheckField, 16, 10, 128, 4, 181, 51, // Skip to: 14892
/* 1655 */    MCD::OPC_CheckField, 0, 3, 0, 175, 51, // Skip to: 14892
/* 1661 */    MCD::OPC_Decode, 163, 19, 0, // Opcode: WAIT
/* 1665 */    MCD::OPC_FilterValue, 12, 167, 51, // Skip to: 14892
/* 1669 */    MCD::OPC_CheckPredicate, 24, 163, 51, // Skip to: 14892
/* 1673 */    MCD::OPC_CheckField, 21, 5, 11, 157, 51, // Skip to: 14892
/* 1679 */    MCD::OPC_CheckField, 0, 3, 0, 151, 51, // Skip to: 14892
/* 1685 */    MCD::OPC_Decode, 244, 7, 73, // Opcode: EI
/* 1689 */    MCD::OPC_FilterValue, 11, 143, 51, // Skip to: 14892
/* 1693 */    MCD::OPC_CheckPredicate, 40, 139, 51, // Skip to: 14892
/* 1697 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 131, 51, // Skip to: 14892
/* 1705 */    MCD::OPC_CheckField, 0, 3, 0, 125, 51, // Skip to: 14892
/* 1711 */    MCD::OPC_Decode, 248, 7, 0, // Opcode: ERETNC
/* 1715 */    MCD::OPC_FilterValue, 17, 191, 6, // Skip to: 3446
/* 1719 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1722 */    MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 1741
/* 1726 */    MCD::OPC_CheckPredicate, 41, 106, 51, // Skip to: 14892
/* 1730 */    MCD::OPC_CheckField, 0, 11, 0, 100, 51, // Skip to: 14892
/* 1736 */    MCD::OPC_Decode, 139, 12, 199, 1, // Opcode: MFC1
/* 1741 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 1760
/* 1745 */    MCD::OPC_CheckPredicate, 42, 87, 51, // Skip to: 14892
/* 1749 */    MCD::OPC_CheckField, 0, 11, 0, 81, 51, // Skip to: 14892
/* 1755 */    MCD::OPC_Decode, 246, 6, 200, 1, // Opcode: DMFC1
/* 1760 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 1779
/* 1764 */    MCD::OPC_CheckPredicate, 43, 68, 51, // Skip to: 14892
/* 1768 */    MCD::OPC_CheckField, 0, 11, 0, 62, 51, // Skip to: 14892
/* 1774 */    MCD::OPC_Decode, 156, 4, 201, 1, // Opcode: CFC1
/* 1779 */    MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 1798
/* 1783 */    MCD::OPC_CheckPredicate, 44, 49, 51, // Skip to: 14892
/* 1787 */    MCD::OPC_CheckField, 0, 11, 0, 43, 51, // Skip to: 14892
/* 1793 */    MCD::OPC_Decode, 145, 12, 202, 1, // Opcode: MFHC1_D32
/* 1798 */    MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 1817
/* 1802 */    MCD::OPC_CheckPredicate, 41, 30, 51, // Skip to: 14892
/* 1806 */    MCD::OPC_CheckField, 0, 11, 0, 24, 51, // Skip to: 14892
/* 1812 */    MCD::OPC_Decode, 154, 13, 203, 1, // Opcode: MTC1
/* 1817 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 1836
/* 1821 */    MCD::OPC_CheckPredicate, 42, 11, 51, // Skip to: 14892
/* 1825 */    MCD::OPC_CheckField, 0, 11, 0, 5, 51, // Skip to: 14892
/* 1831 */    MCD::OPC_Decode, 129, 7, 204, 1, // Opcode: DMTC1
/* 1836 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 1855
/* 1840 */    MCD::OPC_CheckPredicate, 43, 248, 50, // Skip to: 14892
/* 1844 */    MCD::OPC_CheckField, 0, 11, 0, 242, 50, // Skip to: 14892
/* 1850 */    MCD::OPC_Decode, 176, 5, 205, 1, // Opcode: CTC1
/* 1855 */    MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 1874
/* 1859 */    MCD::OPC_CheckPredicate, 44, 229, 50, // Skip to: 14892
/* 1863 */    MCD::OPC_CheckField, 0, 11, 0, 223, 50, // Skip to: 14892
/* 1869 */    MCD::OPC_Decode, 160, 13, 206, 1, // Opcode: MTHC1_D32
/* 1874 */    MCD::OPC_FilterValue, 8, 55, 0, // Skip to: 1933
/* 1878 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1881 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1894
/* 1885 */    MCD::OPC_CheckPredicate, 45, 203, 50, // Skip to: 14892
/* 1889 */    MCD::OPC_Decode, 148, 2, 207, 1, // Opcode: BC1F
/* 1894 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1907
/* 1898 */    MCD::OPC_CheckPredicate, 45, 190, 50, // Skip to: 14892
/* 1902 */    MCD::OPC_Decode, 153, 2, 207, 1, // Opcode: BC1T
/* 1907 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1920
/* 1911 */    MCD::OPC_CheckPredicate, 46, 177, 50, // Skip to: 14892
/* 1915 */    MCD::OPC_Decode, 149, 2, 207, 1, // Opcode: BC1FL
/* 1920 */    MCD::OPC_FilterValue, 3, 168, 50, // Skip to: 14892
/* 1924 */    MCD::OPC_CheckPredicate, 46, 164, 50, // Skip to: 14892
/* 1928 */    MCD::OPC_Decode, 154, 2, 207, 1, // Opcode: BC1TL
/* 1933 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1946
/* 1937 */    MCD::OPC_CheckPredicate, 25, 151, 50, // Skip to: 14892
/* 1941 */    MCD::OPC_Decode, 227, 3, 208, 1, // Opcode: BZ_V
/* 1946 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 1959
/* 1950 */    MCD::OPC_CheckPredicate, 25, 138, 50, // Skip to: 14892
/* 1954 */    MCD::OPC_Decode, 196, 3, 208, 1, // Opcode: BNZ_V
/* 1959 */    MCD::OPC_FilterValue, 16, 153, 2, // Skip to: 2628
/* 1963 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1966 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1979
/* 1970 */    MCD::OPC_CheckPredicate, 41, 118, 50, // Skip to: 14892
/* 1974 */    MCD::OPC_Decode, 170, 8, 209, 1, // Opcode: FADD_S
/* 1979 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1992
/* 1983 */    MCD::OPC_CheckPredicate, 41, 105, 50, // Skip to: 14892
/* 1987 */    MCD::OPC_Decode, 186, 9, 209, 1, // Opcode: FSUB_S
/* 1992 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2005
/* 1996 */    MCD::OPC_CheckPredicate, 41, 92, 50, // Skip to: 14892
/* 2000 */    MCD::OPC_Decode, 145, 9, 209, 1, // Opcode: FMUL_S
/* 2005 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2018
/* 2009 */    MCD::OPC_CheckPredicate, 41, 79, 50, // Skip to: 14892
/* 2013 */    MCD::OPC_Decode, 208, 8, 209, 1, // Opcode: FDIV_S
/* 2018 */    MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 2037
/* 2022 */    MCD::OPC_CheckPredicate, 47, 66, 50, // Skip to: 14892
/* 2026 */    MCD::OPC_CheckField, 16, 5, 0, 60, 50, // Skip to: 14892
/* 2032 */    MCD::OPC_Decode, 178, 9, 210, 1, // Opcode: FSQRT_S
/* 2037 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 2056
/* 2041 */    MCD::OPC_CheckPredicate, 41, 47, 50, // Skip to: 14892
/* 2045 */    MCD::OPC_CheckField, 16, 5, 0, 41, 50, // Skip to: 14892
/* 2051 */    MCD::OPC_Decode, 162, 8, 210, 1, // Opcode: FABS_S
/* 2056 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 2075
/* 2060 */    MCD::OPC_CheckPredicate, 41, 28, 50, // Skip to: 14892
/* 2064 */    MCD::OPC_CheckField, 16, 5, 0, 22, 50, // Skip to: 14892
/* 2070 */    MCD::OPC_Decode, 135, 9, 210, 1, // Opcode: FMOV_S
/* 2075 */    MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 2094
/* 2079 */    MCD::OPC_CheckPredicate, 41, 9, 50, // Skip to: 14892
/* 2083 */    MCD::OPC_CheckField, 16, 5, 0, 3, 50, // Skip to: 14892
/* 2089 */    MCD::OPC_Decode, 153, 9, 210, 1, // Opcode: FNEG_S
/* 2094 */    MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 2113
/* 2098 */    MCD::OPC_CheckPredicate, 47, 246, 49, // Skip to: 14892
/* 2102 */    MCD::OPC_CheckField, 16, 5, 0, 240, 49, // Skip to: 14892
/* 2108 */    MCD::OPC_Decode, 196, 15, 210, 1, // Opcode: ROUND_W_S
/* 2113 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 2132
/* 2117 */    MCD::OPC_CheckPredicate, 47, 227, 49, // Skip to: 14892
/* 2121 */    MCD::OPC_CheckField, 16, 5, 0, 221, 49, // Skip to: 14892
/* 2127 */    MCD::OPC_Decode, 143, 19, 210, 1, // Opcode: TRUNC_W_S
/* 2132 */    MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 2151
/* 2136 */    MCD::OPC_CheckPredicate, 47, 208, 49, // Skip to: 14892
/* 2140 */    MCD::OPC_CheckField, 16, 5, 0, 202, 49, // Skip to: 14892
/* 2146 */    MCD::OPC_Decode, 145, 4, 210, 1, // Opcode: CEIL_W_S
/* 2151 */    MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 2170
/* 2155 */    MCD::OPC_CheckPredicate, 47, 189, 49, // Skip to: 14892
/* 2159 */    MCD::OPC_CheckField, 16, 5, 0, 183, 49, // Skip to: 14892
/* 2165 */    MCD::OPC_Decode, 246, 8, 210, 1, // Opcode: FLOOR_W_S
/* 2170 */    MCD::OPC_FilterValue, 17, 29, 0, // Skip to: 2203
/* 2174 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 2177 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2190
/* 2181 */    MCD::OPC_CheckPredicate, 23, 163, 49, // Skip to: 14892
/* 2185 */    MCD::OPC_Decode, 217, 12, 211, 1, // Opcode: MOVF_S
/* 2190 */    MCD::OPC_FilterValue, 1, 154, 49, // Skip to: 14892
/* 2194 */    MCD::OPC_CheckPredicate, 23, 150, 49, // Skip to: 14892
/* 2198 */    MCD::OPC_Decode, 237, 12, 211, 1, // Opcode: MOVT_S
/* 2203 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 2216
/* 2207 */    MCD::OPC_CheckPredicate, 23, 137, 49, // Skip to: 14892
/* 2211 */    MCD::OPC_Decode, 249, 12, 212, 1, // Opcode: MOVZ_I_S
/* 2216 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 2229
/* 2220 */    MCD::OPC_CheckPredicate, 23, 124, 49, // Skip to: 14892
/* 2224 */    MCD::OPC_Decode, 229, 12, 212, 1, // Opcode: MOVN_I_S
/* 2229 */    MCD::OPC_FilterValue, 21, 15, 0, // Skip to: 2248
/* 2233 */    MCD::OPC_CheckPredicate, 48, 111, 49, // Skip to: 14892
/* 2237 */    MCD::OPC_CheckField, 16, 5, 0, 105, 49, // Skip to: 14892
/* 2243 */    MCD::OPC_Decode, 166, 15, 210, 1, // Opcode: RECIP_S
/* 2248 */    MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 2267
/* 2252 */    MCD::OPC_CheckPredicate, 48, 92, 49, // Skip to: 14892
/* 2256 */    MCD::OPC_CheckField, 16, 5, 0, 86, 49, // Skip to: 14892
/* 2262 */    MCD::OPC_Decode, 201, 15, 210, 1, // Opcode: RSQRT_S
/* 2267 */    MCD::OPC_FilterValue, 33, 15, 0, // Skip to: 2286
/* 2271 */    MCD::OPC_CheckPredicate, 49, 73, 49, // Skip to: 14892
/* 2275 */    MCD::OPC_CheckField, 16, 5, 0, 67, 49, // Skip to: 14892
/* 2281 */    MCD::OPC_Decode, 180, 5, 213, 1, // Opcode: CVT_D32_S
/* 2286 */    MCD::OPC_FilterValue, 36, 15, 0, // Skip to: 2305
/* 2290 */    MCD::OPC_CheckPredicate, 41, 54, 49, // Skip to: 14892
/* 2294 */    MCD::OPC_CheckField, 16, 5, 0, 48, 49, // Skip to: 14892
/* 2300 */    MCD::OPC_Decode, 209, 5, 210, 1, // Opcode: CVT_W_S
/* 2305 */    MCD::OPC_FilterValue, 37, 15, 0, // Skip to: 2324
/* 2309 */    MCD::OPC_CheckPredicate, 50, 35, 49, // Skip to: 14892
/* 2313 */    MCD::OPC_CheckField, 16, 5, 0, 29, 49, // Skip to: 14892
/* 2319 */    MCD::OPC_Decode, 193, 5, 214, 1, // Opcode: CVT_L_S
/* 2324 */    MCD::OPC_FilterValue, 48, 15, 0, // Skip to: 2343
/* 2328 */    MCD::OPC_CheckPredicate, 51, 16, 49, // Skip to: 14892
/* 2332 */    MCD::OPC_CheckField, 6, 2, 0, 10, 49, // Skip to: 14892
/* 2338 */    MCD::OPC_Decode, 222, 5, 215, 1, // Opcode: C_F_S
/* 2343 */    MCD::OPC_FilterValue, 49, 15, 0, // Skip to: 2362
/* 2347 */    MCD::OPC_CheckPredicate, 51, 253, 48, // Skip to: 14892
/* 2351 */    MCD::OPC_CheckField, 6, 2, 0, 247, 48, // Skip to: 14892
/* 2357 */    MCD::OPC_Decode, 178, 6, 215, 1, // Opcode: C_UN_S
/* 2362 */    MCD::OPC_FilterValue, 50, 15, 0, // Skip to: 2381
/* 2366 */    MCD::OPC_CheckPredicate, 51, 234, 48, // Skip to: 14892
/* 2370 */    MCD::OPC_CheckField, 6, 2, 0, 228, 48, // Skip to: 14892
/* 2376 */    MCD::OPC_Decode, 216, 5, 215, 1, // Opcode: C_EQ_S
/* 2381 */    MCD::OPC_FilterValue, 51, 15, 0, // Skip to: 2400
/* 2385 */    MCD::OPC_CheckPredicate, 51, 215, 48, // Skip to: 14892
/* 2389 */    MCD::OPC_CheckField, 6, 2, 0, 209, 48, // Skip to: 14892
/* 2395 */    MCD::OPC_Decode, 160, 6, 215, 1, // Opcode: C_UEQ_S
/* 2400 */    MCD::OPC_FilterValue, 52, 15, 0, // Skip to: 2419
/* 2404 */    MCD::OPC_CheckPredicate, 51, 196, 48, // Skip to: 14892
/* 2408 */    MCD::OPC_CheckField, 6, 2, 0, 190, 48, // Skip to: 14892
/* 2414 */    MCD::OPC_Decode, 142, 6, 215, 1, // Opcode: C_OLT_S
/* 2419 */    MCD::OPC_FilterValue, 53, 15, 0, // Skip to: 2438
/* 2423 */    MCD::OPC_CheckPredicate, 51, 177, 48, // Skip to: 14892
/* 2427 */    MCD::OPC_CheckField, 6, 2, 0, 171, 48, // Skip to: 14892
/* 2433 */    MCD::OPC_Decode, 172, 6, 215, 1, // Opcode: C_ULT_S
/* 2438 */    MCD::OPC_FilterValue, 54, 15, 0, // Skip to: 2457
/* 2442 */    MCD::OPC_CheckPredicate, 51, 158, 48, // Skip to: 14892
/* 2446 */    MCD::OPC_CheckField, 6, 2, 0, 152, 48, // Skip to: 14892
/* 2452 */    MCD::OPC_Decode, 136, 6, 215, 1, // Opcode: C_OLE_S
/* 2457 */    MCD::OPC_FilterValue, 55, 15, 0, // Skip to: 2476
/* 2461 */    MCD::OPC_CheckPredicate, 51, 139, 48, // Skip to: 14892
/* 2465 */    MCD::OPC_CheckField, 6, 2, 0, 133, 48, // Skip to: 14892
/* 2471 */    MCD::OPC_Decode, 166, 6, 215, 1, // Opcode: C_ULE_S
/* 2476 */    MCD::OPC_FilterValue, 56, 15, 0, // Skip to: 2495
/* 2480 */    MCD::OPC_CheckPredicate, 51, 120, 48, // Skip to: 14892
/* 2484 */    MCD::OPC_CheckField, 6, 2, 0, 114, 48, // Skip to: 14892
/* 2490 */    MCD::OPC_Decode, 154, 6, 215, 1, // Opcode: C_SF_S
/* 2495 */    MCD::OPC_FilterValue, 57, 15, 0, // Skip to: 2514
/* 2499 */    MCD::OPC_CheckPredicate, 51, 101, 48, // Skip to: 14892
/* 2503 */    MCD::OPC_CheckField, 6, 2, 0, 95, 48, // Skip to: 14892
/* 2509 */    MCD::OPC_Decode, 246, 5, 215, 1, // Opcode: C_NGLE_S
/* 2514 */    MCD::OPC_FilterValue, 58, 15, 0, // Skip to: 2533
/* 2518 */    MCD::OPC_CheckPredicate, 51, 82, 48, // Skip to: 14892
/* 2522 */    MCD::OPC_CheckField, 6, 2, 0, 76, 48, // Skip to: 14892
/* 2528 */    MCD::OPC_Decode, 148, 6, 215, 1, // Opcode: C_SEQ_S
/* 2533 */    MCD::OPC_FilterValue, 59, 15, 0, // Skip to: 2552
/* 2537 */    MCD::OPC_CheckPredicate, 51, 63, 48, // Skip to: 14892
/* 2541 */    MCD::OPC_CheckField, 6, 2, 0, 57, 48, // Skip to: 14892
/* 2547 */    MCD::OPC_Decode, 252, 5, 215, 1, // Opcode: C_NGL_S
/* 2552 */    MCD::OPC_FilterValue, 60, 15, 0, // Skip to: 2571
/* 2556 */    MCD::OPC_CheckPredicate, 51, 44, 48, // Skip to: 14892
/* 2560 */    MCD::OPC_CheckField, 6, 2, 0, 38, 48, // Skip to: 14892
/* 2566 */    MCD::OPC_Decode, 234, 5, 215, 1, // Opcode: C_LT_S
/* 2571 */    MCD::OPC_FilterValue, 61, 15, 0, // Skip to: 2590
/* 2575 */    MCD::OPC_CheckPredicate, 51, 25, 48, // Skip to: 14892
/* 2579 */    MCD::OPC_CheckField, 6, 2, 0, 19, 48, // Skip to: 14892
/* 2585 */    MCD::OPC_Decode, 240, 5, 215, 1, // Opcode: C_NGE_S
/* 2590 */    MCD::OPC_FilterValue, 62, 15, 0, // Skip to: 2609
/* 2594 */    MCD::OPC_CheckPredicate, 51, 6, 48, // Skip to: 14892
/* 2598 */    MCD::OPC_CheckField, 6, 2, 0, 0, 48, // Skip to: 14892
/* 2604 */    MCD::OPC_Decode, 228, 5, 215, 1, // Opcode: C_LE_S
/* 2609 */    MCD::OPC_FilterValue, 63, 247, 47, // Skip to: 14892
/* 2613 */    MCD::OPC_CheckPredicate, 51, 243, 47, // Skip to: 14892
/* 2617 */    MCD::OPC_CheckField, 6, 2, 0, 237, 47, // Skip to: 14892
/* 2623 */    MCD::OPC_Decode, 130, 6, 215, 1, // Opcode: C_NGT_S
/* 2628 */    MCD::OPC_FilterValue, 17, 153, 2, // Skip to: 3297
/* 2632 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2635 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2648
/* 2639 */    MCD::OPC_CheckPredicate, 49, 217, 47, // Skip to: 14892
/* 2643 */    MCD::OPC_Decode, 166, 8, 216, 1, // Opcode: FADD_D32
/* 2648 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2661
/* 2652 */    MCD::OPC_CheckPredicate, 49, 204, 47, // Skip to: 14892
/* 2656 */    MCD::OPC_Decode, 182, 9, 216, 1, // Opcode: FSUB_D32
/* 2661 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2674
/* 2665 */    MCD::OPC_CheckPredicate, 49, 191, 47, // Skip to: 14892
/* 2669 */    MCD::OPC_Decode, 141, 9, 216, 1, // Opcode: FMUL_D32
/* 2674 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2687
/* 2678 */    MCD::OPC_CheckPredicate, 49, 178, 47, // Skip to: 14892
/* 2682 */    MCD::OPC_Decode, 204, 8, 216, 1, // Opcode: FDIV_D32
/* 2687 */    MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 2706
/* 2691 */    MCD::OPC_CheckPredicate, 52, 165, 47, // Skip to: 14892
/* 2695 */    MCD::OPC_CheckField, 16, 5, 0, 159, 47, // Skip to: 14892
/* 2701 */    MCD::OPC_Decode, 175, 9, 217, 1, // Opcode: FSQRT_D32
/* 2706 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 2725
/* 2710 */    MCD::OPC_CheckPredicate, 49, 146, 47, // Skip to: 14892
/* 2714 */    MCD::OPC_CheckField, 16, 5, 0, 140, 47, // Skip to: 14892
/* 2720 */    MCD::OPC_Decode, 159, 8, 217, 1, // Opcode: FABS_D32
/* 2725 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 2744
/* 2729 */    MCD::OPC_CheckPredicate, 49, 127, 47, // Skip to: 14892
/* 2733 */    MCD::OPC_CheckField, 16, 5, 0, 121, 47, // Skip to: 14892
/* 2739 */    MCD::OPC_Decode, 131, 9, 217, 1, // Opcode: FMOV_D32
/* 2744 */    MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 2763
/* 2748 */    MCD::OPC_CheckPredicate, 49, 108, 47, // Skip to: 14892
/* 2752 */    MCD::OPC_CheckField, 16, 5, 0, 102, 47, // Skip to: 14892
/* 2758 */    MCD::OPC_Decode, 149, 9, 217, 1, // Opcode: FNEG_D32
/* 2763 */    MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 2782
/* 2767 */    MCD::OPC_CheckPredicate, 52, 89, 47, // Skip to: 14892
/* 2771 */    MCD::OPC_CheckField, 16, 5, 0, 83, 47, // Skip to: 14892
/* 2777 */    MCD::OPC_Decode, 192, 15, 218, 1, // Opcode: ROUND_W_D32
/* 2782 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 2801
/* 2786 */    MCD::OPC_CheckPredicate, 52, 70, 47, // Skip to: 14892
/* 2790 */    MCD::OPC_CheckField, 16, 5, 0, 64, 47, // Skip to: 14892
/* 2796 */    MCD::OPC_Decode, 139, 19, 218, 1, // Opcode: TRUNC_W_D32
/* 2801 */    MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 2820
/* 2805 */    MCD::OPC_CheckPredicate, 52, 51, 47, // Skip to: 14892
/* 2809 */    MCD::OPC_CheckField, 16, 5, 0, 45, 47, // Skip to: 14892
/* 2815 */    MCD::OPC_Decode, 141, 4, 218, 1, // Opcode: CEIL_W_D32
/* 2820 */    MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 2839
/* 2824 */    MCD::OPC_CheckPredicate, 52, 32, 47, // Skip to: 14892
/* 2828 */    MCD::OPC_CheckField, 16, 5, 0, 26, 47, // Skip to: 14892
/* 2834 */    MCD::OPC_Decode, 242, 8, 218, 1, // Opcode: FLOOR_W_D32
/* 2839 */    MCD::OPC_FilterValue, 17, 29, 0, // Skip to: 2872
/* 2843 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 2846 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2859
/* 2850 */    MCD::OPC_CheckPredicate, 53, 6, 47, // Skip to: 14892
/* 2854 */    MCD::OPC_Decode, 211, 12, 219, 1, // Opcode: MOVF_D32
/* 2859 */    MCD::OPC_FilterValue, 1, 253, 46, // Skip to: 14892
/* 2863 */    MCD::OPC_CheckPredicate, 53, 249, 46, // Skip to: 14892
/* 2867 */    MCD::OPC_Decode, 231, 12, 219, 1, // Opcode: MOVT_D32
/* 2872 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 2885
/* 2876 */    MCD::OPC_CheckPredicate, 53, 236, 46, // Skip to: 14892
/* 2880 */    MCD::OPC_Decode, 243, 12, 220, 1, // Opcode: MOVZ_I_D32
/* 2885 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 2898
/* 2889 */    MCD::OPC_CheckPredicate, 53, 223, 46, // Skip to: 14892
/* 2893 */    MCD::OPC_Decode, 223, 12, 220, 1, // Opcode: MOVN_I_D32
/* 2898 */    MCD::OPC_FilterValue, 21, 15, 0, // Skip to: 2917
/* 2902 */    MCD::OPC_CheckPredicate, 48, 210, 46, // Skip to: 14892
/* 2906 */    MCD::OPC_CheckField, 16, 5, 0, 204, 46, // Skip to: 14892
/* 2912 */    MCD::OPC_Decode, 164, 15, 221, 1, // Opcode: RECIP_D
/* 2917 */    MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 2936
/* 2921 */    MCD::OPC_CheckPredicate, 48, 191, 46, // Skip to: 14892
/* 2925 */    MCD::OPC_CheckField, 16, 5, 0, 185, 46, // Skip to: 14892
/* 2931 */    MCD::OPC_Decode, 199, 15, 221, 1, // Opcode: RSQRT_D
/* 2936 */    MCD::OPC_FilterValue, 32, 15, 0, // Skip to: 2955
/* 2940 */    MCD::OPC_CheckPredicate, 49, 172, 46, // Skip to: 14892
/* 2944 */    MCD::OPC_CheckField, 16, 5, 0, 166, 46, // Skip to: 14892
/* 2950 */    MCD::OPC_Decode, 196, 5, 218, 1, // Opcode: CVT_S_D32
/* 2955 */    MCD::OPC_FilterValue, 36, 15, 0, // Skip to: 2974
/* 2959 */    MCD::OPC_CheckPredicate, 49, 153, 46, // Skip to: 14892
/* 2963 */    MCD::OPC_CheckField, 16, 5, 0, 147, 46, // Skip to: 14892
/* 2969 */    MCD::OPC_Decode, 205, 5, 218, 1, // Opcode: CVT_W_D32
/* 2974 */    MCD::OPC_FilterValue, 37, 15, 0, // Skip to: 2993
/* 2978 */    MCD::OPC_CheckPredicate, 50, 134, 46, // Skip to: 14892
/* 2982 */    MCD::OPC_CheckField, 16, 5, 0, 128, 46, // Skip to: 14892
/* 2988 */    MCD::OPC_Decode, 190, 5, 221, 1, // Opcode: CVT_L_D64
/* 2993 */    MCD::OPC_FilterValue, 48, 15, 0, // Skip to: 3012
/* 2997 */    MCD::OPC_CheckPredicate, 54, 115, 46, // Skip to: 14892
/* 3001 */    MCD::OPC_CheckField, 6, 2, 0, 109, 46, // Skip to: 14892
/* 3007 */    MCD::OPC_Decode, 218, 5, 222, 1, // Opcode: C_F_D32
/* 3012 */    MCD::OPC_FilterValue, 49, 15, 0, // Skip to: 3031
/* 3016 */    MCD::OPC_CheckPredicate, 54, 96, 46, // Skip to: 14892
/* 3020 */    MCD::OPC_CheckField, 6, 2, 0, 90, 46, // Skip to: 14892
/* 3026 */    MCD::OPC_Decode, 174, 6, 222, 1, // Opcode: C_UN_D32
/* 3031 */    MCD::OPC_FilterValue, 50, 15, 0, // Skip to: 3050
/* 3035 */    MCD::OPC_CheckPredicate, 54, 77, 46, // Skip to: 14892
/* 3039 */    MCD::OPC_CheckField, 6, 2, 0, 71, 46, // Skip to: 14892
/* 3045 */    MCD::OPC_Decode, 212, 5, 222, 1, // Opcode: C_EQ_D32
/* 3050 */    MCD::OPC_FilterValue, 51, 15, 0, // Skip to: 3069
/* 3054 */    MCD::OPC_CheckPredicate, 54, 58, 46, // Skip to: 14892
/* 3058 */    MCD::OPC_CheckField, 6, 2, 0, 52, 46, // Skip to: 14892
/* 3064 */    MCD::OPC_Decode, 156, 6, 222, 1, // Opcode: C_UEQ_D32
/* 3069 */    MCD::OPC_FilterValue, 52, 15, 0, // Skip to: 3088
/* 3073 */    MCD::OPC_CheckPredicate, 54, 39, 46, // Skip to: 14892
/* 3077 */    MCD::OPC_CheckField, 6, 2, 0, 33, 46, // Skip to: 14892
/* 3083 */    MCD::OPC_Decode, 138, 6, 222, 1, // Opcode: C_OLT_D32
/* 3088 */    MCD::OPC_FilterValue, 53, 15, 0, // Skip to: 3107
/* 3092 */    MCD::OPC_CheckPredicate, 54, 20, 46, // Skip to: 14892
/* 3096 */    MCD::OPC_CheckField, 6, 2, 0, 14, 46, // Skip to: 14892
/* 3102 */    MCD::OPC_Decode, 168, 6, 222, 1, // Opcode: C_ULT_D32
/* 3107 */    MCD::OPC_FilterValue, 54, 15, 0, // Skip to: 3126
/* 3111 */    MCD::OPC_CheckPredicate, 54, 1, 46, // Skip to: 14892
/* 3115 */    MCD::OPC_CheckField, 6, 2, 0, 251, 45, // Skip to: 14892
/* 3121 */    MCD::OPC_Decode, 132, 6, 222, 1, // Opcode: C_OLE_D32
/* 3126 */    MCD::OPC_FilterValue, 55, 15, 0, // Skip to: 3145
/* 3130 */    MCD::OPC_CheckPredicate, 54, 238, 45, // Skip to: 14892
/* 3134 */    MCD::OPC_CheckField, 6, 2, 0, 232, 45, // Skip to: 14892
/* 3140 */    MCD::OPC_Decode, 162, 6, 222, 1, // Opcode: C_ULE_D32
/* 3145 */    MCD::OPC_FilterValue, 56, 15, 0, // Skip to: 3164
/* 3149 */    MCD::OPC_CheckPredicate, 54, 219, 45, // Skip to: 14892
/* 3153 */    MCD::OPC_CheckField, 6, 2, 0, 213, 45, // Skip to: 14892
/* 3159 */    MCD::OPC_Decode, 150, 6, 222, 1, // Opcode: C_SF_D32
/* 3164 */    MCD::OPC_FilterValue, 57, 15, 0, // Skip to: 3183
/* 3168 */    MCD::OPC_CheckPredicate, 54, 200, 45, // Skip to: 14892
/* 3172 */    MCD::OPC_CheckField, 6, 2, 0, 194, 45, // Skip to: 14892
/* 3178 */    MCD::OPC_Decode, 242, 5, 222, 1, // Opcode: C_NGLE_D32
/* 3183 */    MCD::OPC_FilterValue, 58, 15, 0, // Skip to: 3202
/* 3187 */    MCD::OPC_CheckPredicate, 54, 181, 45, // Skip to: 14892
/* 3191 */    MCD::OPC_CheckField, 6, 2, 0, 175, 45, // Skip to: 14892
/* 3197 */    MCD::OPC_Decode, 144, 6, 222, 1, // Opcode: C_SEQ_D32
/* 3202 */    MCD::OPC_FilterValue, 59, 15, 0, // Skip to: 3221
/* 3206 */    MCD::OPC_CheckPredicate, 54, 162, 45, // Skip to: 14892
/* 3210 */    MCD::OPC_CheckField, 6, 2, 0, 156, 45, // Skip to: 14892
/* 3216 */    MCD::OPC_Decode, 248, 5, 222, 1, // Opcode: C_NGL_D32
/* 3221 */    MCD::OPC_FilterValue, 60, 15, 0, // Skip to: 3240
/* 3225 */    MCD::OPC_CheckPredicate, 54, 143, 45, // Skip to: 14892
/* 3229 */    MCD::OPC_CheckField, 6, 2, 0, 137, 45, // Skip to: 14892
/* 3235 */    MCD::OPC_Decode, 230, 5, 222, 1, // Opcode: C_LT_D32
/* 3240 */    MCD::OPC_FilterValue, 61, 15, 0, // Skip to: 3259
/* 3244 */    MCD::OPC_CheckPredicate, 54, 124, 45, // Skip to: 14892
/* 3248 */    MCD::OPC_CheckField, 6, 2, 0, 118, 45, // Skip to: 14892
/* 3254 */    MCD::OPC_Decode, 236, 5, 222, 1, // Opcode: C_NGE_D32
/* 3259 */    MCD::OPC_FilterValue, 62, 15, 0, // Skip to: 3278
/* 3263 */    MCD::OPC_CheckPredicate, 54, 105, 45, // Skip to: 14892
/* 3267 */    MCD::OPC_CheckField, 6, 2, 0, 99, 45, // Skip to: 14892
/* 3273 */    MCD::OPC_Decode, 224, 5, 222, 1, // Opcode: C_LE_D32
/* 3278 */    MCD::OPC_FilterValue, 63, 90, 45, // Skip to: 14892
/* 3282 */    MCD::OPC_CheckPredicate, 54, 86, 45, // Skip to: 14892
/* 3286 */    MCD::OPC_CheckField, 6, 2, 0, 80, 45, // Skip to: 14892
/* 3292 */    MCD::OPC_Decode, 254, 5, 222, 1, // Opcode: C_NGT_D32
/* 3297 */    MCD::OPC_FilterValue, 20, 41, 0, // Skip to: 3342
/* 3301 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3304 */    MCD::OPC_FilterValue, 32, 15, 0, // Skip to: 3323
/* 3308 */    MCD::OPC_CheckPredicate, 41, 60, 45, // Skip to: 14892
/* 3312 */    MCD::OPC_CheckField, 16, 5, 0, 54, 45, // Skip to: 14892
/* 3318 */    MCD::OPC_Decode, 202, 5, 210, 1, // Opcode: CVT_S_W
/* 3323 */    MCD::OPC_FilterValue, 33, 45, 45, // Skip to: 14892
/* 3327 */    MCD::OPC_CheckPredicate, 49, 41, 45, // Skip to: 14892
/* 3331 */    MCD::OPC_CheckField, 16, 5, 0, 35, 45, // Skip to: 14892
/* 3337 */    MCD::OPC_Decode, 181, 5, 213, 1, // Opcode: CVT_D32_W
/* 3342 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 3355
/* 3346 */    MCD::OPC_CheckPredicate, 25, 22, 45, // Skip to: 14892
/* 3350 */    MCD::OPC_Decode, 224, 3, 208, 1, // Opcode: BZ_B
/* 3355 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 3368
/* 3359 */    MCD::OPC_CheckPredicate, 25, 9, 45, // Skip to: 14892
/* 3363 */    MCD::OPC_Decode, 226, 3, 223, 1, // Opcode: BZ_H
/* 3368 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 3381
/* 3372 */    MCD::OPC_CheckPredicate, 25, 252, 44, // Skip to: 14892
/* 3376 */    MCD::OPC_Decode, 228, 3, 224, 1, // Opcode: BZ_W
/* 3381 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 3394
/* 3385 */    MCD::OPC_CheckPredicate, 25, 239, 44, // Skip to: 14892
/* 3389 */    MCD::OPC_Decode, 225, 3, 225, 1, // Opcode: BZ_D
/* 3394 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 3407
/* 3398 */    MCD::OPC_CheckPredicate, 25, 226, 44, // Skip to: 14892
/* 3402 */    MCD::OPC_Decode, 193, 3, 208, 1, // Opcode: BNZ_B
/* 3407 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 3420
/* 3411 */    MCD::OPC_CheckPredicate, 25, 213, 44, // Skip to: 14892
/* 3415 */    MCD::OPC_Decode, 195, 3, 223, 1, // Opcode: BNZ_H
/* 3420 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 3433
/* 3424 */    MCD::OPC_CheckPredicate, 25, 200, 44, // Skip to: 14892
/* 3428 */    MCD::OPC_Decode, 197, 3, 224, 1, // Opcode: BNZ_W
/* 3433 */    MCD::OPC_FilterValue, 31, 191, 44, // Skip to: 14892
/* 3437 */    MCD::OPC_CheckPredicate, 25, 187, 44, // Skip to: 14892
/* 3441 */    MCD::OPC_Decode, 194, 3, 225, 1, // Opcode: BNZ_D
/* 3446 */    MCD::OPC_FilterValue, 18, 41, 0, // Skip to: 3491
/* 3450 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 3453 */    MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 3472
/* 3457 */    MCD::OPC_CheckPredicate, 21, 167, 44, // Skip to: 14892
/* 3461 */    MCD::OPC_CheckField, 3, 8, 0, 161, 44, // Skip to: 14892
/* 3467 */    MCD::OPC_Decode, 142, 12, 226, 1, // Opcode: MFC2
/* 3472 */    MCD::OPC_FilterValue, 4, 152, 44, // Skip to: 14892
/* 3476 */    MCD::OPC_CheckPredicate, 21, 148, 44, // Skip to: 14892
/* 3480 */    MCD::OPC_CheckField, 3, 8, 0, 142, 44, // Skip to: 14892
/* 3486 */    MCD::OPC_Decode, 157, 13, 227, 1, // Opcode: MTC2
/* 3491 */    MCD::OPC_FilterValue, 19, 221, 0, // Skip to: 3716
/* 3495 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3498 */    MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 3517
/* 3502 */    MCD::OPC_CheckPredicate, 55, 122, 44, // Skip to: 14892
/* 3506 */    MCD::OPC_CheckField, 11, 5, 0, 116, 44, // Skip to: 14892
/* 3512 */    MCD::OPC_Decode, 179, 11, 228, 1, // Opcode: LWXC1
/* 3517 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 3536
/* 3521 */    MCD::OPC_CheckPredicate, 56, 103, 44, // Skip to: 14892
/* 3525 */    MCD::OPC_CheckField, 11, 5, 0, 97, 44, // Skip to: 14892
/* 3531 */    MCD::OPC_Decode, 216, 10, 229, 1, // Opcode: LDXC1
/* 3536 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 3555
/* 3540 */    MCD::OPC_CheckPredicate, 57, 84, 44, // Skip to: 14892
/* 3544 */    MCD::OPC_CheckField, 11, 5, 0, 78, 44, // Skip to: 14892
/* 3550 */    MCD::OPC_Decode, 136, 11, 229, 1, // Opcode: LUXC1
/* 3555 */    MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 3574
/* 3559 */    MCD::OPC_CheckPredicate, 55, 65, 44, // Skip to: 14892
/* 3563 */    MCD::OPC_CheckField, 6, 5, 0, 59, 44, // Skip to: 14892
/* 3569 */    MCD::OPC_Decode, 165, 18, 230, 1, // Opcode: SWXC1
/* 3574 */    MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 3593
/* 3578 */    MCD::OPC_CheckPredicate, 56, 46, 44, // Skip to: 14892
/* 3582 */    MCD::OPC_CheckField, 6, 5, 0, 40, 44, // Skip to: 14892
/* 3588 */    MCD::OPC_Decode, 255, 15, 231, 1, // Opcode: SDXC1
/* 3593 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 3612
/* 3597 */    MCD::OPC_CheckPredicate, 57, 27, 44, // Skip to: 14892
/* 3601 */    MCD::OPC_CheckField, 6, 5, 0, 21, 44, // Skip to: 14892
/* 3607 */    MCD::OPC_Decode, 131, 18, 231, 1, // Opcode: SUXC1
/* 3612 */    MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 3625
/* 3616 */    MCD::OPC_CheckPredicate, 55, 8, 44, // Skip to: 14892
/* 3620 */    MCD::OPC_Decode, 227, 11, 232, 1, // Opcode: MADD_S
/* 3625 */    MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 3638
/* 3629 */    MCD::OPC_CheckPredicate, 58, 251, 43, // Skip to: 14892
/* 3633 */    MCD::OPC_Decode, 219, 11, 233, 1, // Opcode: MADD_D32
/* 3638 */    MCD::OPC_FilterValue, 40, 9, 0, // Skip to: 3651
/* 3642 */    MCD::OPC_CheckPredicate, 55, 238, 43, // Skip to: 14892
/* 3646 */    MCD::OPC_Decode, 150, 13, 232, 1, // Opcode: MSUB_S
/* 3651 */    MCD::OPC_FilterValue, 41, 9, 0, // Skip to: 3664
/* 3655 */    MCD::OPC_CheckPredicate, 58, 225, 43, // Skip to: 14892
/* 3659 */    MCD::OPC_Decode, 142, 13, 233, 1, // Opcode: MSUB_D32
/* 3664 */    MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 3677
/* 3668 */    MCD::OPC_CheckPredicate, 55, 212, 43, // Skip to: 14892
/* 3672 */    MCD::OPC_Decode, 253, 13, 232, 1, // Opcode: NMADD_S
/* 3677 */    MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 3690
/* 3681 */    MCD::OPC_CheckPredicate, 58, 199, 43, // Skip to: 14892
/* 3685 */    MCD::OPC_Decode, 250, 13, 233, 1, // Opcode: NMADD_D32
/* 3690 */    MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 3703
/* 3694 */    MCD::OPC_CheckPredicate, 55, 186, 43, // Skip to: 14892
/* 3698 */    MCD::OPC_Decode, 130, 14, 232, 1, // Opcode: NMSUB_S
/* 3703 */    MCD::OPC_FilterValue, 57, 177, 43, // Skip to: 14892
/* 3707 */    MCD::OPC_CheckPredicate, 58, 173, 43, // Skip to: 14892
/* 3711 */    MCD::OPC_Decode, 255, 13, 233, 1, // Opcode: NMSUB_D32
/* 3716 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 3729
/* 3720 */    MCD::OPC_CheckPredicate, 34, 160, 43, // Skip to: 14892
/* 3724 */    MCD::OPC_Decode, 174, 2, 194, 1, // Opcode: BEQL
/* 3729 */    MCD::OPC_FilterValue, 21, 29, 2, // Skip to: 4274
/* 3733 */    MCD::OPC_ExtractField, 0, 16,  // Inst{15-0} ...
/* 3736 */    MCD::OPC_FilterValue, 187, 20, 8, 0, // Skip to: 3749
/* 3741 */    MCD::OPC_CheckPredicate, 13, 71, 0, // Skip to: 3816
/* 3745 */    MCD::OPC_Decode, 179, 9, 98, // Opcode: FSQRT_S_MM
/* 3749 */    MCD::OPC_FilterValue, 187, 22, 8, 0, // Skip to: 3762
/* 3754 */    MCD::OPC_CheckPredicate, 13, 58, 0, // Skip to: 3816
/* 3758 */    MCD::OPC_Decode, 247, 8, 98, // Opcode: FLOOR_W_S_MM
/* 3762 */    MCD::OPC_FilterValue, 187, 54, 8, 0, // Skip to: 3775
/* 3767 */    MCD::OPC_CheckPredicate, 13, 45, 0, // Skip to: 3816
/* 3771 */    MCD::OPC_Decode, 146, 4, 98, // Opcode: CEIL_W_S_MM
/* 3775 */    MCD::OPC_FilterValue, 187, 86, 8, 0, // Skip to: 3788
/* 3780 */    MCD::OPC_CheckPredicate, 13, 32, 0, // Skip to: 3816
/* 3784 */    MCD::OPC_Decode, 144, 19, 98, // Opcode: TRUNC_W_S_MM
/* 3788 */    MCD::OPC_FilterValue, 187, 96, 9, 0, // Skip to: 3802
/* 3793 */    MCD::OPC_CheckPredicate, 59, 19, 0, // Skip to: 3816
/* 3797 */    MCD::OPC_Decode, 149, 12, 135, 1, // Opcode: MFHC1_MM
/* 3802 */    MCD::OPC_FilterValue, 187, 112, 9, 0, // Skip to: 3816
/* 3807 */    MCD::OPC_CheckPredicate, 59, 5, 0, // Skip to: 3816
/* 3811 */    MCD::OPC_Decode, 164, 13, 136, 1, // Opcode: MTHC1_MM
/* 3816 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 3819 */    MCD::OPC_FilterValue, 60, 9, 0, // Skip to: 3832
/* 3823 */    MCD::OPC_CheckPredicate, 60, 182, 1, // Skip to: 4265
/* 3827 */    MCD::OPC_Decode, 223, 5, 234, 1, // Opcode: C_F_S_MM
/* 3832 */    MCD::OPC_FilterValue, 124, 9, 0, // Skip to: 3845
/* 3836 */    MCD::OPC_CheckPredicate, 60, 169, 1, // Skip to: 4265
/* 3840 */    MCD::OPC_Decode, 179, 6, 234, 1, // Opcode: C_UN_S_MM
/* 3845 */    MCD::OPC_FilterValue, 188, 1, 9, 0, // Skip to: 3859
/* 3850 */    MCD::OPC_CheckPredicate, 60, 155, 1, // Skip to: 4265
/* 3854 */    MCD::OPC_Decode, 217, 5, 234, 1, // Opcode: C_EQ_S_MM
/* 3859 */    MCD::OPC_FilterValue, 252, 1, 9, 0, // Skip to: 3873
/* 3864 */    MCD::OPC_CheckPredicate, 60, 141, 1, // Skip to: 4265
/* 3868 */    MCD::OPC_Decode, 161, 6, 234, 1, // Opcode: C_UEQ_S_MM
/* 3873 */    MCD::OPC_FilterValue, 188, 2, 9, 0, // Skip to: 3887
/* 3878 */    MCD::OPC_CheckPredicate, 60, 127, 1, // Skip to: 4265
/* 3882 */    MCD::OPC_Decode, 143, 6, 234, 1, // Opcode: C_OLT_S_MM
/* 3887 */    MCD::OPC_FilterValue, 252, 2, 9, 0, // Skip to: 3901
/* 3892 */    MCD::OPC_CheckPredicate, 60, 113, 1, // Skip to: 4265
/* 3896 */    MCD::OPC_Decode, 173, 6, 234, 1, // Opcode: C_ULT_S_MM
/* 3901 */    MCD::OPC_FilterValue, 188, 3, 9, 0, // Skip to: 3915
/* 3906 */    MCD::OPC_CheckPredicate, 60, 99, 1, // Skip to: 4265
/* 3910 */    MCD::OPC_Decode, 137, 6, 234, 1, // Opcode: C_OLE_S_MM
/* 3915 */    MCD::OPC_FilterValue, 252, 3, 9, 0, // Skip to: 3929
/* 3920 */    MCD::OPC_CheckPredicate, 60, 85, 1, // Skip to: 4265
/* 3924 */    MCD::OPC_Decode, 167, 6, 234, 1, // Opcode: C_ULE_S_MM
/* 3929 */    MCD::OPC_FilterValue, 188, 4, 9, 0, // Skip to: 3943
/* 3934 */    MCD::OPC_CheckPredicate, 60, 71, 1, // Skip to: 4265
/* 3938 */    MCD::OPC_Decode, 155, 6, 234, 1, // Opcode: C_SF_S_MM
/* 3943 */    MCD::OPC_FilterValue, 252, 4, 9, 0, // Skip to: 3957
/* 3948 */    MCD::OPC_CheckPredicate, 60, 57, 1, // Skip to: 4265
/* 3952 */    MCD::OPC_Decode, 247, 5, 234, 1, // Opcode: C_NGLE_S_MM
/* 3957 */    MCD::OPC_FilterValue, 188, 5, 9, 0, // Skip to: 3971
/* 3962 */    MCD::OPC_CheckPredicate, 60, 43, 1, // Skip to: 4265
/* 3966 */    MCD::OPC_Decode, 149, 6, 234, 1, // Opcode: C_SEQ_S_MM
/* 3971 */    MCD::OPC_FilterValue, 252, 5, 9, 0, // Skip to: 3985
/* 3976 */    MCD::OPC_CheckPredicate, 60, 29, 1, // Skip to: 4265
/* 3980 */    MCD::OPC_Decode, 253, 5, 234, 1, // Opcode: C_NGL_S_MM
/* 3985 */    MCD::OPC_FilterValue, 188, 6, 9, 0, // Skip to: 3999
/* 3990 */    MCD::OPC_CheckPredicate, 60, 15, 1, // Skip to: 4265
/* 3994 */    MCD::OPC_Decode, 235, 5, 234, 1, // Opcode: C_LT_S_MM
/* 3999 */    MCD::OPC_FilterValue, 252, 6, 9, 0, // Skip to: 4013
/* 4004 */    MCD::OPC_CheckPredicate, 60, 1, 1, // Skip to: 4265
/* 4008 */    MCD::OPC_Decode, 241, 5, 234, 1, // Opcode: C_NGE_S_MM
/* 4013 */    MCD::OPC_FilterValue, 188, 7, 9, 0, // Skip to: 4027
/* 4018 */    MCD::OPC_CheckPredicate, 60, 243, 0, // Skip to: 4265
/* 4022 */    MCD::OPC_Decode, 229, 5, 234, 1, // Opcode: C_LE_S_MM
/* 4027 */    MCD::OPC_FilterValue, 252, 7, 9, 0, // Skip to: 4041
/* 4032 */    MCD::OPC_CheckPredicate, 60, 229, 0, // Skip to: 4265
/* 4036 */    MCD::OPC_Decode, 131, 6, 234, 1, // Opcode: C_NGT_S_MM
/* 4041 */    MCD::OPC_FilterValue, 188, 8, 9, 0, // Skip to: 4055
/* 4046 */    MCD::OPC_CheckPredicate, 61, 215, 0, // Skip to: 4265
/* 4050 */    MCD::OPC_Decode, 219, 5, 235, 1, // Opcode: C_F_D32_MM
/* 4055 */    MCD::OPC_FilterValue, 252, 8, 9, 0, // Skip to: 4069
/* 4060 */    MCD::OPC_CheckPredicate, 61, 201, 0, // Skip to: 4265
/* 4064 */    MCD::OPC_Decode, 175, 6, 235, 1, // Opcode: C_UN_D32_MM
/* 4069 */    MCD::OPC_FilterValue, 188, 9, 9, 0, // Skip to: 4083
/* 4074 */    MCD::OPC_CheckPredicate, 61, 187, 0, // Skip to: 4265
/* 4078 */    MCD::OPC_Decode, 213, 5, 235, 1, // Opcode: C_EQ_D32_MM
/* 4083 */    MCD::OPC_FilterValue, 252, 9, 9, 0, // Skip to: 4097
/* 4088 */    MCD::OPC_CheckPredicate, 61, 173, 0, // Skip to: 4265
/* 4092 */    MCD::OPC_Decode, 157, 6, 235, 1, // Opcode: C_UEQ_D32_MM
/* 4097 */    MCD::OPC_FilterValue, 188, 10, 9, 0, // Skip to: 4111
/* 4102 */    MCD::OPC_CheckPredicate, 61, 159, 0, // Skip to: 4265
/* 4106 */    MCD::OPC_Decode, 139, 6, 235, 1, // Opcode: C_OLT_D32_MM
/* 4111 */    MCD::OPC_FilterValue, 252, 10, 9, 0, // Skip to: 4125
/* 4116 */    MCD::OPC_CheckPredicate, 61, 145, 0, // Skip to: 4265
/* 4120 */    MCD::OPC_Decode, 169, 6, 235, 1, // Opcode: C_ULT_D32_MM
/* 4125 */    MCD::OPC_FilterValue, 188, 11, 9, 0, // Skip to: 4139
/* 4130 */    MCD::OPC_CheckPredicate, 61, 131, 0, // Skip to: 4265
/* 4134 */    MCD::OPC_Decode, 133, 6, 235, 1, // Opcode: C_OLE_D32_MM
/* 4139 */    MCD::OPC_FilterValue, 252, 11, 9, 0, // Skip to: 4153
/* 4144 */    MCD::OPC_CheckPredicate, 61, 117, 0, // Skip to: 4265
/* 4148 */    MCD::OPC_Decode, 163, 6, 235, 1, // Opcode: C_ULE_D32_MM
/* 4153 */    MCD::OPC_FilterValue, 188, 12, 9, 0, // Skip to: 4167
/* 4158 */    MCD::OPC_CheckPredicate, 61, 103, 0, // Skip to: 4265
/* 4162 */    MCD::OPC_Decode, 151, 6, 235, 1, // Opcode: C_SF_D32_MM
/* 4167 */    MCD::OPC_FilterValue, 252, 12, 9, 0, // Skip to: 4181
/* 4172 */    MCD::OPC_CheckPredicate, 61, 89, 0, // Skip to: 4265
/* 4176 */    MCD::OPC_Decode, 243, 5, 235, 1, // Opcode: C_NGLE_D32_MM
/* 4181 */    MCD::OPC_FilterValue, 188, 13, 9, 0, // Skip to: 4195
/* 4186 */    MCD::OPC_CheckPredicate, 61, 75, 0, // Skip to: 4265
/* 4190 */    MCD::OPC_Decode, 145, 6, 235, 1, // Opcode: C_SEQ_D32_MM
/* 4195 */    MCD::OPC_FilterValue, 252, 13, 9, 0, // Skip to: 4209
/* 4200 */    MCD::OPC_CheckPredicate, 61, 61, 0, // Skip to: 4265
/* 4204 */    MCD::OPC_Decode, 249, 5, 235, 1, // Opcode: C_NGL_D32_MM
/* 4209 */    MCD::OPC_FilterValue, 188, 14, 9, 0, // Skip to: 4223
/* 4214 */    MCD::OPC_CheckPredicate, 61, 47, 0, // Skip to: 4265
/* 4218 */    MCD::OPC_Decode, 231, 5, 235, 1, // Opcode: C_LT_D32_MM
/* 4223 */    MCD::OPC_FilterValue, 252, 14, 9, 0, // Skip to: 4237
/* 4228 */    MCD::OPC_CheckPredicate, 61, 33, 0, // Skip to: 4265
/* 4232 */    MCD::OPC_Decode, 237, 5, 235, 1, // Opcode: C_NGE_D32_MM
/* 4237 */    MCD::OPC_FilterValue, 188, 15, 9, 0, // Skip to: 4251
/* 4242 */    MCD::OPC_CheckPredicate, 61, 19, 0, // Skip to: 4265
/* 4246 */    MCD::OPC_Decode, 225, 5, 235, 1, // Opcode: C_LE_D32_MM
/* 4251 */    MCD::OPC_FilterValue, 252, 15, 9, 0, // Skip to: 4265
/* 4256 */    MCD::OPC_CheckPredicate, 61, 5, 0, // Skip to: 4265
/* 4260 */    MCD::OPC_Decode, 255, 5, 235, 1, // Opcode: C_NGT_D32_MM
/* 4265 */    MCD::OPC_CheckPredicate, 34, 127, 41, // Skip to: 14892
/* 4269 */    MCD::OPC_Decode, 181, 3, 194, 1, // Opcode: BNEL
/* 4274 */    MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 4293
/* 4278 */    MCD::OPC_CheckPredicate, 34, 114, 41, // Skip to: 14892
/* 4282 */    MCD::OPC_CheckField, 16, 5, 0, 108, 41, // Skip to: 14892
/* 4288 */    MCD::OPC_Decode, 135, 3, 191, 1, // Opcode: BLEZL
/* 4293 */    MCD::OPC_FilterValue, 23, 15, 0, // Skip to: 4312
/* 4297 */    MCD::OPC_CheckPredicate, 34, 95, 41, // Skip to: 14892
/* 4301 */    MCD::OPC_CheckField, 16, 5, 0, 89, 41, // Skip to: 14892
/* 4307 */    MCD::OPC_Decode, 226, 2, 191, 1, // Opcode: BGTZL
/* 4312 */    MCD::OPC_FilterValue, 28, 236, 0, // Skip to: 4552
/* 4316 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 4319 */    MCD::OPC_FilterValue, 0, 37, 0, // Skip to: 4360
/* 4323 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4326 */    MCD::OPC_FilterValue, 0, 66, 41, // Skip to: 14892
/* 4330 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 4333 */    MCD::OPC_FilterValue, 0, 59, 41, // Skip to: 14892
/* 4337 */    MCD::OPC_CheckPredicate, 27, 10, 0, // Skip to: 4351
/* 4341 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 4351
/* 4347 */    MCD::OPC_Decode, 204, 11, 63, // Opcode: MADD
/* 4351 */    MCD::OPC_CheckPredicate, 31, 41, 41, // Skip to: 14892
/* 4355 */    MCD::OPC_Decode, 222, 11, 236, 1, // Opcode: MADD_DSP
/* 4360 */    MCD::OPC_FilterValue, 1, 37, 0, // Skip to: 4401
/* 4364 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4367 */    MCD::OPC_FilterValue, 0, 25, 41, // Skip to: 14892
/* 4371 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 4374 */    MCD::OPC_FilterValue, 0, 18, 41, // Skip to: 14892
/* 4378 */    MCD::OPC_CheckPredicate, 27, 10, 0, // Skip to: 4392
/* 4382 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 4392
/* 4388 */    MCD::OPC_Decode, 211, 11, 63, // Opcode: MADDU
/* 4392 */    MCD::OPC_CheckPredicate, 31, 0, 41, // Skip to: 14892
/* 4396 */    MCD::OPC_Decode, 212, 11, 236, 1, // Opcode: MADDU_DSP
/* 4401 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 4419
/* 4405 */    MCD::OPC_CheckPredicate, 27, 243, 40, // Skip to: 14892
/* 4409 */    MCD::OPC_CheckField, 6, 5, 0, 237, 40, // Skip to: 14892
/* 4415 */    MCD::OPC_Decode, 188, 13, 49, // Opcode: MUL
/* 4419 */    MCD::OPC_FilterValue, 4, 37, 0, // Skip to: 4460
/* 4423 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4426 */    MCD::OPC_FilterValue, 0, 222, 40, // Skip to: 14892
/* 4430 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 4433 */    MCD::OPC_FilterValue, 0, 215, 40, // Skip to: 14892
/* 4437 */    MCD::OPC_CheckPredicate, 27, 10, 0, // Skip to: 4451
/* 4441 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 4451
/* 4447 */    MCD::OPC_Decode, 255, 12, 63, // Opcode: MSUB
/* 4451 */    MCD::OPC_CheckPredicate, 31, 197, 40, // Skip to: 14892
/* 4455 */    MCD::OPC_Decode, 145, 13, 236, 1, // Opcode: MSUB_DSP
/* 4460 */    MCD::OPC_FilterValue, 5, 37, 0, // Skip to: 4501
/* 4464 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4467 */    MCD::OPC_FilterValue, 0, 181, 40, // Skip to: 14892
/* 4471 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 4474 */    MCD::OPC_FilterValue, 0, 174, 40, // Skip to: 14892
/* 4478 */    MCD::OPC_CheckPredicate, 27, 10, 0, // Skip to: 4492
/* 4482 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 4492
/* 4488 */    MCD::OPC_Decode, 134, 13, 63, // Opcode: MSUBU
/* 4492 */    MCD::OPC_CheckPredicate, 31, 156, 40, // Skip to: 14892
/* 4496 */    MCD::OPC_Decode, 135, 13, 236, 1, // Opcode: MSUBU_DSP
/* 4501 */    MCD::OPC_FilterValue, 32, 15, 0, // Skip to: 4520
/* 4505 */    MCD::OPC_CheckPredicate, 27, 143, 40, // Skip to: 14892
/* 4509 */    MCD::OPC_CheckField, 6, 5, 0, 137, 40, // Skip to: 14892
/* 4515 */    MCD::OPC_Decode, 202, 4, 237, 1, // Opcode: CLZ
/* 4520 */    MCD::OPC_FilterValue, 33, 15, 0, // Skip to: 4539
/* 4524 */    MCD::OPC_CheckPredicate, 27, 124, 40, // Skip to: 14892
/* 4528 */    MCD::OPC_CheckField, 6, 5, 0, 118, 40, // Skip to: 14892
/* 4534 */    MCD::OPC_Decode, 182, 4, 237, 1, // Opcode: CLO
/* 4539 */    MCD::OPC_FilterValue, 63, 109, 40, // Skip to: 14892
/* 4543 */    MCD::OPC_CheckPredicate, 62, 105, 40, // Skip to: 14892
/* 4547 */    MCD::OPC_Decode, 235, 15, 182, 1, // Opcode: SDBBP
/* 4552 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 4565
/* 4556 */    MCD::OPC_CheckPredicate, 27, 92, 40, // Skip to: 14892
/* 4560 */    MCD::OPC_Decode, 153, 10, 193, 1, // Opcode: JALX
/* 4565 */    MCD::OPC_FilterValue, 30, 96, 28, // Skip to: 11833
/* 4569 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 4572 */    MCD::OPC_FilterValue, 0, 55, 0, // Skip to: 4631
/* 4576 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 4579 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4592
/* 4583 */    MCD::OPC_CheckPredicate, 25, 65, 40, // Skip to: 14892
/* 4587 */    MCD::OPC_Decode, 177, 1, 238, 1, // Opcode: ANDI_B
/* 4592 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 4605
/* 4596 */    MCD::OPC_CheckPredicate, 25, 52, 40, // Skip to: 14892
/* 4600 */    MCD::OPC_Decode, 151, 14, 238, 1, // Opcode: ORI_B
/* 4605 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 4618
/* 4609 */    MCD::OPC_CheckPredicate, 25, 39, 40, // Skip to: 14892
/* 4613 */    MCD::OPC_Decode, 135, 14, 238, 1, // Opcode: NORI_B
/* 4618 */    MCD::OPC_FilterValue, 3, 30, 40, // Skip to: 14892
/* 4622 */    MCD::OPC_CheckPredicate, 25, 26, 40, // Skip to: 14892
/* 4626 */    MCD::OPC_Decode, 176, 19, 238, 1, // Opcode: XORI_B
/* 4631 */    MCD::OPC_FilterValue, 1, 42, 0, // Skip to: 4677
/* 4635 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 4638 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4651
/* 4642 */    MCD::OPC_CheckPredicate, 25, 6, 40, // Skip to: 14892
/* 4646 */    MCD::OPC_Decode, 164, 3, 239, 1, // Opcode: BMNZI_B
/* 4651 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 4664
/* 4655 */    MCD::OPC_CheckPredicate, 25, 249, 39, // Skip to: 14892
/* 4659 */    MCD::OPC_Decode, 166, 3, 239, 1, // Opcode: BMZI_B
/* 4664 */    MCD::OPC_FilterValue, 2, 240, 39, // Skip to: 14892
/* 4668 */    MCD::OPC_CheckPredicate, 25, 236, 39, // Skip to: 14892
/* 4672 */    MCD::OPC_Decode, 209, 3, 239, 1, // Opcode: BSELI_B
/* 4677 */    MCD::OPC_FilterValue, 2, 42, 0, // Skip to: 4723
/* 4681 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 4684 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4697
/* 4688 */    MCD::OPC_CheckPredicate, 25, 216, 39, // Skip to: 14892
/* 4692 */    MCD::OPC_Decode, 168, 16, 238, 1, // Opcode: SHF_B
/* 4697 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 4710
/* 4701 */    MCD::OPC_CheckPredicate, 25, 203, 39, // Skip to: 14892
/* 4705 */    MCD::OPC_Decode, 169, 16, 240, 1, // Opcode: SHF_H
/* 4710 */    MCD::OPC_FilterValue, 2, 194, 39, // Skip to: 14892
/* 4714 */    MCD::OPC_CheckPredicate, 25, 190, 39, // Skip to: 14892
/* 4718 */    MCD::OPC_Decode, 170, 16, 241, 1, // Opcode: SHF_W
/* 4723 */    MCD::OPC_FilterValue, 6, 59, 1, // Skip to: 5042
/* 4727 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 4730 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4743
/* 4734 */    MCD::OPC_CheckPredicate, 25, 170, 39, // Skip to: 14892
/* 4738 */    MCD::OPC_Decode, 143, 1, 242, 1, // Opcode: ADDVI_B
/* 4743 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 4756
/* 4747 */    MCD::OPC_CheckPredicate, 25, 157, 39, // Skip to: 14892
/* 4751 */    MCD::OPC_Decode, 145, 1, 243, 1, // Opcode: ADDVI_H
/* 4756 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 4769
/* 4760 */    MCD::OPC_CheckPredicate, 25, 144, 39, // Skip to: 14892
/* 4764 */    MCD::OPC_Decode, 146, 1, 244, 1, // Opcode: ADDVI_W
/* 4769 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 4782
/* 4773 */    MCD::OPC_CheckPredicate, 25, 131, 39, // Skip to: 14892
/* 4777 */    MCD::OPC_Decode, 144, 1, 245, 1, // Opcode: ADDVI_D
/* 4782 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 4795
/* 4786 */    MCD::OPC_CheckPredicate, 25, 118, 39, // Skip to: 14892
/* 4790 */    MCD::OPC_Decode, 247, 17, 242, 1, // Opcode: SUBVI_B
/* 4795 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 4808
/* 4799 */    MCD::OPC_CheckPredicate, 25, 105, 39, // Skip to: 14892
/* 4803 */    MCD::OPC_Decode, 249, 17, 243, 1, // Opcode: SUBVI_H
/* 4808 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 4821
/* 4812 */    MCD::OPC_CheckPredicate, 25, 92, 39, // Skip to: 14892
/* 4816 */    MCD::OPC_Decode, 250, 17, 244, 1, // Opcode: SUBVI_W
/* 4821 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 4834
/* 4825 */    MCD::OPC_CheckPredicate, 25, 79, 39, // Skip to: 14892
/* 4829 */    MCD::OPC_Decode, 248, 17, 245, 1, // Opcode: SUBVI_D
/* 4834 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 4847
/* 4838 */    MCD::OPC_CheckPredicate, 25, 66, 39, // Skip to: 14892
/* 4842 */    MCD::OPC_Decode, 241, 11, 242, 1, // Opcode: MAXI_S_B
/* 4847 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 4860
/* 4851 */    MCD::OPC_CheckPredicate, 25, 53, 39, // Skip to: 14892
/* 4855 */    MCD::OPC_Decode, 243, 11, 243, 1, // Opcode: MAXI_S_H
/* 4860 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 4873
/* 4864 */    MCD::OPC_CheckPredicate, 25, 40, 39, // Skip to: 14892
/* 4868 */    MCD::OPC_Decode, 244, 11, 244, 1, // Opcode: MAXI_S_W
/* 4873 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 4886
/* 4877 */    MCD::OPC_CheckPredicate, 25, 27, 39, // Skip to: 14892
/* 4881 */    MCD::OPC_Decode, 242, 11, 245, 1, // Opcode: MAXI_S_D
/* 4886 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 4899
/* 4890 */    MCD::OPC_CheckPredicate, 25, 14, 39, // Skip to: 14892
/* 4894 */    MCD::OPC_Decode, 245, 11, 242, 1, // Opcode: MAXI_U_B
/* 4899 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 4912
/* 4903 */    MCD::OPC_CheckPredicate, 25, 1, 39, // Skip to: 14892
/* 4907 */    MCD::OPC_Decode, 247, 11, 243, 1, // Opcode: MAXI_U_H
/* 4912 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 4925
/* 4916 */    MCD::OPC_CheckPredicate, 25, 244, 38, // Skip to: 14892
/* 4920 */    MCD::OPC_Decode, 248, 11, 244, 1, // Opcode: MAXI_U_W
/* 4925 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 4938
/* 4929 */    MCD::OPC_CheckPredicate, 25, 231, 38, // Skip to: 14892
/* 4933 */    MCD::OPC_Decode, 246, 11, 245, 1, // Opcode: MAXI_U_D
/* 4938 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 4951
/* 4942 */    MCD::OPC_CheckPredicate, 25, 218, 38, // Skip to: 14892
/* 4946 */    MCD::OPC_Decode, 167, 12, 242, 1, // Opcode: MINI_S_B
/* 4951 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 4964
/* 4955 */    MCD::OPC_CheckPredicate, 25, 205, 38, // Skip to: 14892
/* 4959 */    MCD::OPC_Decode, 169, 12, 243, 1, // Opcode: MINI_S_H
/* 4964 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 4977
/* 4968 */    MCD::OPC_CheckPredicate, 25, 192, 38, // Skip to: 14892
/* 4972 */    MCD::OPC_Decode, 170, 12, 244, 1, // Opcode: MINI_S_W
/* 4977 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 4990
/* 4981 */    MCD::OPC_CheckPredicate, 25, 179, 38, // Skip to: 14892
/* 4985 */    MCD::OPC_Decode, 168, 12, 245, 1, // Opcode: MINI_S_D
/* 4990 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 5003
/* 4994 */    MCD::OPC_CheckPredicate, 25, 166, 38, // Skip to: 14892
/* 4998 */    MCD::OPC_Decode, 171, 12, 242, 1, // Opcode: MINI_U_B
/* 5003 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 5016
/* 5007 */    MCD::OPC_CheckPredicate, 25, 153, 38, // Skip to: 14892
/* 5011 */    MCD::OPC_Decode, 173, 12, 243, 1, // Opcode: MINI_U_H
/* 5016 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 5029
/* 5020 */    MCD::OPC_CheckPredicate, 25, 140, 38, // Skip to: 14892
/* 5024 */    MCD::OPC_Decode, 174, 12, 244, 1, // Opcode: MINI_U_W
/* 5029 */    MCD::OPC_FilterValue, 23, 131, 38, // Skip to: 14892
/* 5033 */    MCD::OPC_CheckPredicate, 25, 127, 38, // Skip to: 14892
/* 5037 */    MCD::OPC_Decode, 172, 12, 245, 1, // Opcode: MINI_U_D
/* 5042 */    MCD::OPC_FilterValue, 7, 59, 1, // Skip to: 5361
/* 5046 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 5049 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5062
/* 5053 */    MCD::OPC_CheckPredicate, 25, 107, 38, // Skip to: 14892
/* 5057 */    MCD::OPC_Decode, 148, 4, 242, 1, // Opcode: CEQI_B
/* 5062 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 5075
/* 5066 */    MCD::OPC_CheckPredicate, 25, 94, 38, // Skip to: 14892
/* 5070 */    MCD::OPC_Decode, 150, 4, 243, 1, // Opcode: CEQI_H
/* 5075 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 5088
/* 5079 */    MCD::OPC_CheckPredicate, 25, 81, 38, // Skip to: 14892
/* 5083 */    MCD::OPC_Decode, 151, 4, 244, 1, // Opcode: CEQI_W
/* 5088 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 5101
/* 5092 */    MCD::OPC_CheckPredicate, 25, 68, 38, // Skip to: 14892
/* 5096 */    MCD::OPC_Decode, 149, 4, 245, 1, // Opcode: CEQI_D
/* 5101 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 5114
/* 5105 */    MCD::OPC_CheckPredicate, 25, 55, 38, // Skip to: 14892
/* 5109 */    MCD::OPC_Decode, 186, 4, 242, 1, // Opcode: CLTI_S_B
/* 5114 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 5127
/* 5118 */    MCD::OPC_CheckPredicate, 25, 42, 38, // Skip to: 14892
/* 5122 */    MCD::OPC_Decode, 188, 4, 243, 1, // Opcode: CLTI_S_H
/* 5127 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 5140
/* 5131 */    MCD::OPC_CheckPredicate, 25, 29, 38, // Skip to: 14892
/* 5135 */    MCD::OPC_Decode, 189, 4, 244, 1, // Opcode: CLTI_S_W
/* 5140 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 5153
/* 5144 */    MCD::OPC_CheckPredicate, 25, 16, 38, // Skip to: 14892
/* 5148 */    MCD::OPC_Decode, 187, 4, 245, 1, // Opcode: CLTI_S_D
/* 5153 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 5166
/* 5157 */    MCD::OPC_CheckPredicate, 25, 3, 38, // Skip to: 14892
/* 5161 */    MCD::OPC_Decode, 190, 4, 242, 1, // Opcode: CLTI_U_B
/* 5166 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 5179
/* 5170 */    MCD::OPC_CheckPredicate, 25, 246, 37, // Skip to: 14892
/* 5174 */    MCD::OPC_Decode, 192, 4, 243, 1, // Opcode: CLTI_U_H
/* 5179 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 5192
/* 5183 */    MCD::OPC_CheckPredicate, 25, 233, 37, // Skip to: 14892
/* 5187 */    MCD::OPC_Decode, 193, 4, 244, 1, // Opcode: CLTI_U_W
/* 5192 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 5205
/* 5196 */    MCD::OPC_CheckPredicate, 25, 220, 37, // Skip to: 14892
/* 5200 */    MCD::OPC_Decode, 191, 4, 245, 1, // Opcode: CLTI_U_D
/* 5205 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 5218
/* 5209 */    MCD::OPC_CheckPredicate, 25, 207, 37, // Skip to: 14892
/* 5213 */    MCD::OPC_Decode, 166, 4, 242, 1, // Opcode: CLEI_S_B
/* 5218 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 5231
/* 5222 */    MCD::OPC_CheckPredicate, 25, 194, 37, // Skip to: 14892
/* 5226 */    MCD::OPC_Decode, 168, 4, 243, 1, // Opcode: CLEI_S_H
/* 5231 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 5244
/* 5235 */    MCD::OPC_CheckPredicate, 25, 181, 37, // Skip to: 14892
/* 5239 */    MCD::OPC_Decode, 169, 4, 244, 1, // Opcode: CLEI_S_W
/* 5244 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 5257
/* 5248 */    MCD::OPC_CheckPredicate, 25, 168, 37, // Skip to: 14892
/* 5252 */    MCD::OPC_Decode, 167, 4, 245, 1, // Opcode: CLEI_S_D
/* 5257 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 5270
/* 5261 */    MCD::OPC_CheckPredicate, 25, 155, 37, // Skip to: 14892
/* 5265 */    MCD::OPC_Decode, 170, 4, 242, 1, // Opcode: CLEI_U_B
/* 5270 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 5283
/* 5274 */    MCD::OPC_CheckPredicate, 25, 142, 37, // Skip to: 14892
/* 5278 */    MCD::OPC_Decode, 172, 4, 243, 1, // Opcode: CLEI_U_H
/* 5283 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 5296
/* 5287 */    MCD::OPC_CheckPredicate, 25, 129, 37, // Skip to: 14892
/* 5291 */    MCD::OPC_Decode, 173, 4, 244, 1, // Opcode: CLEI_U_W
/* 5296 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 5309
/* 5300 */    MCD::OPC_CheckPredicate, 25, 116, 37, // Skip to: 14892
/* 5304 */    MCD::OPC_Decode, 171, 4, 245, 1, // Opcode: CLEI_U_D
/* 5309 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 5322
/* 5313 */    MCD::OPC_CheckPredicate, 25, 103, 37, // Skip to: 14892
/* 5317 */    MCD::OPC_Decode, 207, 10, 246, 1, // Opcode: LDI_B
/* 5322 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 5335
/* 5326 */    MCD::OPC_CheckPredicate, 25, 90, 37, // Skip to: 14892
/* 5330 */    MCD::OPC_Decode, 209, 10, 247, 1, // Opcode: LDI_H
/* 5335 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 5348
/* 5339 */    MCD::OPC_CheckPredicate, 25, 77, 37, // Skip to: 14892
/* 5343 */    MCD::OPC_Decode, 210, 10, 248, 1, // Opcode: LDI_W
/* 5348 */    MCD::OPC_FilterValue, 27, 68, 37, // Skip to: 14892
/* 5352 */    MCD::OPC_CheckPredicate, 25, 64, 37, // Skip to: 14892
/* 5356 */    MCD::OPC_Decode, 208, 10, 249, 1, // Opcode: LDI_D
/* 5361 */    MCD::OPC_FilterValue, 9, 67, 2, // Skip to: 5944
/* 5365 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 5368 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5381
/* 5372 */    MCD::OPC_CheckPredicate, 25, 44, 37, // Skip to: 14892
/* 5376 */    MCD::OPC_Decode, 235, 16, 250, 1, // Opcode: SLLI_D
/* 5381 */    MCD::OPC_FilterValue, 1, 55, 0, // Skip to: 5440
/* 5385 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5388 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5401
/* 5392 */    MCD::OPC_CheckPredicate, 25, 24, 37, // Skip to: 14892
/* 5396 */    MCD::OPC_Decode, 237, 16, 244, 1, // Opcode: SLLI_W
/* 5401 */    MCD::OPC_FilterValue, 1, 15, 37, // Skip to: 14892
/* 5405 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5408 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5421
/* 5412 */    MCD::OPC_CheckPredicate, 25, 4, 37, // Skip to: 14892
/* 5416 */    MCD::OPC_Decode, 236, 16, 251, 1, // Opcode: SLLI_H
/* 5421 */    MCD::OPC_FilterValue, 1, 251, 36, // Skip to: 14892
/* 5425 */    MCD::OPC_CheckPredicate, 25, 247, 36, // Skip to: 14892
/* 5429 */    MCD::OPC_CheckField, 19, 1, 0, 241, 36, // Skip to: 14892
/* 5435 */    MCD::OPC_Decode, 234, 16, 252, 1, // Opcode: SLLI_B
/* 5440 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 5453
/* 5444 */    MCD::OPC_CheckPredicate, 25, 228, 36, // Skip to: 14892
/* 5448 */    MCD::OPC_Decode, 149, 17, 250, 1, // Opcode: SRAI_D
/* 5453 */    MCD::OPC_FilterValue, 3, 55, 0, // Skip to: 5512
/* 5457 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5460 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5473
/* 5464 */    MCD::OPC_CheckPredicate, 25, 208, 36, // Skip to: 14892
/* 5468 */    MCD::OPC_Decode, 151, 17, 244, 1, // Opcode: SRAI_W
/* 5473 */    MCD::OPC_FilterValue, 1, 199, 36, // Skip to: 14892
/* 5477 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5480 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5493
/* 5484 */    MCD::OPC_CheckPredicate, 25, 188, 36, // Skip to: 14892
/* 5488 */    MCD::OPC_Decode, 150, 17, 251, 1, // Opcode: SRAI_H
/* 5493 */    MCD::OPC_FilterValue, 1, 179, 36, // Skip to: 14892
/* 5497 */    MCD::OPC_CheckPredicate, 25, 175, 36, // Skip to: 14892
/* 5501 */    MCD::OPC_CheckField, 19, 1, 0, 169, 36, // Skip to: 14892
/* 5507 */    MCD::OPC_Decode, 148, 17, 252, 1, // Opcode: SRAI_B
/* 5512 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 5525
/* 5516 */    MCD::OPC_CheckPredicate, 25, 156, 36, // Skip to: 14892
/* 5520 */    MCD::OPC_Decode, 171, 17, 250, 1, // Opcode: SRLI_D
/* 5525 */    MCD::OPC_FilterValue, 5, 55, 0, // Skip to: 5584
/* 5529 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5532 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5545
/* 5536 */    MCD::OPC_CheckPredicate, 25, 136, 36, // Skip to: 14892
/* 5540 */    MCD::OPC_Decode, 173, 17, 244, 1, // Opcode: SRLI_W
/* 5545 */    MCD::OPC_FilterValue, 1, 127, 36, // Skip to: 14892
/* 5549 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5552 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5565
/* 5556 */    MCD::OPC_CheckPredicate, 25, 116, 36, // Skip to: 14892
/* 5560 */    MCD::OPC_Decode, 172, 17, 251, 1, // Opcode: SRLI_H
/* 5565 */    MCD::OPC_FilterValue, 1, 107, 36, // Skip to: 14892
/* 5569 */    MCD::OPC_CheckPredicate, 25, 103, 36, // Skip to: 14892
/* 5573 */    MCD::OPC_CheckField, 19, 1, 0, 97, 36, // Skip to: 14892
/* 5579 */    MCD::OPC_Decode, 170, 17, 252, 1, // Opcode: SRLI_B
/* 5584 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 5597
/* 5588 */    MCD::OPC_CheckPredicate, 25, 84, 36, // Skip to: 14892
/* 5592 */    MCD::OPC_Decode, 161, 2, 250, 1, // Opcode: BCLRI_D
/* 5597 */    MCD::OPC_FilterValue, 7, 55, 0, // Skip to: 5656
/* 5601 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5604 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5617
/* 5608 */    MCD::OPC_CheckPredicate, 25, 64, 36, // Skip to: 14892
/* 5612 */    MCD::OPC_Decode, 163, 2, 244, 1, // Opcode: BCLRI_W
/* 5617 */    MCD::OPC_FilterValue, 1, 55, 36, // Skip to: 14892
/* 5621 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5624 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5637
/* 5628 */    MCD::OPC_CheckPredicate, 25, 44, 36, // Skip to: 14892
/* 5632 */    MCD::OPC_Decode, 162, 2, 251, 1, // Opcode: BCLRI_H
/* 5637 */    MCD::OPC_FilterValue, 1, 35, 36, // Skip to: 14892
/* 5641 */    MCD::OPC_CheckPredicate, 25, 31, 36, // Skip to: 14892
/* 5645 */    MCD::OPC_CheckField, 19, 1, 0, 25, 36, // Skip to: 14892
/* 5651 */    MCD::OPC_Decode, 160, 2, 252, 1, // Opcode: BCLRI_B
/* 5656 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 5669
/* 5660 */    MCD::OPC_CheckPredicate, 25, 12, 36, // Skip to: 14892
/* 5664 */    MCD::OPC_Decode, 217, 3, 250, 1, // Opcode: BSETI_D
/* 5669 */    MCD::OPC_FilterValue, 9, 55, 0, // Skip to: 5728
/* 5673 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5676 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5689
/* 5680 */    MCD::OPC_CheckPredicate, 25, 248, 35, // Skip to: 14892
/* 5684 */    MCD::OPC_Decode, 219, 3, 244, 1, // Opcode: BSETI_W
/* 5689 */    MCD::OPC_FilterValue, 1, 239, 35, // Skip to: 14892
/* 5693 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5696 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5709
/* 5700 */    MCD::OPC_CheckPredicate, 25, 228, 35, // Skip to: 14892
/* 5704 */    MCD::OPC_Decode, 218, 3, 251, 1, // Opcode: BSETI_H
/* 5709 */    MCD::OPC_FilterValue, 1, 219, 35, // Skip to: 14892
/* 5713 */    MCD::OPC_CheckPredicate, 25, 215, 35, // Skip to: 14892
/* 5717 */    MCD::OPC_CheckField, 19, 1, 0, 209, 35, // Skip to: 14892
/* 5723 */    MCD::OPC_Decode, 216, 3, 252, 1, // Opcode: BSETI_B
/* 5728 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 5741
/* 5732 */    MCD::OPC_CheckPredicate, 25, 196, 35, // Skip to: 14892
/* 5736 */    MCD::OPC_Decode, 174, 3, 250, 1, // Opcode: BNEGI_D
/* 5741 */    MCD::OPC_FilterValue, 11, 55, 0, // Skip to: 5800
/* 5745 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5748 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5761
/* 5752 */    MCD::OPC_CheckPredicate, 25, 176, 35, // Skip to: 14892
/* 5756 */    MCD::OPC_Decode, 176, 3, 244, 1, // Opcode: BNEGI_W
/* 5761 */    MCD::OPC_FilterValue, 1, 167, 35, // Skip to: 14892
/* 5765 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5768 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5781
/* 5772 */    MCD::OPC_CheckPredicate, 25, 156, 35, // Skip to: 14892
/* 5776 */    MCD::OPC_Decode, 175, 3, 251, 1, // Opcode: BNEGI_H
/* 5781 */    MCD::OPC_FilterValue, 1, 147, 35, // Skip to: 14892
/* 5785 */    MCD::OPC_CheckPredicate, 25, 143, 35, // Skip to: 14892
/* 5789 */    MCD::OPC_CheckField, 19, 1, 0, 137, 35, // Skip to: 14892
/* 5795 */    MCD::OPC_Decode, 173, 3, 252, 1, // Opcode: BNEGI_B
/* 5800 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 5813
/* 5804 */    MCD::OPC_CheckPredicate, 25, 124, 35, // Skip to: 14892
/* 5808 */    MCD::OPC_Decode, 229, 2, 253, 1, // Opcode: BINSLI_D
/* 5813 */    MCD::OPC_FilterValue, 13, 55, 0, // Skip to: 5872
/* 5817 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5820 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5833
/* 5824 */    MCD::OPC_CheckPredicate, 25, 104, 35, // Skip to: 14892
/* 5828 */    MCD::OPC_Decode, 231, 2, 254, 1, // Opcode: BINSLI_W
/* 5833 */    MCD::OPC_FilterValue, 1, 95, 35, // Skip to: 14892
/* 5837 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5840 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5853
/* 5844 */    MCD::OPC_CheckPredicate, 25, 84, 35, // Skip to: 14892
/* 5848 */    MCD::OPC_Decode, 230, 2, 255, 1, // Opcode: BINSLI_H
/* 5853 */    MCD::OPC_FilterValue, 1, 75, 35, // Skip to: 14892
/* 5857 */    MCD::OPC_CheckPredicate, 25, 71, 35, // Skip to: 14892
/* 5861 */    MCD::OPC_CheckField, 19, 1, 0, 65, 35, // Skip to: 14892
/* 5867 */    MCD::OPC_Decode, 228, 2, 128, 2, // Opcode: BINSLI_B
/* 5872 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 5885
/* 5876 */    MCD::OPC_CheckPredicate, 25, 52, 35, // Skip to: 14892
/* 5880 */    MCD::OPC_Decode, 237, 2, 253, 1, // Opcode: BINSRI_D
/* 5885 */    MCD::OPC_FilterValue, 15, 43, 35, // Skip to: 14892
/* 5889 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5892 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5905
/* 5896 */    MCD::OPC_CheckPredicate, 25, 32, 35, // Skip to: 14892
/* 5900 */    MCD::OPC_Decode, 239, 2, 254, 1, // Opcode: BINSRI_W
/* 5905 */    MCD::OPC_FilterValue, 1, 23, 35, // Skip to: 14892
/* 5909 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5912 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5925
/* 5916 */    MCD::OPC_CheckPredicate, 25, 12, 35, // Skip to: 14892
/* 5920 */    MCD::OPC_Decode, 238, 2, 255, 1, // Opcode: BINSRI_H
/* 5925 */    MCD::OPC_FilterValue, 1, 3, 35, // Skip to: 14892
/* 5929 */    MCD::OPC_CheckPredicate, 25, 255, 34, // Skip to: 14892
/* 5933 */    MCD::OPC_CheckField, 19, 1, 0, 249, 34, // Skip to: 14892
/* 5939 */    MCD::OPC_Decode, 236, 2, 128, 2, // Opcode: BINSRI_B
/* 5944 */    MCD::OPC_FilterValue, 10, 35, 1, // Skip to: 6239
/* 5948 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 5951 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5964
/* 5955 */    MCD::OPC_CheckPredicate, 25, 229, 34, // Skip to: 14892
/* 5959 */    MCD::OPC_Decode, 208, 15, 250, 1, // Opcode: SAT_S_D
/* 5964 */    MCD::OPC_FilterValue, 1, 55, 0, // Skip to: 6023
/* 5968 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5971 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5984
/* 5975 */    MCD::OPC_CheckPredicate, 25, 209, 34, // Skip to: 14892
/* 5979 */    MCD::OPC_Decode, 210, 15, 244, 1, // Opcode: SAT_S_W
/* 5984 */    MCD::OPC_FilterValue, 1, 200, 34, // Skip to: 14892
/* 5988 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5991 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6004
/* 5995 */    MCD::OPC_CheckPredicate, 25, 189, 34, // Skip to: 14892
/* 5999 */    MCD::OPC_Decode, 209, 15, 251, 1, // Opcode: SAT_S_H
/* 6004 */    MCD::OPC_FilterValue, 1, 180, 34, // Skip to: 14892
/* 6008 */    MCD::OPC_CheckPredicate, 25, 176, 34, // Skip to: 14892
/* 6012 */    MCD::OPC_CheckField, 19, 1, 0, 170, 34, // Skip to: 14892
/* 6018 */    MCD::OPC_Decode, 207, 15, 252, 1, // Opcode: SAT_S_B
/* 6023 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 6036
/* 6027 */    MCD::OPC_CheckPredicate, 25, 157, 34, // Skip to: 14892
/* 6031 */    MCD::OPC_Decode, 212, 15, 250, 1, // Opcode: SAT_U_D
/* 6036 */    MCD::OPC_FilterValue, 3, 55, 0, // Skip to: 6095
/* 6040 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 6043 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6056
/* 6047 */    MCD::OPC_CheckPredicate, 25, 137, 34, // Skip to: 14892
/* 6051 */    MCD::OPC_Decode, 214, 15, 244, 1, // Opcode: SAT_U_W
/* 6056 */    MCD::OPC_FilterValue, 1, 128, 34, // Skip to: 14892
/* 6060 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 6063 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6076
/* 6067 */    MCD::OPC_CheckPredicate, 25, 117, 34, // Skip to: 14892
/* 6071 */    MCD::OPC_Decode, 213, 15, 251, 1, // Opcode: SAT_U_H
/* 6076 */    MCD::OPC_FilterValue, 1, 108, 34, // Skip to: 14892
/* 6080 */    MCD::OPC_CheckPredicate, 25, 104, 34, // Skip to: 14892
/* 6084 */    MCD::OPC_CheckField, 19, 1, 0, 98, 34, // Skip to: 14892
/* 6090 */    MCD::OPC_Decode, 211, 15, 252, 1, // Opcode: SAT_U_B
/* 6095 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 6108
/* 6099 */    MCD::OPC_CheckPredicate, 25, 85, 34, // Skip to: 14892
/* 6103 */    MCD::OPC_Decode, 153, 17, 250, 1, // Opcode: SRARI_D
/* 6108 */    MCD::OPC_FilterValue, 5, 55, 0, // Skip to: 6167
/* 6112 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 6115 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6128
/* 6119 */    MCD::OPC_CheckPredicate, 25, 65, 34, // Skip to: 14892
/* 6123 */    MCD::OPC_Decode, 155, 17, 244, 1, // Opcode: SRARI_W
/* 6128 */    MCD::OPC_FilterValue, 1, 56, 34, // Skip to: 14892
/* 6132 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 6135 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6148
/* 6139 */    MCD::OPC_CheckPredicate, 25, 45, 34, // Skip to: 14892
/* 6143 */    MCD::OPC_Decode, 154, 17, 251, 1, // Opcode: SRARI_H
/* 6148 */    MCD::OPC_FilterValue, 1, 36, 34, // Skip to: 14892
/* 6152 */    MCD::OPC_CheckPredicate, 25, 32, 34, // Skip to: 14892
/* 6156 */    MCD::OPC_CheckField, 19, 1, 0, 26, 34, // Skip to: 14892
/* 6162 */    MCD::OPC_Decode, 152, 17, 252, 1, // Opcode: SRARI_B
/* 6167 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 6180
/* 6171 */    MCD::OPC_CheckPredicate, 25, 13, 34, // Skip to: 14892
/* 6175 */    MCD::OPC_Decode, 175, 17, 250, 1, // Opcode: SRLRI_D
/* 6180 */    MCD::OPC_FilterValue, 7, 4, 34, // Skip to: 14892
/* 6184 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 6187 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6200
/* 6191 */    MCD::OPC_CheckPredicate, 25, 249, 33, // Skip to: 14892
/* 6195 */    MCD::OPC_Decode, 177, 17, 244, 1, // Opcode: SRLRI_W
/* 6200 */    MCD::OPC_FilterValue, 1, 240, 33, // Skip to: 14892
/* 6204 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 6207 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6220
/* 6211 */    MCD::OPC_CheckPredicate, 25, 229, 33, // Skip to: 14892
/* 6215 */    MCD::OPC_Decode, 176, 17, 251, 1, // Opcode: SRLRI_H
/* 6220 */    MCD::OPC_FilterValue, 1, 220, 33, // Skip to: 14892
/* 6224 */    MCD::OPC_CheckPredicate, 25, 216, 33, // Skip to: 14892
/* 6228 */    MCD::OPC_CheckField, 19, 1, 0, 210, 33, // Skip to: 14892
/* 6234 */    MCD::OPC_Decode, 174, 17, 252, 1, // Opcode: SRLRI_B
/* 6239 */    MCD::OPC_FilterValue, 13, 163, 1, // Skip to: 6662
/* 6243 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6246 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6259
/* 6250 */    MCD::OPC_CheckPredicate, 25, 190, 33, // Skip to: 14892
/* 6254 */    MCD::OPC_Decode, 240, 16, 129, 2, // Opcode: SLL_B
/* 6259 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 6272
/* 6263 */    MCD::OPC_CheckPredicate, 25, 177, 33, // Skip to: 14892
/* 6267 */    MCD::OPC_Decode, 242, 16, 130, 2, // Opcode: SLL_H
/* 6272 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 6285
/* 6276 */    MCD::OPC_CheckPredicate, 25, 164, 33, // Skip to: 14892
/* 6280 */    MCD::OPC_Decode, 245, 16, 131, 2, // Opcode: SLL_W
/* 6285 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 6298
/* 6289 */    MCD::OPC_CheckPredicate, 25, 151, 33, // Skip to: 14892
/* 6293 */    MCD::OPC_Decode, 241, 16, 132, 2, // Opcode: SLL_D
/* 6298 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 6311
/* 6302 */    MCD::OPC_CheckPredicate, 25, 138, 33, // Skip to: 14892
/* 6306 */    MCD::OPC_Decode, 162, 17, 129, 2, // Opcode: SRA_B
/* 6311 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 6324
/* 6315 */    MCD::OPC_CheckPredicate, 25, 125, 33, // Skip to: 14892
/* 6319 */    MCD::OPC_Decode, 164, 17, 130, 2, // Opcode: SRA_H
/* 6324 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 6337
/* 6328 */    MCD::OPC_CheckPredicate, 25, 112, 33, // Skip to: 14892
/* 6332 */    MCD::OPC_Decode, 166, 17, 131, 2, // Opcode: SRA_W
/* 6337 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 6350
/* 6341 */    MCD::OPC_CheckPredicate, 25, 99, 33, // Skip to: 14892
/* 6345 */    MCD::OPC_Decode, 163, 17, 132, 2, // Opcode: SRA_D
/* 6350 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 6363
/* 6354 */    MCD::OPC_CheckPredicate, 25, 86, 33, // Skip to: 14892
/* 6358 */    MCD::OPC_Decode, 184, 17, 129, 2, // Opcode: SRL_B
/* 6363 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 6376
/* 6367 */    MCD::OPC_CheckPredicate, 25, 73, 33, // Skip to: 14892
/* 6371 */    MCD::OPC_Decode, 186, 17, 130, 2, // Opcode: SRL_H
/* 6376 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 6389
/* 6380 */    MCD::OPC_CheckPredicate, 25, 60, 33, // Skip to: 14892
/* 6384 */    MCD::OPC_Decode, 188, 17, 131, 2, // Opcode: SRL_W
/* 6389 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 6402
/* 6393 */    MCD::OPC_CheckPredicate, 25, 47, 33, // Skip to: 14892
/* 6397 */    MCD::OPC_Decode, 185, 17, 132, 2, // Opcode: SRL_D
/* 6402 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 6415
/* 6406 */    MCD::OPC_CheckPredicate, 25, 34, 33, // Skip to: 14892
/* 6410 */    MCD::OPC_Decode, 164, 2, 129, 2, // Opcode: BCLR_B
/* 6415 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 6428
/* 6419 */    MCD::OPC_CheckPredicate, 25, 21, 33, // Skip to: 14892
/* 6423 */    MCD::OPC_Decode, 166, 2, 130, 2, // Opcode: BCLR_H
/* 6428 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 6441
/* 6432 */    MCD::OPC_CheckPredicate, 25, 8, 33, // Skip to: 14892
/* 6436 */    MCD::OPC_Decode, 167, 2, 131, 2, // Opcode: BCLR_W
/* 6441 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 6454
/* 6445 */    MCD::OPC_CheckPredicate, 25, 251, 32, // Skip to: 14892
/* 6449 */    MCD::OPC_Decode, 165, 2, 132, 2, // Opcode: BCLR_D
/* 6454 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 6467
/* 6458 */    MCD::OPC_CheckPredicate, 25, 238, 32, // Skip to: 14892
/* 6462 */    MCD::OPC_Decode, 220, 3, 129, 2, // Opcode: BSET_B
/* 6467 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 6480
/* 6471 */    MCD::OPC_CheckPredicate, 25, 225, 32, // Skip to: 14892
/* 6475 */    MCD::OPC_Decode, 222, 3, 130, 2, // Opcode: BSET_H
/* 6480 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 6493
/* 6484 */    MCD::OPC_CheckPredicate, 25, 212, 32, // Skip to: 14892
/* 6488 */    MCD::OPC_Decode, 223, 3, 131, 2, // Opcode: BSET_W
/* 6493 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 6506
/* 6497 */    MCD::OPC_CheckPredicate, 25, 199, 32, // Skip to: 14892
/* 6501 */    MCD::OPC_Decode, 221, 3, 132, 2, // Opcode: BSET_D
/* 6506 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 6519
/* 6510 */    MCD::OPC_CheckPredicate, 25, 186, 32, // Skip to: 14892
/* 6514 */    MCD::OPC_Decode, 177, 3, 129, 2, // Opcode: BNEG_B
/* 6519 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 6532
/* 6523 */    MCD::OPC_CheckPredicate, 25, 173, 32, // Skip to: 14892
/* 6527 */    MCD::OPC_Decode, 179, 3, 130, 2, // Opcode: BNEG_H
/* 6532 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 6545
/* 6536 */    MCD::OPC_CheckPredicate, 25, 160, 32, // Skip to: 14892
/* 6540 */    MCD::OPC_Decode, 180, 3, 131, 2, // Opcode: BNEG_W
/* 6545 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 6558
/* 6549 */    MCD::OPC_CheckPredicate, 25, 147, 32, // Skip to: 14892
/* 6553 */    MCD::OPC_Decode, 178, 3, 132, 2, // Opcode: BNEG_D
/* 6558 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 6571
/* 6562 */    MCD::OPC_CheckPredicate, 25, 134, 32, // Skip to: 14892
/* 6566 */    MCD::OPC_Decode, 232, 2, 133, 2, // Opcode: BINSL_B
/* 6571 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 6584
/* 6575 */    MCD::OPC_CheckPredicate, 25, 121, 32, // Skip to: 14892
/* 6579 */    MCD::OPC_Decode, 234, 2, 134, 2, // Opcode: BINSL_H
/* 6584 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 6597
/* 6588 */    MCD::OPC_CheckPredicate, 25, 108, 32, // Skip to: 14892
/* 6592 */    MCD::OPC_Decode, 235, 2, 135, 2, // Opcode: BINSL_W
/* 6597 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 6610
/* 6601 */    MCD::OPC_CheckPredicate, 25, 95, 32, // Skip to: 14892
/* 6605 */    MCD::OPC_Decode, 233, 2, 136, 2, // Opcode: BINSL_D
/* 6610 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 6623
/* 6614 */    MCD::OPC_CheckPredicate, 25, 82, 32, // Skip to: 14892
/* 6618 */    MCD::OPC_Decode, 240, 2, 133, 2, // Opcode: BINSR_B
/* 6623 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 6636
/* 6627 */    MCD::OPC_CheckPredicate, 25, 69, 32, // Skip to: 14892
/* 6631 */    MCD::OPC_Decode, 242, 2, 134, 2, // Opcode: BINSR_H
/* 6636 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 6649
/* 6640 */    MCD::OPC_CheckPredicate, 25, 56, 32, // Skip to: 14892
/* 6644 */    MCD::OPC_Decode, 243, 2, 135, 2, // Opcode: BINSR_W
/* 6649 */    MCD::OPC_FilterValue, 31, 47, 32, // Skip to: 14892
/* 6653 */    MCD::OPC_CheckPredicate, 25, 43, 32, // Skip to: 14892
/* 6657 */    MCD::OPC_Decode, 241, 2, 136, 2, // Opcode: BINSR_D
/* 6662 */    MCD::OPC_FilterValue, 14, 163, 1, // Skip to: 7085
/* 6666 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6669 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6682
/* 6673 */    MCD::OPC_CheckPredicate, 25, 23, 32, // Skip to: 14892
/* 6677 */    MCD::OPC_Decode, 147, 1, 129, 2, // Opcode: ADDV_B
/* 6682 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 6695
/* 6686 */    MCD::OPC_CheckPredicate, 25, 10, 32, // Skip to: 14892
/* 6690 */    MCD::OPC_Decode, 149, 1, 130, 2, // Opcode: ADDV_H
/* 6695 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 6708
/* 6699 */    MCD::OPC_CheckPredicate, 25, 253, 31, // Skip to: 14892
/* 6703 */    MCD::OPC_Decode, 150, 1, 131, 2, // Opcode: ADDV_W
/* 6708 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 6721
/* 6712 */    MCD::OPC_CheckPredicate, 25, 240, 31, // Skip to: 14892
/* 6716 */    MCD::OPC_Decode, 148, 1, 132, 2, // Opcode: ADDV_D
/* 6721 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 6734
/* 6725 */    MCD::OPC_CheckPredicate, 25, 227, 31, // Skip to: 14892
/* 6729 */    MCD::OPC_Decode, 251, 17, 129, 2, // Opcode: SUBV_B
/* 6734 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 6747
/* 6738 */    MCD::OPC_CheckPredicate, 25, 214, 31, // Skip to: 14892
/* 6742 */    MCD::OPC_Decode, 253, 17, 130, 2, // Opcode: SUBV_H
/* 6747 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 6760
/* 6751 */    MCD::OPC_CheckPredicate, 25, 201, 31, // Skip to: 14892
/* 6755 */    MCD::OPC_Decode, 254, 17, 131, 2, // Opcode: SUBV_W
/* 6760 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 6773
/* 6764 */    MCD::OPC_CheckPredicate, 25, 188, 31, // Skip to: 14892
/* 6768 */    MCD::OPC_Decode, 252, 17, 132, 2, // Opcode: SUBV_D
/* 6773 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 6786
/* 6777 */    MCD::OPC_CheckPredicate, 25, 175, 31, // Skip to: 14892
/* 6781 */    MCD::OPC_Decode, 128, 12, 129, 2, // Opcode: MAX_S_B
/* 6786 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 6799
/* 6790 */    MCD::OPC_CheckPredicate, 25, 162, 31, // Skip to: 14892
/* 6794 */    MCD::OPC_Decode, 130, 12, 130, 2, // Opcode: MAX_S_H
/* 6799 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 6812
/* 6803 */    MCD::OPC_CheckPredicate, 25, 149, 31, // Skip to: 14892
/* 6807 */    MCD::OPC_Decode, 132, 12, 131, 2, // Opcode: MAX_S_W
/* 6812 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 6825
/* 6816 */    MCD::OPC_CheckPredicate, 25, 136, 31, // Skip to: 14892
/* 6820 */    MCD::OPC_Decode, 129, 12, 132, 2, // Opcode: MAX_S_D
/* 6825 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 6838
/* 6829 */    MCD::OPC_CheckPredicate, 25, 123, 31, // Skip to: 14892
/* 6833 */    MCD::OPC_Decode, 133, 12, 129, 2, // Opcode: MAX_U_B
/* 6838 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 6851
/* 6842 */    MCD::OPC_CheckPredicate, 25, 110, 31, // Skip to: 14892
/* 6846 */    MCD::OPC_Decode, 135, 12, 130, 2, // Opcode: MAX_U_H
/* 6851 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 6864
/* 6855 */    MCD::OPC_CheckPredicate, 25, 97, 31, // Skip to: 14892
/* 6859 */    MCD::OPC_Decode, 136, 12, 131, 2, // Opcode: MAX_U_W
/* 6864 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 6877
/* 6868 */    MCD::OPC_CheckPredicate, 25, 84, 31, // Skip to: 14892
/* 6872 */    MCD::OPC_Decode, 134, 12, 132, 2, // Opcode: MAX_U_D
/* 6877 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 6890
/* 6881 */    MCD::OPC_CheckPredicate, 25, 71, 31, // Skip to: 14892
/* 6885 */    MCD::OPC_Decode, 182, 12, 129, 2, // Opcode: MIN_S_B
/* 6890 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 6903
/* 6894 */    MCD::OPC_CheckPredicate, 25, 58, 31, // Skip to: 14892
/* 6898 */    MCD::OPC_Decode, 184, 12, 130, 2, // Opcode: MIN_S_H
/* 6903 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 6916
/* 6907 */    MCD::OPC_CheckPredicate, 25, 45, 31, // Skip to: 14892
/* 6911 */    MCD::OPC_Decode, 186, 12, 131, 2, // Opcode: MIN_S_W
/* 6916 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 6929
/* 6920 */    MCD::OPC_CheckPredicate, 25, 32, 31, // Skip to: 14892
/* 6924 */    MCD::OPC_Decode, 183, 12, 132, 2, // Opcode: MIN_S_D
/* 6929 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 6942
/* 6933 */    MCD::OPC_CheckPredicate, 25, 19, 31, // Skip to: 14892
/* 6937 */    MCD::OPC_Decode, 187, 12, 129, 2, // Opcode: MIN_U_B
/* 6942 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 6955
/* 6946 */    MCD::OPC_CheckPredicate, 25, 6, 31, // Skip to: 14892
/* 6950 */    MCD::OPC_Decode, 189, 12, 130, 2, // Opcode: MIN_U_H
/* 6955 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 6968
/* 6959 */    MCD::OPC_CheckPredicate, 25, 249, 30, // Skip to: 14892
/* 6963 */    MCD::OPC_Decode, 190, 12, 131, 2, // Opcode: MIN_U_W
/* 6968 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 6981
/* 6972 */    MCD::OPC_CheckPredicate, 25, 236, 30, // Skip to: 14892
/* 6976 */    MCD::OPC_Decode, 188, 12, 132, 2, // Opcode: MIN_U_D
/* 6981 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 6994
/* 6985 */    MCD::OPC_CheckPredicate, 25, 223, 30, // Skip to: 14892
/* 6989 */    MCD::OPC_Decode, 249, 11, 129, 2, // Opcode: MAX_A_B
/* 6994 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 7007
/* 6998 */    MCD::OPC_CheckPredicate, 25, 210, 30, // Skip to: 14892
/* 7002 */    MCD::OPC_Decode, 251, 11, 130, 2, // Opcode: MAX_A_H
/* 7007 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 7020
/* 7011 */    MCD::OPC_CheckPredicate, 25, 197, 30, // Skip to: 14892
/* 7015 */    MCD::OPC_Decode, 252, 11, 131, 2, // Opcode: MAX_A_W
/* 7020 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 7033
/* 7024 */    MCD::OPC_CheckPredicate, 25, 184, 30, // Skip to: 14892
/* 7028 */    MCD::OPC_Decode, 250, 11, 132, 2, // Opcode: MAX_A_D
/* 7033 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 7046
/* 7037 */    MCD::OPC_CheckPredicate, 25, 171, 30, // Skip to: 14892
/* 7041 */    MCD::OPC_Decode, 175, 12, 129, 2, // Opcode: MIN_A_B
/* 7046 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 7059
/* 7050 */    MCD::OPC_CheckPredicate, 25, 158, 30, // Skip to: 14892
/* 7054 */    MCD::OPC_Decode, 177, 12, 130, 2, // Opcode: MIN_A_H
/* 7059 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 7072
/* 7063 */    MCD::OPC_CheckPredicate, 25, 145, 30, // Skip to: 14892
/* 7067 */    MCD::OPC_Decode, 178, 12, 131, 2, // Opcode: MIN_A_W
/* 7072 */    MCD::OPC_FilterValue, 31, 136, 30, // Skip to: 14892
/* 7076 */    MCD::OPC_CheckPredicate, 25, 132, 30, // Skip to: 14892
/* 7080 */    MCD::OPC_Decode, 176, 12, 132, 2, // Opcode: MIN_A_D
/* 7085 */    MCD::OPC_FilterValue, 15, 7, 1, // Skip to: 7352
/* 7089 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7092 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 7105
/* 7096 */    MCD::OPC_CheckPredicate, 25, 112, 30, // Skip to: 14892
/* 7100 */    MCD::OPC_Decode, 152, 4, 129, 2, // Opcode: CEQ_B
/* 7105 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7118
/* 7109 */    MCD::OPC_CheckPredicate, 25, 99, 30, // Skip to: 14892
/* 7113 */    MCD::OPC_Decode, 154, 4, 130, 2, // Opcode: CEQ_H
/* 7118 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7131
/* 7122 */    MCD::OPC_CheckPredicate, 25, 86, 30, // Skip to: 14892
/* 7126 */    MCD::OPC_Decode, 155, 4, 131, 2, // Opcode: CEQ_W
/* 7131 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7144
/* 7135 */    MCD::OPC_CheckPredicate, 25, 73, 30, // Skip to: 14892
/* 7139 */    MCD::OPC_Decode, 153, 4, 132, 2, // Opcode: CEQ_D
/* 7144 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 7157
/* 7148 */    MCD::OPC_CheckPredicate, 25, 60, 30, // Skip to: 14892
/* 7152 */    MCD::OPC_Decode, 194, 4, 129, 2, // Opcode: CLT_S_B
/* 7157 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7170
/* 7161 */    MCD::OPC_CheckPredicate, 25, 47, 30, // Skip to: 14892
/* 7165 */    MCD::OPC_Decode, 196, 4, 130, 2, // Opcode: CLT_S_H
/* 7170 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7183
/* 7174 */    MCD::OPC_CheckPredicate, 25, 34, 30, // Skip to: 14892
/* 7178 */    MCD::OPC_Decode, 197, 4, 131, 2, // Opcode: CLT_S_W
/* 7183 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7196
/* 7187 */    MCD::OPC_CheckPredicate, 25, 21, 30, // Skip to: 14892
/* 7191 */    MCD::OPC_Decode, 195, 4, 132, 2, // Opcode: CLT_S_D
/* 7196 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 7209
/* 7200 */    MCD::OPC_CheckPredicate, 25, 8, 30, // Skip to: 14892
/* 7204 */    MCD::OPC_Decode, 198, 4, 129, 2, // Opcode: CLT_U_B
/* 7209 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 7222
/* 7213 */    MCD::OPC_CheckPredicate, 25, 251, 29, // Skip to: 14892
/* 7217 */    MCD::OPC_Decode, 200, 4, 130, 2, // Opcode: CLT_U_H
/* 7222 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 7235
/* 7226 */    MCD::OPC_CheckPredicate, 25, 238, 29, // Skip to: 14892
/* 7230 */    MCD::OPC_Decode, 201, 4, 131, 2, // Opcode: CLT_U_W
/* 7235 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 7248
/* 7239 */    MCD::OPC_CheckPredicate, 25, 225, 29, // Skip to: 14892
/* 7243 */    MCD::OPC_Decode, 199, 4, 132, 2, // Opcode: CLT_U_D
/* 7248 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 7261
/* 7252 */    MCD::OPC_CheckPredicate, 25, 212, 29, // Skip to: 14892
/* 7256 */    MCD::OPC_Decode, 174, 4, 129, 2, // Opcode: CLE_S_B
/* 7261 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 7274
/* 7265 */    MCD::OPC_CheckPredicate, 25, 199, 29, // Skip to: 14892
/* 7269 */    MCD::OPC_Decode, 176, 4, 130, 2, // Opcode: CLE_S_H
/* 7274 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 7287
/* 7278 */    MCD::OPC_CheckPredicate, 25, 186, 29, // Skip to: 14892
/* 7282 */    MCD::OPC_Decode, 177, 4, 131, 2, // Opcode: CLE_S_W
/* 7287 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 7300
/* 7291 */    MCD::OPC_CheckPredicate, 25, 173, 29, // Skip to: 14892
/* 7295 */    MCD::OPC_Decode, 175, 4, 132, 2, // Opcode: CLE_S_D
/* 7300 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 7313
/* 7304 */    MCD::OPC_CheckPredicate, 25, 160, 29, // Skip to: 14892
/* 7308 */    MCD::OPC_Decode, 178, 4, 129, 2, // Opcode: CLE_U_B
/* 7313 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 7326
/* 7317 */    MCD::OPC_CheckPredicate, 25, 147, 29, // Skip to: 14892
/* 7321 */    MCD::OPC_Decode, 180, 4, 130, 2, // Opcode: CLE_U_H
/* 7326 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 7339
/* 7330 */    MCD::OPC_CheckPredicate, 25, 134, 29, // Skip to: 14892
/* 7334 */    MCD::OPC_Decode, 181, 4, 131, 2, // Opcode: CLE_U_W
/* 7339 */    MCD::OPC_FilterValue, 23, 125, 29, // Skip to: 14892
/* 7343 */    MCD::OPC_CheckPredicate, 25, 121, 29, // Skip to: 14892
/* 7347 */    MCD::OPC_Decode, 179, 4, 132, 2, // Opcode: CLE_U_D
/* 7352 */    MCD::OPC_FilterValue, 16, 151, 1, // Skip to: 7763
/* 7356 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7359 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 7372
/* 7363 */    MCD::OPC_CheckPredicate, 25, 101, 29, // Skip to: 14892
/* 7367 */    MCD::OPC_Decode, 153, 1, 129, 2, // Opcode: ADD_A_B
/* 7372 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7385
/* 7376 */    MCD::OPC_CheckPredicate, 25, 88, 29, // Skip to: 14892
/* 7380 */    MCD::OPC_Decode, 155, 1, 130, 2, // Opcode: ADD_A_H
/* 7385 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7398
/* 7389 */    MCD::OPC_CheckPredicate, 25, 75, 29, // Skip to: 14892
/* 7393 */    MCD::OPC_Decode, 156, 1, 131, 2, // Opcode: ADD_A_W
/* 7398 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7411
/* 7402 */    MCD::OPC_CheckPredicate, 25, 62, 29, // Skip to: 14892
/* 7406 */    MCD::OPC_Decode, 154, 1, 132, 2, // Opcode: ADD_A_D
/* 7411 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 7423
/* 7415 */    MCD::OPC_CheckPredicate, 25, 49, 29, // Skip to: 14892
/* 7419 */    MCD::OPC_Decode, 116, 129, 2, // Opcode: ADDS_A_B
/* 7423 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 7435
/* 7427 */    MCD::OPC_CheckPredicate, 25, 37, 29, // Skip to: 14892
/* 7431 */    MCD::OPC_Decode, 118, 130, 2, // Opcode: ADDS_A_H
/* 7435 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 7447
/* 7439 */    MCD::OPC_CheckPredicate, 25, 25, 29, // Skip to: 14892
/* 7443 */    MCD::OPC_Decode, 119, 131, 2, // Opcode: ADDS_A_W
/* 7447 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 7459
/* 7451 */    MCD::OPC_CheckPredicate, 25, 13, 29, // Skip to: 14892
/* 7455 */    MCD::OPC_Decode, 117, 132, 2, // Opcode: ADDS_A_D
/* 7459 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 7471
/* 7463 */    MCD::OPC_CheckPredicate, 25, 1, 29, // Skip to: 14892
/* 7467 */    MCD::OPC_Decode, 120, 129, 2, // Opcode: ADDS_S_B
/* 7471 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 7483
/* 7475 */    MCD::OPC_CheckPredicate, 25, 245, 28, // Skip to: 14892
/* 7479 */    MCD::OPC_Decode, 122, 130, 2, // Opcode: ADDS_S_H
/* 7483 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 7495
/* 7487 */    MCD::OPC_CheckPredicate, 25, 233, 28, // Skip to: 14892
/* 7491 */    MCD::OPC_Decode, 123, 131, 2, // Opcode: ADDS_S_W
/* 7495 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 7507
/* 7499 */    MCD::OPC_CheckPredicate, 25, 221, 28, // Skip to: 14892
/* 7503 */    MCD::OPC_Decode, 121, 132, 2, // Opcode: ADDS_S_D
/* 7507 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 7519
/* 7511 */    MCD::OPC_CheckPredicate, 25, 209, 28, // Skip to: 14892
/* 7515 */    MCD::OPC_Decode, 124, 129, 2, // Opcode: ADDS_U_B
/* 7519 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 7531
/* 7523 */    MCD::OPC_CheckPredicate, 25, 197, 28, // Skip to: 14892
/* 7527 */    MCD::OPC_Decode, 126, 130, 2, // Opcode: ADDS_U_H
/* 7531 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 7543
/* 7535 */    MCD::OPC_CheckPredicate, 25, 185, 28, // Skip to: 14892
/* 7539 */    MCD::OPC_Decode, 127, 131, 2, // Opcode: ADDS_U_W
/* 7543 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 7555
/* 7547 */    MCD::OPC_CheckPredicate, 25, 173, 28, // Skip to: 14892
/* 7551 */    MCD::OPC_Decode, 125, 132, 2, // Opcode: ADDS_U_D
/* 7555 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 7568
/* 7559 */    MCD::OPC_CheckPredicate, 25, 161, 28, // Skip to: 14892
/* 7563 */    MCD::OPC_Decode, 242, 1, 129, 2, // Opcode: AVE_S_B
/* 7568 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 7581
/* 7572 */    MCD::OPC_CheckPredicate, 25, 148, 28, // Skip to: 14892
/* 7576 */    MCD::OPC_Decode, 244, 1, 130, 2, // Opcode: AVE_S_H
/* 7581 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 7594
/* 7585 */    MCD::OPC_CheckPredicate, 25, 135, 28, // Skip to: 14892
/* 7589 */    MCD::OPC_Decode, 245, 1, 131, 2, // Opcode: AVE_S_W
/* 7594 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 7607
/* 7598 */    MCD::OPC_CheckPredicate, 25, 122, 28, // Skip to: 14892
/* 7602 */    MCD::OPC_Decode, 243, 1, 132, 2, // Opcode: AVE_S_D
/* 7607 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 7620
/* 7611 */    MCD::OPC_CheckPredicate, 25, 109, 28, // Skip to: 14892
/* 7615 */    MCD::OPC_Decode, 246, 1, 129, 2, // Opcode: AVE_U_B
/* 7620 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 7633
/* 7624 */    MCD::OPC_CheckPredicate, 25, 96, 28, // Skip to: 14892
/* 7628 */    MCD::OPC_Decode, 248, 1, 130, 2, // Opcode: AVE_U_H
/* 7633 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 7646
/* 7637 */    MCD::OPC_CheckPredicate, 25, 83, 28, // Skip to: 14892
/* 7641 */    MCD::OPC_Decode, 249, 1, 131, 2, // Opcode: AVE_U_W
/* 7646 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 7659
/* 7650 */    MCD::OPC_CheckPredicate, 25, 70, 28, // Skip to: 14892
/* 7654 */    MCD::OPC_Decode, 247, 1, 132, 2, // Opcode: AVE_U_D
/* 7659 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 7672
/* 7663 */    MCD::OPC_CheckPredicate, 25, 57, 28, // Skip to: 14892
/* 7667 */    MCD::OPC_Decode, 234, 1, 129, 2, // Opcode: AVER_S_B
/* 7672 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 7685
/* 7676 */    MCD::OPC_CheckPredicate, 25, 44, 28, // Skip to: 14892
/* 7680 */    MCD::OPC_Decode, 236, 1, 130, 2, // Opcode: AVER_S_H
/* 7685 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 7698
/* 7689 */    MCD::OPC_CheckPredicate, 25, 31, 28, // Skip to: 14892
/* 7693 */    MCD::OPC_Decode, 237, 1, 131, 2, // Opcode: AVER_S_W
/* 7698 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 7711
/* 7702 */    MCD::OPC_CheckPredicate, 25, 18, 28, // Skip to: 14892
/* 7706 */    MCD::OPC_Decode, 235, 1, 132, 2, // Opcode: AVER_S_D
/* 7711 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 7724
/* 7715 */    MCD::OPC_CheckPredicate, 25, 5, 28, // Skip to: 14892
/* 7719 */    MCD::OPC_Decode, 238, 1, 129, 2, // Opcode: AVER_U_B
/* 7724 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 7737
/* 7728 */    MCD::OPC_CheckPredicate, 25, 248, 27, // Skip to: 14892
/* 7732 */    MCD::OPC_Decode, 240, 1, 130, 2, // Opcode: AVER_U_H
/* 7737 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 7750
/* 7741 */    MCD::OPC_CheckPredicate, 25, 235, 27, // Skip to: 14892
/* 7745 */    MCD::OPC_Decode, 241, 1, 131, 2, // Opcode: AVER_U_W
/* 7750 */    MCD::OPC_FilterValue, 31, 226, 27, // Skip to: 14892
/* 7754 */    MCD::OPC_CheckPredicate, 25, 222, 27, // Skip to: 14892
/* 7758 */    MCD::OPC_Decode, 239, 1, 132, 2, // Opcode: AVER_U_D
/* 7763 */    MCD::OPC_FilterValue, 17, 59, 1, // Skip to: 8082
/* 7767 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7770 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 7783
/* 7774 */    MCD::OPC_CheckPredicate, 25, 202, 27, // Skip to: 14892
/* 7778 */    MCD::OPC_Decode, 224, 17, 129, 2, // Opcode: SUBS_S_B
/* 7783 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7796
/* 7787 */    MCD::OPC_CheckPredicate, 25, 189, 27, // Skip to: 14892
/* 7791 */    MCD::OPC_Decode, 226, 17, 130, 2, // Opcode: SUBS_S_H
/* 7796 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7809
/* 7800 */    MCD::OPC_CheckPredicate, 25, 176, 27, // Skip to: 14892
/* 7804 */    MCD::OPC_Decode, 227, 17, 131, 2, // Opcode: SUBS_S_W
/* 7809 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7822
/* 7813 */    MCD::OPC_CheckPredicate, 25, 163, 27, // Skip to: 14892
/* 7817 */    MCD::OPC_Decode, 225, 17, 132, 2, // Opcode: SUBS_S_D
/* 7822 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 7835
/* 7826 */    MCD::OPC_CheckPredicate, 25, 150, 27, // Skip to: 14892
/* 7830 */    MCD::OPC_Decode, 228, 17, 129, 2, // Opcode: SUBS_U_B
/* 7835 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 7848
/* 7839 */    MCD::OPC_CheckPredicate, 25, 137, 27, // Skip to: 14892
/* 7843 */    MCD::OPC_Decode, 230, 17, 130, 2, // Opcode: SUBS_U_H
/* 7848 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7861
/* 7852 */    MCD::OPC_CheckPredicate, 25, 124, 27, // Skip to: 14892
/* 7856 */    MCD::OPC_Decode, 231, 17, 131, 2, // Opcode: SUBS_U_W
/* 7861 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7874
/* 7865 */    MCD::OPC_CheckPredicate, 25, 111, 27, // Skip to: 14892
/* 7869 */    MCD::OPC_Decode, 229, 17, 132, 2, // Opcode: SUBS_U_D
/* 7874 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 7887
/* 7878 */    MCD::OPC_CheckPredicate, 25, 98, 27, // Skip to: 14892
/* 7882 */    MCD::OPC_Decode, 216, 17, 129, 2, // Opcode: SUBSUS_U_B
/* 7887 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7900
/* 7891 */    MCD::OPC_CheckPredicate, 25, 85, 27, // Skip to: 14892
/* 7895 */    MCD::OPC_Decode, 218, 17, 130, 2, // Opcode: SUBSUS_U_H
/* 7900 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7913
/* 7904 */    MCD::OPC_CheckPredicate, 25, 72, 27, // Skip to: 14892
/* 7908 */    MCD::OPC_Decode, 219, 17, 131, 2, // Opcode: SUBSUS_U_W
/* 7913 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7926
/* 7917 */    MCD::OPC_CheckPredicate, 25, 59, 27, // Skip to: 14892
/* 7921 */    MCD::OPC_Decode, 217, 17, 132, 2, // Opcode: SUBSUS_U_D
/* 7926 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 7939
/* 7930 */    MCD::OPC_CheckPredicate, 25, 46, 27, // Skip to: 14892
/* 7934 */    MCD::OPC_Decode, 220, 17, 129, 2, // Opcode: SUBSUU_S_B
/* 7939 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 7952
/* 7943 */    MCD::OPC_CheckPredicate, 25, 33, 27, // Skip to: 14892
/* 7947 */    MCD::OPC_Decode, 222, 17, 130, 2, // Opcode: SUBSUU_S_H
/* 7952 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 7965
/* 7956 */    MCD::OPC_CheckPredicate, 25, 20, 27, // Skip to: 14892
/* 7960 */    MCD::OPC_Decode, 223, 17, 131, 2, // Opcode: SUBSUU_S_W
/* 7965 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 7978
/* 7969 */    MCD::OPC_CheckPredicate, 25, 7, 27, // Skip to: 14892
/* 7973 */    MCD::OPC_Decode, 221, 17, 132, 2, // Opcode: SUBSUU_S_D
/* 7978 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 7991
/* 7982 */    MCD::OPC_CheckPredicate, 25, 250, 26, // Skip to: 14892
/* 7986 */    MCD::OPC_Decode, 190, 1, 129, 2, // Opcode: ASUB_S_B
/* 7991 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8004
/* 7995 */    MCD::OPC_CheckPredicate, 25, 237, 26, // Skip to: 14892
/* 7999 */    MCD::OPC_Decode, 192, 1, 130, 2, // Opcode: ASUB_S_H
/* 8004 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8017
/* 8008 */    MCD::OPC_CheckPredicate, 25, 224, 26, // Skip to: 14892
/* 8012 */    MCD::OPC_Decode, 193, 1, 131, 2, // Opcode: ASUB_S_W
/* 8017 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8030
/* 8021 */    MCD::OPC_CheckPredicate, 25, 211, 26, // Skip to: 14892
/* 8025 */    MCD::OPC_Decode, 191, 1, 132, 2, // Opcode: ASUB_S_D
/* 8030 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 8043
/* 8034 */    MCD::OPC_CheckPredicate, 25, 198, 26, // Skip to: 14892
/* 8038 */    MCD::OPC_Decode, 194, 1, 129, 2, // Opcode: ASUB_U_B
/* 8043 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8056
/* 8047 */    MCD::OPC_CheckPredicate, 25, 185, 26, // Skip to: 14892
/* 8051 */    MCD::OPC_Decode, 196, 1, 130, 2, // Opcode: ASUB_U_H
/* 8056 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 8069
/* 8060 */    MCD::OPC_CheckPredicate, 25, 172, 26, // Skip to: 14892
/* 8064 */    MCD::OPC_Decode, 197, 1, 131, 2, // Opcode: ASUB_U_W
/* 8069 */    MCD::OPC_FilterValue, 23, 163, 26, // Skip to: 14892
/* 8073 */    MCD::OPC_CheckPredicate, 25, 159, 26, // Skip to: 14892
/* 8077 */    MCD::OPC_Decode, 195, 1, 132, 2, // Opcode: ASUB_U_D
/* 8082 */    MCD::OPC_FilterValue, 18, 111, 1, // Skip to: 8453
/* 8086 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 8089 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8102
/* 8093 */    MCD::OPC_CheckPredicate, 25, 139, 26, // Skip to: 14892
/* 8097 */    MCD::OPC_Decode, 221, 13, 129, 2, // Opcode: MULV_B
/* 8102 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 8115
/* 8106 */    MCD::OPC_CheckPredicate, 25, 126, 26, // Skip to: 14892
/* 8110 */    MCD::OPC_Decode, 223, 13, 130, 2, // Opcode: MULV_H
/* 8115 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 8128
/* 8119 */    MCD::OPC_CheckPredicate, 25, 113, 26, // Skip to: 14892
/* 8123 */    MCD::OPC_Decode, 224, 13, 131, 2, // Opcode: MULV_W
/* 8128 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 8141
/* 8132 */    MCD::OPC_CheckPredicate, 25, 100, 26, // Skip to: 14892
/* 8136 */    MCD::OPC_Decode, 222, 13, 132, 2, // Opcode: MULV_D
/* 8141 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 8154
/* 8145 */    MCD::OPC_CheckPredicate, 25, 87, 26, // Skip to: 14892
/* 8149 */    MCD::OPC_Decode, 215, 11, 133, 2, // Opcode: MADDV_B
/* 8154 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 8167
/* 8158 */    MCD::OPC_CheckPredicate, 25, 74, 26, // Skip to: 14892
/* 8162 */    MCD::OPC_Decode, 217, 11, 134, 2, // Opcode: MADDV_H
/* 8167 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 8180
/* 8171 */    MCD::OPC_CheckPredicate, 25, 61, 26, // Skip to: 14892
/* 8175 */    MCD::OPC_Decode, 218, 11, 135, 2, // Opcode: MADDV_W
/* 8180 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 8193
/* 8184 */    MCD::OPC_CheckPredicate, 25, 48, 26, // Skip to: 14892
/* 8188 */    MCD::OPC_Decode, 216, 11, 136, 2, // Opcode: MADDV_D
/* 8193 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 8206
/* 8197 */    MCD::OPC_CheckPredicate, 25, 35, 26, // Skip to: 14892
/* 8201 */    MCD::OPC_Decode, 138, 13, 133, 2, // Opcode: MSUBV_B
/* 8206 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 8219
/* 8210 */    MCD::OPC_CheckPredicate, 25, 22, 26, // Skip to: 14892
/* 8214 */    MCD::OPC_Decode, 140, 13, 134, 2, // Opcode: MSUBV_H
/* 8219 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 8232
/* 8223 */    MCD::OPC_CheckPredicate, 25, 9, 26, // Skip to: 14892
/* 8227 */    MCD::OPC_Decode, 141, 13, 135, 2, // Opcode: MSUBV_W
/* 8232 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 8245
/* 8236 */    MCD::OPC_CheckPredicate, 25, 252, 25, // Skip to: 14892
/* 8240 */    MCD::OPC_Decode, 139, 13, 136, 2, // Opcode: MSUBV_D
/* 8245 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 8258
/* 8249 */    MCD::OPC_CheckPredicate, 25, 239, 25, // Skip to: 14892
/* 8253 */    MCD::OPC_Decode, 231, 6, 129, 2, // Opcode: DIV_S_B
/* 8258 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8271
/* 8262 */    MCD::OPC_CheckPredicate, 25, 226, 25, // Skip to: 14892
/* 8266 */    MCD::OPC_Decode, 233, 6, 130, 2, // Opcode: DIV_S_H
/* 8271 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8284
/* 8275 */    MCD::OPC_CheckPredicate, 25, 213, 25, // Skip to: 14892
/* 8279 */    MCD::OPC_Decode, 234, 6, 131, 2, // Opcode: DIV_S_W
/* 8284 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8297
/* 8288 */    MCD::OPC_CheckPredicate, 25, 200, 25, // Skip to: 14892
/* 8292 */    MCD::OPC_Decode, 232, 6, 132, 2, // Opcode: DIV_S_D
/* 8297 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 8310
/* 8301 */    MCD::OPC_CheckPredicate, 25, 187, 25, // Skip to: 14892
/* 8305 */    MCD::OPC_Decode, 235, 6, 129, 2, // Opcode: DIV_U_B
/* 8310 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8323
/* 8314 */    MCD::OPC_CheckPredicate, 25, 174, 25, // Skip to: 14892
/* 8318 */    MCD::OPC_Decode, 237, 6, 130, 2, // Opcode: DIV_U_H
/* 8323 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 8336
/* 8327 */    MCD::OPC_CheckPredicate, 25, 161, 25, // Skip to: 14892
/* 8331 */    MCD::OPC_Decode, 238, 6, 131, 2, // Opcode: DIV_U_W
/* 8336 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 8349
/* 8340 */    MCD::OPC_CheckPredicate, 25, 148, 25, // Skip to: 14892
/* 8344 */    MCD::OPC_Decode, 236, 6, 132, 2, // Opcode: DIV_U_D
/* 8349 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 8362
/* 8353 */    MCD::OPC_CheckPredicate, 25, 135, 25, // Skip to: 14892
/* 8357 */    MCD::OPC_Decode, 199, 12, 129, 2, // Opcode: MOD_S_B
/* 8362 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 8375
/* 8366 */    MCD::OPC_CheckPredicate, 25, 122, 25, // Skip to: 14892
/* 8370 */    MCD::OPC_Decode, 201, 12, 130, 2, // Opcode: MOD_S_H
/* 8375 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 8388
/* 8379 */    MCD::OPC_CheckPredicate, 25, 109, 25, // Skip to: 14892
/* 8383 */    MCD::OPC_Decode, 202, 12, 131, 2, // Opcode: MOD_S_W
/* 8388 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 8401
/* 8392 */    MCD::OPC_CheckPredicate, 25, 96, 25, // Skip to: 14892
/* 8396 */    MCD::OPC_Decode, 200, 12, 132, 2, // Opcode: MOD_S_D
/* 8401 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 8414
/* 8405 */    MCD::OPC_CheckPredicate, 25, 83, 25, // Skip to: 14892
/* 8409 */    MCD::OPC_Decode, 203, 12, 129, 2, // Opcode: MOD_U_B
/* 8414 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 8427
/* 8418 */    MCD::OPC_CheckPredicate, 25, 70, 25, // Skip to: 14892
/* 8422 */    MCD::OPC_Decode, 205, 12, 130, 2, // Opcode: MOD_U_H
/* 8427 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 8440
/* 8431 */    MCD::OPC_CheckPredicate, 25, 57, 25, // Skip to: 14892
/* 8435 */    MCD::OPC_Decode, 206, 12, 131, 2, // Opcode: MOD_U_W
/* 8440 */    MCD::OPC_FilterValue, 31, 48, 25, // Skip to: 14892
/* 8444 */    MCD::OPC_CheckPredicate, 25, 44, 25, // Skip to: 14892
/* 8448 */    MCD::OPC_Decode, 204, 12, 132, 2, // Opcode: MOD_U_D
/* 8453 */    MCD::OPC_FilterValue, 19, 237, 0, // Skip to: 8694
/* 8457 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 8460 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 8473
/* 8464 */    MCD::OPC_CheckPredicate, 25, 24, 25, // Skip to: 14892
/* 8468 */    MCD::OPC_Decode, 146, 7, 137, 2, // Opcode: DOTP_S_H
/* 8473 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 8486
/* 8477 */    MCD::OPC_CheckPredicate, 25, 11, 25, // Skip to: 14892
/* 8481 */    MCD::OPC_Decode, 147, 7, 138, 2, // Opcode: DOTP_S_W
/* 8486 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 8499
/* 8490 */    MCD::OPC_CheckPredicate, 25, 254, 24, // Skip to: 14892
/* 8494 */    MCD::OPC_Decode, 145, 7, 139, 2, // Opcode: DOTP_S_D
/* 8499 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 8512
/* 8503 */    MCD::OPC_CheckPredicate, 25, 241, 24, // Skip to: 14892
/* 8507 */    MCD::OPC_Decode, 149, 7, 137, 2, // Opcode: DOTP_U_H
/* 8512 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 8525
/* 8516 */    MCD::OPC_CheckPredicate, 25, 228, 24, // Skip to: 14892
/* 8520 */    MCD::OPC_Decode, 150, 7, 138, 2, // Opcode: DOTP_U_W
/* 8525 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 8538
/* 8529 */    MCD::OPC_CheckPredicate, 25, 215, 24, // Skip to: 14892
/* 8533 */    MCD::OPC_Decode, 148, 7, 139, 2, // Opcode: DOTP_U_D
/* 8538 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 8551
/* 8542 */    MCD::OPC_CheckPredicate, 25, 202, 24, // Skip to: 14892
/* 8546 */    MCD::OPC_Decode, 152, 7, 140, 2, // Opcode: DPADD_S_H
/* 8551 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 8564
/* 8555 */    MCD::OPC_CheckPredicate, 25, 189, 24, // Skip to: 14892
/* 8559 */    MCD::OPC_Decode, 153, 7, 141, 2, // Opcode: DPADD_S_W
/* 8564 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 8577
/* 8568 */    MCD::OPC_CheckPredicate, 25, 176, 24, // Skip to: 14892
/* 8572 */    MCD::OPC_Decode, 151, 7, 142, 2, // Opcode: DPADD_S_D
/* 8577 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 8590
/* 8581 */    MCD::OPC_CheckPredicate, 25, 163, 24, // Skip to: 14892
/* 8585 */    MCD::OPC_Decode, 155, 7, 140, 2, // Opcode: DPADD_U_H
/* 8590 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 8603
/* 8594 */    MCD::OPC_CheckPredicate, 25, 150, 24, // Skip to: 14892
/* 8598 */    MCD::OPC_Decode, 156, 7, 141, 2, // Opcode: DPADD_U_W
/* 8603 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 8616
/* 8607 */    MCD::OPC_CheckPredicate, 25, 137, 24, // Skip to: 14892
/* 8611 */    MCD::OPC_Decode, 154, 7, 142, 2, // Opcode: DPADD_U_D
/* 8616 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8629
/* 8620 */    MCD::OPC_CheckPredicate, 25, 124, 24, // Skip to: 14892
/* 8624 */    MCD::OPC_Decode, 183, 7, 140, 2, // Opcode: DPSUB_S_H
/* 8629 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8642
/* 8633 */    MCD::OPC_CheckPredicate, 25, 111, 24, // Skip to: 14892
/* 8637 */    MCD::OPC_Decode, 184, 7, 141, 2, // Opcode: DPSUB_S_W
/* 8642 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8655
/* 8646 */    MCD::OPC_CheckPredicate, 25, 98, 24, // Skip to: 14892
/* 8650 */    MCD::OPC_Decode, 182, 7, 142, 2, // Opcode: DPSUB_S_D
/* 8655 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8668
/* 8659 */    MCD::OPC_CheckPredicate, 25, 85, 24, // Skip to: 14892
/* 8663 */    MCD::OPC_Decode, 186, 7, 140, 2, // Opcode: DPSUB_U_H
/* 8668 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 8681
/* 8672 */    MCD::OPC_CheckPredicate, 25, 72, 24, // Skip to: 14892
/* 8676 */    MCD::OPC_Decode, 187, 7, 141, 2, // Opcode: DPSUB_U_W
/* 8681 */    MCD::OPC_FilterValue, 23, 63, 24, // Skip to: 14892
/* 8685 */    MCD::OPC_CheckPredicate, 25, 59, 24, // Skip to: 14892
/* 8689 */    MCD::OPC_Decode, 185, 7, 142, 2, // Opcode: DPSUB_U_D
/* 8694 */    MCD::OPC_FilterValue, 20, 163, 1, // Skip to: 9117
/* 8698 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 8701 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8714
/* 8705 */    MCD::OPC_CheckPredicate, 25, 39, 24, // Skip to: 14892
/* 8709 */    MCD::OPC_Decode, 225, 16, 143, 2, // Opcode: SLD_B
/* 8714 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 8727
/* 8718 */    MCD::OPC_CheckPredicate, 25, 26, 24, // Skip to: 14892
/* 8722 */    MCD::OPC_Decode, 227, 16, 144, 2, // Opcode: SLD_H
/* 8727 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 8740
/* 8731 */    MCD::OPC_CheckPredicate, 25, 13, 24, // Skip to: 14892
/* 8735 */    MCD::OPC_Decode, 228, 16, 145, 2, // Opcode: SLD_W
/* 8740 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 8753
/* 8744 */    MCD::OPC_CheckPredicate, 25, 0, 24, // Skip to: 14892
/* 8748 */    MCD::OPC_Decode, 226, 16, 146, 2, // Opcode: SLD_D
/* 8753 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 8766
/* 8757 */    MCD::OPC_CheckPredicate, 25, 243, 23, // Skip to: 14892
/* 8761 */    MCD::OPC_Decode, 141, 17, 147, 2, // Opcode: SPLAT_B
/* 8766 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 8779
/* 8770 */    MCD::OPC_CheckPredicate, 25, 230, 23, // Skip to: 14892
/* 8774 */    MCD::OPC_Decode, 143, 17, 148, 2, // Opcode: SPLAT_H
/* 8779 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 8792
/* 8783 */    MCD::OPC_CheckPredicate, 25, 217, 23, // Skip to: 14892
/* 8787 */    MCD::OPC_Decode, 144, 17, 149, 2, // Opcode: SPLAT_W
/* 8792 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 8805
/* 8796 */    MCD::OPC_CheckPredicate, 25, 204, 23, // Skip to: 14892
/* 8800 */    MCD::OPC_Decode, 142, 17, 150, 2, // Opcode: SPLAT_D
/* 8805 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 8818
/* 8809 */    MCD::OPC_CheckPredicate, 25, 191, 23, // Skip to: 14892
/* 8813 */    MCD::OPC_Decode, 168, 14, 129, 2, // Opcode: PCKEV_B
/* 8818 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 8831
/* 8822 */    MCD::OPC_CheckPredicate, 25, 178, 23, // Skip to: 14892
/* 8826 */    MCD::OPC_Decode, 170, 14, 130, 2, // Opcode: PCKEV_H
/* 8831 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 8844
/* 8835 */    MCD::OPC_CheckPredicate, 25, 165, 23, // Skip to: 14892
/* 8839 */    MCD::OPC_Decode, 171, 14, 131, 2, // Opcode: PCKEV_W
/* 8844 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 8857
/* 8848 */    MCD::OPC_CheckPredicate, 25, 152, 23, // Skip to: 14892
/* 8852 */    MCD::OPC_Decode, 169, 14, 132, 2, // Opcode: PCKEV_D
/* 8857 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 8870
/* 8861 */    MCD::OPC_CheckPredicate, 25, 139, 23, // Skip to: 14892
/* 8865 */    MCD::OPC_Decode, 172, 14, 129, 2, // Opcode: PCKOD_B
/* 8870 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 8883
/* 8874 */    MCD::OPC_CheckPredicate, 25, 126, 23, // Skip to: 14892
/* 8878 */    MCD::OPC_Decode, 174, 14, 130, 2, // Opcode: PCKOD_H
/* 8883 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 8896
/* 8887 */    MCD::OPC_CheckPredicate, 25, 113, 23, // Skip to: 14892
/* 8891 */    MCD::OPC_Decode, 175, 14, 131, 2, // Opcode: PCKOD_W
/* 8896 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 8909
/* 8900 */    MCD::OPC_CheckPredicate, 25, 100, 23, // Skip to: 14892
/* 8904 */    MCD::OPC_Decode, 173, 14, 132, 2, // Opcode: PCKOD_D
/* 8909 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 8922
/* 8913 */    MCD::OPC_CheckPredicate, 25, 87, 23, // Skip to: 14892
/* 8917 */    MCD::OPC_Decode, 227, 9, 129, 2, // Opcode: ILVL_B
/* 8922 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8935
/* 8926 */    MCD::OPC_CheckPredicate, 25, 74, 23, // Skip to: 14892
/* 8930 */    MCD::OPC_Decode, 229, 9, 130, 2, // Opcode: ILVL_H
/* 8935 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8948
/* 8939 */    MCD::OPC_CheckPredicate, 25, 61, 23, // Skip to: 14892
/* 8943 */    MCD::OPC_Decode, 230, 9, 131, 2, // Opcode: ILVL_W
/* 8948 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8961
/* 8952 */    MCD::OPC_CheckPredicate, 25, 48, 23, // Skip to: 14892
/* 8956 */    MCD::OPC_Decode, 228, 9, 132, 2, // Opcode: ILVL_D
/* 8961 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 8974
/* 8965 */    MCD::OPC_CheckPredicate, 25, 35, 23, // Skip to: 14892
/* 8969 */    MCD::OPC_Decode, 235, 9, 129, 2, // Opcode: ILVR_B
/* 8974 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8987
/* 8978 */    MCD::OPC_CheckPredicate, 25, 22, 23, // Skip to: 14892
/* 8982 */    MCD::OPC_Decode, 237, 9, 130, 2, // Opcode: ILVR_H
/* 8987 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 9000
/* 8991 */    MCD::OPC_CheckPredicate, 25, 9, 23, // Skip to: 14892
/* 8995 */    MCD::OPC_Decode, 238, 9, 131, 2, // Opcode: ILVR_W
/* 9000 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 9013
/* 9004 */    MCD::OPC_CheckPredicate, 25, 252, 22, // Skip to: 14892
/* 9008 */    MCD::OPC_Decode, 236, 9, 132, 2, // Opcode: ILVR_D
/* 9013 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 9026
/* 9017 */    MCD::OPC_CheckPredicate, 25, 239, 22, // Skip to: 14892
/* 9021 */    MCD::OPC_Decode, 223, 9, 129, 2, // Opcode: ILVEV_B
/* 9026 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 9039
/* 9030 */    MCD::OPC_CheckPredicate, 25, 226, 22, // Skip to: 14892
/* 9034 */    MCD::OPC_Decode, 225, 9, 130, 2, // Opcode: ILVEV_H
/* 9039 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 9052
/* 9043 */    MCD::OPC_CheckPredicate, 25, 213, 22, // Skip to: 14892
/* 9047 */    MCD::OPC_Decode, 226, 9, 131, 2, // Opcode: ILVEV_W
/* 9052 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 9065
/* 9056 */    MCD::OPC_CheckPredicate, 25, 200, 22, // Skip to: 14892
/* 9060 */    MCD::OPC_Decode, 224, 9, 132, 2, // Opcode: ILVEV_D
/* 9065 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 9078
/* 9069 */    MCD::OPC_CheckPredicate, 25, 187, 22, // Skip to: 14892
/* 9073 */    MCD::OPC_Decode, 231, 9, 129, 2, // Opcode: ILVOD_B
/* 9078 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 9091
/* 9082 */    MCD::OPC_CheckPredicate, 25, 174, 22, // Skip to: 14892
/* 9086 */    MCD::OPC_Decode, 233, 9, 130, 2, // Opcode: ILVOD_H
/* 9091 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 9104
/* 9095 */    MCD::OPC_CheckPredicate, 25, 161, 22, // Skip to: 14892
/* 9099 */    MCD::OPC_Decode, 234, 9, 131, 2, // Opcode: ILVOD_W
/* 9104 */    MCD::OPC_FilterValue, 31, 152, 22, // Skip to: 14892
/* 9108 */    MCD::OPC_CheckPredicate, 25, 148, 22, // Skip to: 14892
/* 9112 */    MCD::OPC_Decode, 232, 9, 132, 2, // Opcode: ILVOD_D
/* 9117 */    MCD::OPC_FilterValue, 21, 59, 1, // Skip to: 9436
/* 9121 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 9124 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9137
/* 9128 */    MCD::OPC_CheckPredicate, 25, 128, 22, // Skip to: 14892
/* 9132 */    MCD::OPC_Decode, 159, 19, 133, 2, // Opcode: VSHF_B
/* 9137 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 9150
/* 9141 */    MCD::OPC_CheckPredicate, 25, 115, 22, // Skip to: 14892
/* 9145 */    MCD::OPC_Decode, 161, 19, 134, 2, // Opcode: VSHF_H
/* 9150 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 9163
/* 9154 */    MCD::OPC_CheckPredicate, 25, 102, 22, // Skip to: 14892
/* 9158 */    MCD::OPC_Decode, 162, 19, 135, 2, // Opcode: VSHF_W
/* 9163 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 9176
/* 9167 */    MCD::OPC_CheckPredicate, 25, 89, 22, // Skip to: 14892
/* 9171 */    MCD::OPC_Decode, 160, 19, 136, 2, // Opcode: VSHF_D
/* 9176 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9189
/* 9180 */    MCD::OPC_CheckPredicate, 25, 76, 22, // Skip to: 14892
/* 9184 */    MCD::OPC_Decode, 156, 17, 129, 2, // Opcode: SRAR_B
/* 9189 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 9202
/* 9193 */    MCD::OPC_CheckPredicate, 25, 63, 22, // Skip to: 14892
/* 9197 */    MCD::OPC_Decode, 158, 17, 130, 2, // Opcode: SRAR_H
/* 9202 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 9215
/* 9206 */    MCD::OPC_CheckPredicate, 25, 50, 22, // Skip to: 14892
/* 9210 */    MCD::OPC_Decode, 159, 17, 131, 2, // Opcode: SRAR_W
/* 9215 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 9228
/* 9219 */    MCD::OPC_CheckPredicate, 25, 37, 22, // Skip to: 14892
/* 9223 */    MCD::OPC_Decode, 157, 17, 132, 2, // Opcode: SRAR_D
/* 9228 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 9241
/* 9232 */    MCD::OPC_CheckPredicate, 25, 24, 22, // Skip to: 14892
/* 9236 */    MCD::OPC_Decode, 178, 17, 129, 2, // Opcode: SRLR_B
/* 9241 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 9254
/* 9245 */    MCD::OPC_CheckPredicate, 25, 11, 22, // Skip to: 14892
/* 9249 */    MCD::OPC_Decode, 180, 17, 130, 2, // Opcode: SRLR_H
/* 9254 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 9267
/* 9258 */    MCD::OPC_CheckPredicate, 25, 254, 21, // Skip to: 14892
/* 9262 */    MCD::OPC_Decode, 181, 17, 131, 2, // Opcode: SRLR_W
/* 9267 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 9280
/* 9271 */    MCD::OPC_CheckPredicate, 25, 241, 21, // Skip to: 14892
/* 9275 */    MCD::OPC_Decode, 179, 17, 132, 2, // Opcode: SRLR_D
/* 9280 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 9293
/* 9284 */    MCD::OPC_CheckPredicate, 25, 228, 21, // Skip to: 14892
/* 9288 */    MCD::OPC_Decode, 212, 9, 137, 2, // Opcode: HADD_S_H
/* 9293 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 9306
/* 9297 */    MCD::OPC_CheckPredicate, 25, 215, 21, // Skip to: 14892
/* 9301 */    MCD::OPC_Decode, 213, 9, 138, 2, // Opcode: HADD_S_W
/* 9306 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 9319
/* 9310 */    MCD::OPC_CheckPredicate, 25, 202, 21, // Skip to: 14892
/* 9314 */    MCD::OPC_Decode, 211, 9, 139, 2, // Opcode: HADD_S_D
/* 9319 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 9332
/* 9323 */    MCD::OPC_CheckPredicate, 25, 189, 21, // Skip to: 14892
/* 9327 */    MCD::OPC_Decode, 215, 9, 137, 2, // Opcode: HADD_U_H
/* 9332 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 9345
/* 9336 */    MCD::OPC_CheckPredicate, 25, 176, 21, // Skip to: 14892
/* 9340 */    MCD::OPC_Decode, 216, 9, 138, 2, // Opcode: HADD_U_W
/* 9345 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 9358
/* 9349 */    MCD::OPC_CheckPredicate, 25, 163, 21, // Skip to: 14892
/* 9353 */    MCD::OPC_Decode, 214, 9, 139, 2, // Opcode: HADD_U_D
/* 9358 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 9371
/* 9362 */    MCD::OPC_CheckPredicate, 25, 150, 21, // Skip to: 14892
/* 9366 */    MCD::OPC_Decode, 218, 9, 137, 2, // Opcode: HSUB_S_H
/* 9371 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 9384
/* 9375 */    MCD::OPC_CheckPredicate, 25, 137, 21, // Skip to: 14892
/* 9379 */    MCD::OPC_Decode, 219, 9, 138, 2, // Opcode: HSUB_S_W
/* 9384 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 9397
/* 9388 */    MCD::OPC_CheckPredicate, 25, 124, 21, // Skip to: 14892
/* 9392 */    MCD::OPC_Decode, 217, 9, 139, 2, // Opcode: HSUB_S_D
/* 9397 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 9410
/* 9401 */    MCD::OPC_CheckPredicate, 25, 111, 21, // Skip to: 14892
/* 9405 */    MCD::OPC_Decode, 221, 9, 137, 2, // Opcode: HSUB_U_H
/* 9410 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 9423
/* 9414 */    MCD::OPC_CheckPredicate, 25, 98, 21, // Skip to: 14892
/* 9418 */    MCD::OPC_Decode, 222, 9, 138, 2, // Opcode: HSUB_U_W
/* 9423 */    MCD::OPC_FilterValue, 31, 89, 21, // Skip to: 14892
/* 9427 */    MCD::OPC_CheckPredicate, 25, 85, 21, // Skip to: 14892
/* 9431 */    MCD::OPC_Decode, 220, 9, 139, 2, // Opcode: HSUB_U_D
/* 9436 */    MCD::OPC_FilterValue, 25, 210, 1, // Skip to: 9906
/* 9440 */    MCD::OPC_ExtractField, 20, 6,  // Inst{25-20} ...
/* 9443 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9456
/* 9447 */    MCD::OPC_CheckPredicate, 25, 65, 21, // Skip to: 14892
/* 9451 */    MCD::OPC_Decode, 221, 16, 151, 2, // Opcode: SLDI_B
/* 9456 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 9475
/* 9460 */    MCD::OPC_CheckPredicate, 25, 52, 21, // Skip to: 14892
/* 9464 */    MCD::OPC_CheckField, 19, 1, 0, 46, 21, // Skip to: 14892
/* 9470 */    MCD::OPC_Decode, 223, 16, 152, 2, // Opcode: SLDI_H
/* 9475 */    MCD::OPC_FilterValue, 3, 54, 0, // Skip to: 9533
/* 9479 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9482 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9495
/* 9486 */    MCD::OPC_CheckPredicate, 25, 26, 21, // Skip to: 14892
/* 9490 */    MCD::OPC_Decode, 224, 16, 153, 2, // Opcode: SLDI_W
/* 9495 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 9514
/* 9499 */    MCD::OPC_CheckPredicate, 25, 13, 21, // Skip to: 14892
/* 9503 */    MCD::OPC_CheckField, 17, 1, 0, 7, 21, // Skip to: 14892
/* 9509 */    MCD::OPC_Decode, 222, 16, 154, 2, // Opcode: SLDI_D
/* 9514 */    MCD::OPC_FilterValue, 3, 254, 20, // Skip to: 14892
/* 9518 */    MCD::OPC_CheckPredicate, 25, 250, 20, // Skip to: 14892
/* 9522 */    MCD::OPC_CheckField, 16, 2, 2, 244, 20, // Skip to: 14892
/* 9528 */    MCD::OPC_Decode, 179, 5, 155, 2, // Opcode: CTCMSA
/* 9533 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9546
/* 9537 */    MCD::OPC_CheckPredicate, 25, 231, 20, // Skip to: 14892
/* 9541 */    MCD::OPC_Decode, 137, 17, 156, 2, // Opcode: SPLATI_B
/* 9546 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 9565
/* 9550 */    MCD::OPC_CheckPredicate, 25, 218, 20, // Skip to: 14892
/* 9554 */    MCD::OPC_CheckField, 19, 1, 0, 212, 20, // Skip to: 14892
/* 9560 */    MCD::OPC_Decode, 139, 17, 157, 2, // Opcode: SPLATI_H
/* 9565 */    MCD::OPC_FilterValue, 7, 54, 0, // Skip to: 9623
/* 9569 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9572 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9585
/* 9576 */    MCD::OPC_CheckPredicate, 25, 192, 20, // Skip to: 14892
/* 9580 */    MCD::OPC_Decode, 140, 17, 158, 2, // Opcode: SPLATI_W
/* 9585 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 9604
/* 9589 */    MCD::OPC_CheckPredicate, 25, 179, 20, // Skip to: 14892
/* 9593 */    MCD::OPC_CheckField, 17, 1, 0, 173, 20, // Skip to: 14892
/* 9599 */    MCD::OPC_Decode, 138, 17, 159, 2, // Opcode: SPLATI_D
/* 9604 */    MCD::OPC_FilterValue, 3, 164, 20, // Skip to: 14892
/* 9608 */    MCD::OPC_CheckPredicate, 25, 160, 20, // Skip to: 14892
/* 9612 */    MCD::OPC_CheckField, 16, 2, 2, 154, 20, // Skip to: 14892
/* 9618 */    MCD::OPC_Decode, 159, 4, 160, 2, // Opcode: CFCMSA
/* 9623 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 9636
/* 9627 */    MCD::OPC_CheckPredicate, 25, 141, 20, // Skip to: 14892
/* 9631 */    MCD::OPC_Decode, 169, 5, 161, 2, // Opcode: COPY_S_B
/* 9636 */    MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 9655
/* 9640 */    MCD::OPC_CheckPredicate, 25, 128, 20, // Skip to: 14892
/* 9644 */    MCD::OPC_CheckField, 19, 1, 0, 122, 20, // Skip to: 14892
/* 9650 */    MCD::OPC_Decode, 171, 5, 162, 2, // Opcode: COPY_S_H
/* 9655 */    MCD::OPC_FilterValue, 11, 54, 0, // Skip to: 9713
/* 9659 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9662 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9675
/* 9666 */    MCD::OPC_CheckPredicate, 25, 102, 20, // Skip to: 14892
/* 9670 */    MCD::OPC_Decode, 172, 5, 163, 2, // Opcode: COPY_S_W
/* 9675 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 9694
/* 9679 */    MCD::OPC_CheckPredicate, 32, 89, 20, // Skip to: 14892
/* 9683 */    MCD::OPC_CheckField, 17, 1, 0, 83, 20, // Skip to: 14892
/* 9689 */    MCD::OPC_Decode, 170, 5, 164, 2, // Opcode: COPY_S_D
/* 9694 */    MCD::OPC_FilterValue, 3, 74, 20, // Skip to: 14892
/* 9698 */    MCD::OPC_CheckPredicate, 25, 70, 20, // Skip to: 14892
/* 9702 */    MCD::OPC_CheckField, 16, 2, 2, 64, 20, // Skip to: 14892
/* 9708 */    MCD::OPC_Decode, 210, 12, 165, 2, // Opcode: MOVE_V
/* 9713 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 9726
/* 9717 */    MCD::OPC_CheckPredicate, 25, 51, 20, // Skip to: 14892
/* 9721 */    MCD::OPC_Decode, 173, 5, 161, 2, // Opcode: COPY_U_B
/* 9726 */    MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 9745
/* 9730 */    MCD::OPC_CheckPredicate, 25, 38, 20, // Skip to: 14892
/* 9734 */    MCD::OPC_CheckField, 19, 1, 0, 32, 20, // Skip to: 14892
/* 9740 */    MCD::OPC_Decode, 174, 5, 162, 2, // Opcode: COPY_U_H
/* 9745 */    MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 9764
/* 9749 */    MCD::OPC_CheckPredicate, 32, 19, 20, // Skip to: 14892
/* 9753 */    MCD::OPC_CheckField, 18, 2, 0, 13, 20, // Skip to: 14892
/* 9759 */    MCD::OPC_Decode, 175, 5, 163, 2, // Opcode: COPY_U_W
/* 9764 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 9777
/* 9768 */    MCD::OPC_CheckPredicate, 25, 0, 20, // Skip to: 14892
/* 9772 */    MCD::OPC_Decode, 240, 9, 166, 2, // Opcode: INSERT_B
/* 9777 */    MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 9796
/* 9781 */    MCD::OPC_CheckPredicate, 25, 243, 19, // Skip to: 14892
/* 9785 */    MCD::OPC_CheckField, 19, 1, 0, 237, 19, // Skip to: 14892
/* 9791 */    MCD::OPC_Decode, 252, 9, 167, 2, // Opcode: INSERT_H
/* 9796 */    MCD::OPC_FilterValue, 19, 35, 0, // Skip to: 9835
/* 9800 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9803 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9816
/* 9807 */    MCD::OPC_CheckPredicate, 25, 217, 19, // Skip to: 14892
/* 9811 */    MCD::OPC_Decode, 255, 9, 168, 2, // Opcode: INSERT_W
/* 9816 */    MCD::OPC_FilterValue, 2, 208, 19, // Skip to: 14892
/* 9820 */    MCD::OPC_CheckPredicate, 32, 204, 19, // Skip to: 14892
/* 9824 */    MCD::OPC_CheckField, 17, 1, 0, 198, 19, // Skip to: 14892
/* 9830 */    MCD::OPC_Decode, 243, 9, 169, 2, // Opcode: INSERT_D
/* 9835 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 9848
/* 9839 */    MCD::OPC_CheckPredicate, 25, 185, 19, // Skip to: 14892
/* 9843 */    MCD::OPC_Decode, 131, 10, 170, 2, // Opcode: INSVE_B
/* 9848 */    MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 9867
/* 9852 */    MCD::OPC_CheckPredicate, 25, 172, 19, // Skip to: 14892
/* 9856 */    MCD::OPC_CheckField, 19, 1, 0, 166, 19, // Skip to: 14892
/* 9862 */    MCD::OPC_Decode, 133, 10, 170, 2, // Opcode: INSVE_H
/* 9867 */    MCD::OPC_FilterValue, 23, 157, 19, // Skip to: 14892
/* 9871 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9874 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9887
/* 9878 */    MCD::OPC_CheckPredicate, 25, 146, 19, // Skip to: 14892
/* 9882 */    MCD::OPC_Decode, 134, 10, 170, 2, // Opcode: INSVE_W
/* 9887 */    MCD::OPC_FilterValue, 2, 137, 19, // Skip to: 14892
/* 9891 */    MCD::OPC_CheckPredicate, 25, 133, 19, // Skip to: 14892
/* 9895 */    MCD::OPC_CheckField, 17, 1, 0, 127, 19, // Skip to: 14892
/* 9901 */    MCD::OPC_Decode, 132, 10, 170, 2, // Opcode: INSVE_D
/* 9906 */    MCD::OPC_FilterValue, 26, 163, 1, // Skip to: 10329
/* 9910 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 9913 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9926
/* 9917 */    MCD::OPC_CheckPredicate, 25, 107, 19, // Skip to: 14892
/* 9921 */    MCD::OPC_Decode, 175, 8, 131, 2, // Opcode: FCAF_W
/* 9926 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 9939
/* 9930 */    MCD::OPC_CheckPredicate, 25, 94, 19, // Skip to: 14892
/* 9934 */    MCD::OPC_Decode, 174, 8, 132, 2, // Opcode: FCAF_D
/* 9939 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 9952
/* 9943 */    MCD::OPC_CheckPredicate, 25, 81, 19, // Skip to: 14892
/* 9947 */    MCD::OPC_Decode, 202, 8, 131, 2, // Opcode: FCUN_W
/* 9952 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 9965
/* 9956 */    MCD::OPC_CheckPredicate, 25, 68, 19, // Skip to: 14892
/* 9960 */    MCD::OPC_Decode, 201, 8, 132, 2, // Opcode: FCUN_D
/* 9965 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9978
/* 9969 */    MCD::OPC_CheckPredicate, 25, 55, 19, // Skip to: 14892
/* 9973 */    MCD::OPC_Decode, 177, 8, 131, 2, // Opcode: FCEQ_W
/* 9978 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 9991
/* 9982 */    MCD::OPC_CheckPredicate, 25, 42, 19, // Skip to: 14892
/* 9986 */    MCD::OPC_Decode, 176, 8, 132, 2, // Opcode: FCEQ_D
/* 9991 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10004
/* 9995 */    MCD::OPC_CheckPredicate, 25, 29, 19, // Skip to: 14892
/* 9999 */    MCD::OPC_Decode, 194, 8, 131, 2, // Opcode: FCUEQ_W
/* 10004 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10017
/* 10008 */   MCD::OPC_CheckPredicate, 25, 16, 19, // Skip to: 14892
/* 10012 */   MCD::OPC_Decode, 193, 8, 132, 2, // Opcode: FCUEQ_D
/* 10017 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 10030
/* 10021 */   MCD::OPC_CheckPredicate, 25, 3, 19, // Skip to: 14892
/* 10025 */   MCD::OPC_Decode, 183, 8, 131, 2, // Opcode: FCLT_W
/* 10030 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10043
/* 10034 */   MCD::OPC_CheckPredicate, 25, 246, 18, // Skip to: 14892
/* 10038 */   MCD::OPC_Decode, 182, 8, 132, 2, // Opcode: FCLT_D
/* 10043 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 10056
/* 10047 */   MCD::OPC_CheckPredicate, 25, 233, 18, // Skip to: 14892
/* 10051 */   MCD::OPC_Decode, 198, 8, 131, 2, // Opcode: FCULT_W
/* 10056 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10069
/* 10060 */   MCD::OPC_CheckPredicate, 25, 220, 18, // Skip to: 14892
/* 10064 */   MCD::OPC_Decode, 197, 8, 132, 2, // Opcode: FCULT_D
/* 10069 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 10082
/* 10073 */   MCD::OPC_CheckPredicate, 25, 207, 18, // Skip to: 14892
/* 10077 */   MCD::OPC_Decode, 181, 8, 131, 2, // Opcode: FCLE_W
/* 10082 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 10095
/* 10086 */   MCD::OPC_CheckPredicate, 25, 194, 18, // Skip to: 14892
/* 10090 */   MCD::OPC_Decode, 180, 8, 132, 2, // Opcode: FCLE_D
/* 10095 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 10108
/* 10099 */   MCD::OPC_CheckPredicate, 25, 181, 18, // Skip to: 14892
/* 10103 */   MCD::OPC_Decode, 196, 8, 131, 2, // Opcode: FCULE_W
/* 10108 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 10121
/* 10112 */   MCD::OPC_CheckPredicate, 25, 168, 18, // Skip to: 14892
/* 10116 */   MCD::OPC_Decode, 195, 8, 132, 2, // Opcode: FCULE_D
/* 10121 */   MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 10134
/* 10125 */   MCD::OPC_CheckPredicate, 25, 155, 18, // Skip to: 14892
/* 10129 */   MCD::OPC_Decode, 163, 9, 131, 2, // Opcode: FSAF_W
/* 10134 */   MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 10147
/* 10138 */   MCD::OPC_CheckPredicate, 25, 142, 18, // Skip to: 14892
/* 10142 */   MCD::OPC_Decode, 162, 9, 132, 2, // Opcode: FSAF_D
/* 10147 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 10160
/* 10151 */   MCD::OPC_CheckPredicate, 25, 129, 18, // Skip to: 14892
/* 10155 */   MCD::OPC_Decode, 199, 9, 131, 2, // Opcode: FSUN_W
/* 10160 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 10173
/* 10164 */   MCD::OPC_CheckPredicate, 25, 116, 18, // Skip to: 14892
/* 10168 */   MCD::OPC_Decode, 198, 9, 132, 2, // Opcode: FSUN_D
/* 10173 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 10186
/* 10177 */   MCD::OPC_CheckPredicate, 25, 103, 18, // Skip to: 14892
/* 10181 */   MCD::OPC_Decode, 165, 9, 131, 2, // Opcode: FSEQ_W
/* 10186 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 10199
/* 10190 */   MCD::OPC_CheckPredicate, 25, 90, 18, // Skip to: 14892
/* 10194 */   MCD::OPC_Decode, 164, 9, 132, 2, // Opcode: FSEQ_D
/* 10199 */   MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 10212
/* 10203 */   MCD::OPC_CheckPredicate, 25, 77, 18, // Skip to: 14892
/* 10207 */   MCD::OPC_Decode, 191, 9, 131, 2, // Opcode: FSUEQ_W
/* 10212 */   MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 10225
/* 10216 */   MCD::OPC_CheckPredicate, 25, 64, 18, // Skip to: 14892
/* 10220 */   MCD::OPC_Decode, 190, 9, 132, 2, // Opcode: FSUEQ_D
/* 10225 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 10238
/* 10229 */   MCD::OPC_CheckPredicate, 25, 51, 18, // Skip to: 14892
/* 10233 */   MCD::OPC_Decode, 169, 9, 131, 2, // Opcode: FSLT_W
/* 10238 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 10251
/* 10242 */   MCD::OPC_CheckPredicate, 25, 38, 18, // Skip to: 14892
/* 10246 */   MCD::OPC_Decode, 168, 9, 132, 2, // Opcode: FSLT_D
/* 10251 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 10264
/* 10255 */   MCD::OPC_CheckPredicate, 25, 25, 18, // Skip to: 14892
/* 10259 */   MCD::OPC_Decode, 195, 9, 131, 2, // Opcode: FSULT_W
/* 10264 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 10277
/* 10268 */   MCD::OPC_CheckPredicate, 25, 12, 18, // Skip to: 14892
/* 10272 */   MCD::OPC_Decode, 194, 9, 132, 2, // Opcode: FSULT_D
/* 10277 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 10290
/* 10281 */   MCD::OPC_CheckPredicate, 25, 255, 17, // Skip to: 14892
/* 10285 */   MCD::OPC_Decode, 167, 9, 131, 2, // Opcode: FSLE_W
/* 10290 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 10303
/* 10294 */   MCD::OPC_CheckPredicate, 25, 242, 17, // Skip to: 14892
/* 10298 */   MCD::OPC_Decode, 166, 9, 132, 2, // Opcode: FSLE_D
/* 10303 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 10316
/* 10307 */   MCD::OPC_CheckPredicate, 25, 229, 17, // Skip to: 14892
/* 10311 */   MCD::OPC_Decode, 193, 9, 131, 2, // Opcode: FSULE_W
/* 10316 */   MCD::OPC_FilterValue, 31, 220, 17, // Skip to: 14892
/* 10320 */   MCD::OPC_CheckPredicate, 25, 216, 17, // Skip to: 14892
/* 10324 */   MCD::OPC_Decode, 192, 9, 132, 2, // Opcode: FSULE_D
/* 10329 */   MCD::OPC_FilterValue, 27, 85, 1, // Skip to: 10674
/* 10333 */   MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 10336 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 10349
/* 10340 */   MCD::OPC_CheckPredicate, 25, 196, 17, // Skip to: 14892
/* 10344 */   MCD::OPC_Decode, 173, 8, 131, 2, // Opcode: FADD_W
/* 10349 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 10362
/* 10353 */   MCD::OPC_CheckPredicate, 25, 183, 17, // Skip to: 14892
/* 10357 */   MCD::OPC_Decode, 165, 8, 132, 2, // Opcode: FADD_D
/* 10362 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10375
/* 10366 */   MCD::OPC_CheckPredicate, 25, 170, 17, // Skip to: 14892
/* 10370 */   MCD::OPC_Decode, 189, 9, 131, 2, // Opcode: FSUB_W
/* 10375 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10388
/* 10379 */   MCD::OPC_CheckPredicate, 25, 157, 17, // Skip to: 14892
/* 10383 */   MCD::OPC_Decode, 181, 9, 132, 2, // Opcode: FSUB_D
/* 10388 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10401
/* 10392 */   MCD::OPC_CheckPredicate, 25, 144, 17, // Skip to: 14892
/* 10396 */   MCD::OPC_Decode, 148, 9, 131, 2, // Opcode: FMUL_W
/* 10401 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10414
/* 10405 */   MCD::OPC_CheckPredicate, 25, 131, 17, // Skip to: 14892
/* 10409 */   MCD::OPC_Decode, 140, 9, 132, 2, // Opcode: FMUL_D
/* 10414 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10427
/* 10418 */   MCD::OPC_CheckPredicate, 25, 118, 17, // Skip to: 14892
/* 10422 */   MCD::OPC_Decode, 211, 8, 131, 2, // Opcode: FDIV_W
/* 10427 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10440
/* 10431 */   MCD::OPC_CheckPredicate, 25, 105, 17, // Skip to: 14892
/* 10435 */   MCD::OPC_Decode, 203, 8, 132, 2, // Opcode: FDIV_D
/* 10440 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 10453
/* 10444 */   MCD::OPC_CheckPredicate, 25, 92, 17, // Skip to: 14892
/* 10448 */   MCD::OPC_Decode, 250, 8, 135, 2, // Opcode: FMADD_W
/* 10453 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10466
/* 10457 */   MCD::OPC_CheckPredicate, 25, 79, 17, // Skip to: 14892
/* 10461 */   MCD::OPC_Decode, 249, 8, 136, 2, // Opcode: FMADD_D
/* 10466 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 10479
/* 10470 */   MCD::OPC_CheckPredicate, 25, 66, 17, // Skip to: 14892
/* 10474 */   MCD::OPC_Decode, 139, 9, 135, 2, // Opcode: FMSUB_W
/* 10479 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10492
/* 10483 */   MCD::OPC_CheckPredicate, 25, 53, 17, // Skip to: 14892
/* 10487 */   MCD::OPC_Decode, 138, 9, 136, 2, // Opcode: FMSUB_D
/* 10492 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 10505
/* 10496 */   MCD::OPC_CheckPredicate, 25, 40, 17, // Skip to: 14892
/* 10500 */   MCD::OPC_Decode, 216, 8, 131, 2, // Opcode: FEXP2_W
/* 10505 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 10518
/* 10509 */   MCD::OPC_CheckPredicate, 25, 27, 17, // Skip to: 14892
/* 10513 */   MCD::OPC_Decode, 214, 8, 132, 2, // Opcode: FEXP2_D
/* 10518 */   MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 10531
/* 10522 */   MCD::OPC_CheckPredicate, 25, 14, 17, // Skip to: 14892
/* 10526 */   MCD::OPC_Decode, 212, 8, 171, 2, // Opcode: FEXDO_H
/* 10531 */   MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 10544
/* 10535 */   MCD::OPC_CheckPredicate, 25, 1, 17, // Skip to: 14892
/* 10539 */   MCD::OPC_Decode, 213, 8, 172, 2, // Opcode: FEXDO_W
/* 10544 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 10557
/* 10548 */   MCD::OPC_CheckPredicate, 25, 244, 16, // Skip to: 14892
/* 10552 */   MCD::OPC_Decode, 204, 9, 171, 2, // Opcode: FTQ_H
/* 10557 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 10570
/* 10561 */   MCD::OPC_CheckPredicate, 25, 231, 16, // Skip to: 14892
/* 10565 */   MCD::OPC_Decode, 205, 9, 172, 2, // Opcode: FTQ_W
/* 10570 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 10583
/* 10574 */   MCD::OPC_CheckPredicate, 25, 218, 16, // Skip to: 14892
/* 10578 */   MCD::OPC_Decode, 130, 9, 131, 2, // Opcode: FMIN_W
/* 10583 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 10596
/* 10587 */   MCD::OPC_CheckPredicate, 25, 205, 16, // Skip to: 14892
/* 10591 */   MCD::OPC_Decode, 129, 9, 132, 2, // Opcode: FMIN_D
/* 10596 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 10609
/* 10600 */   MCD::OPC_CheckPredicate, 25, 192, 16, // Skip to: 14892
/* 10604 */   MCD::OPC_Decode, 128, 9, 131, 2, // Opcode: FMIN_A_W
/* 10609 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 10622
/* 10613 */   MCD::OPC_CheckPredicate, 25, 179, 16, // Skip to: 14892
/* 10617 */   MCD::OPC_Decode, 255, 8, 132, 2, // Opcode: FMIN_A_D
/* 10622 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 10635
/* 10626 */   MCD::OPC_CheckPredicate, 25, 166, 16, // Skip to: 14892
/* 10630 */   MCD::OPC_Decode, 254, 8, 131, 2, // Opcode: FMAX_W
/* 10635 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 10648
/* 10639 */   MCD::OPC_CheckPredicate, 25, 153, 16, // Skip to: 14892
/* 10643 */   MCD::OPC_Decode, 253, 8, 132, 2, // Opcode: FMAX_D
/* 10648 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 10661
/* 10652 */   MCD::OPC_CheckPredicate, 25, 140, 16, // Skip to: 14892
/* 10656 */   MCD::OPC_Decode, 252, 8, 131, 2, // Opcode: FMAX_A_W
/* 10661 */   MCD::OPC_FilterValue, 31, 131, 16, // Skip to: 14892
/* 10665 */   MCD::OPC_CheckPredicate, 25, 127, 16, // Skip to: 14892
/* 10669 */   MCD::OPC_Decode, 251, 8, 132, 2, // Opcode: FMAX_A_D
/* 10674 */   MCD::OPC_FilterValue, 28, 59, 1, // Skip to: 10993
/* 10678 */   MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 10681 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10694
/* 10685 */   MCD::OPC_CheckPredicate, 25, 107, 16, // Skip to: 14892
/* 10689 */   MCD::OPC_Decode, 192, 8, 131, 2, // Opcode: FCOR_W
/* 10694 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10707
/* 10698 */   MCD::OPC_CheckPredicate, 25, 94, 16, // Skip to: 14892
/* 10702 */   MCD::OPC_Decode, 191, 8, 132, 2, // Opcode: FCOR_D
/* 10707 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10720
/* 10711 */   MCD::OPC_CheckPredicate, 25, 81, 16, // Skip to: 14892
/* 10715 */   MCD::OPC_Decode, 200, 8, 131, 2, // Opcode: FCUNE_W
/* 10720 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10733
/* 10724 */   MCD::OPC_CheckPredicate, 25, 68, 16, // Skip to: 14892
/* 10728 */   MCD::OPC_Decode, 199, 8, 132, 2, // Opcode: FCUNE_D
/* 10733 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10746
/* 10737 */   MCD::OPC_CheckPredicate, 25, 55, 16, // Skip to: 14892
/* 10741 */   MCD::OPC_Decode, 190, 8, 131, 2, // Opcode: FCNE_W
/* 10746 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10759
/* 10750 */   MCD::OPC_CheckPredicate, 25, 42, 16, // Skip to: 14892
/* 10754 */   MCD::OPC_Decode, 189, 8, 132, 2, // Opcode: FCNE_D
/* 10759 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 10772
/* 10763 */   MCD::OPC_CheckPredicate, 25, 29, 16, // Skip to: 14892
/* 10767 */   MCD::OPC_Decode, 229, 13, 130, 2, // Opcode: MUL_Q_H
/* 10772 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10785
/* 10776 */   MCD::OPC_CheckPredicate, 25, 16, 16, // Skip to: 14892
/* 10780 */   MCD::OPC_Decode, 230, 13, 131, 2, // Opcode: MUL_Q_W
/* 10785 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 10798
/* 10789 */   MCD::OPC_CheckPredicate, 25, 3, 16, // Skip to: 14892
/* 10793 */   MCD::OPC_Decode, 225, 11, 134, 2, // Opcode: MADD_Q_H
/* 10798 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10811
/* 10802 */   MCD::OPC_CheckPredicate, 25, 246, 15, // Skip to: 14892
/* 10806 */   MCD::OPC_Decode, 226, 11, 135, 2, // Opcode: MADD_Q_W
/* 10811 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 10824
/* 10815 */   MCD::OPC_CheckPredicate, 25, 233, 15, // Skip to: 14892
/* 10819 */   MCD::OPC_Decode, 148, 13, 134, 2, // Opcode: MSUB_Q_H
/* 10824 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 10837
/* 10828 */   MCD::OPC_CheckPredicate, 25, 220, 15, // Skip to: 14892
/* 10832 */   MCD::OPC_Decode, 149, 13, 135, 2, // Opcode: MSUB_Q_W
/* 10837 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 10850
/* 10841 */   MCD::OPC_CheckPredicate, 25, 207, 15, // Skip to: 14892
/* 10845 */   MCD::OPC_Decode, 173, 9, 131, 2, // Opcode: FSOR_W
/* 10850 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 10863
/* 10854 */   MCD::OPC_CheckPredicate, 25, 194, 15, // Skip to: 14892
/* 10858 */   MCD::OPC_Decode, 172, 9, 132, 2, // Opcode: FSOR_D
/* 10863 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 10876
/* 10867 */   MCD::OPC_CheckPredicate, 25, 181, 15, // Skip to: 14892
/* 10871 */   MCD::OPC_Decode, 197, 9, 131, 2, // Opcode: FSUNE_W
/* 10876 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 10889
/* 10880 */   MCD::OPC_CheckPredicate, 25, 168, 15, // Skip to: 14892
/* 10884 */   MCD::OPC_Decode, 196, 9, 132, 2, // Opcode: FSUNE_D
/* 10889 */   MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 10902
/* 10893 */   MCD::OPC_CheckPredicate, 25, 155, 15, // Skip to: 14892
/* 10897 */   MCD::OPC_Decode, 171, 9, 131, 2, // Opcode: FSNE_W
/* 10902 */   MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 10915
/* 10906 */   MCD::OPC_CheckPredicate, 25, 142, 15, // Skip to: 14892
/* 10910 */   MCD::OPC_Decode, 170, 9, 132, 2, // Opcode: FSNE_D
/* 10915 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 10928
/* 10919 */   MCD::OPC_CheckPredicate, 25, 129, 15, // Skip to: 14892
/* 10923 */   MCD::OPC_Decode, 205, 13, 130, 2, // Opcode: MULR_Q_H
/* 10928 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 10941
/* 10932 */   MCD::OPC_CheckPredicate, 25, 116, 15, // Skip to: 14892
/* 10936 */   MCD::OPC_Decode, 206, 13, 131, 2, // Opcode: MULR_Q_W
/* 10941 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 10954
/* 10945 */   MCD::OPC_CheckPredicate, 25, 103, 15, // Skip to: 14892
/* 10949 */   MCD::OPC_Decode, 209, 11, 134, 2, // Opcode: MADDR_Q_H
/* 10954 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 10967
/* 10958 */   MCD::OPC_CheckPredicate, 25, 90, 15, // Skip to: 14892
/* 10962 */   MCD::OPC_Decode, 210, 11, 135, 2, // Opcode: MADDR_Q_W
/* 10967 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 10980
/* 10971 */   MCD::OPC_CheckPredicate, 25, 77, 15, // Skip to: 14892
/* 10975 */   MCD::OPC_Decode, 132, 13, 134, 2, // Opcode: MSUBR_Q_H
/* 10980 */   MCD::OPC_FilterValue, 29, 68, 15, // Skip to: 14892
/* 10984 */   MCD::OPC_CheckPredicate, 25, 64, 15, // Skip to: 14892
/* 10988 */   MCD::OPC_Decode, 133, 13, 135, 2, // Opcode: MSUBR_Q_W
/* 10993 */   MCD::OPC_FilterValue, 30, 220, 2, // Skip to: 11729
/* 10997 */   MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 11000 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11013
/* 11004 */   MCD::OPC_CheckPredicate, 25, 44, 15, // Skip to: 14892
/* 11008 */   MCD::OPC_Decode, 181, 1, 129, 2, // Opcode: AND_V
/* 11013 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 11026
/* 11017 */   MCD::OPC_CheckPredicate, 25, 31, 15, // Skip to: 14892
/* 11021 */   MCD::OPC_Decode, 155, 14, 129, 2, // Opcode: OR_V
/* 11026 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 11039
/* 11030 */   MCD::OPC_CheckPredicate, 25, 18, 15, // Skip to: 14892
/* 11034 */   MCD::OPC_Decode, 139, 14, 129, 2, // Opcode: NOR_V
/* 11039 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 11052
/* 11043 */   MCD::OPC_CheckPredicate, 25, 5, 15, // Skip to: 14892
/* 11047 */   MCD::OPC_Decode, 180, 19, 129, 2, // Opcode: XOR_V
/* 11052 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11065
/* 11056 */   MCD::OPC_CheckPredicate, 25, 248, 14, // Skip to: 14892
/* 11060 */   MCD::OPC_Decode, 165, 3, 133, 2, // Opcode: BMNZ_V
/* 11065 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11078
/* 11069 */   MCD::OPC_CheckPredicate, 25, 235, 14, // Skip to: 14892
/* 11073 */   MCD::OPC_Decode, 167, 3, 133, 2, // Opcode: BMZ_V
/* 11078 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 11091
/* 11082 */   MCD::OPC_CheckPredicate, 25, 222, 14, // Skip to: 14892
/* 11086 */   MCD::OPC_Decode, 214, 3, 133, 2, // Opcode: BSEL_V
/* 11091 */   MCD::OPC_FilterValue, 24, 211, 0, // Skip to: 11306
/* 11095 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 11098 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11111
/* 11102 */   MCD::OPC_CheckPredicate, 25, 202, 14, // Skip to: 14892
/* 11106 */   MCD::OPC_Decode, 230, 8, 173, 2, // Opcode: FILL_B
/* 11111 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 11124
/* 11115 */   MCD::OPC_CheckPredicate, 25, 189, 14, // Skip to: 14892
/* 11119 */   MCD::OPC_Decode, 234, 8, 174, 2, // Opcode: FILL_H
/* 11124 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 11137
/* 11128 */   MCD::OPC_CheckPredicate, 25, 176, 14, // Skip to: 14892
/* 11132 */   MCD::OPC_Decode, 235, 8, 175, 2, // Opcode: FILL_W
/* 11137 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 11150
/* 11141 */   MCD::OPC_CheckPredicate, 32, 163, 14, // Skip to: 14892
/* 11145 */   MCD::OPC_Decode, 231, 8, 176, 2, // Opcode: FILL_D
/* 11150 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11163
/* 11154 */   MCD::OPC_CheckPredicate, 25, 150, 14, // Skip to: 14892
/* 11158 */   MCD::OPC_Decode, 176, 14, 165, 2, // Opcode: PCNT_B
/* 11163 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11176
/* 11167 */   MCD::OPC_CheckPredicate, 25, 137, 14, // Skip to: 14892
/* 11171 */   MCD::OPC_Decode, 178, 14, 177, 2, // Opcode: PCNT_H
/* 11176 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 11189
/* 11180 */   MCD::OPC_CheckPredicate, 25, 124, 14, // Skip to: 14892
/* 11184 */   MCD::OPC_Decode, 179, 14, 178, 2, // Opcode: PCNT_W
/* 11189 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 11202
/* 11193 */   MCD::OPC_CheckPredicate, 25, 111, 14, // Skip to: 14892
/* 11197 */   MCD::OPC_Decode, 177, 14, 179, 2, // Opcode: PCNT_D
/* 11202 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 11215
/* 11206 */   MCD::OPC_CheckPredicate, 25, 98, 14, // Skip to: 14892
/* 11210 */   MCD::OPC_Decode, 242, 13, 165, 2, // Opcode: NLOC_B
/* 11215 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 11228
/* 11219 */   MCD::OPC_CheckPredicate, 25, 85, 14, // Skip to: 14892
/* 11223 */   MCD::OPC_Decode, 244, 13, 177, 2, // Opcode: NLOC_H
/* 11228 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 11241
/* 11232 */   MCD::OPC_CheckPredicate, 25, 72, 14, // Skip to: 14892
/* 11236 */   MCD::OPC_Decode, 245, 13, 178, 2, // Opcode: NLOC_W
/* 11241 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 11254
/* 11245 */   MCD::OPC_CheckPredicate, 25, 59, 14, // Skip to: 14892
/* 11249 */   MCD::OPC_Decode, 243, 13, 179, 2, // Opcode: NLOC_D
/* 11254 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 11267
/* 11258 */   MCD::OPC_CheckPredicate, 25, 46, 14, // Skip to: 14892
/* 11262 */   MCD::OPC_Decode, 246, 13, 165, 2, // Opcode: NLZC_B
/* 11267 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 11280
/* 11271 */   MCD::OPC_CheckPredicate, 25, 33, 14, // Skip to: 14892
/* 11275 */   MCD::OPC_Decode, 248, 13, 177, 2, // Opcode: NLZC_H
/* 11280 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 11293
/* 11284 */   MCD::OPC_CheckPredicate, 25, 20, 14, // Skip to: 14892
/* 11288 */   MCD::OPC_Decode, 249, 13, 178, 2, // Opcode: NLZC_W
/* 11293 */   MCD::OPC_FilterValue, 15, 11, 14, // Skip to: 14892
/* 11297 */   MCD::OPC_CheckPredicate, 25, 7, 14, // Skip to: 14892
/* 11301 */   MCD::OPC_Decode, 247, 13, 179, 2, // Opcode: NLZC_D
/* 11306 */   MCD::OPC_FilterValue, 25, 254, 13, // Skip to: 14892
/* 11310 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 11313 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11326
/* 11317 */   MCD::OPC_CheckPredicate, 25, 243, 13, // Skip to: 14892
/* 11321 */   MCD::OPC_Decode, 179, 8, 178, 2, // Opcode: FCLASS_W
/* 11326 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 11339
/* 11330 */   MCD::OPC_CheckPredicate, 25, 230, 13, // Skip to: 14892
/* 11334 */   MCD::OPC_Decode, 178, 8, 179, 2, // Opcode: FCLASS_D
/* 11339 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 11352
/* 11343 */   MCD::OPC_CheckPredicate, 25, 217, 13, // Skip to: 14892
/* 11347 */   MCD::OPC_Decode, 207, 9, 178, 2, // Opcode: FTRUNC_S_W
/* 11352 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 11365
/* 11356 */   MCD::OPC_CheckPredicate, 25, 204, 13, // Skip to: 14892
/* 11360 */   MCD::OPC_Decode, 206, 9, 179, 2, // Opcode: FTRUNC_S_D
/* 11365 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11378
/* 11369 */   MCD::OPC_CheckPredicate, 25, 191, 13, // Skip to: 14892
/* 11373 */   MCD::OPC_Decode, 209, 9, 178, 2, // Opcode: FTRUNC_U_W
/* 11378 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11391
/* 11382 */   MCD::OPC_CheckPredicate, 25, 178, 13, // Skip to: 14892
/* 11386 */   MCD::OPC_Decode, 208, 9, 179, 2, // Opcode: FTRUNC_U_D
/* 11391 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 11404
/* 11395 */   MCD::OPC_CheckPredicate, 25, 165, 13, // Skip to: 14892
/* 11399 */   MCD::OPC_Decode, 180, 9, 178, 2, // Opcode: FSQRT_W
/* 11404 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 11417
/* 11408 */   MCD::OPC_CheckPredicate, 25, 152, 13, // Skip to: 14892
/* 11412 */   MCD::OPC_Decode, 174, 9, 179, 2, // Opcode: FSQRT_D
/* 11417 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 11430
/* 11421 */   MCD::OPC_CheckPredicate, 25, 139, 13, // Skip to: 14892
/* 11425 */   MCD::OPC_Decode, 161, 9, 178, 2, // Opcode: FRSQRT_W
/* 11430 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 11443
/* 11434 */   MCD::OPC_CheckPredicate, 25, 126, 13, // Skip to: 14892
/* 11438 */   MCD::OPC_Decode, 160, 9, 179, 2, // Opcode: FRSQRT_D
/* 11443 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 11456
/* 11447 */   MCD::OPC_CheckPredicate, 25, 113, 13, // Skip to: 14892
/* 11451 */   MCD::OPC_Decode, 157, 9, 178, 2, // Opcode: FRCP_W
/* 11456 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 11469
/* 11460 */   MCD::OPC_CheckPredicate, 25, 100, 13, // Skip to: 14892
/* 11464 */   MCD::OPC_Decode, 156, 9, 179, 2, // Opcode: FRCP_D
/* 11469 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 11482
/* 11473 */   MCD::OPC_CheckPredicate, 25, 87, 13, // Skip to: 14892
/* 11477 */   MCD::OPC_Decode, 159, 9, 178, 2, // Opcode: FRINT_W
/* 11482 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 11495
/* 11486 */   MCD::OPC_CheckPredicate, 25, 74, 13, // Skip to: 14892
/* 11490 */   MCD::OPC_Decode, 158, 9, 179, 2, // Opcode: FRINT_D
/* 11495 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 11508
/* 11499 */   MCD::OPC_CheckPredicate, 25, 61, 13, // Skip to: 14892
/* 11503 */   MCD::OPC_Decode, 237, 8, 178, 2, // Opcode: FLOG2_W
/* 11508 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 11521
/* 11512 */   MCD::OPC_CheckPredicate, 25, 48, 13, // Skip to: 14892
/* 11516 */   MCD::OPC_Decode, 236, 8, 179, 2, // Opcode: FLOG2_D
/* 11521 */   MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 11534
/* 11525 */   MCD::OPC_CheckPredicate, 25, 35, 13, // Skip to: 14892
/* 11529 */   MCD::OPC_Decode, 219, 8, 180, 2, // Opcode: FEXUPL_W
/* 11534 */   MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 11547
/* 11538 */   MCD::OPC_CheckPredicate, 25, 22, 13, // Skip to: 14892
/* 11542 */   MCD::OPC_Decode, 218, 8, 181, 2, // Opcode: FEXUPL_D
/* 11547 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 11560
/* 11551 */   MCD::OPC_CheckPredicate, 25, 9, 13, // Skip to: 14892
/* 11555 */   MCD::OPC_Decode, 221, 8, 180, 2, // Opcode: FEXUPR_W
/* 11560 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 11573
/* 11564 */   MCD::OPC_CheckPredicate, 25, 252, 12, // Skip to: 14892
/* 11568 */   MCD::OPC_Decode, 220, 8, 181, 2, // Opcode: FEXUPR_D
/* 11573 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 11586
/* 11577 */   MCD::OPC_CheckPredicate, 25, 239, 12, // Skip to: 14892
/* 11581 */   MCD::OPC_Decode, 227, 8, 180, 2, // Opcode: FFQL_W
/* 11586 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 11599
/* 11590 */   MCD::OPC_CheckPredicate, 25, 226, 12, // Skip to: 14892
/* 11594 */   MCD::OPC_Decode, 226, 8, 181, 2, // Opcode: FFQL_D
/* 11599 */   MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 11612
/* 11603 */   MCD::OPC_CheckPredicate, 25, 213, 12, // Skip to: 14892
/* 11607 */   MCD::OPC_Decode, 229, 8, 180, 2, // Opcode: FFQR_W
/* 11612 */   MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 11625
/* 11616 */   MCD::OPC_CheckPredicate, 25, 200, 12, // Skip to: 14892
/* 11620 */   MCD::OPC_Decode, 228, 8, 181, 2, // Opcode: FFQR_D
/* 11625 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 11638
/* 11629 */   MCD::OPC_CheckPredicate, 25, 187, 12, // Skip to: 14892
/* 11633 */   MCD::OPC_Decode, 201, 9, 178, 2, // Opcode: FTINT_S_W
/* 11638 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 11651
/* 11642 */   MCD::OPC_CheckPredicate, 25, 174, 12, // Skip to: 14892
/* 11646 */   MCD::OPC_Decode, 200, 9, 179, 2, // Opcode: FTINT_S_D
/* 11651 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 11664
/* 11655 */   MCD::OPC_CheckPredicate, 25, 161, 12, // Skip to: 14892
/* 11659 */   MCD::OPC_Decode, 203, 9, 178, 2, // Opcode: FTINT_U_W
/* 11664 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 11677
/* 11668 */   MCD::OPC_CheckPredicate, 25, 148, 12, // Skip to: 14892
/* 11672 */   MCD::OPC_Decode, 202, 9, 179, 2, // Opcode: FTINT_U_D
/* 11677 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 11690
/* 11681 */   MCD::OPC_CheckPredicate, 25, 135, 12, // Skip to: 14892
/* 11685 */   MCD::OPC_Decode, 223, 8, 178, 2, // Opcode: FFINT_S_W
/* 11690 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 11703
/* 11694 */   MCD::OPC_CheckPredicate, 25, 122, 12, // Skip to: 14892
/* 11698 */   MCD::OPC_Decode, 222, 8, 179, 2, // Opcode: FFINT_S_D
/* 11703 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 11716
/* 11707 */   MCD::OPC_CheckPredicate, 25, 109, 12, // Skip to: 14892
/* 11711 */   MCD::OPC_Decode, 225, 8, 178, 2, // Opcode: FFINT_U_W
/* 11716 */   MCD::OPC_FilterValue, 31, 100, 12, // Skip to: 14892
/* 11720 */   MCD::OPC_CheckPredicate, 25, 96, 12, // Skip to: 14892
/* 11724 */   MCD::OPC_Decode, 224, 8, 179, 2, // Opcode: FFINT_U_D
/* 11729 */   MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 11742
/* 11733 */   MCD::OPC_CheckPredicate, 25, 83, 12, // Skip to: 14892
/* 11737 */   MCD::OPC_Decode, 218, 10, 182, 2, // Opcode: LD_B
/* 11742 */   MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 11755
/* 11746 */   MCD::OPC_CheckPredicate, 25, 70, 12, // Skip to: 14892
/* 11750 */   MCD::OPC_Decode, 221, 10, 182, 2, // Opcode: LD_H
/* 11755 */   MCD::OPC_FilterValue, 34, 9, 0, // Skip to: 11768
/* 11759 */   MCD::OPC_CheckPredicate, 25, 57, 12, // Skip to: 14892
/* 11763 */   MCD::OPC_Decode, 223, 10, 182, 2, // Opcode: LD_W
/* 11768 */   MCD::OPC_FilterValue, 35, 9, 0, // Skip to: 11781
/* 11772 */   MCD::OPC_CheckPredicate, 25, 44, 12, // Skip to: 14892
/* 11776 */   MCD::OPC_Decode, 219, 10, 182, 2, // Opcode: LD_D
/* 11781 */   MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 11794
/* 11785 */   MCD::OPC_CheckPredicate, 25, 31, 12, // Skip to: 14892
/* 11789 */   MCD::OPC_Decode, 196, 17, 182, 2, // Opcode: ST_B
/* 11794 */   MCD::OPC_FilterValue, 37, 9, 0, // Skip to: 11807
/* 11798 */   MCD::OPC_CheckPredicate, 25, 18, 12, // Skip to: 14892
/* 11802 */   MCD::OPC_Decode, 199, 17, 182, 2, // Opcode: ST_H
/* 11807 */   MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 11820
/* 11811 */   MCD::OPC_CheckPredicate, 25, 5, 12, // Skip to: 14892
/* 11815 */   MCD::OPC_Decode, 200, 17, 182, 2, // Opcode: ST_W
/* 11820 */   MCD::OPC_FilterValue, 39, 252, 11, // Skip to: 14892
/* 11824 */   MCD::OPC_CheckPredicate, 25, 248, 11, // Skip to: 14892
/* 11828 */   MCD::OPC_Decode, 197, 17, 182, 2, // Opcode: ST_D
/* 11833 */   MCD::OPC_FilterValue, 31, 183, 10, // Skip to: 14580
/* 11837 */   MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 11840 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11853
/* 11844 */   MCD::OPC_CheckPredicate, 24, 228, 11, // Skip to: 14892
/* 11848 */   MCD::OPC_Decode, 255, 7, 183, 2, // Opcode: EXT
/* 11853 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11866
/* 11857 */   MCD::OPC_CheckPredicate, 24, 215, 11, // Skip to: 14892
/* 11861 */   MCD::OPC_Decode, 239, 9, 184, 2, // Opcode: INS
/* 11866 */   MCD::OPC_FilterValue, 10, 42, 0, // Skip to: 11912
/* 11870 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11873 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11886
/* 11877 */   MCD::OPC_CheckPredicate, 31, 195, 11, // Skip to: 14892
/* 11881 */   MCD::OPC_Decode, 178, 11, 185, 2, // Opcode: LWX
/* 11886 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11899
/* 11890 */   MCD::OPC_CheckPredicate, 31, 182, 11, // Skip to: 14892
/* 11894 */   MCD::OPC_Decode, 232, 10, 185, 2, // Opcode: LHX
/* 11899 */   MCD::OPC_FilterValue, 6, 173, 11, // Skip to: 14892
/* 11903 */   MCD::OPC_CheckPredicate, 31, 169, 11, // Skip to: 14892
/* 11907 */   MCD::OPC_Decode, 188, 10, 185, 2, // Opcode: LBUX
/* 11912 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 11931
/* 11916 */   MCD::OPC_CheckPredicate, 31, 156, 11, // Skip to: 14892
/* 11920 */   MCD::OPC_CheckField, 6, 10, 0, 150, 11, // Skip to: 14892
/* 11926 */   MCD::OPC_Decode, 130, 10, 186, 2, // Opcode: INSV
/* 11931 */   MCD::OPC_FilterValue, 16, 56, 1, // Skip to: 12247
/* 11935 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11938 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11951
/* 11942 */   MCD::OPC_CheckPredicate, 31, 130, 11, // Skip to: 14892
/* 11946 */   MCD::OPC_Decode, 137, 1, 187, 2, // Opcode: ADDU_QB
/* 11951 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 11964
/* 11955 */   MCD::OPC_CheckPredicate, 31, 117, 11, // Skip to: 14892
/* 11959 */   MCD::OPC_Decode, 241, 17, 187, 2, // Opcode: SUBU_QB
/* 11964 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11977
/* 11968 */   MCD::OPC_CheckPredicate, 31, 104, 11, // Skip to: 14892
/* 11972 */   MCD::OPC_Decode, 141, 1, 187, 2, // Opcode: ADDU_S_QB
/* 11977 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11990
/* 11981 */   MCD::OPC_CheckPredicate, 31, 91, 11, // Skip to: 14892
/* 11985 */   MCD::OPC_Decode, 245, 17, 187, 2, // Opcode: SUBU_S_QB
/* 11990 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 12003
/* 11994 */   MCD::OPC_CheckPredicate, 31, 78, 11, // Skip to: 14892
/* 11998 */   MCD::OPC_Decode, 193, 13, 187, 2, // Opcode: MULEU_S_PH_QBL
/* 12003 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 12016
/* 12007 */   MCD::OPC_CheckPredicate, 31, 65, 11, // Skip to: 14892
/* 12011 */   MCD::OPC_Decode, 195, 13, 187, 2, // Opcode: MULEU_S_PH_QBR
/* 12016 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 12029
/* 12020 */   MCD::OPC_CheckPredicate, 63, 52, 11, // Skip to: 14892
/* 12024 */   MCD::OPC_Decode, 135, 1, 187, 2, // Opcode: ADDU_PH
/* 12029 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 12042
/* 12033 */   MCD::OPC_CheckPredicate, 63, 39, 11, // Skip to: 14892
/* 12037 */   MCD::OPC_Decode, 239, 17, 187, 2, // Opcode: SUBU_PH
/* 12042 */   MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 12054
/* 12046 */   MCD::OPC_CheckPredicate, 31, 26, 11, // Skip to: 14892
/* 12050 */   MCD::OPC_Decode, 108, 187, 2, // Opcode: ADDQ_PH
/* 12054 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 12067
/* 12058 */   MCD::OPC_CheckPredicate, 31, 14, 11, // Skip to: 14892
/* 12062 */   MCD::OPC_Decode, 210, 17, 187, 2, // Opcode: SUBQ_PH
/* 12067 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 12080
/* 12071 */   MCD::OPC_CheckPredicate, 63, 1, 11, // Skip to: 14892
/* 12075 */   MCD::OPC_Decode, 139, 1, 187, 2, // Opcode: ADDU_S_PH
/* 12080 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 12093
/* 12084 */   MCD::OPC_CheckPredicate, 63, 244, 10, // Skip to: 14892
/* 12088 */   MCD::OPC_Decode, 243, 17, 187, 2, // Opcode: SUBU_S_PH
/* 12093 */   MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 12105
/* 12097 */   MCD::OPC_CheckPredicate, 31, 231, 10, // Skip to: 14892
/* 12101 */   MCD::OPC_Decode, 110, 187, 2, // Opcode: ADDQ_S_PH
/* 12105 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 12118
/* 12109 */   MCD::OPC_CheckPredicate, 31, 219, 10, // Skip to: 14892
/* 12113 */   MCD::OPC_Decode, 212, 17, 187, 2, // Opcode: SUBQ_S_PH
/* 12118 */   MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 12129
/* 12122 */   MCD::OPC_CheckPredicate, 31, 206, 10, // Skip to: 14892
/* 12126 */   MCD::OPC_Decode, 114, 49, // Opcode: ADDSC
/* 12129 */   MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 12141
/* 12133 */   MCD::OPC_CheckPredicate, 31, 195, 10, // Skip to: 14892
/* 12137 */   MCD::OPC_Decode, 151, 1, 49, // Opcode: ADDWC
/* 12141 */   MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 12153
/* 12145 */   MCD::OPC_CheckPredicate, 31, 183, 10, // Skip to: 14892
/* 12149 */   MCD::OPC_Decode, 194, 12, 49, // Opcode: MODSUB
/* 12153 */   MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 12172
/* 12157 */   MCD::OPC_CheckPredicate, 31, 171, 10, // Skip to: 14892
/* 12161 */   MCD::OPC_CheckField, 16, 5, 0, 165, 10, // Skip to: 14892
/* 12167 */   MCD::OPC_Decode, 155, 15, 188, 2, // Opcode: RADDU_W_QB
/* 12172 */   MCD::OPC_FilterValue, 22, 7, 0, // Skip to: 12183
/* 12176 */   MCD::OPC_CheckPredicate, 31, 152, 10, // Skip to: 14892
/* 12180 */   MCD::OPC_Decode, 112, 49, // Opcode: ADDQ_S_W
/* 12183 */   MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 12195
/* 12187 */   MCD::OPC_CheckPredicate, 31, 141, 10, // Skip to: 14892
/* 12191 */   MCD::OPC_Decode, 214, 17, 49, // Opcode: SUBQ_S_W
/* 12195 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 12208
/* 12199 */   MCD::OPC_CheckPredicate, 31, 129, 10, // Skip to: 14892
/* 12203 */   MCD::OPC_Decode, 189, 13, 189, 2, // Opcode: MULEQ_S_W_PHL
/* 12208 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 12221
/* 12212 */   MCD::OPC_CheckPredicate, 31, 116, 10, // Skip to: 14892
/* 12216 */   MCD::OPC_Decode, 191, 13, 189, 2, // Opcode: MULEQ_S_W_PHR
/* 12221 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 12234
/* 12225 */   MCD::OPC_CheckPredicate, 63, 103, 10, // Skip to: 14892
/* 12229 */   MCD::OPC_Decode, 201, 13, 187, 2, // Opcode: MULQ_S_PH
/* 12234 */   MCD::OPC_FilterValue, 31, 94, 10, // Skip to: 14892
/* 12238 */   MCD::OPC_CheckPredicate, 31, 90, 10, // Skip to: 14892
/* 12242 */   MCD::OPC_Decode, 197, 13, 187, 2, // Opcode: MULQ_RS_PH
/* 12247 */   MCD::OPC_FilterValue, 17, 63, 1, // Skip to: 12570
/* 12251 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12254 */   MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 12272
/* 12258 */   MCD::OPC_CheckPredicate, 31, 70, 10, // Skip to: 14892
/* 12262 */   MCD::OPC_CheckField, 11, 5, 0, 64, 10, // Skip to: 14892
/* 12268 */   MCD::OPC_Decode, 218, 4, 62, // Opcode: CMPU_EQ_QB
/* 12272 */   MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 12290
/* 12276 */   MCD::OPC_CheckPredicate, 31, 52, 10, // Skip to: 14892
/* 12280 */   MCD::OPC_CheckField, 11, 5, 0, 46, 10, // Skip to: 14892
/* 12286 */   MCD::OPC_Decode, 222, 4, 62, // Opcode: CMPU_LT_QB
/* 12290 */   MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 12308
/* 12294 */   MCD::OPC_CheckPredicate, 31, 34, 10, // Skip to: 14892
/* 12298 */   MCD::OPC_CheckField, 11, 5, 0, 28, 10, // Skip to: 14892
/* 12304 */   MCD::OPC_Decode, 220, 4, 62, // Opcode: CMPU_LE_QB
/* 12308 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 12321
/* 12312 */   MCD::OPC_CheckPredicate, 31, 16, 10, // Skip to: 14892
/* 12316 */   MCD::OPC_Decode, 182, 14, 187, 2, // Opcode: PICK_QB
/* 12321 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 12334
/* 12325 */   MCD::OPC_CheckPredicate, 31, 3, 10, // Skip to: 14892
/* 12329 */   MCD::OPC_Decode, 212, 4, 189, 2, // Opcode: CMPGU_EQ_QB
/* 12334 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 12347
/* 12338 */   MCD::OPC_CheckPredicate, 31, 246, 9, // Skip to: 14892
/* 12342 */   MCD::OPC_Decode, 216, 4, 189, 2, // Opcode: CMPGU_LT_QB
/* 12347 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 12360
/* 12351 */   MCD::OPC_CheckPredicate, 31, 233, 9, // Skip to: 14892
/* 12355 */   MCD::OPC_Decode, 214, 4, 189, 2, // Opcode: CMPGU_LE_QB
/* 12360 */   MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 12378
/* 12364 */   MCD::OPC_CheckPredicate, 31, 220, 9, // Skip to: 14892
/* 12368 */   MCD::OPC_CheckField, 11, 5, 0, 214, 9, // Skip to: 14892
/* 12374 */   MCD::OPC_Decode, 228, 4, 62, // Opcode: CMP_EQ_PH
/* 12378 */   MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 12396
/* 12382 */   MCD::OPC_CheckPredicate, 31, 202, 9, // Skip to: 14892
/* 12386 */   MCD::OPC_CheckField, 11, 5, 0, 196, 9, // Skip to: 14892
/* 12392 */   MCD::OPC_Decode, 242, 4, 62, // Opcode: CMP_LT_PH
/* 12396 */   MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 12414
/* 12400 */   MCD::OPC_CheckPredicate, 31, 184, 9, // Skip to: 14892
/* 12404 */   MCD::OPC_CheckField, 11, 5, 0, 178, 9, // Skip to: 14892
/* 12410 */   MCD::OPC_Decode, 236, 4, 62, // Opcode: CMP_LE_PH
/* 12414 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 12427
/* 12418 */   MCD::OPC_CheckPredicate, 31, 166, 9, // Skip to: 14892
/* 12422 */   MCD::OPC_Decode, 180, 14, 187, 2, // Opcode: PICK_PH
/* 12427 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 12440
/* 12431 */   MCD::OPC_CheckPredicate, 31, 153, 9, // Skip to: 14892
/* 12435 */   MCD::OPC_Decode, 209, 14, 187, 2, // Opcode: PRECRQ_QB_PH
/* 12440 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 12453
/* 12444 */   MCD::OPC_CheckPredicate, 63, 140, 9, // Skip to: 14892
/* 12448 */   MCD::OPC_Decode, 213, 14, 187, 2, // Opcode: PRECR_QB_PH
/* 12453 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 12466
/* 12457 */   MCD::OPC_CheckPredicate, 31, 127, 9, // Skip to: 14892
/* 12461 */   MCD::OPC_Decode, 163, 14, 187, 2, // Opcode: PACKRL_PH
/* 12466 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 12479
/* 12470 */   MCD::OPC_CheckPredicate, 31, 114, 9, // Skip to: 14892
/* 12474 */   MCD::OPC_Decode, 205, 14, 187, 2, // Opcode: PRECRQU_S_QB_PH
/* 12479 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 12492
/* 12483 */   MCD::OPC_CheckPredicate, 31, 101, 9, // Skip to: 14892
/* 12487 */   MCD::OPC_Decode, 207, 14, 190, 2, // Opcode: PRECRQ_PH_W
/* 12492 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 12505
/* 12496 */   MCD::OPC_CheckPredicate, 31, 88, 9, // Skip to: 14892
/* 12500 */   MCD::OPC_Decode, 211, 14, 190, 2, // Opcode: PRECRQ_RS_PH_W
/* 12505 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 12518
/* 12509 */   MCD::OPC_CheckPredicate, 63, 75, 9, // Skip to: 14892
/* 12513 */   MCD::OPC_Decode, 206, 4, 189, 2, // Opcode: CMPGDU_EQ_QB
/* 12518 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 12531
/* 12522 */   MCD::OPC_CheckPredicate, 63, 62, 9, // Skip to: 14892
/* 12526 */   MCD::OPC_Decode, 210, 4, 189, 2, // Opcode: CMPGDU_LT_QB
/* 12531 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 12544
/* 12535 */   MCD::OPC_CheckPredicate, 63, 49, 9, // Skip to: 14892
/* 12539 */   MCD::OPC_Decode, 208, 4, 189, 2, // Opcode: CMPGDU_LE_QB
/* 12544 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 12557
/* 12548 */   MCD::OPC_CheckPredicate, 63, 36, 9, // Skip to: 14892
/* 12552 */   MCD::OPC_Decode, 215, 14, 191, 2, // Opcode: PRECR_SRA_PH_W
/* 12557 */   MCD::OPC_FilterValue, 31, 27, 9, // Skip to: 14892
/* 12561 */   MCD::OPC_CheckPredicate, 63, 23, 9, // Skip to: 14892
/* 12565 */   MCD::OPC_Decode, 217, 14, 191, 2, // Opcode: PRECR_SRA_R_PH_W
/* 12570 */   MCD::OPC_FilterValue, 18, 72, 1, // Skip to: 12902
/* 12574 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12577 */   MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 12595
/* 12581 */   MCD::OPC_CheckPredicate, 63, 3, 9, // Skip to: 14892
/* 12585 */   MCD::OPC_CheckField, 21, 5, 0, 253, 8, // Skip to: 14892
/* 12591 */   MCD::OPC_Decode, 85, 192, 2, // Opcode: ABSQ_S_QB
/* 12595 */   MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 12607
/* 12599 */   MCD::OPC_CheckPredicate, 31, 241, 8, // Skip to: 14892
/* 12603 */   MCD::OPC_Decode, 174, 15, 82, // Opcode: REPL_QB
/* 12607 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 12626
/* 12611 */   MCD::OPC_CheckPredicate, 31, 229, 8, // Skip to: 14892
/* 12615 */   MCD::OPC_CheckField, 21, 5, 0, 223, 8, // Skip to: 14892
/* 12621 */   MCD::OPC_Decode, 170, 15, 193, 2, // Opcode: REPLV_QB
/* 12626 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 12645
/* 12630 */   MCD::OPC_CheckPredicate, 31, 210, 8, // Skip to: 14892
/* 12634 */   MCD::OPC_CheckField, 21, 5, 0, 204, 8, // Skip to: 14892
/* 12640 */   MCD::OPC_Decode, 185, 14, 192, 2, // Opcode: PRECEQU_PH_QBL
/* 12645 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 12664
/* 12649 */   MCD::OPC_CheckPredicate, 31, 191, 8, // Skip to: 14892
/* 12653 */   MCD::OPC_CheckField, 21, 5, 0, 185, 8, // Skip to: 14892
/* 12659 */   MCD::OPC_Decode, 189, 14, 192, 2, // Opcode: PRECEQU_PH_QBR
/* 12664 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 12683
/* 12668 */   MCD::OPC_CheckPredicate, 31, 172, 8, // Skip to: 14892
/* 12672 */   MCD::OPC_CheckField, 21, 5, 0, 166, 8, // Skip to: 14892
/* 12678 */   MCD::OPC_Decode, 186, 14, 192, 2, // Opcode: PRECEQU_PH_QBLA
/* 12683 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 12702
/* 12687 */   MCD::OPC_CheckPredicate, 31, 153, 8, // Skip to: 14892
/* 12691 */   MCD::OPC_CheckField, 21, 5, 0, 147, 8, // Skip to: 14892
/* 12697 */   MCD::OPC_Decode, 190, 14, 192, 2, // Opcode: PRECEQU_PH_QBRA
/* 12702 */   MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 12720
/* 12706 */   MCD::OPC_CheckPredicate, 31, 134, 8, // Skip to: 14892
/* 12710 */   MCD::OPC_CheckField, 21, 5, 0, 128, 8, // Skip to: 14892
/* 12716 */   MCD::OPC_Decode, 83, 192, 2, // Opcode: ABSQ_S_PH
/* 12720 */   MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 12732
/* 12724 */   MCD::OPC_CheckPredicate, 31, 116, 8, // Skip to: 14892
/* 12728 */   MCD::OPC_Decode, 172, 15, 82, // Opcode: REPL_PH
/* 12732 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 12751
/* 12736 */   MCD::OPC_CheckPredicate, 31, 104, 8, // Skip to: 14892
/* 12740 */   MCD::OPC_CheckField, 21, 5, 0, 98, 8, // Skip to: 14892
/* 12746 */   MCD::OPC_Decode, 168, 15, 193, 2, // Opcode: REPLV_PH
/* 12751 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 12770
/* 12755 */   MCD::OPC_CheckPredicate, 31, 85, 8, // Skip to: 14892
/* 12759 */   MCD::OPC_CheckField, 21, 5, 0, 79, 8, // Skip to: 14892
/* 12765 */   MCD::OPC_Decode, 193, 14, 194, 2, // Opcode: PRECEQ_W_PHL
/* 12770 */   MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 12789
/* 12774 */   MCD::OPC_CheckPredicate, 31, 66, 8, // Skip to: 14892
/* 12778 */   MCD::OPC_CheckField, 21, 5, 0, 60, 8, // Skip to: 14892
/* 12784 */   MCD::OPC_Decode, 195, 14, 194, 2, // Opcode: PRECEQ_W_PHR
/* 12789 */   MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 12807
/* 12793 */   MCD::OPC_CheckPredicate, 31, 47, 8, // Skip to: 14892
/* 12797 */   MCD::OPC_CheckField, 21, 5, 0, 41, 8, // Skip to: 14892
/* 12803 */   MCD::OPC_Decode, 87, 195, 2, // Opcode: ABSQ_S_W
/* 12807 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 12826
/* 12811 */   MCD::OPC_CheckPredicate, 31, 29, 8, // Skip to: 14892
/* 12815 */   MCD::OPC_CheckField, 21, 5, 0, 23, 8, // Skip to: 14892
/* 12821 */   MCD::OPC_Decode, 244, 2, 195, 2, // Opcode: BITREV
/* 12826 */   MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 12845
/* 12830 */   MCD::OPC_CheckPredicate, 31, 10, 8, // Skip to: 14892
/* 12834 */   MCD::OPC_CheckField, 21, 5, 0, 4, 8, // Skip to: 14892
/* 12840 */   MCD::OPC_Decode, 197, 14, 192, 2, // Opcode: PRECEU_PH_QBL
/* 12845 */   MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 12864
/* 12849 */   MCD::OPC_CheckPredicate, 31, 247, 7, // Skip to: 14892
/* 12853 */   MCD::OPC_CheckField, 21, 5, 0, 241, 7, // Skip to: 14892
/* 12859 */   MCD::OPC_Decode, 201, 14, 192, 2, // Opcode: PRECEU_PH_QBR
/* 12864 */   MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 12883
/* 12868 */   MCD::OPC_CheckPredicate, 31, 228, 7, // Skip to: 14892
/* 12872 */   MCD::OPC_CheckField, 21, 5, 0, 222, 7, // Skip to: 14892
/* 12878 */   MCD::OPC_Decode, 198, 14, 192, 2, // Opcode: PRECEU_PH_QBLA
/* 12883 */   MCD::OPC_FilterValue, 31, 213, 7, // Skip to: 14892
/* 12887 */   MCD::OPC_CheckPredicate, 31, 209, 7, // Skip to: 14892
/* 12891 */   MCD::OPC_CheckField, 21, 5, 0, 203, 7, // Skip to: 14892
/* 12897 */   MCD::OPC_Decode, 202, 14, 192, 2, // Opcode: PRECEU_PH_QBRA
/* 12902 */   MCD::OPC_FilterValue, 19, 31, 1, // Skip to: 13193
/* 12906 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12909 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 12922
/* 12913 */   MCD::OPC_CheckPredicate, 31, 183, 7, // Skip to: 14892
/* 12917 */   MCD::OPC_Decode, 185, 16, 196, 2, // Opcode: SHLL_QB
/* 12922 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 12935
/* 12926 */   MCD::OPC_CheckPredicate, 31, 170, 7, // Skip to: 14892
/* 12930 */   MCD::OPC_Decode, 217, 16, 196, 2, // Opcode: SHRL_QB
/* 12935 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 12948
/* 12939 */   MCD::OPC_CheckPredicate, 31, 157, 7, // Skip to: 14892
/* 12943 */   MCD::OPC_Decode, 177, 16, 197, 2, // Opcode: SHLLV_QB
/* 12948 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 12961
/* 12952 */   MCD::OPC_CheckPredicate, 31, 144, 7, // Skip to: 14892
/* 12956 */   MCD::OPC_Decode, 213, 16, 197, 2, // Opcode: SHRLV_QB
/* 12961 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 12974
/* 12965 */   MCD::OPC_CheckPredicate, 63, 131, 7, // Skip to: 14892
/* 12969 */   MCD::OPC_Decode, 203, 16, 196, 2, // Opcode: SHRA_QB
/* 12974 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 12987
/* 12978 */   MCD::OPC_CheckPredicate, 63, 118, 7, // Skip to: 14892
/* 12982 */   MCD::OPC_Decode, 207, 16, 196, 2, // Opcode: SHRA_R_QB
/* 12987 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 13000
/* 12991 */   MCD::OPC_CheckPredicate, 63, 105, 7, // Skip to: 14892
/* 12995 */   MCD::OPC_Decode, 193, 16, 197, 2, // Opcode: SHRAV_QB
/* 13000 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 13013
/* 13004 */   MCD::OPC_CheckPredicate, 63, 92, 7, // Skip to: 14892
/* 13008 */   MCD::OPC_Decode, 197, 16, 197, 2, // Opcode: SHRAV_R_QB
/* 13013 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 13026
/* 13017 */   MCD::OPC_CheckPredicate, 31, 79, 7, // Skip to: 14892
/* 13021 */   MCD::OPC_Decode, 183, 16, 196, 2, // Opcode: SHLL_PH
/* 13026 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 13039
/* 13030 */   MCD::OPC_CheckPredicate, 31, 66, 7, // Skip to: 14892
/* 13034 */   MCD::OPC_Decode, 201, 16, 196, 2, // Opcode: SHRA_PH
/* 13039 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 13052
/* 13043 */   MCD::OPC_CheckPredicate, 31, 53, 7, // Skip to: 14892
/* 13047 */   MCD::OPC_Decode, 175, 16, 197, 2, // Opcode: SHLLV_PH
/* 13052 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 13065
/* 13056 */   MCD::OPC_CheckPredicate, 31, 40, 7, // Skip to: 14892
/* 13060 */   MCD::OPC_Decode, 191, 16, 197, 2, // Opcode: SHRAV_PH
/* 13065 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 13078
/* 13069 */   MCD::OPC_CheckPredicate, 31, 27, 7, // Skip to: 14892
/* 13073 */   MCD::OPC_Decode, 187, 16, 196, 2, // Opcode: SHLL_S_PH
/* 13078 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 13091
/* 13082 */   MCD::OPC_CheckPredicate, 31, 14, 7, // Skip to: 14892
/* 13086 */   MCD::OPC_Decode, 205, 16, 196, 2, // Opcode: SHRA_R_PH
/* 13091 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 13104
/* 13095 */   MCD::OPC_CheckPredicate, 31, 1, 7, // Skip to: 14892
/* 13099 */   MCD::OPC_Decode, 179, 16, 197, 2, // Opcode: SHLLV_S_PH
/* 13104 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 13117
/* 13108 */   MCD::OPC_CheckPredicate, 31, 244, 6, // Skip to: 14892
/* 13112 */   MCD::OPC_Decode, 195, 16, 197, 2, // Opcode: SHRAV_R_PH
/* 13117 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 13130
/* 13121 */   MCD::OPC_CheckPredicate, 31, 231, 6, // Skip to: 14892
/* 13125 */   MCD::OPC_Decode, 189, 16, 198, 2, // Opcode: SHLL_S_W
/* 13130 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 13143
/* 13134 */   MCD::OPC_CheckPredicate, 31, 218, 6, // Skip to: 14892
/* 13138 */   MCD::OPC_Decode, 209, 16, 198, 2, // Opcode: SHRA_R_W
/* 13143 */   MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 13155
/* 13147 */   MCD::OPC_CheckPredicate, 31, 205, 6, // Skip to: 14892
/* 13151 */   MCD::OPC_Decode, 181, 16, 43, // Opcode: SHLLV_S_W
/* 13155 */   MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 13167
/* 13159 */   MCD::OPC_CheckPredicate, 31, 193, 6, // Skip to: 14892
/* 13163 */   MCD::OPC_Decode, 199, 16, 43, // Opcode: SHRAV_R_W
/* 13167 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 13180
/* 13171 */   MCD::OPC_CheckPredicate, 63, 181, 6, // Skip to: 14892
/* 13175 */   MCD::OPC_Decode, 215, 16, 196, 2, // Opcode: SHRL_PH
/* 13180 */   MCD::OPC_FilterValue, 27, 172, 6, // Skip to: 14892
/* 13184 */   MCD::OPC_CheckPredicate, 63, 168, 6, // Skip to: 14892
/* 13188 */   MCD::OPC_Decode, 211, 16, 197, 2, // Opcode: SHRLV_PH
/* 13193 */   MCD::OPC_FilterValue, 24, 201, 0, // Skip to: 13398
/* 13197 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13200 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 13213
/* 13204 */   MCD::OPC_CheckPredicate, 63, 148, 6, // Skip to: 14892
/* 13208 */   MCD::OPC_Decode, 130, 1, 187, 2, // Opcode: ADDUH_QB
/* 13213 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 13226
/* 13217 */   MCD::OPC_CheckPredicate, 63, 135, 6, // Skip to: 14892
/* 13221 */   MCD::OPC_Decode, 234, 17, 187, 2, // Opcode: SUBUH_QB
/* 13226 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 13239
/* 13230 */   MCD::OPC_CheckPredicate, 63, 122, 6, // Skip to: 14892
/* 13234 */   MCD::OPC_Decode, 132, 1, 187, 2, // Opcode: ADDUH_R_QB
/* 13239 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 13252
/* 13243 */   MCD::OPC_CheckPredicate, 63, 109, 6, // Skip to: 14892
/* 13247 */   MCD::OPC_Decode, 236, 17, 187, 2, // Opcode: SUBUH_R_QB
/* 13252 */   MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 13264
/* 13256 */   MCD::OPC_CheckPredicate, 63, 96, 6, // Skip to: 14892
/* 13260 */   MCD::OPC_Decode, 100, 187, 2, // Opcode: ADDQH_PH
/* 13264 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 13277
/* 13268 */   MCD::OPC_CheckPredicate, 63, 84, 6, // Skip to: 14892
/* 13272 */   MCD::OPC_Decode, 202, 17, 187, 2, // Opcode: SUBQH_PH
/* 13277 */   MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 13289
/* 13281 */   MCD::OPC_CheckPredicate, 63, 71, 6, // Skip to: 14892
/* 13285 */   MCD::OPC_Decode, 102, 187, 2, // Opcode: ADDQH_R_PH
/* 13289 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 13302
/* 13293 */   MCD::OPC_CheckPredicate, 63, 59, 6, // Skip to: 14892
/* 13297 */   MCD::OPC_Decode, 204, 17, 187, 2, // Opcode: SUBQH_R_PH
/* 13302 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 13315
/* 13306 */   MCD::OPC_CheckPredicate, 63, 46, 6, // Skip to: 14892
/* 13310 */   MCD::OPC_Decode, 227, 13, 187, 2, // Opcode: MUL_PH
/* 13315 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 13328
/* 13319 */   MCD::OPC_CheckPredicate, 63, 33, 6, // Skip to: 14892
/* 13323 */   MCD::OPC_Decode, 232, 13, 187, 2, // Opcode: MUL_S_PH
/* 13328 */   MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 13339
/* 13332 */   MCD::OPC_CheckPredicate, 63, 20, 6, // Skip to: 14892
/* 13336 */   MCD::OPC_Decode, 106, 49, // Opcode: ADDQH_W
/* 13339 */   MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 13351
/* 13343 */   MCD::OPC_CheckPredicate, 63, 9, 6, // Skip to: 14892
/* 13347 */   MCD::OPC_Decode, 208, 17, 49, // Opcode: SUBQH_W
/* 13351 */   MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 13362
/* 13355 */   MCD::OPC_CheckPredicate, 63, 253, 5, // Skip to: 14892
/* 13359 */   MCD::OPC_Decode, 104, 49, // Opcode: ADDQH_R_W
/* 13362 */   MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 13374
/* 13366 */   MCD::OPC_CheckPredicate, 63, 242, 5, // Skip to: 14892
/* 13370 */   MCD::OPC_Decode, 206, 17, 49, // Opcode: SUBQH_R_W
/* 13374 */   MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 13386
/* 13378 */   MCD::OPC_CheckPredicate, 63, 230, 5, // Skip to: 14892
/* 13382 */   MCD::OPC_Decode, 203, 13, 49, // Opcode: MULQ_S_W
/* 13386 */   MCD::OPC_FilterValue, 23, 222, 5, // Skip to: 14892
/* 13390 */   MCD::OPC_CheckPredicate, 63, 218, 5, // Skip to: 14892
/* 13394 */   MCD::OPC_Decode, 199, 13, 49, // Opcode: MULQ_RS_W
/* 13398 */   MCD::OPC_FilterValue, 25, 15, 0, // Skip to: 13417
/* 13402 */   MCD::OPC_CheckPredicate, 64, 206, 5, // Skip to: 14892
/* 13406 */   MCD::OPC_CheckField, 6, 1, 0, 200, 5, // Skip to: 14892
/* 13412 */   MCD::OPC_Decode, 157, 11, 199, 2, // Opcode: LWLE
/* 13417 */   MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 13436
/* 13421 */   MCD::OPC_CheckPredicate, 64, 187, 5, // Skip to: 14892
/* 13425 */   MCD::OPC_CheckField, 6, 1, 0, 181, 5, // Skip to: 14892
/* 13431 */   MCD::OPC_Decode, 170, 11, 199, 2, // Opcode: LWRE
/* 13436 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 13455
/* 13440 */   MCD::OPC_CheckPredicate, 65, 168, 5, // Skip to: 14892
/* 13444 */   MCD::OPC_CheckField, 6, 1, 0, 162, 5, // Skip to: 14892
/* 13450 */   MCD::OPC_Decode, 131, 4, 200, 2, // Opcode: CACHEE
/* 13455 */   MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 13474
/* 13459 */   MCD::OPC_CheckPredicate, 65, 149, 5, // Skip to: 14892
/* 13463 */   MCD::OPC_CheckField, 6, 1, 0, 143, 5, // Skip to: 14892
/* 13469 */   MCD::OPC_Decode, 219, 15, 199, 2, // Opcode: SBE
/* 13474 */   MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 13493
/* 13478 */   MCD::OPC_CheckPredicate, 65, 130, 5, // Skip to: 14892
/* 13482 */   MCD::OPC_CheckField, 6, 1, 0, 124, 5, // Skip to: 14892
/* 13488 */   MCD::OPC_Decode, 165, 16, 199, 2, // Opcode: SHE
/* 13493 */   MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 13512
/* 13497 */   MCD::OPC_CheckPredicate, 37, 111, 5, // Skip to: 14892
/* 13501 */   MCD::OPC_CheckField, 6, 1, 0, 105, 5, // Skip to: 14892
/* 13507 */   MCD::OPC_Decode, 229, 15, 199, 2, // Opcode: SCE
/* 13512 */   MCD::OPC_FilterValue, 31, 15, 0, // Skip to: 13531
/* 13516 */   MCD::OPC_CheckPredicate, 37, 92, 5, // Skip to: 14892
/* 13520 */   MCD::OPC_CheckField, 6, 1, 0, 86, 5, // Skip to: 14892
/* 13526 */   MCD::OPC_Decode, 144, 18, 199, 2, // Opcode: SWE
/* 13531 */   MCD::OPC_FilterValue, 32, 60, 0, // Skip to: 13595
/* 13535 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13538 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 13557
/* 13542 */   MCD::OPC_CheckPredicate, 24, 66, 5, // Skip to: 14892
/* 13546 */   MCD::OPC_CheckField, 21, 5, 0, 60, 5, // Skip to: 14892
/* 13552 */   MCD::OPC_Decode, 169, 19, 195, 2, // Opcode: WSBH
/* 13557 */   MCD::OPC_FilterValue, 16, 15, 0, // Skip to: 13576
/* 13561 */   MCD::OPC_CheckPredicate, 22, 47, 5, // Skip to: 14892
/* 13565 */   MCD::OPC_CheckField, 21, 5, 0, 41, 5, // Skip to: 14892
/* 13571 */   MCD::OPC_Decode, 131, 16, 195, 2, // Opcode: SEB
/* 13576 */   MCD::OPC_FilterValue, 24, 32, 5, // Skip to: 14892
/* 13580 */   MCD::OPC_CheckPredicate, 22, 28, 5, // Skip to: 14892
/* 13584 */   MCD::OPC_CheckField, 21, 5, 0, 22, 5, // Skip to: 14892
/* 13590 */   MCD::OPC_Decode, 135, 16, 195, 2, // Opcode: SEH
/* 13595 */   MCD::OPC_FilterValue, 33, 15, 0, // Skip to: 13614
/* 13599 */   MCD::OPC_CheckPredicate, 64, 9, 5, // Skip to: 14892
/* 13603 */   MCD::OPC_CheckField, 6, 1, 0, 3, 5, // Skip to: 14892
/* 13609 */   MCD::OPC_Decode, 149, 18, 199, 2, // Opcode: SWLE
/* 13614 */   MCD::OPC_FilterValue, 34, 15, 0, // Skip to: 13633
/* 13618 */   MCD::OPC_CheckPredicate, 64, 246, 4, // Skip to: 14892
/* 13622 */   MCD::OPC_CheckField, 6, 1, 0, 240, 4, // Skip to: 14892
/* 13628 */   MCD::OPC_Decode, 160, 18, 199, 2, // Opcode: SWRE
/* 13633 */   MCD::OPC_FilterValue, 35, 15, 0, // Skip to: 13652
/* 13637 */   MCD::OPC_CheckPredicate, 65, 227, 4, // Skip to: 14892
/* 13641 */   MCD::OPC_CheckField, 6, 1, 0, 221, 4, // Skip to: 14892
/* 13647 */   MCD::OPC_Decode, 220, 14, 200, 2, // Opcode: PREFE
/* 13652 */   MCD::OPC_FilterValue, 40, 15, 0, // Skip to: 13671
/* 13656 */   MCD::OPC_CheckPredicate, 65, 208, 4, // Skip to: 14892
/* 13660 */   MCD::OPC_CheckField, 6, 1, 0, 202, 4, // Skip to: 14892
/* 13666 */   MCD::OPC_Decode, 195, 10, 199, 2, // Opcode: LBuE
/* 13671 */   MCD::OPC_FilterValue, 41, 15, 0, // Skip to: 13690
/* 13675 */   MCD::OPC_CheckPredicate, 65, 189, 4, // Skip to: 14892
/* 13679 */   MCD::OPC_CheckField, 6, 1, 0, 183, 4, // Skip to: 14892
/* 13685 */   MCD::OPC_Decode, 237, 10, 199, 2, // Opcode: LHuE
/* 13690 */   MCD::OPC_FilterValue, 44, 15, 0, // Skip to: 13709
/* 13694 */   MCD::OPC_CheckPredicate, 65, 170, 4, // Skip to: 14892
/* 13698 */   MCD::OPC_CheckField, 6, 1, 0, 164, 4, // Skip to: 14892
/* 13704 */   MCD::OPC_Decode, 183, 10, 199, 2, // Opcode: LBE
/* 13709 */   MCD::OPC_FilterValue, 45, 15, 0, // Skip to: 13728
/* 13713 */   MCD::OPC_CheckPredicate, 65, 151, 4, // Skip to: 14892
/* 13717 */   MCD::OPC_CheckField, 6, 1, 0, 145, 4, // Skip to: 14892
/* 13723 */   MCD::OPC_Decode, 229, 10, 199, 2, // Opcode: LHE
/* 13728 */   MCD::OPC_FilterValue, 46, 15, 0, // Skip to: 13747
/* 13732 */   MCD::OPC_CheckPredicate, 37, 132, 4, // Skip to: 14892
/* 13736 */   MCD::OPC_CheckField, 6, 1, 0, 126, 4, // Skip to: 14892
/* 13742 */   MCD::OPC_Decode, 248, 10, 199, 2, // Opcode: LLE
/* 13747 */   MCD::OPC_FilterValue, 47, 15, 0, // Skip to: 13766
/* 13751 */   MCD::OPC_CheckPredicate, 37, 113, 4, // Skip to: 14892
/* 13755 */   MCD::OPC_CheckField, 6, 1, 0, 107, 4, // Skip to: 14892
/* 13761 */   MCD::OPC_Decode, 151, 11, 199, 2, // Opcode: LWE
/* 13766 */   MCD::OPC_FilterValue, 48, 165, 1, // Skip to: 14191
/* 13770 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13773 */   MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 13792
/* 13777 */   MCD::OPC_CheckPredicate, 63, 87, 4, // Skip to: 14892
/* 13781 */   MCD::OPC_CheckField, 13, 3, 0, 81, 4, // Skip to: 14892
/* 13787 */   MCD::OPC_Decode, 171, 7, 236, 1, // Opcode: DPA_W_PH
/* 13792 */   MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 13811
/* 13796 */   MCD::OPC_CheckPredicate, 63, 68, 4, // Skip to: 14892
/* 13800 */   MCD::OPC_CheckField, 13, 3, 0, 62, 4, // Skip to: 14892
/* 13806 */   MCD::OPC_Decode, 194, 7, 236, 1, // Opcode: DPS_W_PH
/* 13811 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 13830
/* 13815 */   MCD::OPC_CheckPredicate, 63, 49, 4, // Skip to: 14892
/* 13819 */   MCD::OPC_CheckField, 13, 3, 0, 43, 4, // Skip to: 14892
/* 13825 */   MCD::OPC_Decode, 209, 13, 236, 1, // Opcode: MULSA_W_PH
/* 13830 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 13849
/* 13834 */   MCD::OPC_CheckPredicate, 31, 30, 4, // Skip to: 14892
/* 13838 */   MCD::OPC_CheckField, 13, 3, 0, 24, 4, // Skip to: 14892
/* 13844 */   MCD::OPC_Decode, 165, 7, 236, 1, // Opcode: DPAU_H_QBL
/* 13849 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 13868
/* 13853 */   MCD::OPC_CheckPredicate, 31, 11, 4, // Skip to: 14892
/* 13857 */   MCD::OPC_CheckField, 13, 3, 0, 5, 4, // Skip to: 14892
/* 13863 */   MCD::OPC_Decode, 163, 7, 236, 1, // Opcode: DPAQ_S_W_PH
/* 13868 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 13887
/* 13872 */   MCD::OPC_CheckPredicate, 31, 248, 3, // Skip to: 14892
/* 13876 */   MCD::OPC_CheckField, 13, 3, 0, 242, 3, // Skip to: 14892
/* 13882 */   MCD::OPC_Decode, 180, 7, 236, 1, // Opcode: DPSQ_S_W_PH
/* 13887 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 13906
/* 13891 */   MCD::OPC_CheckPredicate, 31, 229, 3, // Skip to: 14892
/* 13895 */   MCD::OPC_CheckField, 13, 3, 0, 223, 3, // Skip to: 14892
/* 13901 */   MCD::OPC_Decode, 207, 13, 236, 1, // Opcode: MULSAQ_S_W_PH
/* 13906 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 13925
/* 13910 */   MCD::OPC_CheckPredicate, 31, 210, 3, // Skip to: 14892
/* 13914 */   MCD::OPC_CheckField, 13, 3, 0, 204, 3, // Skip to: 14892
/* 13920 */   MCD::OPC_Decode, 167, 7, 236, 1, // Opcode: DPAU_H_QBR
/* 13925 */   MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 13944
/* 13929 */   MCD::OPC_CheckPredicate, 63, 191, 3, // Skip to: 14892
/* 13933 */   MCD::OPC_CheckField, 13, 3, 0, 185, 3, // Skip to: 14892
/* 13939 */   MCD::OPC_Decode, 169, 7, 236, 1, // Opcode: DPAX_W_PH
/* 13944 */   MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 13963
/* 13948 */   MCD::OPC_CheckPredicate, 63, 172, 3, // Skip to: 14892
/* 13952 */   MCD::OPC_CheckField, 13, 3, 0, 166, 3, // Skip to: 14892
/* 13958 */   MCD::OPC_Decode, 192, 7, 236, 1, // Opcode: DPSX_W_PH
/* 13963 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 13982
/* 13967 */   MCD::OPC_CheckPredicate, 31, 153, 3, // Skip to: 14892
/* 13971 */   MCD::OPC_CheckField, 13, 3, 0, 147, 3, // Skip to: 14892
/* 13977 */   MCD::OPC_Decode, 188, 7, 236, 1, // Opcode: DPSU_H_QBL
/* 13982 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 14001
/* 13986 */   MCD::OPC_CheckPredicate, 31, 134, 3, // Skip to: 14892
/* 13990 */   MCD::OPC_CheckField, 13, 3, 0, 128, 3, // Skip to: 14892
/* 13996 */   MCD::OPC_Decode, 161, 7, 236, 1, // Opcode: DPAQ_SA_L_W
/* 14001 */   MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 14020
/* 14005 */   MCD::OPC_CheckPredicate, 31, 115, 3, // Skip to: 14892
/* 14009 */   MCD::OPC_CheckField, 13, 3, 0, 109, 3, // Skip to: 14892
/* 14015 */   MCD::OPC_Decode, 178, 7, 236, 1, // Opcode: DPSQ_SA_L_W
/* 14020 */   MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 14039
/* 14024 */   MCD::OPC_CheckPredicate, 31, 96, 3, // Skip to: 14892
/* 14028 */   MCD::OPC_CheckField, 13, 3, 0, 90, 3, // Skip to: 14892
/* 14034 */   MCD::OPC_Decode, 190, 7, 236, 1, // Opcode: DPSU_H_QBR
/* 14039 */   MCD::OPC_FilterValue, 16, 15, 0, // Skip to: 14058
/* 14043 */   MCD::OPC_CheckPredicate, 31, 77, 3, // Skip to: 14892
/* 14047 */   MCD::OPC_CheckField, 13, 3, 0, 71, 3, // Skip to: 14892
/* 14053 */   MCD::OPC_Decode, 229, 11, 236, 1, // Opcode: MAQ_SA_W_PHL
/* 14058 */   MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 14077
/* 14062 */   MCD::OPC_CheckPredicate, 31, 58, 3, // Skip to: 14892
/* 14066 */   MCD::OPC_CheckField, 13, 3, 0, 52, 3, // Skip to: 14892
/* 14072 */   MCD::OPC_Decode, 231, 11, 236, 1, // Opcode: MAQ_SA_W_PHR
/* 14077 */   MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 14096
/* 14081 */   MCD::OPC_CheckPredicate, 31, 39, 3, // Skip to: 14892
/* 14085 */   MCD::OPC_CheckField, 13, 3, 0, 33, 3, // Skip to: 14892
/* 14091 */   MCD::OPC_Decode, 233, 11, 236, 1, // Opcode: MAQ_S_W_PHL
/* 14096 */   MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 14115
/* 14100 */   MCD::OPC_CheckPredicate, 31, 20, 3, // Skip to: 14892
/* 14104 */   MCD::OPC_CheckField, 13, 3, 0, 14, 3, // Skip to: 14892
/* 14110 */   MCD::OPC_Decode, 235, 11, 236, 1, // Opcode: MAQ_S_W_PHR
/* 14115 */   MCD::OPC_FilterValue, 24, 15, 0, // Skip to: 14134
/* 14119 */   MCD::OPC_CheckPredicate, 63, 1, 3, // Skip to: 14892
/* 14123 */   MCD::OPC_CheckField, 13, 3, 0, 251, 2, // Skip to: 14892
/* 14129 */   MCD::OPC_Decode, 159, 7, 236, 1, // Opcode: DPAQX_S_W_PH
/* 14134 */   MCD::OPC_FilterValue, 25, 15, 0, // Skip to: 14153
/* 14138 */   MCD::OPC_CheckPredicate, 63, 238, 2, // Skip to: 14892
/* 14142 */   MCD::OPC_CheckField, 13, 3, 0, 232, 2, // Skip to: 14892
/* 14148 */   MCD::OPC_Decode, 176, 7, 236, 1, // Opcode: DPSQX_S_W_PH
/* 14153 */   MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 14172
/* 14157 */   MCD::OPC_CheckPredicate, 63, 219, 2, // Skip to: 14892
/* 14161 */   MCD::OPC_CheckField, 13, 3, 0, 213, 2, // Skip to: 14892
/* 14167 */   MCD::OPC_Decode, 157, 7, 236, 1, // Opcode: DPAQX_SA_W_PH
/* 14172 */   MCD::OPC_FilterValue, 27, 204, 2, // Skip to: 14892
/* 14176 */   MCD::OPC_CheckPredicate, 63, 200, 2, // Skip to: 14892
/* 14180 */   MCD::OPC_CheckField, 13, 3, 0, 194, 2, // Skip to: 14892
/* 14186 */   MCD::OPC_Decode, 174, 7, 236, 1, // Opcode: DPSQX_SA_W_PH
/* 14191 */   MCD::OPC_FilterValue, 49, 42, 0, // Skip to: 14237
/* 14195 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 14198 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 14211
/* 14202 */   MCD::OPC_CheckPredicate, 63, 174, 2, // Skip to: 14892
/* 14206 */   MCD::OPC_Decode, 188, 1, 201, 2, // Opcode: APPEND
/* 14211 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 14224
/* 14215 */   MCD::OPC_CheckPredicate, 63, 161, 2, // Skip to: 14892
/* 14219 */   MCD::OPC_Decode, 227, 14, 201, 2, // Opcode: PREPEND
/* 14224 */   MCD::OPC_FilterValue, 16, 152, 2, // Skip to: 14892
/* 14228 */   MCD::OPC_CheckPredicate, 63, 148, 2, // Skip to: 14892
/* 14232 */   MCD::OPC_Decode, 137, 2, 201, 2, // Opcode: BALIGN
/* 14237 */   MCD::OPC_FilterValue, 56, 58, 1, // Skip to: 14555
/* 14241 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 14244 */   MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 14263
/* 14248 */   MCD::OPC_CheckPredicate, 31, 128, 2, // Skip to: 14892
/* 14252 */   MCD::OPC_CheckField, 13, 3, 0, 122, 2, // Skip to: 14892
/* 14258 */   MCD::OPC_Decode, 150, 8, 202, 2, // Opcode: EXTR_W
/* 14263 */   MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 14282
/* 14267 */   MCD::OPC_CheckPredicate, 31, 109, 2, // Skip to: 14892
/* 14271 */   MCD::OPC_CheckField, 13, 3, 0, 103, 2, // Skip to: 14892
/* 14277 */   MCD::OPC_Decode, 142, 8, 203, 2, // Opcode: EXTRV_W
/* 14282 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 14301
/* 14286 */   MCD::OPC_CheckPredicate, 31, 90, 2, // Skip to: 14892
/* 14290 */   MCD::OPC_CheckField, 13, 3, 0, 84, 2, // Skip to: 14892
/* 14296 */   MCD::OPC_Decode, 128, 8, 202, 2, // Opcode: EXTP
/* 14301 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 14320
/* 14305 */   MCD::OPC_CheckPredicate, 31, 71, 2, // Skip to: 14892
/* 14309 */   MCD::OPC_CheckField, 13, 3, 0, 65, 2, // Skip to: 14892
/* 14315 */   MCD::OPC_Decode, 133, 8, 203, 2, // Opcode: EXTPV
/* 14320 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 14339
/* 14324 */   MCD::OPC_CheckPredicate, 31, 52, 2, // Skip to: 14892
/* 14328 */   MCD::OPC_CheckField, 13, 3, 0, 46, 2, // Skip to: 14892
/* 14334 */   MCD::OPC_Decode, 146, 8, 202, 2, // Opcode: EXTR_R_W
/* 14339 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 14358
/* 14343 */   MCD::OPC_CheckPredicate, 31, 33, 2, // Skip to: 14892
/* 14347 */   MCD::OPC_CheckField, 13, 3, 0, 27, 2, // Skip to: 14892
/* 14353 */   MCD::OPC_Decode, 138, 8, 203, 2, // Opcode: EXTRV_R_W
/* 14358 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 14377
/* 14362 */   MCD::OPC_CheckPredicate, 31, 14, 2, // Skip to: 14892
/* 14366 */   MCD::OPC_CheckField, 13, 3, 0, 8, 2, // Skip to: 14892
/* 14372 */   MCD::OPC_Decode, 144, 8, 202, 2, // Opcode: EXTR_RS_W
/* 14377 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 14396
/* 14381 */   MCD::OPC_CheckPredicate, 31, 251, 1, // Skip to: 14892
/* 14385 */   MCD::OPC_CheckField, 13, 3, 0, 245, 1, // Skip to: 14892
/* 14391 */   MCD::OPC_Decode, 136, 8, 203, 2, // Opcode: EXTRV_RS_W
/* 14396 */   MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 14415
/* 14400 */   MCD::OPC_CheckPredicate, 31, 232, 1, // Skip to: 14892
/* 14404 */   MCD::OPC_CheckField, 13, 3, 0, 226, 1, // Skip to: 14892
/* 14410 */   MCD::OPC_Decode, 129, 8, 202, 2, // Opcode: EXTPDP
/* 14415 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 14434
/* 14419 */   MCD::OPC_CheckPredicate, 31, 213, 1, // Skip to: 14892
/* 14423 */   MCD::OPC_CheckField, 13, 3, 0, 207, 1, // Skip to: 14892
/* 14429 */   MCD::OPC_Decode, 130, 8, 203, 2, // Opcode: EXTPDPV
/* 14434 */   MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 14453
/* 14438 */   MCD::OPC_CheckPredicate, 31, 194, 1, // Skip to: 14892
/* 14442 */   MCD::OPC_CheckField, 13, 3, 0, 188, 1, // Skip to: 14892
/* 14448 */   MCD::OPC_Decode, 148, 8, 202, 2, // Opcode: EXTR_S_H
/* 14453 */   MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 14472
/* 14457 */   MCD::OPC_CheckPredicate, 31, 175, 1, // Skip to: 14892
/* 14461 */   MCD::OPC_CheckField, 13, 3, 0, 169, 1, // Skip to: 14892
/* 14467 */   MCD::OPC_Decode, 140, 8, 203, 2, // Opcode: EXTRV_S_H
/* 14472 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 14485
/* 14476 */   MCD::OPC_CheckPredicate, 31, 156, 1, // Skip to: 14892
/* 14480 */   MCD::OPC_Decode, 157, 15, 204, 2, // Opcode: RDDSP
/* 14485 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 14498
/* 14489 */   MCD::OPC_CheckPredicate, 35, 143, 1, // Skip to: 14892
/* 14493 */   MCD::OPC_Decode, 166, 19, 205, 2, // Opcode: WRDSP
/* 14498 */   MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 14517
/* 14502 */   MCD::OPC_CheckPredicate, 31, 130, 1, // Skip to: 14892
/* 14506 */   MCD::OPC_CheckField, 13, 7, 0, 124, 1, // Skip to: 14892
/* 14512 */   MCD::OPC_Decode, 171, 16, 206, 2, // Opcode: SHILO
/* 14517 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 14536
/* 14521 */   MCD::OPC_CheckPredicate, 31, 111, 1, // Skip to: 14892
/* 14525 */   MCD::OPC_CheckField, 13, 8, 0, 105, 1, // Skip to: 14892
/* 14531 */   MCD::OPC_Decode, 172, 16, 207, 2, // Opcode: SHILOV
/* 14536 */   MCD::OPC_FilterValue, 31, 96, 1, // Skip to: 14892
/* 14540 */   MCD::OPC_CheckPredicate, 31, 92, 1, // Skip to: 14892
/* 14544 */   MCD::OPC_CheckField, 13, 8, 0, 86, 1, // Skip to: 14892
/* 14550 */   MCD::OPC_Decode, 171, 13, 207, 2, // Opcode: MTHLIP
/* 14555 */   MCD::OPC_FilterValue, 59, 77, 1, // Skip to: 14892
/* 14559 */   MCD::OPC_CheckPredicate, 1, 73, 1, // Skip to: 14892
/* 14563 */   MCD::OPC_CheckField, 21, 5, 0, 67, 1, // Skip to: 14892
/* 14569 */   MCD::OPC_CheckField, 6, 5, 0, 61, 1, // Skip to: 14892
/* 14575 */   MCD::OPC_Decode, 159, 15, 208, 2, // Opcode: RDHWR
/* 14580 */   MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 14593
/* 14584 */   MCD::OPC_CheckPredicate, 21, 48, 1, // Skip to: 14892
/* 14588 */   MCD::OPC_Decode, 181, 10, 209, 2, // Opcode: LB
/* 14593 */   MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 14606
/* 14597 */   MCD::OPC_CheckPredicate, 1, 35, 1, // Skip to: 14892
/* 14601 */   MCD::OPC_Decode, 227, 10, 209, 2, // Opcode: LH
/* 14606 */   MCD::OPC_FilterValue, 34, 9, 0, // Skip to: 14619
/* 14610 */   MCD::OPC_CheckPredicate, 30, 22, 1, // Skip to: 14892
/* 14614 */   MCD::OPC_Decode, 155, 11, 209, 2, // Opcode: LWL
/* 14619 */   MCD::OPC_FilterValue, 35, 9, 0, // Skip to: 14632
/* 14623 */   MCD::OPC_CheckPredicate, 1, 9, 1, // Skip to: 14892
/* 14627 */   MCD::OPC_Decode, 142, 11, 209, 2, // Opcode: LW
/* 14632 */   MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 14645
/* 14636 */   MCD::OPC_CheckPredicate, 21, 252, 0, // Skip to: 14892
/* 14640 */   MCD::OPC_Decode, 193, 10, 209, 2, // Opcode: LBu
/* 14645 */   MCD::OPC_FilterValue, 37, 9, 0, // Skip to: 14658
/* 14649 */   MCD::OPC_CheckPredicate, 1, 239, 0, // Skip to: 14892
/* 14653 */   MCD::OPC_Decode, 235, 10, 209, 2, // Opcode: LHu
/* 14658 */   MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 14671
/* 14662 */   MCD::OPC_CheckPredicate, 30, 226, 0, // Skip to: 14892
/* 14666 */   MCD::OPC_Decode, 168, 11, 209, 2, // Opcode: LWR
/* 14671 */   MCD::OPC_FilterValue, 40, 9, 0, // Skip to: 14684
/* 14675 */   MCD::OPC_CheckPredicate, 21, 213, 0, // Skip to: 14892
/* 14679 */   MCD::OPC_Decode, 215, 15, 209, 2, // Opcode: SB
/* 14684 */   MCD::OPC_FilterValue, 41, 9, 0, // Skip to: 14697
/* 14688 */   MCD::OPC_CheckPredicate, 21, 200, 0, // Skip to: 14892
/* 14692 */   MCD::OPC_Decode, 161, 16, 209, 2, // Opcode: SH
/* 14697 */   MCD::OPC_FilterValue, 42, 9, 0, // Skip to: 14710
/* 14701 */   MCD::OPC_CheckPredicate, 30, 187, 0, // Skip to: 14892
/* 14705 */   MCD::OPC_Decode, 147, 18, 209, 2, // Opcode: SWL
/* 14710 */   MCD::OPC_FilterValue, 43, 9, 0, // Skip to: 14723
/* 14714 */   MCD::OPC_CheckPredicate, 1, 174, 0, // Skip to: 14892
/* 14718 */   MCD::OPC_Decode, 134, 18, 209, 2, // Opcode: SW
/* 14723 */   MCD::OPC_FilterValue, 46, 9, 0, // Skip to: 14736
/* 14727 */   MCD::OPC_CheckPredicate, 30, 161, 0, // Skip to: 14892
/* 14731 */   MCD::OPC_Decode, 158, 18, 209, 2, // Opcode: SWR
/* 14736 */   MCD::OPC_FilterValue, 47, 9, 0, // Skip to: 14749
/* 14740 */   MCD::OPC_CheckPredicate, 66, 148, 0, // Skip to: 14892
/* 14744 */   MCD::OPC_Decode, 130, 4, 210, 2, // Opcode: CACHE
/* 14749 */   MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 14762
/* 14753 */   MCD::OPC_CheckPredicate, 67, 135, 0, // Skip to: 14892
/* 14757 */   MCD::OPC_Decode, 242, 10, 209, 2, // Opcode: LL
/* 14762 */   MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 14775
/* 14766 */   MCD::OPC_CheckPredicate, 43, 122, 0, // Skip to: 14892
/* 14770 */   MCD::OPC_Decode, 145, 11, 211, 2, // Opcode: LWC1
/* 14775 */   MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 14788
/* 14779 */   MCD::OPC_CheckPredicate, 33, 109, 0, // Skip to: 14892
/* 14783 */   MCD::OPC_Decode, 147, 11, 212, 2, // Opcode: LWC2
/* 14788 */   MCD::OPC_FilterValue, 51, 9, 0, // Skip to: 14801
/* 14792 */   MCD::OPC_CheckPredicate, 66, 96, 0, // Skip to: 14892
/* 14796 */   MCD::OPC_Decode, 219, 14, 210, 2, // Opcode: PREF
/* 14801 */   MCD::OPC_FilterValue, 53, 9, 0, // Skip to: 14814
/* 14805 */   MCD::OPC_CheckPredicate, 68, 83, 0, // Skip to: 14892
/* 14809 */   MCD::OPC_Decode, 199, 10, 211, 2, // Opcode: LDC1
/* 14814 */   MCD::OPC_FilterValue, 54, 9, 0, // Skip to: 14827
/* 14818 */   MCD::OPC_CheckPredicate, 69, 70, 0, // Skip to: 14892
/* 14822 */   MCD::OPC_Decode, 203, 10, 212, 2, // Opcode: LDC2
/* 14827 */   MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 14840
/* 14831 */   MCD::OPC_CheckPredicate, 67, 57, 0, // Skip to: 14892
/* 14835 */   MCD::OPC_Decode, 224, 15, 209, 2, // Opcode: SC
/* 14840 */   MCD::OPC_FilterValue, 57, 9, 0, // Skip to: 14853
/* 14844 */   MCD::OPC_CheckPredicate, 43, 44, 0, // Skip to: 14892
/* 14848 */   MCD::OPC_Decode, 138, 18, 211, 2, // Opcode: SWC1
/* 14853 */   MCD::OPC_FilterValue, 58, 9, 0, // Skip to: 14866
/* 14857 */   MCD::OPC_CheckPredicate, 33, 31, 0, // Skip to: 14892
/* 14861 */   MCD::OPC_Decode, 140, 18, 212, 2, // Opcode: SWC2
/* 14866 */   MCD::OPC_FilterValue, 61, 9, 0, // Skip to: 14879
/* 14870 */   MCD::OPC_CheckPredicate, 68, 18, 0, // Skip to: 14892
/* 14874 */   MCD::OPC_Decode, 241, 15, 211, 2, // Opcode: SDC1
/* 14879 */   MCD::OPC_FilterValue, 62, 9, 0, // Skip to: 14892
/* 14883 */   MCD::OPC_CheckPredicate, 69, 5, 0, // Skip to: 14892
/* 14887 */   MCD::OPC_Decode, 245, 15, 212, 2, // Opcode: SDC2
/* 14892 */   MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32_64_PTR6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 21
/* 7 */       MCD::OPC_CheckPredicate, 70, 36, 0, // Skip to: 47
/* 11 */      MCD::OPC_CheckField, 0, 21, 8, 30, 0, // Skip to: 47
/* 17 */      MCD::OPC_Decode, 164, 10, 13, // Opcode: JR64
/* 21 */      MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 34
/* 25 */      MCD::OPC_CheckPredicate, 71, 18, 0, // Skip to: 47
/* 29 */      MCD::OPC_Decode, 243, 10, 209, 2, // Opcode: LL64
/* 34 */      MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 47
/* 38 */      MCD::OPC_CheckPredicate, 71, 5, 0, // Skip to: 47
/* 42 */      MCD::OPC_Decode, 225, 15, 209, 2, // Opcode: SC64
/* 47 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r632[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 197, 1, // Skip to: 460
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 29
/* 14 */      MCD::OPC_CheckPredicate, 72, 141, 7, // Skip to: 1951
/* 18 */      MCD::OPC_CheckField, 8, 3, 0, 135, 7, // Skip to: 1951
/* 24 */      MCD::OPC_Decode, 134, 11, 179, 1, // Opcode: LSA_R6
/* 29 */      MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 48
/* 33 */      MCD::OPC_CheckPredicate, 72, 122, 7, // Skip to: 1951
/* 37 */      MCD::OPC_CheckField, 6, 15, 16, 116, 7, // Skip to: 1951
/* 43 */      MCD::OPC_Decode, 170, 10, 180, 1, // Opcode: JR_HB_R6
/* 48 */      MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 61
/* 52 */      MCD::OPC_CheckPredicate, 73, 103, 7, // Skip to: 1951
/* 56 */      MCD::OPC_Decode, 240, 15, 182, 1, // Opcode: SDBBP_R6
/* 61 */      MCD::OPC_FilterValue, 16, 20, 0, // Skip to: 85
/* 65 */      MCD::OPC_CheckPredicate, 72, 90, 7, // Skip to: 1951
/* 69 */      MCD::OPC_CheckField, 16, 5, 0, 84, 7, // Skip to: 1951
/* 75 */      MCD::OPC_CheckField, 6, 5, 1, 78, 7, // Skip to: 1951
/* 81 */      MCD::OPC_Decode, 205, 4, 14, // Opcode: CLZ_R6
/* 85 */      MCD::OPC_FilterValue, 17, 20, 0, // Skip to: 109
/* 89 */      MCD::OPC_CheckPredicate, 72, 66, 7, // Skip to: 1951
/* 93 */      MCD::OPC_CheckField, 16, 5, 0, 60, 7, // Skip to: 1951
/* 99 */      MCD::OPC_CheckField, 6, 5, 1, 54, 7, // Skip to: 1951
/* 105 */     MCD::OPC_Decode, 185, 4, 14, // Opcode: CLO_R6
/* 109 */     MCD::OPC_FilterValue, 18, 20, 0, // Skip to: 133
/* 113 */     MCD::OPC_CheckPredicate, 74, 42, 7, // Skip to: 1951
/* 117 */     MCD::OPC_CheckField, 16, 5, 0, 36, 7, // Skip to: 1951
/* 123 */     MCD::OPC_CheckField, 6, 5, 1, 30, 7, // Skip to: 1951
/* 129 */     MCD::OPC_Decode, 206, 6, 15, // Opcode: DCLZ_R6
/* 133 */     MCD::OPC_FilterValue, 19, 20, 0, // Skip to: 157
/* 137 */     MCD::OPC_CheckPredicate, 74, 18, 7, // Skip to: 1951
/* 141 */     MCD::OPC_CheckField, 16, 5, 0, 12, 7, // Skip to: 1951
/* 147 */     MCD::OPC_CheckField, 6, 5, 1, 6, 7, // Skip to: 1951
/* 153 */     MCD::OPC_Decode, 203, 6, 15, // Opcode: DCLO_R6
/* 157 */     MCD::OPC_FilterValue, 21, 15, 0, // Skip to: 176
/* 161 */     MCD::OPC_CheckPredicate, 74, 250, 6, // Skip to: 1951
/* 165 */     MCD::OPC_CheckField, 8, 3, 0, 244, 6, // Skip to: 1951
/* 171 */     MCD::OPC_Decode, 243, 6, 188, 1, // Opcode: DLSA_R6
/* 176 */     MCD::OPC_FilterValue, 24, 27, 0, // Skip to: 207
/* 180 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 183 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 195
/* 187 */     MCD::OPC_CheckPredicate, 73, 224, 6, // Skip to: 1951
/* 191 */     MCD::OPC_Decode, 231, 13, 49, // Opcode: MUL_R6
/* 195 */     MCD::OPC_FilterValue, 3, 216, 6, // Skip to: 1951
/* 199 */     MCD::OPC_CheckPredicate, 73, 212, 6, // Skip to: 1951
/* 203 */     MCD::OPC_Decode, 184, 13, 49, // Opcode: MUH
/* 207 */     MCD::OPC_FilterValue, 25, 27, 0, // Skip to: 238
/* 211 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 214 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 226
/* 218 */     MCD::OPC_CheckPredicate, 73, 193, 6, // Skip to: 1951
/* 222 */     MCD::OPC_Decode, 219, 13, 49, // Opcode: MULU
/* 226 */     MCD::OPC_FilterValue, 3, 185, 6, // Skip to: 1951
/* 230 */     MCD::OPC_CheckPredicate, 73, 181, 6, // Skip to: 1951
/* 234 */     MCD::OPC_Decode, 185, 13, 49, // Opcode: MUHU
/* 238 */     MCD::OPC_FilterValue, 26, 27, 0, // Skip to: 269
/* 242 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 245 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 257
/* 249 */     MCD::OPC_CheckPredicate, 73, 162, 6, // Skip to: 1951
/* 253 */     MCD::OPC_Decode, 227, 6, 49, // Opcode: DIV
/* 257 */     MCD::OPC_FilterValue, 3, 154, 6, // Skip to: 1951
/* 261 */     MCD::OPC_CheckPredicate, 73, 150, 6, // Skip to: 1951
/* 265 */     MCD::OPC_Decode, 193, 12, 49, // Opcode: MOD
/* 269 */     MCD::OPC_FilterValue, 27, 27, 0, // Skip to: 300
/* 273 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 276 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 288
/* 280 */     MCD::OPC_CheckPredicate, 73, 131, 6, // Skip to: 1951
/* 284 */     MCD::OPC_Decode, 228, 6, 49, // Opcode: DIVU
/* 288 */     MCD::OPC_FilterValue, 3, 123, 6, // Skip to: 1951
/* 292 */     MCD::OPC_CheckPredicate, 73, 119, 6, // Skip to: 1951
/* 296 */     MCD::OPC_Decode, 196, 12, 49, // Opcode: MODU
/* 300 */     MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 331
/* 304 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 307 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 319
/* 311 */     MCD::OPC_CheckPredicate, 74, 100, 6, // Skip to: 1951
/* 315 */     MCD::OPC_Decode, 144, 7, 12, // Opcode: DMUL_R6
/* 319 */     MCD::OPC_FilterValue, 3, 92, 6, // Skip to: 1951
/* 323 */     MCD::OPC_CheckPredicate, 74, 88, 6, // Skip to: 1951
/* 327 */     MCD::OPC_Decode, 134, 7, 12, // Opcode: DMUH
/* 331 */     MCD::OPC_FilterValue, 29, 27, 0, // Skip to: 362
/* 335 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 338 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 350
/* 342 */     MCD::OPC_CheckPredicate, 74, 69, 6, // Skip to: 1951
/* 346 */     MCD::OPC_Decode, 141, 7, 12, // Opcode: DMULU
/* 350 */     MCD::OPC_FilterValue, 3, 61, 6, // Skip to: 1951
/* 354 */     MCD::OPC_CheckPredicate, 74, 57, 6, // Skip to: 1951
/* 358 */     MCD::OPC_Decode, 135, 7, 12, // Opcode: DMUHU
/* 362 */     MCD::OPC_FilterValue, 30, 27, 0, // Skip to: 393
/* 366 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 369 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 381
/* 373 */     MCD::OPC_CheckPredicate, 74, 38, 6, // Skip to: 1951
/* 377 */     MCD::OPC_Decode, 207, 6, 12, // Opcode: DDIV
/* 381 */     MCD::OPC_FilterValue, 3, 30, 6, // Skip to: 1951
/* 385 */     MCD::OPC_CheckPredicate, 74, 26, 6, // Skip to: 1951
/* 389 */     MCD::OPC_Decode, 251, 6, 12, // Opcode: DMOD
/* 393 */     MCD::OPC_FilterValue, 31, 27, 0, // Skip to: 424
/* 397 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 400 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 412
/* 404 */     MCD::OPC_CheckPredicate, 74, 7, 6, // Skip to: 1951
/* 408 */     MCD::OPC_Decode, 208, 6, 12, // Opcode: DDIVU
/* 412 */     MCD::OPC_FilterValue, 3, 255, 5, // Skip to: 1951
/* 416 */     MCD::OPC_CheckPredicate, 74, 251, 5, // Skip to: 1951
/* 420 */     MCD::OPC_Decode, 252, 6, 12, // Opcode: DMODU
/* 424 */     MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 442
/* 428 */     MCD::OPC_CheckPredicate, 75, 239, 5, // Skip to: 1951
/* 432 */     MCD::OPC_CheckField, 6, 5, 0, 233, 5, // Skip to: 1951
/* 438 */     MCD::OPC_Decode, 139, 16, 49, // Opcode: SELEQZ
/* 442 */     MCD::OPC_FilterValue, 55, 225, 5, // Skip to: 1951
/* 446 */     MCD::OPC_CheckPredicate, 75, 221, 5, // Skip to: 1951
/* 450 */     MCD::OPC_CheckField, 6, 5, 0, 215, 5, // Skip to: 1951
/* 456 */     MCD::OPC_Decode, 146, 16, 49, // Opcode: SELNEZ
/* 460 */     MCD::OPC_FilterValue, 1, 48, 0, // Skip to: 512
/* 464 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 467 */     MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 480
/* 471 */     MCD::OPC_CheckPredicate, 74, 196, 5, // Skip to: 1951
/* 475 */     MCD::OPC_Decode, 191, 6, 213, 2, // Opcode: DAHI
/* 480 */     MCD::OPC_FilterValue, 17, 15, 0, // Skip to: 499
/* 484 */     MCD::OPC_CheckPredicate, 72, 183, 5, // Skip to: 1951
/* 488 */     MCD::OPC_CheckField, 21, 5, 0, 177, 5, // Skip to: 1951
/* 494 */     MCD::OPC_Decode, 134, 2, 192, 1, // Opcode: BAL
/* 499 */     MCD::OPC_FilterValue, 30, 168, 5, // Skip to: 1951
/* 503 */     MCD::OPC_CheckPredicate, 74, 164, 5, // Skip to: 1951
/* 507 */     MCD::OPC_Decode, 195, 6, 213, 2, // Opcode: DATI
/* 512 */     MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 525
/* 516 */     MCD::OPC_CheckPredicate, 73, 151, 5, // Skip to: 1951
/* 520 */     MCD::OPC_Decode, 201, 2, 214, 2, // Opcode: BGEZALC
/* 525 */     MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 538
/* 529 */     MCD::OPC_CheckPredicate, 73, 138, 5, // Skip to: 1951
/* 533 */     MCD::OPC_Decode, 154, 3, 215, 2, // Opcode: BLTZALC
/* 538 */     MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 551
/* 542 */     MCD::OPC_CheckPredicate, 73, 125, 5, // Skip to: 1951
/* 546 */     MCD::OPC_Decode, 171, 2, 216, 2, // Opcode: BEQC
/* 551 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 563
/* 555 */     MCD::OPC_CheckPredicate, 72, 112, 5, // Skip to: 1951
/* 559 */     MCD::OPC_Decode, 230, 1, 93, // Opcode: AUI
/* 563 */     MCD::OPC_FilterValue, 16, 39, 0, // Skip to: 606
/* 567 */     MCD::OPC_ExtractField, 0, 16,  // Inst{15-0} ...
/* 570 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 588
/* 574 */     MCD::OPC_CheckPredicate, 72, 93, 5, // Skip to: 1951
/* 578 */     MCD::OPC_CheckField, 21, 5, 11, 87, 5, // Skip to: 1951
/* 584 */     MCD::OPC_Decode, 253, 7, 73, // Opcode: EVP
/* 588 */     MCD::OPC_FilterValue, 36, 79, 5, // Skip to: 1951
/* 592 */     MCD::OPC_CheckPredicate, 72, 75, 5, // Skip to: 1951
/* 596 */     MCD::OPC_CheckField, 21, 5, 11, 69, 5, // Skip to: 1951
/* 602 */     MCD::OPC_Decode, 237, 7, 73, // Opcode: DVP
/* 606 */     MCD::OPC_FilterValue, 17, 15, 3, // Skip to: 1393
/* 610 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 613 */     MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 626
/* 617 */     MCD::OPC_CheckPredicate, 76, 50, 5, // Skip to: 1951
/* 621 */     MCD::OPC_Decode, 146, 2, 217, 2, // Opcode: BC1EQZ
/* 626 */     MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 639
/* 630 */     MCD::OPC_CheckPredicate, 76, 37, 5, // Skip to: 1951
/* 634 */     MCD::OPC_Decode, 151, 2, 217, 2, // Opcode: BC1NEZ
/* 639 */     MCD::OPC_FilterValue, 16, 158, 0, // Skip to: 801
/* 643 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 646 */     MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 659
/* 650 */     MCD::OPC_CheckPredicate, 76, 17, 5, // Skip to: 1951
/* 654 */     MCD::OPC_Decode, 155, 16, 218, 2, // Opcode: SEL_S
/* 659 */     MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 672
/* 663 */     MCD::OPC_CheckPredicate, 76, 4, 5, // Skip to: 1951
/* 667 */     MCD::OPC_Decode, 144, 16, 209, 1, // Opcode: SELEQZ_S
/* 672 */     MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 685
/* 676 */     MCD::OPC_CheckPredicate, 76, 247, 4, // Skip to: 1951
/* 680 */     MCD::OPC_Decode, 151, 16, 209, 1, // Opcode: SELNEZ_S
/* 685 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 698
/* 689 */     MCD::OPC_CheckPredicate, 76, 234, 4, // Skip to: 1951
/* 693 */     MCD::OPC_Decode, 207, 11, 219, 2, // Opcode: MADDF_S
/* 698 */     MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 711
/* 702 */     MCD::OPC_CheckPredicate, 76, 221, 4, // Skip to: 1951
/* 706 */     MCD::OPC_Decode, 130, 13, 219, 2, // Opcode: MSUBF_S
/* 711 */     MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 730
/* 715 */     MCD::OPC_CheckPredicate, 76, 208, 4, // Skip to: 1951
/* 719 */     MCD::OPC_CheckField, 16, 5, 0, 202, 4, // Skip to: 1951
/* 725 */     MCD::OPC_Decode, 178, 15, 210, 1, // Opcode: RINT_S
/* 730 */     MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 749
/* 734 */     MCD::OPC_CheckPredicate, 76, 189, 4, // Skip to: 1951
/* 738 */     MCD::OPC_CheckField, 16, 5, 0, 183, 4, // Skip to: 1951
/* 744 */     MCD::OPC_Decode, 164, 4, 210, 1, // Opcode: CLASS_S
/* 749 */     MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 762
/* 753 */     MCD::OPC_CheckPredicate, 76, 170, 4, // Skip to: 1951
/* 757 */     MCD::OPC_Decode, 181, 12, 209, 1, // Opcode: MIN_S
/* 762 */     MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 775
/* 766 */     MCD::OPC_CheckPredicate, 76, 157, 4, // Skip to: 1951
/* 770 */     MCD::OPC_Decode, 255, 11, 209, 1, // Opcode: MAX_S
/* 775 */     MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 788
/* 779 */     MCD::OPC_CheckPredicate, 76, 144, 4, // Skip to: 1951
/* 783 */     MCD::OPC_Decode, 165, 12, 209, 1, // Opcode: MINA_S
/* 788 */     MCD::OPC_FilterValue, 31, 135, 4, // Skip to: 1951
/* 792 */     MCD::OPC_CheckPredicate, 76, 131, 4, // Skip to: 1951
/* 796 */     MCD::OPC_Decode, 239, 11, 209, 1, // Opcode: MAXA_S
/* 801 */     MCD::OPC_FilterValue, 17, 158, 0, // Skip to: 963
/* 805 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 808 */     MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 821
/* 812 */     MCD::OPC_CheckPredicate, 76, 111, 4, // Skip to: 1951
/* 816 */     MCD::OPC_Decode, 153, 16, 220, 2, // Opcode: SEL_D
/* 821 */     MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 834
/* 825 */     MCD::OPC_CheckPredicate, 76, 98, 4, // Skip to: 1951
/* 829 */     MCD::OPC_Decode, 141, 16, 221, 2, // Opcode: SELEQZ_D
/* 834 */     MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 847
/* 838 */     MCD::OPC_CheckPredicate, 76, 85, 4, // Skip to: 1951
/* 842 */     MCD::OPC_Decode, 148, 16, 221, 2, // Opcode: SELNEZ_D
/* 847 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 860
/* 851 */     MCD::OPC_CheckPredicate, 76, 72, 4, // Skip to: 1951
/* 855 */     MCD::OPC_Decode, 205, 11, 222, 2, // Opcode: MADDF_D
/* 860 */     MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 873
/* 864 */     MCD::OPC_CheckPredicate, 76, 59, 4, // Skip to: 1951
/* 868 */     MCD::OPC_Decode, 128, 13, 222, 2, // Opcode: MSUBF_D
/* 873 */     MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 892
/* 877 */     MCD::OPC_CheckPredicate, 76, 46, 4, // Skip to: 1951
/* 881 */     MCD::OPC_CheckField, 16, 5, 0, 40, 4, // Skip to: 1951
/* 887 */     MCD::OPC_Decode, 176, 15, 221, 1, // Opcode: RINT_D
/* 892 */     MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 911
/* 896 */     MCD::OPC_CheckPredicate, 76, 27, 4, // Skip to: 1951
/* 900 */     MCD::OPC_CheckField, 16, 5, 0, 21, 4, // Skip to: 1951
/* 906 */     MCD::OPC_Decode, 162, 4, 221, 1, // Opcode: CLASS_D
/* 911 */     MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 924
/* 915 */     MCD::OPC_CheckPredicate, 76, 8, 4, // Skip to: 1951
/* 919 */     MCD::OPC_Decode, 179, 12, 221, 2, // Opcode: MIN_D
/* 924 */     MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 937
/* 928 */     MCD::OPC_CheckPredicate, 76, 251, 3, // Skip to: 1951
/* 932 */     MCD::OPC_Decode, 253, 11, 221, 2, // Opcode: MAX_D
/* 937 */     MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 950
/* 941 */     MCD::OPC_CheckPredicate, 76, 238, 3, // Skip to: 1951
/* 945 */     MCD::OPC_Decode, 163, 12, 221, 2, // Opcode: MINA_D
/* 950 */     MCD::OPC_FilterValue, 31, 229, 3, // Skip to: 1951
/* 954 */     MCD::OPC_CheckPredicate, 76, 225, 3, // Skip to: 1951
/* 958 */     MCD::OPC_Decode, 237, 11, 221, 2, // Opcode: MAXA_D
/* 963 */     MCD::OPC_FilterValue, 20, 211, 0, // Skip to: 1178
/* 967 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 970 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 983
/* 974 */     MCD::OPC_CheckPredicate, 76, 205, 3, // Skip to: 1951
/* 978 */     MCD::OPC_Decode, 233, 4, 223, 2, // Opcode: CMP_F_S
/* 983 */     MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 996
/* 987 */     MCD::OPC_CheckPredicate, 76, 192, 3, // Skip to: 1951
/* 991 */     MCD::OPC_Decode, 164, 5, 223, 2, // Opcode: CMP_UN_S
/* 996 */     MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1009
/* 1000 */    MCD::OPC_CheckPredicate, 76, 179, 3, // Skip to: 1951
/* 1004 */    MCD::OPC_Decode, 230, 4, 223, 2, // Opcode: CMP_EQ_S
/* 1009 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1022
/* 1013 */    MCD::OPC_CheckPredicate, 76, 166, 3, // Skip to: 1951
/* 1017 */    MCD::OPC_Decode, 152, 5, 223, 2, // Opcode: CMP_UEQ_S
/* 1022 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1035
/* 1026 */    MCD::OPC_CheckPredicate, 76, 153, 3, // Skip to: 1951
/* 1030 */    MCD::OPC_Decode, 244, 4, 223, 2, // Opcode: CMP_LT_S
/* 1035 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1048
/* 1039 */    MCD::OPC_CheckPredicate, 76, 140, 3, // Skip to: 1951
/* 1043 */    MCD::OPC_Decode, 160, 5, 223, 2, // Opcode: CMP_ULT_S
/* 1048 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1061
/* 1052 */    MCD::OPC_CheckPredicate, 76, 127, 3, // Skip to: 1951
/* 1056 */    MCD::OPC_Decode, 238, 4, 223, 2, // Opcode: CMP_LE_S
/* 1061 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1074
/* 1065 */    MCD::OPC_CheckPredicate, 76, 114, 3, // Skip to: 1951
/* 1069 */    MCD::OPC_Decode, 156, 5, 223, 2, // Opcode: CMP_ULE_S
/* 1074 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1087
/* 1078 */    MCD::OPC_CheckPredicate, 76, 101, 3, // Skip to: 1951
/* 1082 */    MCD::OPC_Decode, 248, 4, 223, 2, // Opcode: CMP_SAF_S
/* 1087 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1100
/* 1091 */    MCD::OPC_CheckPredicate, 76, 88, 3, // Skip to: 1951
/* 1095 */    MCD::OPC_Decode, 148, 5, 223, 2, // Opcode: CMP_SUN_S
/* 1100 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1113
/* 1104 */    MCD::OPC_CheckPredicate, 76, 75, 3, // Skip to: 1951
/* 1108 */    MCD::OPC_Decode, 252, 4, 223, 2, // Opcode: CMP_SEQ_S
/* 1113 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1126
/* 1117 */    MCD::OPC_CheckPredicate, 76, 62, 3, // Skip to: 1951
/* 1121 */    MCD::OPC_Decode, 136, 5, 223, 2, // Opcode: CMP_SUEQ_S
/* 1126 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1139
/* 1130 */    MCD::OPC_CheckPredicate, 76, 49, 3, // Skip to: 1951
/* 1134 */    MCD::OPC_Decode, 132, 5, 223, 2, // Opcode: CMP_SLT_S
/* 1139 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1152
/* 1143 */    MCD::OPC_CheckPredicate, 76, 36, 3, // Skip to: 1951
/* 1147 */    MCD::OPC_Decode, 144, 5, 223, 2, // Opcode: CMP_SULT_S
/* 1152 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1165
/* 1156 */    MCD::OPC_CheckPredicate, 76, 23, 3, // Skip to: 1951
/* 1160 */    MCD::OPC_Decode, 128, 5, 223, 2, // Opcode: CMP_SLE_S
/* 1165 */    MCD::OPC_FilterValue, 15, 14, 3, // Skip to: 1951
/* 1169 */    MCD::OPC_CheckPredicate, 76, 10, 3, // Skip to: 1951
/* 1173 */    MCD::OPC_Decode, 140, 5, 223, 2, // Opcode: CMP_SULE_S
/* 1178 */    MCD::OPC_FilterValue, 21, 1, 3, // Skip to: 1951
/* 1182 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1185 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1198
/* 1189 */    MCD::OPC_CheckPredicate, 76, 246, 2, // Skip to: 1951
/* 1193 */    MCD::OPC_Decode, 232, 4, 224, 2, // Opcode: CMP_F_D
/* 1198 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1211
/* 1202 */    MCD::OPC_CheckPredicate, 76, 233, 2, // Skip to: 1951
/* 1206 */    MCD::OPC_Decode, 162, 5, 224, 2, // Opcode: CMP_UN_D
/* 1211 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1224
/* 1215 */    MCD::OPC_CheckPredicate, 76, 220, 2, // Skip to: 1951
/* 1219 */    MCD::OPC_Decode, 226, 4, 224, 2, // Opcode: CMP_EQ_D
/* 1224 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1237
/* 1228 */    MCD::OPC_CheckPredicate, 76, 207, 2, // Skip to: 1951
/* 1232 */    MCD::OPC_Decode, 150, 5, 224, 2, // Opcode: CMP_UEQ_D
/* 1237 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1250
/* 1241 */    MCD::OPC_CheckPredicate, 76, 194, 2, // Skip to: 1951
/* 1245 */    MCD::OPC_Decode, 240, 4, 224, 2, // Opcode: CMP_LT_D
/* 1250 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1263
/* 1254 */    MCD::OPC_CheckPredicate, 76, 181, 2, // Skip to: 1951
/* 1258 */    MCD::OPC_Decode, 158, 5, 224, 2, // Opcode: CMP_ULT_D
/* 1263 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1276
/* 1267 */    MCD::OPC_CheckPredicate, 76, 168, 2, // Skip to: 1951
/* 1271 */    MCD::OPC_Decode, 234, 4, 224, 2, // Opcode: CMP_LE_D
/* 1276 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1289
/* 1280 */    MCD::OPC_CheckPredicate, 76, 155, 2, // Skip to: 1951
/* 1284 */    MCD::OPC_Decode, 154, 5, 224, 2, // Opcode: CMP_ULE_D
/* 1289 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1302
/* 1293 */    MCD::OPC_CheckPredicate, 76, 142, 2, // Skip to: 1951
/* 1297 */    MCD::OPC_Decode, 246, 4, 224, 2, // Opcode: CMP_SAF_D
/* 1302 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1315
/* 1306 */    MCD::OPC_CheckPredicate, 76, 129, 2, // Skip to: 1951
/* 1310 */    MCD::OPC_Decode, 146, 5, 224, 2, // Opcode: CMP_SUN_D
/* 1315 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1328
/* 1319 */    MCD::OPC_CheckPredicate, 76, 116, 2, // Skip to: 1951
/* 1323 */    MCD::OPC_Decode, 250, 4, 224, 2, // Opcode: CMP_SEQ_D
/* 1328 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1341
/* 1332 */    MCD::OPC_CheckPredicate, 76, 103, 2, // Skip to: 1951
/* 1336 */    MCD::OPC_Decode, 134, 5, 224, 2, // Opcode: CMP_SUEQ_D
/* 1341 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1354
/* 1345 */    MCD::OPC_CheckPredicate, 76, 90, 2, // Skip to: 1951
/* 1349 */    MCD::OPC_Decode, 130, 5, 224, 2, // Opcode: CMP_SLT_D
/* 1354 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1367
/* 1358 */    MCD::OPC_CheckPredicate, 76, 77, 2, // Skip to: 1951
/* 1362 */    MCD::OPC_Decode, 142, 5, 224, 2, // Opcode: CMP_SULT_D
/* 1367 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1380
/* 1371 */    MCD::OPC_CheckPredicate, 76, 64, 2, // Skip to: 1951
/* 1375 */    MCD::OPC_Decode, 254, 4, 224, 2, // Opcode: CMP_SLE_D
/* 1380 */    MCD::OPC_FilterValue, 15, 55, 2, // Skip to: 1951
/* 1384 */    MCD::OPC_CheckPredicate, 76, 51, 2, // Skip to: 1951
/* 1388 */    MCD::OPC_Decode, 138, 5, 224, 2, // Opcode: CMP_SULE_D
/* 1393 */    MCD::OPC_FilterValue, 18, 81, 0, // Skip to: 1478
/* 1397 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1400 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1413
/* 1404 */    MCD::OPC_CheckPredicate, 73, 31, 2, // Skip to: 1951
/* 1408 */    MCD::OPC_Decode, 156, 2, 225, 2, // Opcode: BC2EQZ
/* 1413 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1426
/* 1417 */    MCD::OPC_CheckPredicate, 73, 18, 2, // Skip to: 1951
/* 1421 */    MCD::OPC_Decode, 149, 11, 226, 2, // Opcode: LWC2_R6
/* 1426 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1439
/* 1430 */    MCD::OPC_CheckPredicate, 73, 5, 2, // Skip to: 1951
/* 1434 */    MCD::OPC_Decode, 142, 18, 226, 2, // Opcode: SWC2_R6
/* 1439 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1452
/* 1443 */    MCD::OPC_CheckPredicate, 73, 248, 1, // Skip to: 1951
/* 1447 */    MCD::OPC_Decode, 158, 2, 225, 2, // Opcode: BC2NEZ
/* 1452 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1465
/* 1456 */    MCD::OPC_CheckPredicate, 73, 235, 1, // Skip to: 1951
/* 1460 */    MCD::OPC_Decode, 205, 10, 226, 2, // Opcode: LDC2_R6
/* 1465 */    MCD::OPC_FilterValue, 15, 226, 1, // Skip to: 1951
/* 1469 */    MCD::OPC_CheckPredicate, 73, 222, 1, // Skip to: 1951
/* 1473 */    MCD::OPC_Decode, 247, 15, 226, 2, // Opcode: SDC2_R6
/* 1478 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 1491
/* 1482 */    MCD::OPC_CheckPredicate, 73, 209, 1, // Skip to: 1951
/* 1486 */    MCD::OPC_Decode, 206, 2, 227, 2, // Opcode: BGEZC
/* 1491 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 1504
/* 1495 */    MCD::OPC_CheckPredicate, 73, 196, 1, // Skip to: 1951
/* 1499 */    MCD::OPC_Decode, 159, 3, 228, 2, // Opcode: BLTZC
/* 1504 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 1517
/* 1508 */    MCD::OPC_CheckPredicate, 73, 183, 1, // Skip to: 1951
/* 1512 */    MCD::OPC_Decode, 170, 3, 229, 2, // Opcode: BNEC
/* 1517 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 1530
/* 1521 */    MCD::OPC_CheckPredicate, 74, 170, 1, // Skip to: 1951
/* 1525 */    MCD::OPC_Decode, 197, 6, 175, 1, // Opcode: DAUI
/* 1530 */    MCD::OPC_FilterValue, 31, 183, 0, // Skip to: 1717
/* 1534 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1537 */    MCD::OPC_FilterValue, 32, 41, 0, // Skip to: 1582
/* 1541 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 1544 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1569
/* 1548 */    MCD::OPC_CheckPredicate, 72, 143, 1, // Skip to: 1951
/* 1552 */    MCD::OPC_CheckField, 21, 5, 0, 137, 1, // Skip to: 1951
/* 1558 */    MCD::OPC_CheckField, 6, 2, 0, 131, 1, // Skip to: 1951
/* 1564 */    MCD::OPC_Decode, 246, 2, 195, 2, // Opcode: BITSWAP
/* 1569 */    MCD::OPC_FilterValue, 2, 122, 1, // Skip to: 1951
/* 1573 */    MCD::OPC_CheckPredicate, 72, 118, 1, // Skip to: 1951
/* 1577 */    MCD::OPC_Decode, 167, 1, 230, 2, // Opcode: ALIGN
/* 1582 */    MCD::OPC_FilterValue, 36, 41, 0, // Skip to: 1627
/* 1586 */    MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 1589 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1614
/* 1593 */    MCD::OPC_CheckPredicate, 74, 98, 1, // Skip to: 1951
/* 1597 */    MCD::OPC_CheckField, 21, 5, 0, 92, 1, // Skip to: 1951
/* 1603 */    MCD::OPC_CheckField, 6, 3, 0, 86, 1, // Skip to: 1951
/* 1609 */    MCD::OPC_Decode, 199, 6, 231, 2, // Opcode: DBITSWAP
/* 1614 */    MCD::OPC_FilterValue, 1, 77, 1, // Skip to: 1951
/* 1618 */    MCD::OPC_CheckPredicate, 74, 73, 1, // Skip to: 1951
/* 1622 */    MCD::OPC_Decode, 193, 6, 232, 2, // Opcode: DALIGN
/* 1627 */    MCD::OPC_FilterValue, 37, 15, 0, // Skip to: 1646
/* 1631 */    MCD::OPC_CheckPredicate, 72, 60, 1, // Skip to: 1951
/* 1635 */    MCD::OPC_CheckField, 6, 1, 0, 54, 1, // Skip to: 1951
/* 1641 */    MCD::OPC_Decode, 136, 4, 200, 2, // Opcode: CACHE_R6
/* 1646 */    MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 1659
/* 1650 */    MCD::OPC_CheckPredicate, 77, 41, 1, // Skip to: 1951
/* 1654 */    MCD::OPC_Decode, 233, 15, 233, 2, // Opcode: SC_R6
/* 1659 */    MCD::OPC_FilterValue, 39, 9, 0, // Skip to: 1672
/* 1663 */    MCD::OPC_CheckPredicate, 72, 28, 1, // Skip to: 1951
/* 1667 */    MCD::OPC_Decode, 228, 15, 233, 2, // Opcode: SCD_R6
/* 1672 */    MCD::OPC_FilterValue, 53, 15, 0, // Skip to: 1691
/* 1676 */    MCD::OPC_CheckPredicate, 72, 15, 1, // Skip to: 1951
/* 1680 */    MCD::OPC_CheckField, 6, 1, 0, 9, 1, // Skip to: 1951
/* 1686 */    MCD::OPC_Decode, 226, 14, 200, 2, // Opcode: PREF_R6
/* 1691 */    MCD::OPC_FilterValue, 54, 9, 0, // Skip to: 1704
/* 1695 */    MCD::OPC_CheckPredicate, 77, 252, 0, // Skip to: 1951
/* 1699 */    MCD::OPC_Decode, 252, 10, 233, 2, // Opcode: LL_R6
/* 1704 */    MCD::OPC_FilterValue, 55, 243, 0, // Skip to: 1951
/* 1708 */    MCD::OPC_CheckPredicate, 74, 239, 0, // Skip to: 1951
/* 1712 */    MCD::OPC_Decode, 247, 10, 233, 2, // Opcode: LLD_R6
/* 1717 */    MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 1730
/* 1721 */    MCD::OPC_CheckPredicate, 72, 226, 0, // Skip to: 1951
/* 1725 */    MCD::OPC_Decode, 144, 2, 234, 2, // Opcode: BC
/* 1730 */    MCD::OPC_FilterValue, 53, 24, 0, // Skip to: 1758
/* 1734 */    MCD::OPC_CheckPredicate, 17, 11, 0, // Skip to: 1749
/* 1738 */    MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 1749
/* 1744 */    MCD::OPC_Decode, 225, 2, 173, 1, // Opcode: BGTZC_MMR6
/* 1749 */    MCD::OPC_CheckPredicate, 17, 198, 0, // Skip to: 1951
/* 1753 */    MCD::OPC_Decode, 161, 3, 173, 1, // Opcode: BLTZC_MMR6
/* 1758 */    MCD::OPC_FilterValue, 54, 23, 0, // Skip to: 1785
/* 1762 */    MCD::OPC_CheckPredicate, 72, 10, 0, // Skip to: 1776
/* 1766 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 1776
/* 1772 */    MCD::OPC_Decode, 159, 10, 89, // Opcode: JIC
/* 1776 */    MCD::OPC_CheckPredicate, 73, 171, 0, // Skip to: 1951
/* 1780 */    MCD::OPC_Decode, 178, 2, 235, 2, // Opcode: BEQZC
/* 1785 */    MCD::OPC_FilterValue, 58, 9, 0, // Skip to: 1798
/* 1789 */    MCD::OPC_CheckPredicate, 72, 158, 0, // Skip to: 1951
/* 1793 */    MCD::OPC_Decode, 135, 2, 234, 2, // Opcode: BALC
/* 1798 */    MCD::OPC_FilterValue, 59, 94, 0, // Skip to: 1896
/* 1802 */    MCD::OPC_ExtractField, 19, 2,  // Inst{20-19} ...
/* 1805 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1817
/* 1809 */    MCD::OPC_CheckPredicate, 72, 138, 0, // Skip to: 1951
/* 1813 */    MCD::OPC_Decode, 92, 165, 1, // Opcode: ADDIUPC
/* 1817 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1830
/* 1821 */    MCD::OPC_CheckPredicate, 72, 126, 0, // Skip to: 1951
/* 1825 */    MCD::OPC_Decode, 164, 11, 165, 1, // Opcode: LWPC
/* 1830 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1843
/* 1834 */    MCD::OPC_CheckPredicate, 73, 113, 0, // Skip to: 1951
/* 1838 */    MCD::OPC_Decode, 174, 11, 165, 1, // Opcode: LWUPC
/* 1843 */    MCD::OPC_FilterValue, 3, 104, 0, // Skip to: 1951
/* 1847 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1850 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1863
/* 1854 */    MCD::OPC_CheckPredicate, 78, 93, 0, // Skip to: 1951
/* 1858 */    MCD::OPC_Decode, 213, 10, 167, 1, // Opcode: LDPC
/* 1863 */    MCD::OPC_FilterValue, 1, 84, 0, // Skip to: 1951
/* 1867 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1870 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1883
/* 1874 */    MCD::OPC_CheckPredicate, 72, 73, 0, // Skip to: 1951
/* 1878 */    MCD::OPC_Decode, 231, 1, 168, 1, // Opcode: AUIPC
/* 1883 */    MCD::OPC_FilterValue, 3, 64, 0, // Skip to: 1951
/* 1887 */    MCD::OPC_CheckPredicate, 72, 60, 0, // Skip to: 1951
/* 1891 */    MCD::OPC_Decode, 169, 1, 168, 1, // Opcode: ALUIPC
/* 1896 */    MCD::OPC_FilterValue, 61, 24, 0, // Skip to: 1924
/* 1900 */    MCD::OPC_CheckPredicate, 17, 11, 0, // Skip to: 1915
/* 1904 */    MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 1915
/* 1910 */    MCD::OPC_Decode, 134, 3, 176, 1, // Opcode: BLEZC_MMR6
/* 1915 */    MCD::OPC_CheckPredicate, 17, 32, 0, // Skip to: 1951
/* 1919 */    MCD::OPC_Decode, 208, 2, 176, 1, // Opcode: BGEZC_MMR6
/* 1924 */    MCD::OPC_FilterValue, 62, 23, 0, // Skip to: 1951
/* 1928 */    MCD::OPC_CheckPredicate, 72, 10, 0, // Skip to: 1942
/* 1932 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 1942
/* 1938 */    MCD::OPC_Decode, 156, 10, 89, // Opcode: JIALC
/* 1942 */    MCD::OPC_CheckPredicate, 73, 5, 0, // Skip to: 1951
/* 1946 */    MCD::OPC_Decode, 185, 3, 235, 2, // Opcode: BNEZC
/* 1951 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_Ambiguous32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 6, 24, 0, // Skip to: 31
/* 7 */       MCD::OPC_CheckPredicate, 73, 11, 0, // Skip to: 22
/* 11 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 22
/* 17 */      MCD::OPC_Decode, 130, 3, 214, 2, // Opcode: BLEZALC
/* 22 */      MCD::OPC_CheckPredicate, 73, 145, 0, // Skip to: 171
/* 26 */      MCD::OPC_Decode, 192, 2, 214, 2, // Opcode: BGEUC
/* 31 */      MCD::OPC_FilterValue, 7, 24, 0, // Skip to: 59
/* 35 */      MCD::OPC_CheckPredicate, 73, 11, 0, // Skip to: 50
/* 39 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 50
/* 45 */      MCD::OPC_Decode, 221, 2, 215, 2, // Opcode: BGTZALC
/* 50 */      MCD::OPC_CheckPredicate, 73, 117, 0, // Skip to: 171
/* 54 */      MCD::OPC_Decode, 145, 3, 215, 2, // Opcode: BLTUC
/* 59 */      MCD::OPC_FilterValue, 8, 24, 0, // Skip to: 87
/* 63 */      MCD::OPC_CheckPredicate, 73, 11, 0, // Skip to: 78
/* 67 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 78
/* 73 */      MCD::OPC_Decode, 176, 2, 229, 2, // Opcode: BEQZALC
/* 78 */      MCD::OPC_CheckPredicate, 73, 89, 0, // Skip to: 171
/* 82 */      MCD::OPC_Decode, 198, 3, 216, 2, // Opcode: BOVC
/* 87 */      MCD::OPC_FilterValue, 22, 24, 0, // Skip to: 115
/* 91 */      MCD::OPC_CheckPredicate, 73, 11, 0, // Skip to: 106
/* 95 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 106
/* 101 */     MCD::OPC_Decode, 132, 3, 227, 2, // Opcode: BLEZC
/* 106 */     MCD::OPC_CheckPredicate, 73, 61, 0, // Skip to: 171
/* 110 */     MCD::OPC_Decode, 185, 2, 227, 2, // Opcode: BGEC
/* 115 */     MCD::OPC_FilterValue, 23, 24, 0, // Skip to: 143
/* 119 */     MCD::OPC_CheckPredicate, 73, 11, 0, // Skip to: 134
/* 123 */     MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 134
/* 129 */     MCD::OPC_Decode, 223, 2, 228, 2, // Opcode: BGTZC
/* 134 */     MCD::OPC_CheckPredicate, 73, 33, 0, // Skip to: 171
/* 138 */     MCD::OPC_Decode, 138, 3, 228, 2, // Opcode: BLTC
/* 143 */     MCD::OPC_FilterValue, 24, 24, 0, // Skip to: 171
/* 147 */     MCD::OPC_CheckPredicate, 73, 11, 0, // Skip to: 162
/* 151 */     MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 162
/* 157 */     MCD::OPC_Decode, 183, 3, 229, 2, // Opcode: BNEZALC
/* 162 */     MCD::OPC_CheckPredicate, 73, 5, 0, // Skip to: 171
/* 166 */     MCD::OPC_Decode, 191, 3, 229, 2, // Opcode: BNVC
/* 171 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_BranchZero32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 16
/* 7 */       MCD::OPC_CheckPredicate, 79, 18, 0, // Skip to: 29
/* 11 */      MCD::OPC_Decode, 207, 2, 227, 2, // Opcode: BGEZC64
/* 16 */      MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 29
/* 20 */      MCD::OPC_CheckPredicate, 79, 5, 0, // Skip to: 29
/* 24 */      MCD::OPC_Decode, 160, 3, 228, 2, // Opcode: BLTZC64
/* 29 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_GP6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 34
/* 7 */       MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 10 */      MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 22
/* 14 */      MCD::OPC_CheckPredicate, 80, 178, 0, // Skip to: 196
/* 18 */      MCD::OPC_Decode, 140, 16, 12, // Opcode: SELEQZ64
/* 22 */      MCD::OPC_FilterValue, 55, 170, 0, // Skip to: 196
/* 26 */      MCD::OPC_CheckPredicate, 80, 166, 0, // Skip to: 196
/* 30 */      MCD::OPC_Decode, 147, 16, 12, // Opcode: SELNEZ64
/* 34 */      MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 47
/* 38 */      MCD::OPC_CheckPredicate, 79, 154, 0, // Skip to: 196
/* 42 */      MCD::OPC_Decode, 193, 2, 214, 2, // Opcode: BGEUC64
/* 47 */      MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 60
/* 51 */      MCD::OPC_CheckPredicate, 79, 141, 0, // Skip to: 196
/* 55 */      MCD::OPC_Decode, 146, 3, 215, 2, // Opcode: BLTUC64
/* 60 */      MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 73
/* 64 */      MCD::OPC_CheckPredicate, 79, 128, 0, // Skip to: 196
/* 68 */      MCD::OPC_Decode, 172, 2, 216, 2, // Opcode: BEQC64
/* 73 */      MCD::OPC_FilterValue, 22, 24, 0, // Skip to: 101
/* 77 */      MCD::OPC_CheckPredicate, 79, 11, 0, // Skip to: 92
/* 81 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 92
/* 87 */      MCD::OPC_Decode, 133, 3, 227, 2, // Opcode: BLEZC64
/* 92 */      MCD::OPC_CheckPredicate, 79, 100, 0, // Skip to: 196
/* 96 */      MCD::OPC_Decode, 186, 2, 227, 2, // Opcode: BGEC64
/* 101 */     MCD::OPC_FilterValue, 23, 24, 0, // Skip to: 129
/* 105 */     MCD::OPC_CheckPredicate, 79, 11, 0, // Skip to: 120
/* 109 */     MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 120
/* 115 */     MCD::OPC_Decode, 224, 2, 228, 2, // Opcode: BGTZC64
/* 120 */     MCD::OPC_CheckPredicate, 79, 72, 0, // Skip to: 196
/* 124 */     MCD::OPC_Decode, 139, 3, 228, 2, // Opcode: BLTC64
/* 129 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 142
/* 133 */     MCD::OPC_CheckPredicate, 79, 59, 0, // Skip to: 196
/* 137 */     MCD::OPC_Decode, 171, 3, 229, 2, // Opcode: BNEC64
/* 142 */     MCD::OPC_FilterValue, 54, 23, 0, // Skip to: 169
/* 146 */     MCD::OPC_CheckPredicate, 79, 10, 0, // Skip to: 160
/* 150 */     MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 160
/* 156 */     MCD::OPC_Decode, 160, 10, 11, // Opcode: JIC64
/* 160 */     MCD::OPC_CheckPredicate, 79, 32, 0, // Skip to: 196
/* 164 */     MCD::OPC_Decode, 180, 2, 236, 2, // Opcode: BEQZC64
/* 169 */     MCD::OPC_FilterValue, 62, 23, 0, // Skip to: 196
/* 173 */     MCD::OPC_CheckPredicate, 79, 10, 0, // Skip to: 187
/* 177 */     MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 187
/* 183 */     MCD::OPC_Decode, 157, 10, 11, // Opcode: JIALC64
/* 187 */     MCD::OPC_CheckPredicate, 79, 5, 0, // Skip to: 196
/* 191 */     MCD::OPC_Decode, 187, 3, 236, 2, // Opcode: BNEZC64
/* 196 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_PTR6432[] = {
/* 0 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3 */       MCD::OPC_FilterValue, 38, 15, 0, // Skip to: 22
/* 7 */       MCD::OPC_CheckPredicate, 81, 30, 0, // Skip to: 41
/* 11 */      MCD::OPC_CheckField, 26, 6, 31, 24, 0, // Skip to: 41
/* 17 */      MCD::OPC_Decode, 226, 15, 233, 2, // Opcode: SC64_R6
/* 22 */      MCD::OPC_FilterValue, 54, 15, 0, // Skip to: 41
/* 26 */      MCD::OPC_CheckPredicate, 81, 11, 0, // Skip to: 41
/* 30 */      MCD::OPC_CheckField, 26, 6, 31, 5, 0, // Skip to: 41
/* 36 */      MCD::OPC_Decode, 244, 10, 233, 2, // Opcode: LL64_R6
/* 41 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 132, 1, // Skip to: 395
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 34
/* 14 */      MCD::OPC_CheckPredicate, 21, 126, 8, // Skip to: 2192
/* 18 */      MCD::OPC_CheckField, 16, 5, 0, 120, 8, // Skip to: 2192
/* 24 */      MCD::OPC_CheckField, 6, 5, 0, 114, 8, // Skip to: 2192
/* 30 */      MCD::OPC_Decode, 142, 10, 15, // Opcode: JALR64
/* 34 */      MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 53
/* 38 */      MCD::OPC_CheckPredicate, 82, 102, 8, // Skip to: 2192
/* 42 */      MCD::OPC_CheckField, 6, 5, 0, 96, 8, // Skip to: 2192
/* 48 */      MCD::OPC_Decode, 216, 7, 237, 2, // Opcode: DSLLV
/* 53 */      MCD::OPC_FilterValue, 22, 29, 0, // Skip to: 86
/* 57 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 60 */      MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 73
/* 64 */      MCD::OPC_CheckPredicate, 82, 76, 8, // Skip to: 2192
/* 68 */      MCD::OPC_Decode, 228, 7, 237, 2, // Opcode: DSRLV
/* 73 */      MCD::OPC_FilterValue, 1, 67, 8, // Skip to: 2192
/* 77 */      MCD::OPC_CheckPredicate, 83, 63, 8, // Skip to: 2192
/* 81 */      MCD::OPC_Decode, 203, 7, 237, 2, // Opcode: DROTRV
/* 86 */      MCD::OPC_FilterValue, 23, 15, 0, // Skip to: 105
/* 90 */      MCD::OPC_CheckPredicate, 82, 50, 8, // Skip to: 2192
/* 94 */      MCD::OPC_CheckField, 6, 5, 0, 44, 8, // Skip to: 2192
/* 100 */     MCD::OPC_Decode, 222, 7, 237, 2, // Opcode: DSRAV
/* 105 */     MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 124
/* 109 */     MCD::OPC_CheckPredicate, 84, 31, 8, // Skip to: 2192
/* 113 */     MCD::OPC_CheckField, 6, 10, 0, 25, 8, // Skip to: 2192
/* 119 */     MCD::OPC_Decode, 139, 7, 160, 1, // Opcode: DMULT
/* 124 */     MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 143
/* 128 */     MCD::OPC_CheckPredicate, 84, 12, 8, // Skip to: 2192
/* 132 */     MCD::OPC_CheckField, 6, 10, 0, 6, 8, // Skip to: 2192
/* 138 */     MCD::OPC_Decode, 140, 7, 160, 1, // Opcode: DMULTu
/* 143 */     MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 162
/* 147 */     MCD::OPC_CheckPredicate, 84, 249, 7, // Skip to: 2192
/* 151 */     MCD::OPC_CheckField, 6, 10, 0, 243, 7, // Skip to: 2192
/* 157 */     MCD::OPC_Decode, 208, 7, 160, 1, // Opcode: DSDIV
/* 162 */     MCD::OPC_FilterValue, 31, 15, 0, // Skip to: 181
/* 166 */     MCD::OPC_CheckPredicate, 84, 230, 7, // Skip to: 2192
/* 170 */     MCD::OPC_CheckField, 6, 10, 0, 224, 7, // Skip to: 2192
/* 176 */     MCD::OPC_Decode, 235, 7, 160, 1, // Opcode: DUDIV
/* 181 */     MCD::OPC_FilterValue, 44, 14, 0, // Skip to: 199
/* 185 */     MCD::OPC_CheckPredicate, 82, 211, 7, // Skip to: 2192
/* 189 */     MCD::OPC_CheckField, 6, 5, 0, 205, 7, // Skip to: 2192
/* 195 */     MCD::OPC_Decode, 184, 6, 12, // Opcode: DADD
/* 199 */     MCD::OPC_FilterValue, 45, 14, 0, // Skip to: 217
/* 203 */     MCD::OPC_CheckPredicate, 82, 193, 7, // Skip to: 2192
/* 207 */     MCD::OPC_CheckField, 6, 5, 0, 187, 7, // Skip to: 2192
/* 213 */     MCD::OPC_Decode, 190, 6, 12, // Opcode: DADDu
/* 217 */     MCD::OPC_FilterValue, 46, 14, 0, // Skip to: 235
/* 221 */     MCD::OPC_CheckPredicate, 82, 175, 7, // Skip to: 2192
/* 225 */     MCD::OPC_CheckField, 6, 5, 0, 169, 7, // Skip to: 2192
/* 231 */     MCD::OPC_Decode, 231, 7, 12, // Opcode: DSUB
/* 235 */     MCD::OPC_FilterValue, 47, 14, 0, // Skip to: 253
/* 239 */     MCD::OPC_CheckPredicate, 82, 157, 7, // Skip to: 2192
/* 243 */     MCD::OPC_CheckField, 6, 5, 0, 151, 7, // Skip to: 2192
/* 249 */     MCD::OPC_Decode, 234, 7, 12, // Opcode: DSUBu
/* 253 */     MCD::OPC_FilterValue, 56, 15, 0, // Skip to: 272
/* 257 */     MCD::OPC_CheckPredicate, 82, 139, 7, // Skip to: 2192
/* 261 */     MCD::OPC_CheckField, 21, 5, 0, 133, 7, // Skip to: 2192
/* 267 */     MCD::OPC_Decode, 212, 7, 238, 2, // Opcode: DSLL
/* 272 */     MCD::OPC_FilterValue, 58, 29, 0, // Skip to: 305
/* 276 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 279 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 292
/* 283 */     MCD::OPC_CheckPredicate, 82, 113, 7, // Skip to: 2192
/* 287 */     MCD::OPC_Decode, 225, 7, 238, 2, // Opcode: DSRL
/* 292 */     MCD::OPC_FilterValue, 1, 104, 7, // Skip to: 2192
/* 296 */     MCD::OPC_CheckPredicate, 83, 100, 7, // Skip to: 2192
/* 300 */     MCD::OPC_Decode, 200, 7, 238, 2, // Opcode: DROTR
/* 305 */     MCD::OPC_FilterValue, 59, 15, 0, // Skip to: 324
/* 309 */     MCD::OPC_CheckPredicate, 82, 87, 7, // Skip to: 2192
/* 313 */     MCD::OPC_CheckField, 21, 5, 0, 81, 7, // Skip to: 2192
/* 319 */     MCD::OPC_Decode, 219, 7, 238, 2, // Opcode: DSRA
/* 324 */     MCD::OPC_FilterValue, 60, 15, 0, // Skip to: 343
/* 328 */     MCD::OPC_CheckPredicate, 82, 68, 7, // Skip to: 2192
/* 332 */     MCD::OPC_CheckField, 21, 5, 0, 62, 7, // Skip to: 2192
/* 338 */     MCD::OPC_Decode, 213, 7, 238, 2, // Opcode: DSLL32
/* 343 */     MCD::OPC_FilterValue, 62, 29, 0, // Skip to: 376
/* 347 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 350 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 363
/* 354 */     MCD::OPC_CheckPredicate, 82, 42, 7, // Skip to: 2192
/* 358 */     MCD::OPC_Decode, 226, 7, 238, 2, // Opcode: DSRL32
/* 363 */     MCD::OPC_FilterValue, 1, 33, 7, // Skip to: 2192
/* 367 */     MCD::OPC_CheckPredicate, 83, 29, 7, // Skip to: 2192
/* 371 */     MCD::OPC_Decode, 201, 7, 238, 2, // Opcode: DROTR32
/* 376 */     MCD::OPC_FilterValue, 63, 20, 7, // Skip to: 2192
/* 380 */     MCD::OPC_CheckPredicate, 82, 16, 7, // Skip to: 2192
/* 384 */     MCD::OPC_CheckField, 21, 5, 0, 10, 7, // Skip to: 2192
/* 390 */     MCD::OPC_Decode, 220, 7, 238, 2, // Opcode: DSRA32
/* 395 */     MCD::OPC_FilterValue, 16, 41, 0, // Skip to: 440
/* 399 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 402 */     MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 421
/* 406 */     MCD::OPC_CheckPredicate, 85, 246, 6, // Skip to: 2192
/* 410 */     MCD::OPC_CheckField, 3, 8, 0, 240, 6, // Skip to: 2192
/* 416 */     MCD::OPC_Decode, 244, 6, 239, 2, // Opcode: DMFC0
/* 421 */     MCD::OPC_FilterValue, 5, 231, 6, // Skip to: 2192
/* 425 */     MCD::OPC_CheckPredicate, 85, 227, 6, // Skip to: 2192
/* 429 */     MCD::OPC_CheckField, 3, 8, 0, 221, 6, // Skip to: 2192
/* 435 */     MCD::OPC_Decode, 255, 6, 240, 2, // Opcode: DMTC0
/* 440 */     MCD::OPC_FilterValue, 17, 237, 3, // Skip to: 1449
/* 444 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 447 */     MCD::OPC_FilterValue, 0, 54, 0, // Skip to: 505
/* 451 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 454 */     MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 473
/* 458 */     MCD::OPC_CheckPredicate, 86, 194, 6, // Skip to: 2192
/* 462 */     MCD::OPC_CheckField, 6, 5, 0, 188, 6, // Skip to: 2192
/* 468 */     MCD::OPC_Decode, 147, 12, 241, 2, // Opcode: MFHC1_D64
/* 473 */     MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 492
/* 477 */     MCD::OPC_CheckPredicate, 86, 175, 6, // Skip to: 2192
/* 481 */     MCD::OPC_CheckField, 6, 5, 0, 169, 6, // Skip to: 2192
/* 487 */     MCD::OPC_Decode, 162, 13, 242, 2, // Opcode: MTHC1_D64
/* 492 */     MCD::OPC_FilterValue, 17, 160, 6, // Skip to: 2192
/* 496 */     MCD::OPC_CheckPredicate, 87, 156, 6, // Skip to: 2192
/* 500 */     MCD::OPC_Decode, 167, 8, 221, 2, // Opcode: FADD_D64
/* 505 */     MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 524
/* 509 */     MCD::OPC_CheckPredicate, 87, 143, 6, // Skip to: 2192
/* 513 */     MCD::OPC_CheckField, 21, 5, 17, 137, 6, // Skip to: 2192
/* 519 */     MCD::OPC_Decode, 183, 9, 221, 2, // Opcode: FSUB_D64
/* 524 */     MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 543
/* 528 */     MCD::OPC_CheckPredicate, 87, 124, 6, // Skip to: 2192
/* 532 */     MCD::OPC_CheckField, 21, 5, 17, 118, 6, // Skip to: 2192
/* 538 */     MCD::OPC_Decode, 142, 9, 221, 2, // Opcode: FMUL_D64
/* 543 */     MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 562
/* 547 */     MCD::OPC_CheckPredicate, 87, 105, 6, // Skip to: 2192
/* 551 */     MCD::OPC_CheckField, 21, 5, 17, 99, 6, // Skip to: 2192
/* 557 */     MCD::OPC_Decode, 205, 8, 221, 2, // Opcode: FDIV_D64
/* 562 */     MCD::OPC_FilterValue, 4, 16, 0, // Skip to: 582
/* 566 */     MCD::OPC_CheckPredicate, 88, 86, 6, // Skip to: 2192
/* 570 */     MCD::OPC_CheckField, 16, 10, 160, 4, 79, 6, // Skip to: 2192
/* 577 */     MCD::OPC_Decode, 176, 9, 221, 1, // Opcode: FSQRT_D64
/* 582 */     MCD::OPC_FilterValue, 5, 16, 0, // Skip to: 602
/* 586 */     MCD::OPC_CheckPredicate, 87, 66, 6, // Skip to: 2192
/* 590 */     MCD::OPC_CheckField, 16, 10, 160, 4, 59, 6, // Skip to: 2192
/* 597 */     MCD::OPC_Decode, 160, 8, 221, 1, // Opcode: FABS_D64
/* 602 */     MCD::OPC_FilterValue, 6, 16, 0, // Skip to: 622
/* 606 */     MCD::OPC_CheckPredicate, 87, 46, 6, // Skip to: 2192
/* 610 */     MCD::OPC_CheckField, 16, 10, 160, 4, 39, 6, // Skip to: 2192
/* 617 */     MCD::OPC_Decode, 133, 9, 221, 1, // Opcode: FMOV_D64
/* 622 */     MCD::OPC_FilterValue, 7, 16, 0, // Skip to: 642
/* 626 */     MCD::OPC_CheckPredicate, 87, 26, 6, // Skip to: 2192
/* 630 */     MCD::OPC_CheckField, 16, 10, 160, 4, 19, 6, // Skip to: 2192
/* 637 */     MCD::OPC_Decode, 150, 9, 221, 1, // Opcode: FNEG_D64
/* 642 */     MCD::OPC_FilterValue, 8, 31, 0, // Skip to: 677
/* 646 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 649 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 663
/* 654 */     MCD::OPC_CheckPredicate, 89, 254, 5, // Skip to: 2192
/* 658 */     MCD::OPC_Decode, 190, 15, 214, 1, // Opcode: ROUND_L_S
/* 663 */     MCD::OPC_FilterValue, 160, 4, 244, 5, // Skip to: 2192
/* 668 */     MCD::OPC_CheckPredicate, 89, 240, 5, // Skip to: 2192
/* 672 */     MCD::OPC_Decode, 188, 15, 221, 1, // Opcode: ROUND_L_D64
/* 677 */     MCD::OPC_FilterValue, 9, 31, 0, // Skip to: 712
/* 681 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 684 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 698
/* 689 */     MCD::OPC_CheckPredicate, 89, 219, 5, // Skip to: 2192
/* 693 */     MCD::OPC_Decode, 137, 19, 214, 1, // Opcode: TRUNC_L_S
/* 698 */     MCD::OPC_FilterValue, 160, 4, 209, 5, // Skip to: 2192
/* 703 */     MCD::OPC_CheckPredicate, 89, 205, 5, // Skip to: 2192
/* 707 */     MCD::OPC_Decode, 135, 19, 221, 1, // Opcode: TRUNC_L_D64
/* 712 */     MCD::OPC_FilterValue, 10, 31, 0, // Skip to: 747
/* 716 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 719 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 733
/* 724 */     MCD::OPC_CheckPredicate, 89, 184, 5, // Skip to: 2192
/* 728 */     MCD::OPC_Decode, 139, 4, 214, 1, // Opcode: CEIL_L_S
/* 733 */     MCD::OPC_FilterValue, 160, 4, 174, 5, // Skip to: 2192
/* 738 */     MCD::OPC_CheckPredicate, 89, 170, 5, // Skip to: 2192
/* 742 */     MCD::OPC_Decode, 137, 4, 221, 1, // Opcode: CEIL_L_D64
/* 747 */     MCD::OPC_FilterValue, 11, 31, 0, // Skip to: 782
/* 751 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 754 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 768
/* 759 */     MCD::OPC_CheckPredicate, 89, 149, 5, // Skip to: 2192
/* 763 */     MCD::OPC_Decode, 240, 8, 214, 1, // Opcode: FLOOR_L_S
/* 768 */     MCD::OPC_FilterValue, 160, 4, 139, 5, // Skip to: 2192
/* 773 */     MCD::OPC_CheckPredicate, 89, 135, 5, // Skip to: 2192
/* 777 */     MCD::OPC_Decode, 238, 8, 221, 1, // Opcode: FLOOR_L_D64
/* 782 */     MCD::OPC_FilterValue, 12, 16, 0, // Skip to: 802
/* 786 */     MCD::OPC_CheckPredicate, 88, 122, 5, // Skip to: 2192
/* 790 */     MCD::OPC_CheckField, 16, 10, 160, 4, 115, 5, // Skip to: 2192
/* 797 */     MCD::OPC_Decode, 193, 15, 243, 2, // Opcode: ROUND_W_D64
/* 802 */     MCD::OPC_FilterValue, 13, 16, 0, // Skip to: 822
/* 806 */     MCD::OPC_CheckPredicate, 88, 102, 5, // Skip to: 2192
/* 810 */     MCD::OPC_CheckField, 16, 10, 160, 4, 95, 5, // Skip to: 2192
/* 817 */     MCD::OPC_Decode, 140, 19, 243, 2, // Opcode: TRUNC_W_D64
/* 822 */     MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 842
/* 826 */     MCD::OPC_CheckPredicate, 88, 82, 5, // Skip to: 2192
/* 830 */     MCD::OPC_CheckField, 16, 10, 160, 4, 75, 5, // Skip to: 2192
/* 837 */     MCD::OPC_Decode, 142, 4, 243, 2, // Opcode: CEIL_W_D64
/* 842 */     MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 862
/* 846 */     MCD::OPC_CheckPredicate, 88, 62, 5, // Skip to: 2192
/* 850 */     MCD::OPC_CheckField, 16, 10, 160, 4, 55, 5, // Skip to: 2192
/* 857 */     MCD::OPC_Decode, 243, 8, 243, 2, // Opcode: FLOOR_W_D64
/* 862 */     MCD::OPC_FilterValue, 17, 41, 0, // Skip to: 907
/* 866 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 869 */     MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 888
/* 873 */     MCD::OPC_CheckPredicate, 90, 35, 5, // Skip to: 2192
/* 877 */     MCD::OPC_CheckField, 21, 5, 17, 29, 5, // Skip to: 2192
/* 883 */     MCD::OPC_Decode, 213, 12, 244, 2, // Opcode: MOVF_D64
/* 888 */     MCD::OPC_FilterValue, 1, 20, 5, // Skip to: 2192
/* 892 */     MCD::OPC_CheckPredicate, 90, 16, 5, // Skip to: 2192
/* 896 */     MCD::OPC_CheckField, 21, 5, 17, 10, 5, // Skip to: 2192
/* 902 */     MCD::OPC_Decode, 233, 12, 244, 2, // Opcode: MOVT_D64
/* 907 */     MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 926
/* 911 */     MCD::OPC_CheckPredicate, 90, 253, 4, // Skip to: 2192
/* 915 */     MCD::OPC_CheckField, 21, 5, 17, 247, 4, // Skip to: 2192
/* 921 */     MCD::OPC_Decode, 245, 12, 245, 2, // Opcode: MOVZ_I_D64
/* 926 */     MCD::OPC_FilterValue, 19, 15, 0, // Skip to: 945
/* 930 */     MCD::OPC_CheckPredicate, 90, 234, 4, // Skip to: 2192
/* 934 */     MCD::OPC_CheckField, 21, 5, 17, 228, 4, // Skip to: 2192
/* 940 */     MCD::OPC_Decode, 225, 12, 245, 2, // Opcode: MOVN_I_D64
/* 945 */     MCD::OPC_FilterValue, 32, 31, 0, // Skip to: 980
/* 949 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 952 */     MCD::OPC_FilterValue, 160, 4, 9, 0, // Skip to: 966
/* 957 */     MCD::OPC_CheckPredicate, 87, 207, 4, // Skip to: 2192
/* 961 */     MCD::OPC_Decode, 198, 5, 243, 2, // Opcode: CVT_S_D64
/* 966 */     MCD::OPC_FilterValue, 160, 5, 197, 4, // Skip to: 2192
/* 971 */     MCD::OPC_CheckPredicate, 89, 193, 4, // Skip to: 2192
/* 975 */     MCD::OPC_Decode, 200, 5, 243, 2, // Opcode: CVT_S_L
/* 980 */     MCD::OPC_FilterValue, 33, 45, 0, // Skip to: 1029
/* 984 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 987 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 1001
/* 992 */     MCD::OPC_CheckPredicate, 87, 172, 4, // Skip to: 2192
/* 996 */     MCD::OPC_Decode, 184, 5, 214, 1, // Opcode: CVT_D64_S
/* 1001 */    MCD::OPC_FilterValue, 128, 5, 9, 0, // Skip to: 1015
/* 1006 */    MCD::OPC_CheckPredicate, 87, 158, 4, // Skip to: 2192
/* 1010 */    MCD::OPC_Decode, 185, 5, 214, 1, // Opcode: CVT_D64_W
/* 1015 */    MCD::OPC_FilterValue, 160, 5, 148, 4, // Skip to: 2192
/* 1020 */    MCD::OPC_CheckPredicate, 87, 144, 4, // Skip to: 2192
/* 1024 */    MCD::OPC_Decode, 183, 5, 221, 1, // Opcode: CVT_D64_L
/* 1029 */    MCD::OPC_FilterValue, 36, 16, 0, // Skip to: 1049
/* 1033 */    MCD::OPC_CheckPredicate, 87, 131, 4, // Skip to: 2192
/* 1037 */    MCD::OPC_CheckField, 16, 10, 160, 4, 124, 4, // Skip to: 2192
/* 1044 */    MCD::OPC_Decode, 206, 5, 243, 2, // Opcode: CVT_W_D64
/* 1049 */    MCD::OPC_FilterValue, 48, 21, 0, // Skip to: 1074
/* 1053 */    MCD::OPC_CheckPredicate, 91, 111, 4, // Skip to: 2192
/* 1057 */    MCD::OPC_CheckField, 21, 5, 17, 105, 4, // Skip to: 2192
/* 1063 */    MCD::OPC_CheckField, 6, 2, 0, 99, 4, // Skip to: 2192
/* 1069 */    MCD::OPC_Decode, 220, 5, 246, 2, // Opcode: C_F_D64
/* 1074 */    MCD::OPC_FilterValue, 49, 21, 0, // Skip to: 1099
/* 1078 */    MCD::OPC_CheckPredicate, 91, 86, 4, // Skip to: 2192
/* 1082 */    MCD::OPC_CheckField, 21, 5, 17, 80, 4, // Skip to: 2192
/* 1088 */    MCD::OPC_CheckField, 6, 2, 0, 74, 4, // Skip to: 2192
/* 1094 */    MCD::OPC_Decode, 176, 6, 246, 2, // Opcode: C_UN_D64
/* 1099 */    MCD::OPC_FilterValue, 50, 21, 0, // Skip to: 1124
/* 1103 */    MCD::OPC_CheckPredicate, 91, 61, 4, // Skip to: 2192
/* 1107 */    MCD::OPC_CheckField, 21, 5, 17, 55, 4, // Skip to: 2192
/* 1113 */    MCD::OPC_CheckField, 6, 2, 0, 49, 4, // Skip to: 2192
/* 1119 */    MCD::OPC_Decode, 214, 5, 246, 2, // Opcode: C_EQ_D64
/* 1124 */    MCD::OPC_FilterValue, 51, 21, 0, // Skip to: 1149
/* 1128 */    MCD::OPC_CheckPredicate, 91, 36, 4, // Skip to: 2192
/* 1132 */    MCD::OPC_CheckField, 21, 5, 17, 30, 4, // Skip to: 2192
/* 1138 */    MCD::OPC_CheckField, 6, 2, 0, 24, 4, // Skip to: 2192
/* 1144 */    MCD::OPC_Decode, 158, 6, 246, 2, // Opcode: C_UEQ_D64
/* 1149 */    MCD::OPC_FilterValue, 52, 21, 0, // Skip to: 1174
/* 1153 */    MCD::OPC_CheckPredicate, 91, 11, 4, // Skip to: 2192
/* 1157 */    MCD::OPC_CheckField, 21, 5, 17, 5, 4, // Skip to: 2192
/* 1163 */    MCD::OPC_CheckField, 6, 2, 0, 255, 3, // Skip to: 2192
/* 1169 */    MCD::OPC_Decode, 140, 6, 246, 2, // Opcode: C_OLT_D64
/* 1174 */    MCD::OPC_FilterValue, 53, 21, 0, // Skip to: 1199
/* 1178 */    MCD::OPC_CheckPredicate, 91, 242, 3, // Skip to: 2192
/* 1182 */    MCD::OPC_CheckField, 21, 5, 17, 236, 3, // Skip to: 2192
/* 1188 */    MCD::OPC_CheckField, 6, 2, 0, 230, 3, // Skip to: 2192
/* 1194 */    MCD::OPC_Decode, 170, 6, 246, 2, // Opcode: C_ULT_D64
/* 1199 */    MCD::OPC_FilterValue, 54, 21, 0, // Skip to: 1224
/* 1203 */    MCD::OPC_CheckPredicate, 91, 217, 3, // Skip to: 2192
/* 1207 */    MCD::OPC_CheckField, 21, 5, 17, 211, 3, // Skip to: 2192
/* 1213 */    MCD::OPC_CheckField, 6, 2, 0, 205, 3, // Skip to: 2192
/* 1219 */    MCD::OPC_Decode, 134, 6, 246, 2, // Opcode: C_OLE_D64
/* 1224 */    MCD::OPC_FilterValue, 55, 21, 0, // Skip to: 1249
/* 1228 */    MCD::OPC_CheckPredicate, 91, 192, 3, // Skip to: 2192
/* 1232 */    MCD::OPC_CheckField, 21, 5, 17, 186, 3, // Skip to: 2192
/* 1238 */    MCD::OPC_CheckField, 6, 2, 0, 180, 3, // Skip to: 2192
/* 1244 */    MCD::OPC_Decode, 164, 6, 246, 2, // Opcode: C_ULE_D64
/* 1249 */    MCD::OPC_FilterValue, 56, 21, 0, // Skip to: 1274
/* 1253 */    MCD::OPC_CheckPredicate, 91, 167, 3, // Skip to: 2192
/* 1257 */    MCD::OPC_CheckField, 21, 5, 17, 161, 3, // Skip to: 2192
/* 1263 */    MCD::OPC_CheckField, 6, 2, 0, 155, 3, // Skip to: 2192
/* 1269 */    MCD::OPC_Decode, 152, 6, 246, 2, // Opcode: C_SF_D64
/* 1274 */    MCD::OPC_FilterValue, 57, 21, 0, // Skip to: 1299
/* 1278 */    MCD::OPC_CheckPredicate, 91, 142, 3, // Skip to: 2192
/* 1282 */    MCD::OPC_CheckField, 21, 5, 17, 136, 3, // Skip to: 2192
/* 1288 */    MCD::OPC_CheckField, 6, 2, 0, 130, 3, // Skip to: 2192
/* 1294 */    MCD::OPC_Decode, 244, 5, 246, 2, // Opcode: C_NGLE_D64
/* 1299 */    MCD::OPC_FilterValue, 58, 21, 0, // Skip to: 1324
/* 1303 */    MCD::OPC_CheckPredicate, 91, 117, 3, // Skip to: 2192
/* 1307 */    MCD::OPC_CheckField, 21, 5, 17, 111, 3, // Skip to: 2192
/* 1313 */    MCD::OPC_CheckField, 6, 2, 0, 105, 3, // Skip to: 2192
/* 1319 */    MCD::OPC_Decode, 146, 6, 246, 2, // Opcode: C_SEQ_D64
/* 1324 */    MCD::OPC_FilterValue, 59, 21, 0, // Skip to: 1349
/* 1328 */    MCD::OPC_CheckPredicate, 91, 92, 3, // Skip to: 2192
/* 1332 */    MCD::OPC_CheckField, 21, 5, 17, 86, 3, // Skip to: 2192
/* 1338 */    MCD::OPC_CheckField, 6, 2, 0, 80, 3, // Skip to: 2192
/* 1344 */    MCD::OPC_Decode, 250, 5, 246, 2, // Opcode: C_NGL_D64
/* 1349 */    MCD::OPC_FilterValue, 60, 21, 0, // Skip to: 1374
/* 1353 */    MCD::OPC_CheckPredicate, 91, 67, 3, // Skip to: 2192
/* 1357 */    MCD::OPC_CheckField, 21, 5, 17, 61, 3, // Skip to: 2192
/* 1363 */    MCD::OPC_CheckField, 6, 2, 0, 55, 3, // Skip to: 2192
/* 1369 */    MCD::OPC_Decode, 232, 5, 246, 2, // Opcode: C_LT_D64
/* 1374 */    MCD::OPC_FilterValue, 61, 21, 0, // Skip to: 1399
/* 1378 */    MCD::OPC_CheckPredicate, 91, 42, 3, // Skip to: 2192
/* 1382 */    MCD::OPC_CheckField, 21, 5, 17, 36, 3, // Skip to: 2192
/* 1388 */    MCD::OPC_CheckField, 6, 2, 0, 30, 3, // Skip to: 2192
/* 1394 */    MCD::OPC_Decode, 238, 5, 246, 2, // Opcode: C_NGE_D64
/* 1399 */    MCD::OPC_FilterValue, 62, 21, 0, // Skip to: 1424
/* 1403 */    MCD::OPC_CheckPredicate, 91, 17, 3, // Skip to: 2192
/* 1407 */    MCD::OPC_CheckField, 21, 5, 17, 11, 3, // Skip to: 2192
/* 1413 */    MCD::OPC_CheckField, 6, 2, 0, 5, 3, // Skip to: 2192
/* 1419 */    MCD::OPC_Decode, 226, 5, 246, 2, // Opcode: C_LE_D64
/* 1424 */    MCD::OPC_FilterValue, 63, 252, 2, // Skip to: 2192
/* 1428 */    MCD::OPC_CheckPredicate, 91, 248, 2, // Skip to: 2192
/* 1432 */    MCD::OPC_CheckField, 21, 5, 17, 242, 2, // Skip to: 2192
/* 1438 */    MCD::OPC_CheckField, 6, 2, 0, 236, 2, // Skip to: 2192
/* 1444 */    MCD::OPC_Decode, 128, 6, 246, 2, // Opcode: C_NGT_D64
/* 1449 */    MCD::OPC_FilterValue, 18, 41, 0, // Skip to: 1494
/* 1453 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1456 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 1475
/* 1460 */    MCD::OPC_CheckPredicate, 85, 216, 2, // Skip to: 2192
/* 1464 */    MCD::OPC_CheckField, 3, 8, 0, 210, 2, // Skip to: 2192
/* 1470 */    MCD::OPC_Decode, 248, 6, 247, 2, // Opcode: DMFC2
/* 1475 */    MCD::OPC_FilterValue, 5, 201, 2, // Skip to: 2192
/* 1479 */    MCD::OPC_CheckPredicate, 85, 197, 2, // Skip to: 2192
/* 1483 */    MCD::OPC_CheckField, 3, 8, 0, 191, 2, // Skip to: 2192
/* 1489 */    MCD::OPC_Decode, 131, 7, 248, 2, // Opcode: DMTC2
/* 1494 */    MCD::OPC_FilterValue, 19, 131, 0, // Skip to: 1629
/* 1498 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1501 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 1520
/* 1505 */    MCD::OPC_CheckPredicate, 92, 171, 2, // Skip to: 2192
/* 1509 */    MCD::OPC_CheckField, 11, 5, 0, 165, 2, // Skip to: 2192
/* 1515 */    MCD::OPC_Decode, 217, 10, 249, 2, // Opcode: LDXC164
/* 1520 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 1539
/* 1524 */    MCD::OPC_CheckPredicate, 93, 152, 2, // Skip to: 2192
/* 1528 */    MCD::OPC_CheckField, 11, 5, 0, 146, 2, // Skip to: 2192
/* 1534 */    MCD::OPC_Decode, 137, 11, 249, 2, // Opcode: LUXC164
/* 1539 */    MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 1558
/* 1543 */    MCD::OPC_CheckPredicate, 92, 133, 2, // Skip to: 2192
/* 1547 */    MCD::OPC_CheckField, 6, 5, 0, 127, 2, // Skip to: 2192
/* 1553 */    MCD::OPC_Decode, 128, 16, 250, 2, // Opcode: SDXC164
/* 1558 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 1577
/* 1562 */    MCD::OPC_CheckPredicate, 93, 114, 2, // Skip to: 2192
/* 1566 */    MCD::OPC_CheckField, 6, 5, 0, 108, 2, // Skip to: 2192
/* 1572 */    MCD::OPC_Decode, 132, 18, 250, 2, // Opcode: SUXC164
/* 1577 */    MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 1590
/* 1581 */    MCD::OPC_CheckPredicate, 92, 95, 2, // Skip to: 2192
/* 1585 */    MCD::OPC_Decode, 221, 11, 251, 2, // Opcode: MADD_D64
/* 1590 */    MCD::OPC_FilterValue, 41, 9, 0, // Skip to: 1603
/* 1594 */    MCD::OPC_CheckPredicate, 92, 82, 2, // Skip to: 2192
/* 1598 */    MCD::OPC_Decode, 144, 13, 251, 2, // Opcode: MSUB_D64
/* 1603 */    MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 1616
/* 1607 */    MCD::OPC_CheckPredicate, 92, 69, 2, // Skip to: 2192
/* 1611 */    MCD::OPC_Decode, 252, 13, 251, 2, // Opcode: NMADD_D64
/* 1616 */    MCD::OPC_FilterValue, 57, 60, 2, // Skip to: 2192
/* 1620 */    MCD::OPC_CheckPredicate, 92, 56, 2, // Skip to: 2192
/* 1624 */    MCD::OPC_Decode, 129, 14, 251, 2, // Opcode: NMSUB_D64
/* 1629 */    MCD::OPC_FilterValue, 21, 227, 0, // Skip to: 1860
/* 1633 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 1636 */    MCD::OPC_FilterValue, 188, 8, 9, 0, // Skip to: 1650
/* 1641 */    MCD::OPC_CheckPredicate, 94, 35, 2, // Skip to: 2192
/* 1645 */    MCD::OPC_Decode, 221, 5, 252, 2, // Opcode: C_F_D64_MM
/* 1650 */    MCD::OPC_FilterValue, 252, 8, 9, 0, // Skip to: 1664
/* 1655 */    MCD::OPC_CheckPredicate, 94, 21, 2, // Skip to: 2192
/* 1659 */    MCD::OPC_Decode, 177, 6, 252, 2, // Opcode: C_UN_D64_MM
/* 1664 */    MCD::OPC_FilterValue, 188, 9, 9, 0, // Skip to: 1678
/* 1669 */    MCD::OPC_CheckPredicate, 94, 7, 2, // Skip to: 2192
/* 1673 */    MCD::OPC_Decode, 215, 5, 252, 2, // Opcode: C_EQ_D64_MM
/* 1678 */    MCD::OPC_FilterValue, 252, 9, 9, 0, // Skip to: 1692
/* 1683 */    MCD::OPC_CheckPredicate, 94, 249, 1, // Skip to: 2192
/* 1687 */    MCD::OPC_Decode, 159, 6, 252, 2, // Opcode: C_UEQ_D64_MM
/* 1692 */    MCD::OPC_FilterValue, 188, 10, 9, 0, // Skip to: 1706
/* 1697 */    MCD::OPC_CheckPredicate, 94, 235, 1, // Skip to: 2192
/* 1701 */    MCD::OPC_Decode, 141, 6, 252, 2, // Opcode: C_OLT_D64_MM
/* 1706 */    MCD::OPC_FilterValue, 252, 10, 9, 0, // Skip to: 1720
/* 1711 */    MCD::OPC_CheckPredicate, 94, 221, 1, // Skip to: 2192
/* 1715 */    MCD::OPC_Decode, 171, 6, 252, 2, // Opcode: C_ULT_D64_MM
/* 1720 */    MCD::OPC_FilterValue, 188, 11, 9, 0, // Skip to: 1734
/* 1725 */    MCD::OPC_CheckPredicate, 94, 207, 1, // Skip to: 2192
/* 1729 */    MCD::OPC_Decode, 135, 6, 252, 2, // Opcode: C_OLE_D64_MM
/* 1734 */    MCD::OPC_FilterValue, 252, 11, 9, 0, // Skip to: 1748
/* 1739 */    MCD::OPC_CheckPredicate, 94, 193, 1, // Skip to: 2192
/* 1743 */    MCD::OPC_Decode, 165, 6, 252, 2, // Opcode: C_ULE_D64_MM
/* 1748 */    MCD::OPC_FilterValue, 188, 12, 9, 0, // Skip to: 1762
/* 1753 */    MCD::OPC_CheckPredicate, 94, 179, 1, // Skip to: 2192
/* 1757 */    MCD::OPC_Decode, 153, 6, 252, 2, // Opcode: C_SF_D64_MM
/* 1762 */    MCD::OPC_FilterValue, 252, 12, 9, 0, // Skip to: 1776
/* 1767 */    MCD::OPC_CheckPredicate, 94, 165, 1, // Skip to: 2192
/* 1771 */    MCD::OPC_Decode, 245, 5, 252, 2, // Opcode: C_NGLE_D64_MM
/* 1776 */    MCD::OPC_FilterValue, 188, 13, 9, 0, // Skip to: 1790
/* 1781 */    MCD::OPC_CheckPredicate, 94, 151, 1, // Skip to: 2192
/* 1785 */    MCD::OPC_Decode, 147, 6, 252, 2, // Opcode: C_SEQ_D64_MM
/* 1790 */    MCD::OPC_FilterValue, 252, 13, 9, 0, // Skip to: 1804
/* 1795 */    MCD::OPC_CheckPredicate, 94, 137, 1, // Skip to: 2192
/* 1799 */    MCD::OPC_Decode, 251, 5, 252, 2, // Opcode: C_NGL_D64_MM
/* 1804 */    MCD::OPC_FilterValue, 188, 14, 9, 0, // Skip to: 1818
/* 1809 */    MCD::OPC_CheckPredicate, 94, 123, 1, // Skip to: 2192
/* 1813 */    MCD::OPC_Decode, 233, 5, 252, 2, // Opcode: C_LT_D64_MM
/* 1818 */    MCD::OPC_FilterValue, 252, 14, 9, 0, // Skip to: 1832
/* 1823 */    MCD::OPC_CheckPredicate, 94, 109, 1, // Skip to: 2192
/* 1827 */    MCD::OPC_Decode, 239, 5, 252, 2, // Opcode: C_NGE_D64_MM
/* 1832 */    MCD::OPC_FilterValue, 188, 15, 9, 0, // Skip to: 1846
/* 1837 */    MCD::OPC_CheckPredicate, 94, 95, 1, // Skip to: 2192
/* 1841 */    MCD::OPC_Decode, 227, 5, 252, 2, // Opcode: C_LE_D64_MM
/* 1846 */    MCD::OPC_FilterValue, 252, 15, 85, 1, // Skip to: 2192
/* 1851 */    MCD::OPC_CheckPredicate, 94, 81, 1, // Skip to: 2192
/* 1855 */    MCD::OPC_Decode, 129, 6, 252, 2, // Opcode: C_NGT_D64_MM
/* 1860 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 1873
/* 1864 */    MCD::OPC_CheckPredicate, 95, 68, 1, // Skip to: 2192
/* 1868 */    MCD::OPC_Decode, 188, 6, 253, 2, // Opcode: DADDi
/* 1873 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 1886
/* 1877 */    MCD::OPC_CheckPredicate, 82, 55, 1, // Skip to: 2192
/* 1881 */    MCD::OPC_Decode, 189, 6, 253, 2, // Opcode: DADDiu
/* 1886 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 1899
/* 1890 */    MCD::OPC_CheckPredicate, 95, 42, 1, // Skip to: 2192
/* 1894 */    MCD::OPC_Decode, 211, 10, 209, 2, // Opcode: LDL
/* 1899 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 1912
/* 1903 */    MCD::OPC_CheckPredicate, 95, 29, 1, // Skip to: 2192
/* 1907 */    MCD::OPC_Decode, 215, 10, 209, 2, // Opcode: LDR
/* 1912 */    MCD::OPC_FilterValue, 28, 29, 0, // Skip to: 1945
/* 1916 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 1919 */    MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 1932
/* 1923 */    MCD::OPC_CheckPredicate, 96, 9, 1, // Skip to: 2192
/* 1927 */    MCD::OPC_Decode, 204, 6, 254, 2, // Opcode: DCLZ
/* 1932 */    MCD::OPC_FilterValue, 37, 0, 1, // Skip to: 2192
/* 1936 */    MCD::OPC_CheckPredicate, 96, 252, 0, // Skip to: 2192
/* 1940 */    MCD::OPC_Decode, 201, 6, 254, 2, // Opcode: DCLO
/* 1945 */    MCD::OPC_FilterValue, 31, 126, 0, // Skip to: 2075
/* 1949 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1952 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1965
/* 1956 */    MCD::OPC_CheckPredicate, 83, 232, 0, // Skip to: 2192
/* 1960 */    MCD::OPC_Decode, 215, 6, 255, 2, // Opcode: DEXTM
/* 1965 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1978
/* 1969 */    MCD::OPC_CheckPredicate, 83, 219, 0, // Skip to: 2192
/* 1973 */    MCD::OPC_Decode, 217, 6, 255, 2, // Opcode: DEXTU
/* 1978 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1991
/* 1982 */    MCD::OPC_CheckPredicate, 83, 206, 0, // Skip to: 2192
/* 1986 */    MCD::OPC_Decode, 214, 6, 255, 2, // Opcode: DEXT
/* 1991 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 2004
/* 1995 */    MCD::OPC_CheckPredicate, 83, 193, 0, // Skip to: 2192
/* 1999 */    MCD::OPC_Decode, 222, 6, 128, 3, // Opcode: DINSM
/* 2004 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2017
/* 2008 */    MCD::OPC_CheckPredicate, 83, 180, 0, // Skip to: 2192
/* 2012 */    MCD::OPC_Decode, 224, 6, 128, 3, // Opcode: DINSU
/* 2017 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 2030
/* 2021 */    MCD::OPC_CheckPredicate, 83, 167, 0, // Skip to: 2192
/* 2025 */    MCD::OPC_Decode, 221, 6, 128, 3, // Opcode: DINS
/* 2030 */    MCD::OPC_FilterValue, 36, 158, 0, // Skip to: 2192
/* 2034 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2037 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 2056
/* 2041 */    MCD::OPC_CheckPredicate, 83, 147, 0, // Skip to: 2192
/* 2045 */    MCD::OPC_CheckField, 21, 5, 0, 141, 0, // Skip to: 2192
/* 2051 */    MCD::OPC_Decode, 206, 7, 231, 2, // Opcode: DSBH
/* 2056 */    MCD::OPC_FilterValue, 5, 132, 0, // Skip to: 2192
/* 2060 */    MCD::OPC_CheckPredicate, 83, 128, 0, // Skip to: 2192
/* 2064 */    MCD::OPC_CheckField, 21, 5, 0, 122, 0, // Skip to: 2192
/* 2070 */    MCD::OPC_Decode, 210, 7, 231, 2, // Opcode: DSHD
/* 2075 */    MCD::OPC_FilterValue, 39, 9, 0, // Skip to: 2088
/* 2079 */    MCD::OPC_CheckPredicate, 82, 109, 0, // Skip to: 2192
/* 2083 */    MCD::OPC_Decode, 185, 11, 209, 2, // Opcode: LWu
/* 2088 */    MCD::OPC_FilterValue, 44, 9, 0, // Skip to: 2101
/* 2092 */    MCD::OPC_CheckPredicate, 95, 96, 0, // Skip to: 2192
/* 2096 */    MCD::OPC_Decode, 252, 15, 209, 2, // Opcode: SDL
/* 2101 */    MCD::OPC_FilterValue, 45, 9, 0, // Skip to: 2114
/* 2105 */    MCD::OPC_CheckPredicate, 95, 83, 0, // Skip to: 2192
/* 2109 */    MCD::OPC_Decode, 254, 15, 209, 2, // Opcode: SDR
/* 2114 */    MCD::OPC_FilterValue, 52, 9, 0, // Skip to: 2127
/* 2118 */    MCD::OPC_CheckPredicate, 84, 70, 0, // Skip to: 2192
/* 2122 */    MCD::OPC_Decode, 245, 10, 209, 2, // Opcode: LLD
/* 2127 */    MCD::OPC_FilterValue, 53, 9, 0, // Skip to: 2140
/* 2131 */    MCD::OPC_CheckPredicate, 97, 57, 0, // Skip to: 2192
/* 2135 */    MCD::OPC_Decode, 200, 10, 211, 2, // Opcode: LDC164
/* 2140 */    MCD::OPC_FilterValue, 55, 9, 0, // Skip to: 2153
/* 2144 */    MCD::OPC_CheckPredicate, 82, 44, 0, // Skip to: 2192
/* 2148 */    MCD::OPC_Decode, 198, 10, 209, 2, // Opcode: LD
/* 2153 */    MCD::OPC_FilterValue, 60, 9, 0, // Skip to: 2166
/* 2157 */    MCD::OPC_CheckPredicate, 95, 31, 0, // Skip to: 2192
/* 2161 */    MCD::OPC_Decode, 227, 15, 209, 2, // Opcode: SCD
/* 2166 */    MCD::OPC_FilterValue, 61, 9, 0, // Skip to: 2179
/* 2170 */    MCD::OPC_CheckPredicate, 97, 18, 0, // Skip to: 2192
/* 2174 */    MCD::OPC_Decode, 242, 15, 211, 2, // Opcode: SDC164
/* 2179 */    MCD::OPC_FilterValue, 63, 9, 0, // Skip to: 2192
/* 2183 */    MCD::OPC_CheckPredicate, 82, 5, 0, // Skip to: 2192
/* 2187 */    MCD::OPC_Decode, 234, 15, 209, 2, // Opcode: SD
/* 2192 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return (Bits[Mips::FeatureMips16]);
  case 1:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMicroMips]);
  case 2:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMicroMips]);
  case 3:
    return (Bits[Mips::FeatureCnMips]);
  case 4:
    return (Bits[Mips::FeatureMicroMips] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 5:
    return (Bits[Mips::FeatureMicroMips]);
  case 6:
    return (Bits[Mips::FeatureMicroMips] && !Bits[Mips::FeatureMips32r6]);
  case 7:
    return (Bits[Mips::FeatureDSP] && Bits[Mips::FeatureMicroMips]);
  case 8:
    return (Bits[Mips::FeatureDSPR2] && Bits[Mips::FeatureMicroMips]);
  case 9:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && !Bits[Mips::FeatureMips32r6]);
  case 10:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips]);
  case 11:
    return (Bits[Mips::FeatureDSPR3] && Bits[Mips::FeatureMicroMips]);
  case 12:
    return (!Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && Bits[Mips::FeatureMicroMips]);
  case 13:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureSoftFloat] && Bits[Mips::FeatureMicroMips]);
  case 14:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat] && Bits[Mips::FeatureMicroMips]);
  case 15:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat]);
  case 16:
    return (Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6]);
  case 17:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6]);
  case 18:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips64r6]);
  case 19:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat]);
  case 20:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat]);
  case 21:
    return (!Bits[Mips::FeatureMips16]);
  case 22:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r2]);
  case 23:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 24:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureMicroMips]);
  case 25:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMSA]);
  case 26:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 27:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 28:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32]);
  case 29:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 30:
    return (!Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 31:
    return (Bits[Mips::FeatureDSP]);
  case 32:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMSA] && Bits[Mips::FeatureMips64]);
  case 33:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 34:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 35:
    return (Bits[Mips::FeatureDSP] && !Bits[Mips::FeatureMicroMips]);
  case 36:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32] && !Bits[Mips::FeatureMicroMips]);
  case 37:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureEVA] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureMicroMips]);
  case 38:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3_32] && !Bits[Mips::FeatureMicroMips]);
  case 39:
    return (!Bits[Mips::FeatureMicroMips]);
  case 40:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r5] && !Bits[Mips::FeatureMicroMips]);
  case 41:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureSoftFloat]);
  case 42:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 43:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 44:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 45:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 46:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 47:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat]);
  case 48:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 49:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat]);
  case 50:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3_32r2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 51:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 52:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat]);
  case 53:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 54:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 55:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 56:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 57:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips5_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 58:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 59:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureSoftFloat] && Bits[Mips::FeatureMicroMips]);
  case 60:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && Bits[Mips::FeatureMicroMips]);
  case 61:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && Bits[Mips::FeatureMicroMips]);
  case 62:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 63:
    return (Bits[Mips::FeatureDSPR2]);
  case 64:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && Bits[Mips::FeatureEVA] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureMicroMips]);
  case 65:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureEVA] && Bits[Mips::FeatureMips32r2]);
  case 66:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 67:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeaturePTR64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 68:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 69:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 70:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeaturePTR64Bit] && !Bits[Mips::FeatureMicroMips]);
  case 71:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeaturePTR64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 72:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r6]);
  case 73:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMicroMips]);
  case 74:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 75:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureGP64Bit] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMicroMips]);
  case 76:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 77:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeaturePTR64Bit] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMicroMips]);
  case 78:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64r6]);
  case 79:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureGP64Bit] && Bits[Mips::FeatureMips64r6]);
  case 80:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureGP64Bit] && Bits[Mips::FeatureMips32r6]);
  case 81:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeaturePTR64Bit] && Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 82:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureMicroMips]);
  case 83:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64r2] && !Bits[Mips::FeatureMicroMips]);
  case 84:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 85:
    return (Bits[Mips::FeatureMips64]);
  case 86:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 87:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat]);
  case 88:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat]);
  case 89:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 90:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 91:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 92:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 93:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips5_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 94:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && Bits[Mips::FeatureMicroMips]);
  case 95:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 96:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 97:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder, bool &DecodeComplete) {
  DecodeComplete = true;
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 3:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 2) << 3;
    tmp |= fieldFromInstruction(insn, 5, 3) << 0;
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 2, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 8:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 11;
    tmp |= fieldFromInstruction(insn, 21, 6) << 5;
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 10:
    if (DecodeFMem3(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 10);
    if (DecodeSImmWithOffsetAndScale<10>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    if (DecodeMemMMImm4(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodePOOL16BEncodedField(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeANDI16Imm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 26:
    if (DecodeMemMMReglistImm4Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 0, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeUImmWithOffsetAndScale<5, 0, 4>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 30:
    if (DecodeMemMMSPImm5Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 4);
    if (DecodeSImmWithOffsetAndScale<4>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 1, 9);
    if (DecodeSimm9SP(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 33:
    if (DecodeMemMMGPImm7Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeAddiur2Simm7(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 6);
    if (DecodeUImmWithOffsetAndScale<6, 0, 4>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeMovePRegPair(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeGPRMM16MovePRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16MovePRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 7);
    if (DecodeBranchTarget7MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 0, 10);
    if (DecodeBranchTarget10MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 7);
    if (DecodeLi16Imm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 6);
    if (DecodeSImmWithOffsetAndScale<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeUImmWithOffset<5, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeHI32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeLO32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 13, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 13, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 7);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 84:
    if (DecodeMemMMImm16(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 85:
    if (DecodeMemMMImm12(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 86:
    if (DecodeCacheOpMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 90:
    if (DecodeSyncI(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget1SImm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 13, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 100:
    if (DecodeMemMMImm9(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 101:
    if (DecodePrefeOpMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 102:
    if (DecodeJumpTargetMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 23);
    if (DecodeSimm23Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 105:
    if (DecodeFMemMMR2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 112:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeUImmWithOffsetAndScale<5, 0, 4>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 113:
    tmp = fieldFromInstruction(insn, 6, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 114:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 115:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    if (DecodeUImmWithOffset<2, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 116:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 117:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 118:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 119:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 120:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 121:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 122:
    if (DecodeLoadByte15(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 123:
    if (DecodeFMemCop2MMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 124:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 125:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 126:
    if (DecodeSynciR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 127:
    if (DecodeDAHIDATIMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 128:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 129:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 130:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 131:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 132:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 133:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 134:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 135:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 136:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 137:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 138:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 139:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 140:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 141:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 142:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 143:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 144:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 145:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 146:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 147:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 148:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 149:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 150:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 151:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    if (DecodeUImmWithOffset<2, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 152:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 153:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 154:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 155:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeUImmWithOffset<5, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 156:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 157:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 158:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 159:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 160:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 161:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 162:
    if (DecodeLoadByte9(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 163:
    if (DecodeStoreEvaOpMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 164:
    if (DecodePOP35GroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 165:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 19);
    if (DecodeSimm19Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 166:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 19);
    if (DecodeSimm19Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 167:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 18);
    if (DecodeSimm18Lsl3(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 168:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 169:
    if (DecodePOP37GroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 170:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 21);
    if (DecodeBranchTarget21MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 171:
    tmp = fieldFromInstruction(insn, 0, 26);
    if (DecodeBranchTarget26MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 172:
    if (DecodeBlezGroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 173:
    if (DecodePOP65GroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 174:
    if (DecodeBgtzGroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 175:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 176:
    if (DecodePOP75GroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 177:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 178:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 179:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 2);
    if (DecodeUImmWithOffset<2, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 180:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 181:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 182:
    tmp = fieldFromInstruction(insn, 6, 20);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 183:
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 184:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 185:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 186:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeHI32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 187:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeLO32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 188:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 2);
    if (DecodeUImmWithOffset<2, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 189:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 190:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 191:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 192:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 193:
    if (DecodeJumpTarget(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 194:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 195:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 196:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 197:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 198:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 199:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 200:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 201:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 202:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 203:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 204:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 205:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 206:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 207:
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 208:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 209:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 210:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 211:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 212:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 213:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 214:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 215:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 216:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 217:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 218:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 219:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 220:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 221:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 222:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 223:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 224:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 225:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 226:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 227:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 228:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 229:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 230:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 231:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 232:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 233:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 234:
    tmp = fieldFromInstruction(insn, 13, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 235:
    tmp = fieldFromInstruction(insn, 13, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 236:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 237:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 238:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 239:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 240:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 241:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 242:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 243:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 244:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 245:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 246:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 247:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 248:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 249:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 250:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 251:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 252:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 253:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 254:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 255:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 256:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 257:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 258:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 259:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 260:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 261:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 262:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 263:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 264:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 265:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 266:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 267:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 268:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 269:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 270:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 271:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 272:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 273:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 274:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 275:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 276:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 277:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 278:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 279:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 280:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 281:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 282:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 283:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSACtrlRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 284:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 285:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 286:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 287:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 288:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSACtrlRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 289:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 290:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 291:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 292:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 293:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 294:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 295:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 296:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 297:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 298:
    if (DecodeINSVE_DF(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 299:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 300:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 301:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 302:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 303:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 304:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 305:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 306:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 307:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 308:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 309:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 310:
    if (DecodeMSA128Mem(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 311:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeUImmWithOffset<5, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 312:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 313:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 314:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 315:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 316:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 317:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 318:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 319:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 320:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 321:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 322:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 323:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 324:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 325:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 326:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 327:
    if (DecodeMemEVA(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 328:
    if (DecodeCacheeOp_CacheOpR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 329:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 330:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 331:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 332:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 333:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 334:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 6);
    if (DecodeSImmWithOffsetAndScale<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 335:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 336:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 337:
    if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 338:
    if (DecodeCacheOp(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 339:
    if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 340:
    if (DecodeFMem2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 341:
    if (DecodeDAHIDATI(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 342:
    if (DecodeBlezGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 343:
    if (DecodeBgtzGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 344:
    if (DecodeAddiGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 345:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 346:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 347:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 348:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 349:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 350:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 351:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 352:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 353:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 354:
    if (DecodeFMemCop2R6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 355:
    if (DecodeBlezlGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 356:
    if (DecodeBgtzlGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 357:
    if (DecodeDaddiGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 358:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 359:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 360:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 361:
    if (DecodeSpecial3LlSc(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 362:
    tmp = fieldFromInstruction(insn, 0, 26);
    if (DecodeBranchTarget26(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 363:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 21);
    if (DecodeBranchTarget21(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 364:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 21);
    if (DecodeBranchTarget21(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 365:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 366:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 367:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 368:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 369:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 370:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 371:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 372:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 373:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 374:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 375:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 376:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 377:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 378:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 379:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 380:
    tmp = fieldFromInstruction(insn, 13, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 381:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 382:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 383:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeUImmWithOffset<5, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 384:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  const FeatureBitset& Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  while (true) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;

      MI.clear();
      MI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm, DecodeComplete);
      assert(DecodeComplete);

      DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": "
                   << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
      return S;
    }
    case MCD::OPC_TryDecode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the decode operation.
      MCInst TmpMI;
      TmpMI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, TmpMI, Address, DisAsm, DecodeComplete);
      DEBUG(dbgs() << Loc << ": OPC_TryDecode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": ");

      if (DecodeComplete) {
        // Decoding complete.
        DEBUG(dbgs() << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
        MI = TmpMI;
        return S;
      } else {
        assert(S == MCDisassembler::Fail);
        // If the decoding was incomplete, skip.
        Ptr += NumToSkip;
        DEBUG(dbgs() << "FAIL: continuing at " << (Ptr - DecodeTable) << "\n");
        // Reset decode status. This also drops a SoftFail status that could be
        // set before the decode attempt.
        S = MCDisassembler::Success;
      }
      break;
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace
