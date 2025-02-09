/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * PPC Disassembler                                                        *|
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

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 18
/* 7 */       MCD::OPC_CheckField, 1, 10, 128, 2, 225, 53, // Skip to: 13807
/* 14 */      MCD::OPC_Decode, 195, 1, 0, // Opcode: ATTN
/* 18 */      MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 26
/* 22 */      MCD::OPC_Decode, 215, 10, 1, // Opcode: TDI
/* 26 */      MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 34
/* 30 */      MCD::OPC_Decode, 236, 10, 2, // Opcode: TWI
/* 34 */      MCD::OPC_FilterValue, 4, 146, 10, // Skip to: 2744
/* 38 */      MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 41 */      MCD::OPC_FilterValue, 0, 211, 0, // Skip to: 256
/* 45 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 48 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 56
/* 52 */      MCD::OPC_Decode, 250, 10, 3, // Opcode: VADDUBM
/* 56 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 64
/* 60 */      MCD::OPC_Decode, 253, 10, 3, // Opcode: VADDUHM
/* 64 */      MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 72
/* 68 */      MCD::OPC_Decode, 128, 11, 3, // Opcode: VADDUWM
/* 72 */      MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 80
/* 76 */      MCD::OPC_Decode, 252, 10, 3, // Opcode: VADDUDM
/* 80 */      MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 88
/* 84 */      MCD::OPC_Decode, 255, 10, 3, // Opcode: VADDUQM
/* 88 */      MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 96
/* 92 */      MCD::OPC_Decode, 242, 10, 3, // Opcode: VADDCUQ
/* 96 */      MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 104
/* 100 */     MCD::OPC_Decode, 243, 10, 3, // Opcode: VADDCUW
/* 104 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 112
/* 108 */     MCD::OPC_Decode, 251, 10, 3, // Opcode: VADDUBS
/* 112 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 120
/* 116 */     MCD::OPC_Decode, 254, 10, 3, // Opcode: VADDUHS
/* 120 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 128
/* 124 */     MCD::OPC_Decode, 129, 11, 3, // Opcode: VADDUWS
/* 128 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 136
/* 132 */     MCD::OPC_Decode, 247, 10, 3, // Opcode: VADDSBS
/* 136 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 144
/* 140 */     MCD::OPC_Decode, 248, 10, 3, // Opcode: VADDSHS
/* 144 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 152
/* 148 */     MCD::OPC_Decode, 249, 10, 3, // Opcode: VADDSWS
/* 152 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 160
/* 156 */     MCD::OPC_Decode, 246, 12, 3, // Opcode: VSUBUBM
/* 160 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 168
/* 164 */     MCD::OPC_Decode, 249, 12, 3, // Opcode: VSUBUHM
/* 168 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 176
/* 172 */     MCD::OPC_Decode, 252, 12, 3, // Opcode: VSUBUWM
/* 176 */     MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 184
/* 180 */     MCD::OPC_Decode, 248, 12, 3, // Opcode: VSUBUDM
/* 184 */     MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 192
/* 188 */     MCD::OPC_Decode, 251, 12, 3, // Opcode: VSUBUQM
/* 192 */     MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 200
/* 196 */     MCD::OPC_Decode, 238, 12, 3, // Opcode: VSUBCUQ
/* 200 */     MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 208
/* 204 */     MCD::OPC_Decode, 239, 12, 3, // Opcode: VSUBCUW
/* 208 */     MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 216
/* 212 */     MCD::OPC_Decode, 247, 12, 3, // Opcode: VSUBUBS
/* 216 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 224
/* 220 */     MCD::OPC_Decode, 250, 12, 3, // Opcode: VSUBUHS
/* 224 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 232
/* 228 */     MCD::OPC_Decode, 253, 12, 3, // Opcode: VSUBUWS
/* 232 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 240
/* 236 */     MCD::OPC_Decode, 243, 12, 3, // Opcode: VSUBSBS
/* 240 */     MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 248
/* 244 */     MCD::OPC_Decode, 244, 12, 3, // Opcode: VSUBSHS
/* 248 */     MCD::OPC_FilterValue, 30, 243, 52, // Skip to: 13807
/* 252 */     MCD::OPC_Decode, 245, 12, 3, // Opcode: VSUBSWS
/* 256 */     MCD::OPC_FilterValue, 1, 233, 0, // Skip to: 493
/* 260 */     MCD::OPC_ExtractField, 6, 3,  // Inst{8-6} ...
/* 263 */     MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 286
/* 267 */     MCD::OPC_ExtractField, 9, 7,  // Inst{15-9} ...
/* 270 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 278
/* 274 */     MCD::OPC_Decode, 140, 12, 4, // Opcode: VMUL10CUQ
/* 278 */     MCD::OPC_FilterValue, 1, 213, 52, // Skip to: 13807
/* 282 */     MCD::OPC_Decode, 143, 12, 4, // Opcode: VMUL10UQ
/* 286 */     MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 309
/* 290 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 293 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 301
/* 297 */     MCD::OPC_Decode, 141, 12, 3, // Opcode: VMUL10ECUQ
/* 301 */     MCD::OPC_FilterValue, 1, 190, 52, // Skip to: 13807
/* 305 */     MCD::OPC_Decode, 142, 12, 3, // Opcode: VMUL10EUQ
/* 309 */     MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 323
/* 313 */     MCD::OPC_CheckField, 9, 2, 2, 176, 52, // Skip to: 13807
/* 319 */     MCD::OPC_Decode, 228, 1, 3, // Opcode: BCDUSo
/* 323 */     MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 337
/* 327 */     MCD::OPC_CheckField, 10, 1, 1, 162, 52, // Skip to: 13807
/* 333 */     MCD::OPC_Decode, 226, 1, 5, // Opcode: BCDSo
/* 337 */     MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 351
/* 341 */     MCD::OPC_CheckField, 10, 1, 1, 148, 52, // Skip to: 13807
/* 347 */     MCD::OPC_Decode, 227, 1, 5, // Opcode: BCDTRUNCo
/* 351 */     MCD::OPC_FilterValue, 5, 19, 0, // Skip to: 374
/* 355 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 358 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 366
/* 362 */     MCD::OPC_Decode, 220, 1, 3, // Opcode: BCDCPSGNo
/* 366 */     MCD::OPC_FilterValue, 2, 125, 52, // Skip to: 13807
/* 370 */     MCD::OPC_Decode, 229, 1, 3, // Opcode: BCDUTRUNCo
/* 374 */     MCD::OPC_FilterValue, 6, 101, 0, // Skip to: 479
/* 378 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 381 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 395
/* 385 */     MCD::OPC_CheckField, 9, 2, 2, 104, 52, // Skip to: 13807
/* 391 */     MCD::OPC_Decode, 222, 1, 6, // Opcode: BCDCTSQo
/* 395 */     MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 409
/* 399 */     MCD::OPC_CheckField, 10, 1, 1, 90, 52, // Skip to: 13807
/* 405 */     MCD::OPC_Decode, 218, 1, 7, // Opcode: BCDCFSQo
/* 409 */     MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 423
/* 413 */     MCD::OPC_CheckField, 10, 1, 1, 76, 52, // Skip to: 13807
/* 419 */     MCD::OPC_Decode, 223, 1, 7, // Opcode: BCDCTZo
/* 423 */     MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 437
/* 427 */     MCD::OPC_CheckField, 9, 2, 2, 62, 52, // Skip to: 13807
/* 433 */     MCD::OPC_Decode, 221, 1, 6, // Opcode: BCDCTNo
/* 437 */     MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 451
/* 441 */     MCD::OPC_CheckField, 10, 1, 1, 48, 52, // Skip to: 13807
/* 447 */     MCD::OPC_Decode, 219, 1, 7, // Opcode: BCDCFZo
/* 451 */     MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 465
/* 455 */     MCD::OPC_CheckField, 10, 1, 1, 34, 52, // Skip to: 13807
/* 461 */     MCD::OPC_Decode, 217, 1, 7, // Opcode: BCDCFNo
/* 465 */     MCD::OPC_FilterValue, 31, 26, 52, // Skip to: 13807
/* 469 */     MCD::OPC_CheckField, 10, 1, 1, 20, 52, // Skip to: 13807
/* 475 */     MCD::OPC_Decode, 224, 1, 7, // Opcode: BCDSETSGNo
/* 479 */     MCD::OPC_FilterValue, 7, 12, 52, // Skip to: 13807
/* 483 */     MCD::OPC_CheckField, 10, 1, 1, 6, 52, // Skip to: 13807
/* 489 */     MCD::OPC_Decode, 225, 1, 5, // Opcode: BCDSRo
/* 493 */     MCD::OPC_FilterValue, 2, 130, 1, // Skip to: 883
/* 497 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 500 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 508
/* 504 */     MCD::OPC_Decode, 238, 11, 3, // Opcode: VMAXUB
/* 508 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 516
/* 512 */     MCD::OPC_Decode, 240, 11, 3, // Opcode: VMAXUH
/* 516 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 524
/* 520 */     MCD::OPC_Decode, 241, 11, 3, // Opcode: VMAXUW
/* 524 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 532
/* 528 */     MCD::OPC_Decode, 239, 11, 3, // Opcode: VMAXUD
/* 532 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 540
/* 536 */     MCD::OPC_Decode, 234, 11, 3, // Opcode: VMAXSB
/* 540 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 548
/* 544 */     MCD::OPC_Decode, 236, 11, 3, // Opcode: VMAXSH
/* 548 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 556
/* 552 */     MCD::OPC_Decode, 237, 11, 3, // Opcode: VMAXSW
/* 556 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 564
/* 560 */     MCD::OPC_Decode, 235, 11, 3, // Opcode: VMAXSD
/* 564 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 572
/* 568 */     MCD::OPC_Decode, 249, 11, 3, // Opcode: VMINUB
/* 572 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 580
/* 576 */     MCD::OPC_Decode, 251, 11, 3, // Opcode: VMINUH
/* 580 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 588
/* 584 */     MCD::OPC_Decode, 252, 11, 3, // Opcode: VMINUW
/* 588 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 596
/* 592 */     MCD::OPC_Decode, 250, 11, 3, // Opcode: VMINUD
/* 596 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 604
/* 600 */     MCD::OPC_Decode, 245, 11, 3, // Opcode: VMINSB
/* 604 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 612
/* 608 */     MCD::OPC_Decode, 247, 11, 3, // Opcode: VMINSH
/* 612 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 620
/* 616 */     MCD::OPC_Decode, 248, 11, 3, // Opcode: VMINSW
/* 620 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 628
/* 624 */     MCD::OPC_Decode, 246, 11, 3, // Opcode: VMINSD
/* 628 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 636
/* 632 */     MCD::OPC_Decode, 135, 11, 3, // Opcode: VAVGUB
/* 636 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 644
/* 640 */     MCD::OPC_Decode, 136, 11, 3, // Opcode: VAVGUH
/* 644 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 652
/* 648 */     MCD::OPC_Decode, 137, 11, 3, // Opcode: VAVGUW
/* 652 */     MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 660
/* 656 */     MCD::OPC_Decode, 132, 11, 3, // Opcode: VAVGSB
/* 660 */     MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 668
/* 664 */     MCD::OPC_Decode, 133, 11, 3, // Opcode: VAVGSH
/* 668 */     MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 676
/* 672 */     MCD::OPC_Decode, 134, 11, 3, // Opcode: VAVGSW
/* 676 */     MCD::OPC_FilterValue, 24, 131, 0, // Skip to: 811
/* 680 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 683 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 691
/* 687 */     MCD::OPC_Decode, 149, 11, 8, // Opcode: VCLZLSBB
/* 691 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 699
/* 695 */     MCD::OPC_Decode, 202, 11, 8, // Opcode: VCTZLSBB
/* 699 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 707
/* 703 */     MCD::OPC_Decode, 161, 12, 6, // Opcode: VNEGW
/* 707 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 715
/* 711 */     MCD::OPC_Decode, 160, 12, 6, // Opcode: VNEGD
/* 715 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 723
/* 719 */     MCD::OPC_Decode, 192, 12, 6, // Opcode: VPRTYBW
/* 723 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 731
/* 727 */     MCD::OPC_Decode, 190, 12, 6, // Opcode: VPRTYBD
/* 731 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 739
/* 735 */     MCD::OPC_Decode, 191, 12, 6, // Opcode: VPRTYBQ
/* 739 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 747
/* 743 */     MCD::OPC_Decode, 212, 11, 6, // Opcode: VEXTSB2W
/* 747 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 755
/* 751 */     MCD::OPC_Decode, 216, 11, 6, // Opcode: VEXTSH2W
/* 755 */     MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 763
/* 759 */     MCD::OPC_Decode, 210, 11, 6, // Opcode: VEXTSB2D
/* 763 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 771
/* 767 */     MCD::OPC_Decode, 214, 11, 6, // Opcode: VEXTSH2D
/* 771 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 779
/* 775 */     MCD::OPC_Decode, 218, 11, 6, // Opcode: VEXTSW2D
/* 779 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 787
/* 783 */     MCD::OPC_Decode, 199, 11, 6, // Opcode: VCTZB
/* 787 */     MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 795
/* 791 */     MCD::OPC_Decode, 201, 11, 6, // Opcode: VCTZH
/* 795 */     MCD::OPC_FilterValue, 30, 4, 0, // Skip to: 803
/* 799 */     MCD::OPC_Decode, 203, 11, 6, // Opcode: VCTZW
/* 803 */     MCD::OPC_FilterValue, 31, 200, 50, // Skip to: 13807
/* 807 */     MCD::OPC_Decode, 200, 11, 6, // Opcode: VCTZD
/* 811 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 819
/* 815 */     MCD::OPC_Decode, 210, 12, 9, // Opcode: VSHASIGMAW
/* 819 */     MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 827
/* 823 */     MCD::OPC_Decode, 209, 12, 9, // Opcode: VSHASIGMAD
/* 827 */     MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 841
/* 831 */     MCD::OPC_CheckField, 16, 5, 0, 170, 50, // Skip to: 13807
/* 837 */     MCD::OPC_Decode, 146, 11, 6, // Opcode: VCLZB
/* 841 */     MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 855
/* 845 */     MCD::OPC_CheckField, 16, 5, 0, 156, 50, // Skip to: 13807
/* 851 */     MCD::OPC_Decode, 148, 11, 6, // Opcode: VCLZH
/* 855 */     MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 869
/* 859 */     MCD::OPC_CheckField, 16, 5, 0, 142, 50, // Skip to: 13807
/* 865 */     MCD::OPC_Decode, 150, 11, 6, // Opcode: VCLZW
/* 869 */     MCD::OPC_FilterValue, 31, 134, 50, // Skip to: 13807
/* 873 */     MCD::OPC_CheckField, 16, 5, 0, 128, 50, // Skip to: 13807
/* 879 */     MCD::OPC_Decode, 147, 11, 6, // Opcode: VCLZD
/* 883 */     MCD::OPC_FilterValue, 3, 83, 0, // Skip to: 970
/* 887 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 890 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 898
/* 894 */     MCD::OPC_Decode, 239, 10, 3, // Opcode: VABSDUB
/* 898 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 906
/* 902 */     MCD::OPC_Decode, 240, 10, 3, // Opcode: VABSDUH
/* 906 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 914
/* 910 */     MCD::OPC_Decode, 241, 10, 3, // Opcode: VABSDUW
/* 914 */     MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 928
/* 918 */     MCD::OPC_CheckField, 16, 5, 0, 83, 50, // Skip to: 13807
/* 924 */     MCD::OPC_Decode, 186, 12, 6, // Opcode: VPOPCNTB
/* 928 */     MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 942
/* 932 */     MCD::OPC_CheckField, 16, 5, 0, 69, 50, // Skip to: 13807
/* 938 */     MCD::OPC_Decode, 188, 12, 6, // Opcode: VPOPCNTH
/* 942 */     MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 956
/* 946 */     MCD::OPC_CheckField, 16, 5, 0, 55, 50, // Skip to: 13807
/* 952 */     MCD::OPC_Decode, 189, 12, 6, // Opcode: VPOPCNTW
/* 956 */     MCD::OPC_FilterValue, 31, 47, 50, // Skip to: 13807
/* 960 */     MCD::OPC_CheckField, 16, 5, 0, 41, 50, // Skip to: 13807
/* 966 */     MCD::OPC_Decode, 187, 12, 6, // Opcode: VPOPCNTD
/* 970 */     MCD::OPC_FilterValue, 4, 255, 0, // Skip to: 1229
/* 974 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 977 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 985
/* 981 */     MCD::OPC_Decode, 198, 12, 3, // Opcode: VRLB
/* 985 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 993
/* 989 */     MCD::OPC_Decode, 202, 12, 3, // Opcode: VRLH
/* 993 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1001
/* 997 */     MCD::OPC_Decode, 203, 12, 3, // Opcode: VRLW
/* 1001 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1009
/* 1005 */    MCD::OPC_Decode, 199, 12, 3, // Opcode: VRLD
/* 1009 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1017
/* 1013 */    MCD::OPC_Decode, 212, 12, 3, // Opcode: VSLB
/* 1017 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 1025
/* 1021 */    MCD::OPC_Decode, 215, 12, 3, // Opcode: VSLH
/* 1025 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1033
/* 1029 */    MCD::OPC_Decode, 218, 12, 3, // Opcode: VSLW
/* 1033 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 1041
/* 1037 */    MCD::OPC_Decode, 211, 12, 3, // Opcode: VSL
/* 1041 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1049
/* 1045 */    MCD::OPC_Decode, 232, 12, 3, // Opcode: VSRB
/* 1049 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 1057
/* 1053 */    MCD::OPC_Decode, 234, 12, 3, // Opcode: VSRH
/* 1057 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1065
/* 1061 */    MCD::OPC_Decode, 237, 12, 3, // Opcode: VSRW
/* 1065 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 1073
/* 1069 */    MCD::OPC_Decode, 227, 12, 3, // Opcode: VSR
/* 1073 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1081
/* 1077 */    MCD::OPC_Decode, 228, 12, 3, // Opcode: VSRAB
/* 1081 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 1089
/* 1085 */    MCD::OPC_Decode, 230, 12, 3, // Opcode: VSRAH
/* 1089 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 1097
/* 1093 */    MCD::OPC_Decode, 231, 12, 3, // Opcode: VSRAW
/* 1097 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 1105
/* 1101 */    MCD::OPC_Decode, 229, 12, 3, // Opcode: VSRAD
/* 1105 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1113
/* 1109 */    MCD::OPC_Decode, 130, 11, 3, // Opcode: VAND
/* 1113 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 1121
/* 1117 */    MCD::OPC_Decode, 131, 11, 3, // Opcode: VANDC
/* 1121 */    MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 1129
/* 1125 */    MCD::OPC_Decode, 164, 12, 3, // Opcode: VOR
/* 1129 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 1137
/* 1133 */    MCD::OPC_Decode, 139, 13, 3, // Opcode: VXOR
/* 1137 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1145
/* 1141 */    MCD::OPC_Decode, 163, 12, 3, // Opcode: VNOR
/* 1145 */    MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 1153
/* 1149 */    MCD::OPC_Decode, 165, 12, 3, // Opcode: VORC
/* 1153 */    MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 1161
/* 1157 */    MCD::OPC_Decode, 157, 12, 3, // Opcode: VNAND
/* 1161 */    MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 1169
/* 1165 */    MCD::OPC_Decode, 213, 12, 3, // Opcode: VSLD
/* 1169 */    MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 1183
/* 1173 */    MCD::OPC_CheckField, 11, 10, 0, 84, 49, // Skip to: 13807
/* 1179 */    MCD::OPC_Decode, 243, 6, 10, // Opcode: MFVSCR
/* 1183 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 1197
/* 1187 */    MCD::OPC_CheckField, 16, 10, 0, 70, 49, // Skip to: 13807
/* 1193 */    MCD::OPC_Decode, 148, 7, 11, // Opcode: MTVSCR
/* 1197 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 1205
/* 1201 */    MCD::OPC_Decode, 204, 11, 3, // Opcode: VEQV
/* 1205 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 1213
/* 1209 */    MCD::OPC_Decode, 233, 12, 3, // Opcode: VSRD
/* 1213 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 1221
/* 1217 */    MCD::OPC_Decode, 236, 12, 3, // Opcode: VSRV
/* 1221 */    MCD::OPC_FilterValue, 29, 38, 49, // Skip to: 13807
/* 1225 */    MCD::OPC_Decode, 217, 12, 3, // Opcode: VSLV
/* 1229 */    MCD::OPC_FilterValue, 5, 35, 0, // Skip to: 1268
/* 1233 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1236 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1244
/* 1240 */    MCD::OPC_Decode, 204, 12, 12, // Opcode: VRLWMI
/* 1244 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1252
/* 1248 */    MCD::OPC_Decode, 200, 12, 12, // Opcode: VRLDMI
/* 1252 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1260
/* 1256 */    MCD::OPC_Decode, 205, 12, 3, // Opcode: VRLWNM
/* 1260 */    MCD::OPC_FilterValue, 7, 255, 48, // Skip to: 13807
/* 1264 */    MCD::OPC_Decode, 201, 12, 3, // Opcode: VRLDNM
/* 1268 */    MCD::OPC_FilterValue, 6, 211, 0, // Skip to: 1483
/* 1272 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1275 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1283
/* 1279 */    MCD::OPC_Decode, 155, 11, 3, // Opcode: VCMPEQUB
/* 1283 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1291
/* 1287 */    MCD::OPC_Decode, 159, 11, 3, // Opcode: VCMPEQUH
/* 1291 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1299
/* 1295 */    MCD::OPC_Decode, 161, 11, 3, // Opcode: VCMPEQUW
/* 1299 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1307
/* 1303 */    MCD::OPC_Decode, 153, 11, 3, // Opcode: VCMPEQFP
/* 1307 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 1315
/* 1311 */    MCD::OPC_Decode, 163, 11, 3, // Opcode: VCMPGEFP
/* 1315 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1323
/* 1319 */    MCD::OPC_Decode, 175, 11, 3, // Opcode: VCMPGTUB
/* 1323 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 1331
/* 1327 */    MCD::OPC_Decode, 179, 11, 3, // Opcode: VCMPGTUH
/* 1331 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1339
/* 1335 */    MCD::OPC_Decode, 181, 11, 3, // Opcode: VCMPGTUW
/* 1339 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 1347
/* 1343 */    MCD::OPC_Decode, 165, 11, 3, // Opcode: VCMPGTFP
/* 1347 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1355
/* 1351 */    MCD::OPC_Decode, 167, 11, 3, // Opcode: VCMPGTSB
/* 1355 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 1363
/* 1359 */    MCD::OPC_Decode, 171, 11, 3, // Opcode: VCMPGTSH
/* 1363 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 1371
/* 1367 */    MCD::OPC_Decode, 173, 11, 3, // Opcode: VCMPGTSW
/* 1371 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 1379
/* 1375 */    MCD::OPC_Decode, 151, 11, 3, // Opcode: VCMPBFP
/* 1379 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1387
/* 1383 */    MCD::OPC_Decode, 156, 11, 3, // Opcode: VCMPEQUBo
/* 1387 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 1395
/* 1391 */    MCD::OPC_Decode, 160, 11, 3, // Opcode: VCMPEQUHo
/* 1395 */    MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 1403
/* 1399 */    MCD::OPC_Decode, 162, 11, 3, // Opcode: VCMPEQUWo
/* 1403 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 1411
/* 1407 */    MCD::OPC_Decode, 154, 11, 3, // Opcode: VCMPEQFPo
/* 1411 */    MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 1419
/* 1415 */    MCD::OPC_Decode, 164, 11, 3, // Opcode: VCMPGEFPo
/* 1419 */    MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 1427
/* 1423 */    MCD::OPC_Decode, 176, 11, 3, // Opcode: VCMPGTUBo
/* 1427 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 1435
/* 1431 */    MCD::OPC_Decode, 180, 11, 3, // Opcode: VCMPGTUHo
/* 1435 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 1443
/* 1439 */    MCD::OPC_Decode, 182, 11, 3, // Opcode: VCMPGTUWo
/* 1443 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 1451
/* 1447 */    MCD::OPC_Decode, 166, 11, 3, // Opcode: VCMPGTFPo
/* 1451 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 1459
/* 1455 */    MCD::OPC_Decode, 168, 11, 3, // Opcode: VCMPGTSBo
/* 1459 */    MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 1467
/* 1463 */    MCD::OPC_Decode, 172, 11, 3, // Opcode: VCMPGTSHo
/* 1467 */    MCD::OPC_FilterValue, 30, 4, 0, // Skip to: 1475
/* 1471 */    MCD::OPC_Decode, 174, 11, 3, // Opcode: VCMPGTSWo
/* 1475 */    MCD::OPC_FilterValue, 31, 40, 48, // Skip to: 13807
/* 1479 */    MCD::OPC_Decode, 152, 11, 3, // Opcode: VCMPBFPo
/* 1483 */    MCD::OPC_FilterValue, 7, 147, 0, // Skip to: 1634
/* 1487 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1490 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1498
/* 1494 */    MCD::OPC_Decode, 183, 11, 3, // Opcode: VCMPNEB
/* 1498 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1506
/* 1502 */    MCD::OPC_Decode, 185, 11, 3, // Opcode: VCMPNEH
/* 1506 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1514
/* 1510 */    MCD::OPC_Decode, 187, 11, 3, // Opcode: VCMPNEW
/* 1514 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1522
/* 1518 */    MCD::OPC_Decode, 157, 11, 3, // Opcode: VCMPEQUD
/* 1522 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1530
/* 1526 */    MCD::OPC_Decode, 189, 11, 3, // Opcode: VCMPNEZB
/* 1530 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 1538
/* 1534 */    MCD::OPC_Decode, 191, 11, 3, // Opcode: VCMPNEZH
/* 1538 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1546
/* 1542 */    MCD::OPC_Decode, 193, 11, 3, // Opcode: VCMPNEZW
/* 1546 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 1554
/* 1550 */    MCD::OPC_Decode, 177, 11, 3, // Opcode: VCMPGTUD
/* 1554 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 1562
/* 1558 */    MCD::OPC_Decode, 169, 11, 3, // Opcode: VCMPGTSD
/* 1562 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1570
/* 1566 */    MCD::OPC_Decode, 184, 11, 3, // Opcode: VCMPNEBo
/* 1570 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 1578
/* 1574 */    MCD::OPC_Decode, 186, 11, 3, // Opcode: VCMPNEHo
/* 1578 */    MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 1586
/* 1582 */    MCD::OPC_Decode, 188, 11, 3, // Opcode: VCMPNEWo
/* 1586 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 1594
/* 1590 */    MCD::OPC_Decode, 158, 11, 3, // Opcode: VCMPEQUDo
/* 1594 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1602
/* 1598 */    MCD::OPC_Decode, 190, 11, 3, // Opcode: VCMPNEZBo
/* 1602 */    MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 1610
/* 1606 */    MCD::OPC_Decode, 192, 11, 3, // Opcode: VCMPNEZHo
/* 1610 */    MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 1618
/* 1614 */    MCD::OPC_Decode, 194, 11, 3, // Opcode: VCMPNEZWo
/* 1618 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 1626
/* 1622 */    MCD::OPC_Decode, 178, 11, 3, // Opcode: VCMPGTUDo
/* 1626 */    MCD::OPC_FilterValue, 31, 145, 47, // Skip to: 13807
/* 1630 */    MCD::OPC_Decode, 170, 11, 3, // Opcode: VCMPGTSDo
/* 1634 */    MCD::OPC_FilterValue, 8, 201, 0, // Skip to: 1839
/* 1638 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1641 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1649
/* 1645 */    MCD::OPC_Decode, 153, 12, 3, // Opcode: VMULOUB
/* 1649 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1657
/* 1653 */    MCD::OPC_Decode, 154, 12, 3, // Opcode: VMULOUH
/* 1657 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1665
/* 1661 */    MCD::OPC_Decode, 155, 12, 3, // Opcode: VMULOUW
/* 1665 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1673
/* 1669 */    MCD::OPC_Decode, 150, 12, 3, // Opcode: VMULOSB
/* 1673 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 1681
/* 1677 */    MCD::OPC_Decode, 151, 12, 3, // Opcode: VMULOSH
/* 1681 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1689
/* 1685 */    MCD::OPC_Decode, 152, 12, 3, // Opcode: VMULOSW
/* 1689 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1697
/* 1693 */    MCD::OPC_Decode, 147, 12, 3, // Opcode: VMULEUB
/* 1697 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 1705
/* 1701 */    MCD::OPC_Decode, 148, 12, 3, // Opcode: VMULEUH
/* 1705 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1713
/* 1709 */    MCD::OPC_Decode, 149, 12, 3, // Opcode: VMULEUW
/* 1713 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1721
/* 1717 */    MCD::OPC_Decode, 144, 12, 3, // Opcode: VMULESB
/* 1721 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 1729
/* 1725 */    MCD::OPC_Decode, 145, 12, 3, // Opcode: VMULESH
/* 1729 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 1737
/* 1733 */    MCD::OPC_Decode, 146, 12, 3, // Opcode: VMULESW
/* 1737 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1745
/* 1741 */    MCD::OPC_Decode, 182, 12, 3, // Opcode: VPMSUMB
/* 1745 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 1753
/* 1749 */    MCD::OPC_Decode, 184, 12, 3, // Opcode: VPMSUMH
/* 1753 */    MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 1761
/* 1757 */    MCD::OPC_Decode, 185, 12, 3, // Opcode: VPMSUMW
/* 1761 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 1769
/* 1765 */    MCD::OPC_Decode, 183, 12, 3, // Opcode: VPMSUMD
/* 1769 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1777
/* 1773 */    MCD::OPC_Decode, 144, 11, 3, // Opcode: VCIPHER
/* 1777 */    MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 1785
/* 1781 */    MCD::OPC_Decode, 158, 12, 3, // Opcode: VNCIPHER
/* 1785 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 1799
/* 1789 */    MCD::OPC_CheckField, 11, 5, 0, 236, 46, // Skip to: 13807
/* 1795 */    MCD::OPC_Decode, 207, 12, 4, // Opcode: VSBOX
/* 1799 */    MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 1807
/* 1803 */    MCD::OPC_Decode, 129, 13, 3, // Opcode: VSUM4UBS
/* 1807 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 1815
/* 1811 */    MCD::OPC_Decode, 128, 13, 3, // Opcode: VSUM4SHS
/* 1815 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 1823
/* 1819 */    MCD::OPC_Decode, 254, 12, 3, // Opcode: VSUM2SWS
/* 1823 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 1831
/* 1827 */    MCD::OPC_Decode, 255, 12, 3, // Opcode: VSUM4SBS
/* 1831 */    MCD::OPC_FilterValue, 30, 196, 46, // Skip to: 13807
/* 1835 */    MCD::OPC_Decode, 130, 13, 3, // Opcode: VSUMSWS
/* 1839 */    MCD::OPC_FilterValue, 9, 27, 0, // Skip to: 1870
/* 1843 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1846 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1854
/* 1850 */    MCD::OPC_Decode, 156, 12, 3, // Opcode: VMULUWM
/* 1854 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1862
/* 1858 */    MCD::OPC_Decode, 145, 11, 3, // Opcode: VCIPHERLAST
/* 1862 */    MCD::OPC_FilterValue, 21, 165, 46, // Skip to: 13807
/* 1866 */    MCD::OPC_Decode, 159, 12, 3, // Opcode: VNCIPHERLAST
/* 1870 */    MCD::OPC_FilterValue, 10, 179, 0, // Skip to: 2053
/* 1874 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1877 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1885
/* 1881 */    MCD::OPC_Decode, 246, 10, 3, // Opcode: VADDFP
/* 1885 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1893
/* 1889 */    MCD::OPC_Decode, 242, 12, 3, // Opcode: VSUBFP
/* 1893 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 1907
/* 1897 */    MCD::OPC_CheckField, 16, 5, 0, 128, 46, // Skip to: 13807
/* 1903 */    MCD::OPC_Decode, 193, 12, 6, // Opcode: VREFP
/* 1907 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 1921
/* 1911 */    MCD::OPC_CheckField, 16, 5, 0, 114, 46, // Skip to: 13807
/* 1917 */    MCD::OPC_Decode, 206, 12, 6, // Opcode: VRSQRTEFP
/* 1921 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 1935
/* 1925 */    MCD::OPC_CheckField, 16, 5, 0, 100, 46, // Skip to: 13807
/* 1931 */    MCD::OPC_Decode, 205, 11, 6, // Opcode: VEXPTEFP
/* 1935 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 1949
/* 1939 */    MCD::OPC_CheckField, 16, 5, 0, 86, 46, // Skip to: 13807
/* 1945 */    MCD::OPC_Decode, 231, 11, 6, // Opcode: VLOGEFP
/* 1949 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 1963
/* 1953 */    MCD::OPC_CheckField, 16, 5, 0, 72, 46, // Skip to: 13807
/* 1959 */    MCD::OPC_Decode, 195, 12, 6, // Opcode: VRFIN
/* 1963 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 1977
/* 1967 */    MCD::OPC_CheckField, 16, 5, 0, 58, 46, // Skip to: 13807
/* 1973 */    MCD::OPC_Decode, 197, 12, 6, // Opcode: VRFIZ
/* 1977 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 1991
/* 1981 */    MCD::OPC_CheckField, 16, 5, 0, 44, 46, // Skip to: 13807
/* 1987 */    MCD::OPC_Decode, 196, 12, 6, // Opcode: VRFIP
/* 1991 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 2005
/* 1995 */    MCD::OPC_CheckField, 16, 5, 0, 30, 46, // Skip to: 13807
/* 2001 */    MCD::OPC_Decode, 194, 12, 6, // Opcode: VRFIM
/* 2005 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2013
/* 2009 */    MCD::OPC_Decode, 142, 11, 13, // Opcode: VCFUX
/* 2013 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 2021
/* 2017 */    MCD::OPC_Decode, 140, 11, 13, // Opcode: VCFSX
/* 2021 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 2029
/* 2025 */    MCD::OPC_Decode, 197, 11, 13, // Opcode: VCTUXS
/* 2029 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 2037
/* 2033 */    MCD::OPC_Decode, 195, 11, 13, // Opcode: VCTSXS
/* 2037 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 2045
/* 2041 */    MCD::OPC_Decode, 233, 11, 3, // Opcode: VMAXFP
/* 2045 */    MCD::OPC_FilterValue, 17, 238, 45, // Skip to: 13807
/* 2049 */    MCD::OPC_Decode, 244, 11, 3, // Opcode: VMINFP
/* 2053 */    MCD::OPC_FilterValue, 12, 179, 0, // Skip to: 2236
/* 2057 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2060 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2068
/* 2064 */    MCD::OPC_Decode, 255, 11, 3, // Opcode: VMRGHB
/* 2068 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2076
/* 2072 */    MCD::OPC_Decode, 128, 12, 3, // Opcode: VMRGHH
/* 2076 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2084
/* 2080 */    MCD::OPC_Decode, 129, 12, 3, // Opcode: VMRGHW
/* 2084 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2092
/* 2088 */    MCD::OPC_Decode, 130, 12, 3, // Opcode: VMRGLB
/* 2092 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 2100
/* 2096 */    MCD::OPC_Decode, 131, 12, 3, // Opcode: VMRGLH
/* 2100 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2108
/* 2104 */    MCD::OPC_Decode, 132, 12, 3, // Opcode: VMRGLW
/* 2108 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2116
/* 2112 */    MCD::OPC_Decode, 219, 12, 13, // Opcode: VSPLTB
/* 2116 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 2124
/* 2120 */    MCD::OPC_Decode, 221, 12, 13, // Opcode: VSPLTH
/* 2124 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2132
/* 2128 */    MCD::OPC_Decode, 226, 12, 13, // Opcode: VSPLTW
/* 2132 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 2146
/* 2136 */    MCD::OPC_CheckField, 11, 5, 0, 145, 45, // Skip to: 13807
/* 2142 */    MCD::OPC_Decode, 223, 12, 14, // Opcode: VSPLTISB
/* 2146 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 2160
/* 2150 */    MCD::OPC_CheckField, 11, 5, 0, 131, 45, // Skip to: 13807
/* 2156 */    MCD::OPC_Decode, 224, 12, 14, // Opcode: VSPLTISH
/* 2160 */    MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 2174
/* 2164 */    MCD::OPC_CheckField, 11, 5, 0, 117, 45, // Skip to: 13807
/* 2170 */    MCD::OPC_Decode, 225, 12, 14, // Opcode: VSPLTISW
/* 2174 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 2182
/* 2178 */    MCD::OPC_Decode, 216, 12, 3, // Opcode: VSLO
/* 2182 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 2190
/* 2186 */    MCD::OPC_Decode, 235, 12, 3, // Opcode: VSRO
/* 2190 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 2204
/* 2194 */    MCD::OPC_CheckField, 16, 5, 0, 87, 45, // Skip to: 13807
/* 2200 */    MCD::OPC_Decode, 226, 11, 6, // Opcode: VGBBD
/* 2204 */    MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 2212
/* 2208 */    MCD::OPC_Decode, 139, 11, 3, // Opcode: VBPERMQ
/* 2212 */    MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 2220
/* 2216 */    MCD::OPC_Decode, 138, 11, 3, // Opcode: VBPERMD
/* 2220 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 2228
/* 2224 */    MCD::OPC_Decode, 133, 12, 3, // Opcode: VMRGOW
/* 2228 */    MCD::OPC_FilterValue, 30, 55, 45, // Skip to: 13807
/* 2232 */    MCD::OPC_Decode, 254, 11, 3, // Opcode: VMRGEW
/* 2236 */    MCD::OPC_FilterValue, 13, 115, 0, // Skip to: 2355
/* 2240 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2243 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2251
/* 2247 */    MCD::OPC_Decode, 207, 11, 15, // Opcode: VEXTRACTUB
/* 2251 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 2259
/* 2255 */    MCD::OPC_Decode, 208, 11, 15, // Opcode: VEXTRACTUH
/* 2259 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2267
/* 2263 */    MCD::OPC_Decode, 209, 11, 15, // Opcode: VEXTRACTUW
/* 2267 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 2275
/* 2271 */    MCD::OPC_Decode, 206, 11, 15, // Opcode: VEXTRACTD
/* 2275 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2283
/* 2279 */    MCD::OPC_Decode, 227, 11, 15, // Opcode: VINSERTB
/* 2283 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 2291
/* 2287 */    MCD::OPC_Decode, 229, 11, 15, // Opcode: VINSERTH
/* 2291 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 2299
/* 2295 */    MCD::OPC_Decode, 230, 11, 15, // Opcode: VINSERTW
/* 2299 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 2307
/* 2303 */    MCD::OPC_Decode, 228, 11, 15, // Opcode: VINSERTD
/* 2307 */    MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 2315
/* 2311 */    MCD::OPC_Decode, 220, 11, 16, // Opcode: VEXTUBLX
/* 2315 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 2323
/* 2319 */    MCD::OPC_Decode, 222, 11, 16, // Opcode: VEXTUHLX
/* 2323 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 2331
/* 2327 */    MCD::OPC_Decode, 224, 11, 16, // Opcode: VEXTUWLX
/* 2331 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 2339
/* 2335 */    MCD::OPC_Decode, 221, 11, 16, // Opcode: VEXTUBRX
/* 2339 */    MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 2347
/* 2343 */    MCD::OPC_Decode, 223, 11, 16, // Opcode: VEXTUHRX
/* 2347 */    MCD::OPC_FilterValue, 30, 192, 44, // Skip to: 13807
/* 2351 */    MCD::OPC_Decode, 225, 11, 16, // Opcode: VEXTUWRX
/* 2355 */    MCD::OPC_FilterValue, 14, 219, 0, // Skip to: 2578
/* 2359 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2362 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2370
/* 2366 */    MCD::OPC_Decode, 178, 12, 3, // Opcode: VPKUHUM
/* 2370 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2378
/* 2374 */    MCD::OPC_Decode, 180, 12, 3, // Opcode: VPKUWUM
/* 2378 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2386
/* 2382 */    MCD::OPC_Decode, 179, 12, 3, // Opcode: VPKUHUS
/* 2386 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 2394
/* 2390 */    MCD::OPC_Decode, 181, 12, 3, // Opcode: VPKUWUS
/* 2394 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2402
/* 2398 */    MCD::OPC_Decode, 173, 12, 3, // Opcode: VPKSHUS
/* 2402 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 2410
/* 2406 */    MCD::OPC_Decode, 175, 12, 3, // Opcode: VPKSWUS
/* 2410 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2418
/* 2414 */    MCD::OPC_Decode, 172, 12, 3, // Opcode: VPKSHSS
/* 2418 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 2426
/* 2422 */    MCD::OPC_Decode, 174, 12, 3, // Opcode: VPKSWSS
/* 2426 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 2440
/* 2430 */    MCD::OPC_CheckField, 16, 5, 0, 107, 44, // Skip to: 13807
/* 2436 */    MCD::OPC_Decode, 132, 13, 6, // Opcode: VUPKHSB
/* 2440 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 2454
/* 2444 */    MCD::OPC_CheckField, 16, 5, 0, 93, 44, // Skip to: 13807
/* 2450 */    MCD::OPC_Decode, 133, 13, 6, // Opcode: VUPKHSH
/* 2454 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 2468
/* 2458 */    MCD::OPC_CheckField, 16, 5, 0, 79, 44, // Skip to: 13807
/* 2464 */    MCD::OPC_Decode, 136, 13, 6, // Opcode: VUPKLSB
/* 2468 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 2482
/* 2472 */    MCD::OPC_CheckField, 16, 5, 0, 65, 44, // Skip to: 13807
/* 2478 */    MCD::OPC_Decode, 137, 13, 6, // Opcode: VUPKLSH
/* 2482 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2490
/* 2486 */    MCD::OPC_Decode, 169, 12, 3, // Opcode: VPKPX
/* 2490 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 2504
/* 2494 */    MCD::OPC_CheckField, 16, 5, 0, 43, 44, // Skip to: 13807
/* 2500 */    MCD::OPC_Decode, 131, 13, 6, // Opcode: VUPKHPX
/* 2504 */    MCD::OPC_FilterValue, 15, 10, 0, // Skip to: 2518
/* 2508 */    MCD::OPC_CheckField, 16, 5, 0, 29, 44, // Skip to: 13807
/* 2514 */    MCD::OPC_Decode, 135, 13, 6, // Opcode: VUPKLPX
/* 2518 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 2526
/* 2522 */    MCD::OPC_Decode, 176, 12, 3, // Opcode: VPKUDUM
/* 2526 */    MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 2534
/* 2530 */    MCD::OPC_Decode, 177, 12, 3, // Opcode: VPKUDUS
/* 2534 */    MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 2542
/* 2538 */    MCD::OPC_Decode, 171, 12, 3, // Opcode: VPKSDUS
/* 2542 */    MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 2550
/* 2546 */    MCD::OPC_Decode, 170, 12, 3, // Opcode: VPKSDSS
/* 2550 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 2564
/* 2554 */    MCD::OPC_CheckField, 16, 5, 0, 239, 43, // Skip to: 13807
/* 2560 */    MCD::OPC_Decode, 134, 13, 6, // Opcode: VUPKHSW
/* 2564 */    MCD::OPC_FilterValue, 27, 231, 43, // Skip to: 13807
/* 2568 */    MCD::OPC_CheckField, 16, 5, 0, 225, 43, // Skip to: 13807
/* 2574 */    MCD::OPC_Decode, 138, 13, 6, // Opcode: VUPKLSW
/* 2578 */    MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 2586
/* 2582 */    MCD::OPC_Decode, 242, 11, 17, // Opcode: VMHADDSHS
/* 2586 */    MCD::OPC_FilterValue, 33, 4, 0, // Skip to: 2594
/* 2590 */    MCD::OPC_Decode, 243, 11, 17, // Opcode: VMHRADDSHS
/* 2594 */    MCD::OPC_FilterValue, 34, 4, 0, // Skip to: 2602
/* 2598 */    MCD::OPC_Decode, 253, 11, 17, // Opcode: VMLADDUHM
/* 2602 */    MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 2610
/* 2606 */    MCD::OPC_Decode, 137, 12, 17, // Opcode: VMSUMUBM
/* 2610 */    MCD::OPC_FilterValue, 37, 4, 0, // Skip to: 2618
/* 2614 */    MCD::OPC_Decode, 134, 12, 17, // Opcode: VMSUMMBM
/* 2618 */    MCD::OPC_FilterValue, 38, 4, 0, // Skip to: 2626
/* 2622 */    MCD::OPC_Decode, 138, 12, 17, // Opcode: VMSUMUHM
/* 2626 */    MCD::OPC_FilterValue, 39, 4, 0, // Skip to: 2634
/* 2630 */    MCD::OPC_Decode, 139, 12, 17, // Opcode: VMSUMUHS
/* 2634 */    MCD::OPC_FilterValue, 40, 4, 0, // Skip to: 2642
/* 2638 */    MCD::OPC_Decode, 135, 12, 17, // Opcode: VMSUMSHM
/* 2642 */    MCD::OPC_FilterValue, 41, 4, 0, // Skip to: 2650
/* 2646 */    MCD::OPC_Decode, 136, 12, 17, // Opcode: VMSUMSHS
/* 2650 */    MCD::OPC_FilterValue, 42, 4, 0, // Skip to: 2658
/* 2654 */    MCD::OPC_Decode, 208, 12, 17, // Opcode: VSEL
/* 2658 */    MCD::OPC_FilterValue, 43, 4, 0, // Skip to: 2666
/* 2662 */    MCD::OPC_Decode, 166, 12, 17, // Opcode: VPERM
/* 2666 */    MCD::OPC_FilterValue, 44, 10, 0, // Skip to: 2680
/* 2670 */    MCD::OPC_CheckField, 10, 1, 0, 123, 43, // Skip to: 13807
/* 2676 */    MCD::OPC_Decode, 214, 12, 18, // Opcode: VSLDOI
/* 2680 */    MCD::OPC_FilterValue, 45, 4, 0, // Skip to: 2688
/* 2684 */    MCD::OPC_Decode, 168, 12, 17, // Opcode: VPERMXOR
/* 2688 */    MCD::OPC_FilterValue, 46, 4, 0, // Skip to: 2696
/* 2692 */    MCD::OPC_Decode, 232, 11, 19, // Opcode: VMADDFP
/* 2696 */    MCD::OPC_FilterValue, 47, 4, 0, // Skip to: 2704
/* 2700 */    MCD::OPC_Decode, 162, 12, 19, // Opcode: VNMSUBFP
/* 2704 */    MCD::OPC_FilterValue, 59, 4, 0, // Skip to: 2712
/* 2708 */    MCD::OPC_Decode, 167, 12, 17, // Opcode: VPERMR
/* 2712 */    MCD::OPC_FilterValue, 60, 4, 0, // Skip to: 2720
/* 2716 */    MCD::OPC_Decode, 245, 10, 17, // Opcode: VADDEUQM
/* 2720 */    MCD::OPC_FilterValue, 61, 4, 0, // Skip to: 2728
/* 2724 */    MCD::OPC_Decode, 244, 10, 17, // Opcode: VADDECUQ
/* 2728 */    MCD::OPC_FilterValue, 62, 4, 0, // Skip to: 2736
/* 2732 */    MCD::OPC_Decode, 241, 12, 17, // Opcode: VSUBEUQM
/* 2736 */    MCD::OPC_FilterValue, 63, 59, 43, // Skip to: 13807
/* 2740 */    MCD::OPC_Decode, 240, 12, 17, // Opcode: VSUBECUQ
/* 2744 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 2752
/* 2748 */    MCD::OPC_Decode, 164, 7, 20, // Opcode: MULLI
/* 2752 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2760
/* 2756 */    MCD::OPC_Decode, 178, 10, 20, // Opcode: SUBFIC
/* 2760 */    MCD::OPC_FilterValue, 10, 19, 0, // Skip to: 2783
/* 2764 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 2767 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2775
/* 2771 */    MCD::OPC_Decode, 187, 2, 21, // Opcode: CMPLWI
/* 2775 */    MCD::OPC_FilterValue, 1, 20, 43, // Skip to: 13807
/* 2779 */    MCD::OPC_Decode, 185, 2, 22, // Opcode: CMPLDI
/* 2783 */    MCD::OPC_FilterValue, 11, 19, 0, // Skip to: 2806
/* 2787 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 2790 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2798
/* 2794 */    MCD::OPC_Decode, 191, 2, 23, // Opcode: CMPWI
/* 2798 */    MCD::OPC_FilterValue, 1, 253, 42, // Skip to: 13807
/* 2802 */    MCD::OPC_Decode, 182, 2, 24, // Opcode: CMPDI
/* 2806 */    MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 2813
/* 2810 */    MCD::OPC_Decode, 99, 20, // Opcode: ADDIC
/* 2813 */    MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 2820
/* 2817 */    MCD::OPC_Decode, 101, 20, // Opcode: ADDICo
/* 2820 */    MCD::OPC_FilterValue, 14, 13, 0, // Skip to: 2837
/* 2824 */    MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 2834
/* 2830 */    MCD::OPC_Decode, 166, 6, 25, // Opcode: LI
/* 2834 */    MCD::OPC_Decode, 97, 26, // Opcode: ADDI
/* 2837 */    MCD::OPC_FilterValue, 15, 13, 0, // Skip to: 2854
/* 2841 */    MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 2851
/* 2847 */    MCD::OPC_Decode, 168, 6, 25, // Opcode: LIS
/* 2851 */    MCD::OPC_Decode, 102, 26, // Opcode: ADDIS
/* 2854 */    MCD::OPC_FilterValue, 16, 7, 1, // Skip to: 3121
/* 2858 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 2861 */    MCD::OPC_FilterValue, 0, 61, 0, // Skip to: 2926
/* 2865 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 2868 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 2877
/* 2873 */    MCD::OPC_Decode, 243, 1, 27, // Opcode: BDNZ
/* 2877 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 2886
/* 2882 */    MCD::OPC_Decode, 135, 2, 27, // Opcode: BDZ
/* 2886 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 2895
/* 2891 */    MCD::OPC_Decode, 133, 2, 27, // Opcode: BDNZm
/* 2895 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 2904
/* 2900 */    MCD::OPC_Decode, 134, 2, 27, // Opcode: BDNZp
/* 2904 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 2913
/* 2909 */    MCD::OPC_Decode, 153, 2, 27, // Opcode: BDZm
/* 2913 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 2922
/* 2918 */    MCD::OPC_Decode, 154, 2, 27, // Opcode: BDZp
/* 2922 */    MCD::OPC_Decode, 148, 15, 28, // Opcode: gBC
/* 2926 */    MCD::OPC_FilterValue, 1, 61, 0, // Skip to: 2991
/* 2930 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 2933 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 2942
/* 2938 */    MCD::OPC_Decode, 248, 1, 27, // Opcode: BDNZL
/* 2942 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 2951
/* 2947 */    MCD::OPC_Decode, 140, 2, 27, // Opcode: BDZL
/* 2951 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 2960
/* 2956 */    MCD::OPC_Decode, 131, 2, 27, // Opcode: BDNZLm
/* 2960 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 2969
/* 2965 */    MCD::OPC_Decode, 132, 2, 27, // Opcode: BDNZLp
/* 2969 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 2978
/* 2974 */    MCD::OPC_Decode, 151, 2, 27, // Opcode: BDZLm
/* 2978 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 2987
/* 2983 */    MCD::OPC_Decode, 152, 2, 27, // Opcode: BDZLp
/* 2987 */    MCD::OPC_Decode, 153, 15, 28, // Opcode: gBCL
/* 2991 */    MCD::OPC_FilterValue, 2, 61, 0, // Skip to: 3056
/* 2995 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 2998 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 3007
/* 3003 */    MCD::OPC_Decode, 245, 1, 27, // Opcode: BDNZA
/* 3007 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 3016
/* 3012 */    MCD::OPC_Decode, 137, 2, 27, // Opcode: BDZA
/* 3016 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 3025
/* 3021 */    MCD::OPC_Decode, 246, 1, 27, // Opcode: BDNZAm
/* 3025 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 3034
/* 3030 */    MCD::OPC_Decode, 247, 1, 27, // Opcode: BDNZAp
/* 3034 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 3043
/* 3039 */    MCD::OPC_Decode, 138, 2, 27, // Opcode: BDZAm
/* 3043 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 3052
/* 3048 */    MCD::OPC_Decode, 139, 2, 27, // Opcode: BDZAp
/* 3052 */    MCD::OPC_Decode, 149, 15, 28, // Opcode: gBCA
/* 3056 */    MCD::OPC_FilterValue, 3, 251, 41, // Skip to: 13807
/* 3060 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 3063 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 3072
/* 3068 */    MCD::OPC_Decode, 249, 1, 27, // Opcode: BDNZLA
/* 3072 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 3081
/* 3077 */    MCD::OPC_Decode, 141, 2, 27, // Opcode: BDZLA
/* 3081 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 3090
/* 3086 */    MCD::OPC_Decode, 250, 1, 27, // Opcode: BDNZLAm
/* 3090 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 3099
/* 3095 */    MCD::OPC_Decode, 251, 1, 27, // Opcode: BDNZLAp
/* 3099 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 3108
/* 3104 */    MCD::OPC_Decode, 142, 2, 27, // Opcode: BDZLAm
/* 3108 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 3117
/* 3113 */    MCD::OPC_Decode, 143, 2, 27, // Opcode: BDZLAp
/* 3117 */    MCD::OPC_Decode, 154, 15, 28, // Opcode: gBCLA
/* 3121 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 3135
/* 3125 */    MCD::OPC_CheckField, 1, 1, 1, 180, 41, // Skip to: 13807
/* 3131 */    MCD::OPC_Decode, 159, 9, 29, // Opcode: SC
/* 3135 */    MCD::OPC_FilterValue, 18, 35, 0, // Skip to: 3174
/* 3139 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3142 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3150
/* 3146 */    MCD::OPC_Decode, 196, 1, 30, // Opcode: B
/* 3150 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 3158
/* 3154 */    MCD::OPC_Decode, 155, 2, 30, // Opcode: BL
/* 3158 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3166
/* 3162 */    MCD::OPC_Decode, 197, 1, 30, // Opcode: BA
/* 3166 */    MCD::OPC_FilterValue, 3, 141, 41, // Skip to: 13807
/* 3170 */    MCD::OPC_Decode, 161, 2, 30, // Opcode: BLA
/* 3174 */    MCD::OPC_FilterValue, 19, 39, 2, // Skip to: 3729
/* 3178 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 3181 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 3201
/* 3185 */    MCD::OPC_CheckField, 21, 2, 0, 120, 41, // Skip to: 13807
/* 3191 */    MCD::OPC_CheckField, 11, 7, 0, 114, 41, // Skip to: 13807
/* 3197 */    MCD::OPC_Decode, 218, 6, 31, // Opcode: MCRF
/* 3201 */    MCD::OPC_FilterValue, 32, 119, 0, // Skip to: 3324
/* 3205 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3208 */    MCD::OPC_FilterValue, 0, 99, 41, // Skip to: 13807
/* 3212 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 3215 */    MCD::OPC_FilterValue, 128, 4, 10, 0, // Skip to: 3230
/* 3220 */    MCD::OPC_CheckField, 11, 2, 0, 94, 0, // Skip to: 3320
/* 3226 */    MCD::OPC_Decode, 252, 1, 0, // Opcode: BDNZLR
/* 3230 */    MCD::OPC_FilterValue, 192, 4, 10, 0, // Skip to: 3245
/* 3235 */    MCD::OPC_CheckField, 11, 2, 0, 79, 0, // Skip to: 3320
/* 3241 */    MCD::OPC_Decode, 144, 2, 0, // Opcode: BDZLR
/* 3245 */    MCD::OPC_FilterValue, 128, 5, 10, 0, // Skip to: 3260
/* 3250 */    MCD::OPC_CheckField, 11, 2, 0, 64, 0, // Skip to: 3320
/* 3256 */    MCD::OPC_Decode, 164, 2, 0, // Opcode: BLR
/* 3260 */    MCD::OPC_FilterValue, 128, 6, 10, 0, // Skip to: 3275
/* 3265 */    MCD::OPC_CheckField, 11, 2, 0, 49, 0, // Skip to: 3320
/* 3271 */    MCD::OPC_Decode, 129, 2, 0, // Opcode: BDNZLRm
/* 3275 */    MCD::OPC_FilterValue, 160, 6, 10, 0, // Skip to: 3290
/* 3280 */    MCD::OPC_CheckField, 11, 2, 0, 34, 0, // Skip to: 3320
/* 3286 */    MCD::OPC_Decode, 130, 2, 0, // Opcode: BDNZLRp
/* 3290 */    MCD::OPC_FilterValue, 192, 6, 10, 0, // Skip to: 3305
/* 3295 */    MCD::OPC_CheckField, 11, 2, 0, 19, 0, // Skip to: 3320
/* 3301 */    MCD::OPC_Decode, 149, 2, 0, // Opcode: BDZLRm
/* 3305 */    MCD::OPC_FilterValue, 224, 6, 10, 0, // Skip to: 3320
/* 3310 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3320
/* 3316 */    MCD::OPC_Decode, 150, 2, 0, // Opcode: BDZLRp
/* 3320 */    MCD::OPC_Decode, 156, 15, 32, // Opcode: gBCLR
/* 3324 */    MCD::OPC_FilterValue, 33, 119, 0, // Skip to: 3447
/* 3328 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3331 */    MCD::OPC_FilterValue, 0, 232, 40, // Skip to: 13807
/* 3335 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 3338 */    MCD::OPC_FilterValue, 128, 4, 10, 0, // Skip to: 3353
/* 3343 */    MCD::OPC_CheckField, 11, 2, 0, 94, 0, // Skip to: 3443
/* 3349 */    MCD::OPC_Decode, 254, 1, 0, // Opcode: BDNZLRL
/* 3353 */    MCD::OPC_FilterValue, 192, 4, 10, 0, // Skip to: 3368
/* 3358 */    MCD::OPC_CheckField, 11, 2, 0, 79, 0, // Skip to: 3443
/* 3364 */    MCD::OPC_Decode, 146, 2, 0, // Opcode: BDZLRL
/* 3368 */    MCD::OPC_FilterValue, 128, 5, 10, 0, // Skip to: 3383
/* 3373 */    MCD::OPC_CheckField, 11, 2, 0, 64, 0, // Skip to: 3443
/* 3379 */    MCD::OPC_Decode, 166, 2, 0, // Opcode: BLRL
/* 3383 */    MCD::OPC_FilterValue, 128, 6, 10, 0, // Skip to: 3398
/* 3388 */    MCD::OPC_CheckField, 11, 2, 0, 49, 0, // Skip to: 3443
/* 3394 */    MCD::OPC_Decode, 255, 1, 0, // Opcode: BDNZLRLm
/* 3398 */    MCD::OPC_FilterValue, 160, 6, 10, 0, // Skip to: 3413
/* 3403 */    MCD::OPC_CheckField, 11, 2, 0, 34, 0, // Skip to: 3443
/* 3409 */    MCD::OPC_Decode, 128, 2, 0, // Opcode: BDNZLRLp
/* 3413 */    MCD::OPC_FilterValue, 192, 6, 10, 0, // Skip to: 3428
/* 3418 */    MCD::OPC_CheckField, 11, 2, 0, 19, 0, // Skip to: 3443
/* 3424 */    MCD::OPC_Decode, 147, 2, 0, // Opcode: BDZLRLm
/* 3428 */    MCD::OPC_FilterValue, 224, 6, 10, 0, // Skip to: 3443
/* 3433 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3443
/* 3439 */    MCD::OPC_Decode, 148, 2, 0, // Opcode: BDZLRLp
/* 3443 */    MCD::OPC_Decode, 157, 15, 32, // Opcode: gBCLRL
/* 3447 */    MCD::OPC_FilterValue, 36, 10, 0, // Skip to: 3461
/* 3451 */    MCD::OPC_CheckField, 11, 15, 0, 110, 40, // Skip to: 13807
/* 3457 */    MCD::OPC_Decode, 249, 8, 0, // Opcode: RFID
/* 3461 */    MCD::OPC_FilterValue, 66, 4, 0, // Skip to: 3469
/* 3465 */    MCD::OPC_Decode, 221, 2, 33, // Opcode: CRNOR
/* 3469 */    MCD::OPC_FilterValue, 76, 10, 0, // Skip to: 3483
/* 3473 */    MCD::OPC_CheckField, 11, 15, 0, 88, 40, // Skip to: 13807
/* 3479 */    MCD::OPC_Decode, 250, 8, 0, // Opcode: RFMCI
/* 3483 */    MCD::OPC_FilterValue, 78, 10, 0, // Skip to: 3497
/* 3487 */    MCD::OPC_CheckField, 11, 15, 0, 74, 40, // Skip to: 13807
/* 3493 */    MCD::OPC_Decode, 246, 8, 0, // Opcode: RFDI
/* 3497 */    MCD::OPC_FilterValue, 100, 10, 0, // Skip to: 3511
/* 3501 */    MCD::OPC_CheckField, 11, 15, 0, 60, 40, // Skip to: 13807
/* 3507 */    MCD::OPC_Decode, 248, 8, 0, // Opcode: RFI
/* 3511 */    MCD::OPC_FilterValue, 102, 10, 0, // Skip to: 3525
/* 3515 */    MCD::OPC_CheckField, 11, 15, 0, 46, 40, // Skip to: 13807
/* 3521 */    MCD::OPC_Decode, 245, 8, 0, // Opcode: RFCI
/* 3525 */    MCD::OPC_FilterValue, 130, 2, 4, 0, // Skip to: 3534
/* 3530 */    MCD::OPC_Decode, 218, 2, 33, // Opcode: CRANDC
/* 3534 */    MCD::OPC_FilterValue, 164, 2, 10, 0, // Skip to: 3549
/* 3539 */    MCD::OPC_CheckField, 12, 14, 0, 22, 40, // Skip to: 13807
/* 3545 */    MCD::OPC_Decode, 247, 8, 34, // Opcode: RFEBB
/* 3549 */    MCD::OPC_FilterValue, 172, 2, 10, 0, // Skip to: 3564
/* 3554 */    MCD::OPC_CheckField, 11, 15, 0, 7, 40, // Skip to: 13807
/* 3560 */    MCD::OPC_Decode, 232, 5, 0, // Opcode: ISYNC
/* 3564 */    MCD::OPC_FilterValue, 130, 3, 4, 0, // Skip to: 3573
/* 3569 */    MCD::OPC_Decode, 226, 2, 33, // Opcode: CRXOR
/* 3573 */    MCD::OPC_FilterValue, 194, 3, 4, 0, // Skip to: 3582
/* 3578 */    MCD::OPC_Decode, 220, 2, 33, // Opcode: CRNAND
/* 3582 */    MCD::OPC_FilterValue, 130, 4, 4, 0, // Skip to: 3591
/* 3587 */    MCD::OPC_Decode, 217, 2, 33, // Opcode: CRAND
/* 3591 */    MCD::OPC_FilterValue, 164, 4, 10, 0, // Skip to: 3606
/* 3596 */    MCD::OPC_CheckField, 11, 15, 0, 221, 39, // Skip to: 13807
/* 3602 */    MCD::OPC_Decode, 217, 5, 0, // Opcode: HRFID
/* 3606 */    MCD::OPC_FilterValue, 194, 4, 4, 0, // Skip to: 3615
/* 3611 */    MCD::OPC_Decode, 219, 2, 33, // Opcode: CREQV
/* 3615 */    MCD::OPC_FilterValue, 228, 5, 10, 0, // Skip to: 3630
/* 3620 */    MCD::OPC_CheckField, 11, 15, 0, 197, 39, // Skip to: 13807
/* 3626 */    MCD::OPC_Decode, 131, 10, 0, // Opcode: STOP
/* 3630 */    MCD::OPC_FilterValue, 194, 6, 4, 0, // Skip to: 3639
/* 3635 */    MCD::OPC_Decode, 223, 2, 33, // Opcode: CRORC
/* 3639 */    MCD::OPC_FilterValue, 228, 6, 10, 0, // Skip to: 3654
/* 3644 */    MCD::OPC_CheckField, 11, 15, 0, 173, 39, // Skip to: 13807
/* 3650 */    MCD::OPC_Decode, 175, 7, 0, // Opcode: NAP
/* 3654 */    MCD::OPC_FilterValue, 130, 7, 4, 0, // Skip to: 3663
/* 3659 */    MCD::OPC_Decode, 222, 2, 33, // Opcode: CROR
/* 3663 */    MCD::OPC_FilterValue, 160, 8, 28, 0, // Skip to: 3696
/* 3668 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3671 */    MCD::OPC_FilterValue, 0, 148, 39, // Skip to: 13807
/* 3675 */    MCD::OPC_CheckField, 16, 10, 128, 5, 10, 0, // Skip to: 3692
/* 3682 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3692
/* 3688 */    MCD::OPC_Decode, 237, 1, 0, // Opcode: BCTR
/* 3692 */    MCD::OPC_Decode, 151, 15, 32, // Opcode: gBCCTR
/* 3696 */    MCD::OPC_FilterValue, 161, 8, 122, 39, // Skip to: 13807
/* 3701 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3704 */    MCD::OPC_FilterValue, 0, 115, 39, // Skip to: 13807
/* 3708 */    MCD::OPC_CheckField, 16, 10, 128, 5, 10, 0, // Skip to: 3725
/* 3715 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3725
/* 3721 */    MCD::OPC_Decode, 239, 1, 0, // Opcode: BCTRL
/* 3725 */    MCD::OPC_Decode, 152, 15, 32, // Opcode: gBCCTRL
/* 3729 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 3752
/* 3733 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3736 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3744
/* 3740 */    MCD::OPC_Decode, 136, 9, 35, // Opcode: RLWIMI
/* 3744 */    MCD::OPC_FilterValue, 1, 75, 39, // Skip to: 13807
/* 3748 */    MCD::OPC_Decode, 140, 9, 35, // Opcode: RLWIMIo
/* 3752 */    MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 3775
/* 3756 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3759 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3767
/* 3763 */    MCD::OPC_Decode, 142, 9, 36, // Opcode: RLWINM
/* 3767 */    MCD::OPC_FilterValue, 1, 52, 39, // Skip to: 13807
/* 3771 */    MCD::OPC_Decode, 146, 9, 36, // Opcode: RLWINMo
/* 3775 */    MCD::OPC_FilterValue, 23, 19, 0, // Skip to: 3798
/* 3779 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3782 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3790
/* 3786 */    MCD::OPC_Decode, 148, 9, 37, // Opcode: RLWNM
/* 3790 */    MCD::OPC_FilterValue, 1, 29, 39, // Skip to: 13807
/* 3794 */    MCD::OPC_Decode, 152, 9, 37, // Opcode: RLWNMo
/* 3798 */    MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 3816
/* 3802 */    MCD::OPC_CheckField, 0, 26, 0, 4, 0, // Skip to: 3812
/* 3808 */    MCD::OPC_Decode, 180, 7, 0, // Opcode: NOP
/* 3812 */    MCD::OPC_Decode, 194, 7, 38, // Opcode: ORI
/* 3816 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 3824
/* 3820 */    MCD::OPC_Decode, 196, 7, 38, // Opcode: ORIS
/* 3824 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 3832
/* 3828 */    MCD::OPC_Decode, 152, 13, 38, // Opcode: XORI
/* 3832 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 3840
/* 3836 */    MCD::OPC_Decode, 154, 13, 38, // Opcode: XORIS
/* 3840 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 3848
/* 3844 */    MCD::OPC_Decode, 140, 1, 38, // Opcode: ANDIo
/* 3848 */    MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 3856
/* 3852 */    MCD::OPC_Decode, 138, 1, 38, // Opcode: ANDISo
/* 3856 */    MCD::OPC_FilterValue, 30, 134, 0, // Skip to: 3994
/* 3860 */    MCD::OPC_ExtractField, 2, 3,  // Inst{4-2} ...
/* 3863 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 3886
/* 3867 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3870 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3878
/* 3874 */    MCD::OPC_Decode, 128, 9, 39, // Opcode: RLDICL
/* 3878 */    MCD::OPC_FilterValue, 1, 197, 38, // Skip to: 13807
/* 3882 */    MCD::OPC_Decode, 130, 9, 39, // Opcode: RLDICLo
/* 3886 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 3909
/* 3890 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3893 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3901
/* 3897 */    MCD::OPC_Decode, 131, 9, 39, // Opcode: RLDICR
/* 3901 */    MCD::OPC_FilterValue, 1, 174, 38, // Skip to: 13807
/* 3905 */    MCD::OPC_Decode, 132, 9, 39, // Opcode: RLDICRo
/* 3909 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 3932
/* 3913 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3916 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3924
/* 3920 */    MCD::OPC_Decode, 255, 8, 39, // Opcode: RLDIC
/* 3924 */    MCD::OPC_FilterValue, 1, 151, 38, // Skip to: 13807
/* 3928 */    MCD::OPC_Decode, 133, 9, 39, // Opcode: RLDICo
/* 3932 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 3955
/* 3936 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 3939 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3947
/* 3943 */    MCD::OPC_Decode, 134, 9, 40, // Opcode: RLDIMI
/* 3947 */    MCD::OPC_FilterValue, 1, 128, 38, // Skip to: 13807
/* 3951 */    MCD::OPC_Decode, 135, 9, 40, // Opcode: RLDIMIo
/* 3955 */    MCD::OPC_FilterValue, 4, 120, 38, // Skip to: 13807
/* 3959 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3962 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3970
/* 3966 */    MCD::OPC_Decode, 251, 8, 41, // Opcode: RLDCL
/* 3970 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 3978
/* 3974 */    MCD::OPC_Decode, 252, 8, 41, // Opcode: RLDCLo
/* 3978 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3986
/* 3982 */    MCD::OPC_Decode, 253, 8, 41, // Opcode: RLDCR
/* 3986 */    MCD::OPC_FilterValue, 3, 89, 38, // Skip to: 13807
/* 3990 */    MCD::OPC_Decode, 254, 8, 41, // Opcode: RLDCRo
/* 3994 */    MCD::OPC_FilterValue, 31, 42, 17, // Skip to: 8392
/* 3998 */    MCD::OPC_ExtractField, 2, 4,  // Inst{5-2} ...
/* 4001 */    MCD::OPC_FilterValue, 0, 133, 0, // Skip to: 4138
/* 4005 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4008 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 4043
/* 4012 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 4015 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4029
/* 4019 */    MCD::OPC_CheckField, 0, 2, 0, 54, 38, // Skip to: 13807
/* 4025 */    MCD::OPC_Decode, 190, 2, 42, // Opcode: CMPW
/* 4029 */    MCD::OPC_FilterValue, 1, 46, 38, // Skip to: 13807
/* 4033 */    MCD::OPC_CheckField, 0, 2, 0, 40, 38, // Skip to: 13807
/* 4039 */    MCD::OPC_Decode, 181, 2, 43, // Opcode: CMPD
/* 4043 */    MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 4078
/* 4047 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 4050 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4064
/* 4054 */    MCD::OPC_CheckField, 0, 2, 0, 19, 38, // Skip to: 13807
/* 4060 */    MCD::OPC_Decode, 186, 2, 42, // Opcode: CMPLW
/* 4064 */    MCD::OPC_FilterValue, 1, 11, 38, // Skip to: 13807
/* 4068 */    MCD::OPC_CheckField, 0, 2, 0, 5, 38, // Skip to: 13807
/* 4074 */    MCD::OPC_Decode, 184, 2, 43, // Opcode: CMPLD
/* 4078 */    MCD::OPC_FilterValue, 6, 16, 0, // Skip to: 4098
/* 4082 */    MCD::OPC_CheckField, 22, 1, 0, 247, 37, // Skip to: 13807
/* 4088 */    MCD::OPC_CheckField, 0, 2, 0, 241, 37, // Skip to: 13807
/* 4094 */    MCD::OPC_Decode, 188, 2, 44, // Opcode: CMPRB
/* 4098 */    MCD::OPC_FilterValue, 7, 16, 0, // Skip to: 4118
/* 4102 */    MCD::OPC_CheckField, 21, 2, 0, 227, 37, // Skip to: 13807
/* 4108 */    MCD::OPC_CheckField, 0, 2, 0, 221, 37, // Skip to: 13807
/* 4114 */    MCD::OPC_Decode, 183, 2, 45, // Opcode: CMPEQB
/* 4118 */    MCD::OPC_FilterValue, 18, 213, 37, // Skip to: 13807
/* 4122 */    MCD::OPC_CheckField, 11, 12, 0, 207, 37, // Skip to: 13807
/* 4128 */    MCD::OPC_CheckField, 0, 2, 0, 201, 37, // Skip to: 13807
/* 4134 */    MCD::OPC_Decode, 220, 6, 46, // Opcode: MCRXRX
/* 4138 */    MCD::OPC_FilterValue, 1, 65, 0, // Skip to: 4207
/* 4142 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4145 */    MCD::OPC_FilterValue, 4, 16, 0, // Skip to: 4165
/* 4149 */    MCD::OPC_CheckField, 16, 1, 0, 180, 37, // Skip to: 13807
/* 4155 */    MCD::OPC_CheckField, 1, 1, 1, 174, 37, // Skip to: 13807
/* 4161 */    MCD::OPC_Decode, 147, 13, 47, // Opcode: WRTEE
/* 4165 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 4179
/* 4169 */    MCD::OPC_CheckField, 1, 1, 1, 160, 37, // Skip to: 13807
/* 4175 */    MCD::OPC_Decode, 148, 13, 48, // Opcode: WRTEEI
/* 4179 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 4193
/* 4183 */    MCD::OPC_CheckField, 0, 2, 2, 146, 37, // Skip to: 13807
/* 4189 */    MCD::OPC_Decode, 226, 6, 49, // Opcode: MFDCR
/* 4193 */    MCD::OPC_FilterValue, 14, 138, 37, // Skip to: 13807
/* 4197 */    MCD::OPC_CheckField, 0, 2, 2, 132, 37, // Skip to: 13807
/* 4203 */    MCD::OPC_Decode, 255, 6, 49, // Opcode: MTDCR
/* 4207 */    MCD::OPC_FilterValue, 2, 44, 0, // Skip to: 4255
/* 4211 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4214 */    MCD::OPC_FilterValue, 0, 23, 0, // Skip to: 4241
/* 4218 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4221 */    MCD::OPC_FilterValue, 0, 110, 37, // Skip to: 13807
/* 4225 */    MCD::OPC_CheckField, 11, 15, 128, 248, 1, 4, 0, // Skip to: 4237
/* 4233 */    MCD::OPC_Decode, 231, 10, 0, // Opcode: TRAP
/* 4237 */    MCD::OPC_Decode, 235, 10, 50, // Opcode: TW
/* 4241 */    MCD::OPC_FilterValue, 2, 90, 37, // Skip to: 13807
/* 4245 */    MCD::OPC_CheckField, 0, 2, 0, 84, 37, // Skip to: 13807
/* 4251 */    MCD::OPC_Decode, 214, 10, 51, // Opcode: TD
/* 4255 */    MCD::OPC_FilterValue, 3, 121, 1, // Skip to: 4636
/* 4259 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4262 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 4285
/* 4266 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4269 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4277
/* 4273 */    MCD::OPC_Decode, 175, 6, 52, // Opcode: LVSL
/* 4277 */    MCD::OPC_FilterValue, 2, 54, 37, // Skip to: 13807
/* 4281 */    MCD::OPC_Decode, 172, 6, 52, // Opcode: LVEBX
/* 4285 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 4308
/* 4289 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4292 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4300
/* 4296 */    MCD::OPC_Decode, 176, 6, 52, // Opcode: LVSR
/* 4300 */    MCD::OPC_FilterValue, 2, 31, 37, // Skip to: 13807
/* 4304 */    MCD::OPC_Decode, 173, 6, 52, // Opcode: LVEHX
/* 4308 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 4322
/* 4312 */    MCD::OPC_CheckField, 0, 2, 2, 17, 37, // Skip to: 13807
/* 4318 */    MCD::OPC_Decode, 174, 6, 52, // Opcode: LVEWX
/* 4322 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 4336
/* 4326 */    MCD::OPC_CheckField, 0, 2, 2, 3, 37, // Skip to: 13807
/* 4332 */    MCD::OPC_Decode, 177, 6, 52, // Opcode: LVX
/* 4336 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 4350
/* 4340 */    MCD::OPC_CheckField, 0, 2, 2, 245, 36, // Skip to: 13807
/* 4346 */    MCD::OPC_Decode, 133, 10, 52, // Opcode: STVEBX
/* 4350 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 4364
/* 4354 */    MCD::OPC_CheckField, 0, 2, 2, 231, 36, // Skip to: 13807
/* 4360 */    MCD::OPC_Decode, 134, 10, 52, // Opcode: STVEHX
/* 4364 */    MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 4393
/* 4368 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4371 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4385
/* 4375 */    MCD::OPC_CheckField, 25, 1, 0, 210, 36, // Skip to: 13807
/* 4381 */    MCD::OPC_Decode, 220, 5, 53, // Opcode: ICBLQ
/* 4385 */    MCD::OPC_FilterValue, 2, 202, 36, // Skip to: 13807
/* 4389 */    MCD::OPC_Decode, 135, 10, 52, // Opcode: STVEWX
/* 4393 */    MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 4422
/* 4397 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4400 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4414
/* 4404 */    MCD::OPC_CheckField, 25, 1, 0, 181, 36, // Skip to: 13807
/* 4410 */    MCD::OPC_Decode, 219, 5, 53, // Opcode: ICBLC
/* 4414 */    MCD::OPC_FilterValue, 2, 173, 36, // Skip to: 13807
/* 4418 */    MCD::OPC_Decode, 136, 10, 52, // Opcode: STVX
/* 4422 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 4436
/* 4426 */    MCD::OPC_CheckField, 0, 2, 2, 159, 36, // Skip to: 13807
/* 4432 */    MCD::OPC_Decode, 178, 6, 52, // Opcode: LVXL
/* 4436 */    MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 4456
/* 4440 */    MCD::OPC_CheckField, 21, 5, 0, 145, 36, // Skip to: 13807
/* 4446 */    MCD::OPC_CheckField, 0, 2, 0, 139, 36, // Skip to: 13807
/* 4452 */    MCD::OPC_Decode, 246, 2, 54, // Opcode: DCCCI
/* 4456 */    MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 4485
/* 4460 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4463 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4477
/* 4467 */    MCD::OPC_CheckField, 25, 1, 0, 118, 36, // Skip to: 13807
/* 4473 */    MCD::OPC_Decode, 222, 5, 53, // Opcode: ICBTLS
/* 4477 */    MCD::OPC_FilterValue, 2, 110, 36, // Skip to: 13807
/* 4481 */    MCD::OPC_Decode, 137, 10, 52, // Opcode: STVXL
/* 4485 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 4499
/* 4489 */    MCD::OPC_CheckField, 0, 2, 0, 96, 36, // Skip to: 13807
/* 4495 */    MCD::OPC_Decode, 182, 6, 55, // Opcode: LWAT
/* 4499 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 4513
/* 4503 */    MCD::OPC_CheckField, 0, 2, 0, 82, 36, // Skip to: 13807
/* 4509 */    MCD::OPC_Decode, 249, 5, 56, // Opcode: LDAT
/* 4513 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 4527
/* 4517 */    MCD::OPC_CheckField, 0, 2, 0, 68, 36, // Skip to: 13807
/* 4523 */    MCD::OPC_Decode, 140, 10, 55, // Opcode: STWAT
/* 4527 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 4541
/* 4531 */    MCD::OPC_CheckField, 0, 2, 0, 54, 36, // Skip to: 13807
/* 4537 */    MCD::OPC_Decode, 231, 9, 56, // Opcode: STDAT
/* 4541 */    MCD::OPC_FilterValue, 24, 16, 0, // Skip to: 4561
/* 4545 */    MCD::OPC_CheckField, 22, 4, 0, 40, 36, // Skip to: 13807
/* 4551 */    MCD::OPC_CheckField, 0, 2, 0, 34, 36, // Skip to: 13807
/* 4557 */    MCD::OPC_Decode, 205, 2, 57, // Opcode: CP_COPY
/* 4561 */    MCD::OPC_FilterValue, 26, 16, 0, // Skip to: 4581
/* 4565 */    MCD::OPC_CheckField, 11, 15, 0, 20, 36, // Skip to: 13807
/* 4571 */    MCD::OPC_CheckField, 0, 2, 0, 14, 36, // Skip to: 13807
/* 4577 */    MCD::OPC_Decode, 204, 2, 0, // Opcode: CP_ABORT
/* 4581 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 4616
/* 4585 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4588 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4602
/* 4592 */    MCD::OPC_CheckField, 22, 4, 0, 249, 35, // Skip to: 13807
/* 4598 */    MCD::OPC_Decode, 209, 2, 57, // Opcode: CP_PASTE
/* 4602 */    MCD::OPC_FilterValue, 1, 241, 35, // Skip to: 13807
/* 4606 */    MCD::OPC_CheckField, 22, 4, 0, 235, 35, // Skip to: 13807
/* 4612 */    MCD::OPC_Decode, 213, 2, 57, // Opcode: CP_PASTEo
/* 4616 */    MCD::OPC_FilterValue, 30, 227, 35, // Skip to: 13807
/* 4620 */    MCD::OPC_CheckField, 21, 5, 0, 221, 35, // Skip to: 13807
/* 4626 */    MCD::OPC_CheckField, 0, 2, 0, 215, 35, // Skip to: 13807
/* 4632 */    MCD::OPC_Decode, 223, 5, 54, // Opcode: ICCCI
/* 4636 */    MCD::OPC_FilterValue, 4, 68, 1, // Skip to: 4964
/* 4640 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4643 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 4682
/* 4647 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4650 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4658
/* 4654 */    MCD::OPC_Decode, 170, 10, 58, // Opcode: SUBFC
/* 4658 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 4666
/* 4662 */    MCD::OPC_Decode, 173, 10, 58, // Opcode: SUBFCo
/* 4666 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4674
/* 4670 */    MCD::OPC_Decode, 155, 7, 59, // Opcode: MULHDU
/* 4674 */    MCD::OPC_FilterValue, 3, 169, 35, // Skip to: 13807
/* 4678 */    MCD::OPC_Decode, 156, 7, 59, // Opcode: MULHDUo
/* 4682 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 4705
/* 4686 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4689 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4697
/* 4693 */    MCD::OPC_Decode, 167, 10, 58, // Opcode: SUBF
/* 4697 */    MCD::OPC_FilterValue, 1, 146, 35, // Skip to: 13807
/* 4701 */    MCD::OPC_Decode, 188, 10, 58, // Opcode: SUBFo
/* 4705 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 4728
/* 4709 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4712 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4720
/* 4716 */    MCD::OPC_Decode, 154, 7, 59, // Opcode: MULHD
/* 4720 */    MCD::OPC_FilterValue, 3, 123, 35, // Skip to: 13807
/* 4724 */    MCD::OPC_Decode, 157, 7, 59, // Opcode: MULHDo
/* 4728 */    MCD::OPC_FilterValue, 3, 31, 0, // Skip to: 4763
/* 4732 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4735 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4749
/* 4739 */    MCD::OPC_CheckField, 11, 5, 0, 102, 35, // Skip to: 13807
/* 4745 */    MCD::OPC_Decode, 176, 7, 60, // Opcode: NEG
/* 4749 */    MCD::OPC_FilterValue, 1, 94, 35, // Skip to: 13807
/* 4753 */    MCD::OPC_CheckField, 11, 5, 0, 88, 35, // Skip to: 13807
/* 4759 */    MCD::OPC_Decode, 179, 7, 60, // Opcode: NEGo
/* 4763 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 4786
/* 4767 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4770 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4778
/* 4774 */    MCD::OPC_Decode, 174, 10, 58, // Opcode: SUBFE
/* 4778 */    MCD::OPC_FilterValue, 1, 65, 35, // Skip to: 13807
/* 4782 */    MCD::OPC_Decode, 177, 10, 58, // Opcode: SUBFEo
/* 4786 */    MCD::OPC_FilterValue, 6, 31, 0, // Skip to: 4821
/* 4790 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4793 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4807
/* 4797 */    MCD::OPC_CheckField, 11, 5, 0, 44, 35, // Skip to: 13807
/* 4803 */    MCD::OPC_Decode, 184, 10, 60, // Opcode: SUBFZE
/* 4807 */    MCD::OPC_FilterValue, 1, 36, 35, // Skip to: 13807
/* 4811 */    MCD::OPC_CheckField, 11, 5, 0, 30, 35, // Skip to: 13807
/* 4817 */    MCD::OPC_Decode, 187, 10, 60, // Opcode: SUBFZEo
/* 4821 */    MCD::OPC_FilterValue, 7, 47, 0, // Skip to: 4872
/* 4825 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4828 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4842
/* 4832 */    MCD::OPC_CheckField, 11, 5, 0, 9, 35, // Skip to: 13807
/* 4838 */    MCD::OPC_Decode, 180, 10, 60, // Opcode: SUBFME
/* 4842 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 4856
/* 4846 */    MCD::OPC_CheckField, 11, 5, 0, 251, 34, // Skip to: 13807
/* 4852 */    MCD::OPC_Decode, 183, 10, 60, // Opcode: SUBFMEo
/* 4856 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4864
/* 4860 */    MCD::OPC_Decode, 162, 7, 59, // Opcode: MULLD
/* 4864 */    MCD::OPC_FilterValue, 3, 235, 34, // Skip to: 13807
/* 4868 */    MCD::OPC_Decode, 163, 7, 59, // Opcode: MULLDo
/* 4872 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 4895
/* 4876 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4879 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4887
/* 4883 */    MCD::OPC_Decode, 253, 2, 59, // Opcode: DIVDEU
/* 4887 */    MCD::OPC_FilterValue, 3, 212, 34, // Skip to: 13807
/* 4891 */    MCD::OPC_Decode, 254, 2, 59, // Opcode: DIVDEUo
/* 4895 */    MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 4918
/* 4899 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4902 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4910
/* 4906 */    MCD::OPC_Decode, 252, 2, 59, // Opcode: DIVDE
/* 4910 */    MCD::OPC_FilterValue, 3, 189, 34, // Skip to: 13807
/* 4914 */    MCD::OPC_Decode, 255, 2, 59, // Opcode: DIVDEo
/* 4918 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 4941
/* 4922 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4925 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4933
/* 4929 */    MCD::OPC_Decode, 128, 3, 59, // Opcode: DIVDU
/* 4933 */    MCD::OPC_FilterValue, 3, 166, 34, // Skip to: 13807
/* 4937 */    MCD::OPC_Decode, 129, 3, 59, // Opcode: DIVDUo
/* 4941 */    MCD::OPC_FilterValue, 15, 158, 34, // Skip to: 13807
/* 4945 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4948 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4956
/* 4952 */    MCD::OPC_Decode, 251, 2, 59, // Opcode: DIVD
/* 4956 */    MCD::OPC_FilterValue, 3, 143, 34, // Skip to: 13807
/* 4960 */    MCD::OPC_Decode, 130, 3, 59, // Opcode: DIVDo
/* 4964 */    MCD::OPC_FilterValue, 5, 24, 1, // Skip to: 5248
/* 4968 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4971 */    MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 5008
/* 4975 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4978 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 4985
/* 4982 */    MCD::OPC_Decode, 89, 58, // Opcode: ADDC
/* 4985 */    MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 4992
/* 4989 */    MCD::OPC_Decode, 92, 58, // Opcode: ADDCo
/* 4992 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5000
/* 4996 */    MCD::OPC_Decode, 159, 7, 58, // Opcode: MULHWU
/* 5000 */    MCD::OPC_FilterValue, 3, 99, 34, // Skip to: 13807
/* 5004 */    MCD::OPC_Decode, 160, 7, 58, // Opcode: MULHWUo
/* 5008 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 5031
/* 5012 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5015 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5023
/* 5019 */    MCD::OPC_Decode, 158, 7, 58, // Opcode: MULHW
/* 5023 */    MCD::OPC_FilterValue, 3, 76, 34, // Skip to: 13807
/* 5027 */    MCD::OPC_Decode, 161, 7, 58, // Opcode: MULHWo
/* 5031 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 5052
/* 5035 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5038 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 5045
/* 5042 */    MCD::OPC_Decode, 93, 58, // Opcode: ADDE
/* 5045 */    MCD::OPC_FilterValue, 1, 54, 34, // Skip to: 13807
/* 5049 */    MCD::OPC_Decode, 96, 58, // Opcode: ADDEo
/* 5052 */    MCD::OPC_FilterValue, 6, 30, 0, // Skip to: 5086
/* 5056 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5059 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5072
/* 5063 */    MCD::OPC_CheckField, 11, 5, 0, 34, 34, // Skip to: 13807
/* 5069 */    MCD::OPC_Decode, 125, 60, // Opcode: ADDZE
/* 5072 */    MCD::OPC_FilterValue, 1, 27, 34, // Skip to: 13807
/* 5076 */    MCD::OPC_CheckField, 11, 5, 0, 21, 34, // Skip to: 13807
/* 5082 */    MCD::OPC_Decode, 128, 1, 60, // Opcode: ADDZEo
/* 5086 */    MCD::OPC_FilterValue, 7, 45, 0, // Skip to: 5135
/* 5090 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5093 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5106
/* 5097 */    MCD::OPC_CheckField, 11, 5, 0, 0, 34, // Skip to: 13807
/* 5103 */    MCD::OPC_Decode, 121, 60, // Opcode: ADDME
/* 5106 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 5119
/* 5110 */    MCD::OPC_CheckField, 11, 5, 0, 243, 33, // Skip to: 13807
/* 5116 */    MCD::OPC_Decode, 124, 60, // Opcode: ADDMEo
/* 5119 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5127
/* 5123 */    MCD::OPC_Decode, 166, 7, 58, // Opcode: MULLW
/* 5127 */    MCD::OPC_FilterValue, 3, 228, 33, // Skip to: 13807
/* 5131 */    MCD::OPC_Decode, 167, 7, 58, // Opcode: MULLWo
/* 5135 */    MCD::OPC_FilterValue, 8, 17, 0, // Skip to: 5156
/* 5139 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5142 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 5149
/* 5146 */    MCD::OPC_Decode, 82, 58, // Opcode: ADD4
/* 5149 */    MCD::OPC_FilterValue, 1, 206, 33, // Skip to: 13807
/* 5153 */    MCD::OPC_Decode, 84, 58, // Opcode: ADD4o
/* 5156 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 5179
/* 5160 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5163 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5171
/* 5167 */    MCD::OPC_Decode, 133, 3, 58, // Opcode: DIVWEU
/* 5171 */    MCD::OPC_FilterValue, 3, 184, 33, // Skip to: 13807
/* 5175 */    MCD::OPC_Decode, 134, 3, 58, // Opcode: DIVWEUo
/* 5179 */    MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 5202
/* 5183 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5186 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5194
/* 5190 */    MCD::OPC_Decode, 132, 3, 58, // Opcode: DIVWE
/* 5194 */    MCD::OPC_FilterValue, 3, 161, 33, // Skip to: 13807
/* 5198 */    MCD::OPC_Decode, 135, 3, 58, // Opcode: DIVWEo
/* 5202 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 5225
/* 5206 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5209 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5217
/* 5213 */    MCD::OPC_Decode, 136, 3, 58, // Opcode: DIVWU
/* 5217 */    MCD::OPC_FilterValue, 3, 138, 33, // Skip to: 13807
/* 5221 */    MCD::OPC_Decode, 137, 3, 58, // Opcode: DIVWUo
/* 5225 */    MCD::OPC_FilterValue, 15, 130, 33, // Skip to: 13807
/* 5229 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5232 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 5240
/* 5236 */    MCD::OPC_Decode, 131, 3, 58, // Opcode: DIVW
/* 5240 */    MCD::OPC_FilterValue, 3, 115, 33, // Skip to: 13807
/* 5244 */    MCD::OPC_Decode, 138, 3, 58, // Opcode: DIVWo
/* 5248 */    MCD::OPC_FilterValue, 6, 95, 1, // Skip to: 5603
/* 5252 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5255 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5269
/* 5259 */    MCD::OPC_CheckField, 1, 1, 0, 94, 33, // Skip to: 13807
/* 5265 */    MCD::OPC_Decode, 204, 6, 61, // Opcode: LXSIWZX
/* 5269 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 5283
/* 5273 */    MCD::OPC_CheckField, 1, 1, 0, 80, 33, // Skip to: 13807
/* 5279 */    MCD::OPC_Decode, 203, 6, 61, // Opcode: LXSIWAX
/* 5283 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 5297
/* 5287 */    MCD::OPC_CheckField, 1, 1, 0, 66, 33, // Skip to: 13807
/* 5293 */    MCD::OPC_Decode, 156, 10, 61, // Opcode: STXSIWX
/* 5297 */    MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 5320
/* 5301 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5304 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5312
/* 5308 */    MCD::OPC_Decode, 216, 6, 62, // Opcode: LXVX
/* 5312 */    MCD::OPC_FilterValue, 1, 43, 33, // Skip to: 13807
/* 5316 */    MCD::OPC_Decode, 212, 6, 63, // Opcode: LXVL
/* 5320 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 5334
/* 5324 */    MCD::OPC_CheckField, 1, 1, 1, 29, 33, // Skip to: 13807
/* 5330 */    MCD::OPC_Decode, 213, 6, 63, // Opcode: LXVLL
/* 5334 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 5348
/* 5338 */    MCD::OPC_CheckField, 1, 1, 0, 15, 33, // Skip to: 13807
/* 5344 */    MCD::OPC_Decode, 210, 6, 62, // Opcode: LXVDSX
/* 5348 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 5362
/* 5352 */    MCD::OPC_CheckField, 1, 1, 0, 1, 33, // Skip to: 13807
/* 5358 */    MCD::OPC_Decode, 215, 6, 62, // Opcode: LXVWSX
/* 5362 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 5385
/* 5366 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5369 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5377
/* 5373 */    MCD::OPC_Decode, 166, 10, 62, // Opcode: STXVX
/* 5377 */    MCD::OPC_FilterValue, 1, 234, 32, // Skip to: 13807
/* 5381 */    MCD::OPC_Decode, 163, 10, 63, // Opcode: STXVL
/* 5385 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 5399
/* 5389 */    MCD::OPC_CheckField, 1, 1, 1, 220, 32, // Skip to: 13807
/* 5395 */    MCD::OPC_Decode, 164, 10, 63, // Opcode: STXVLL
/* 5399 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 5413
/* 5403 */    MCD::OPC_CheckField, 1, 1, 0, 206, 32, // Skip to: 13807
/* 5409 */    MCD::OPC_Decode, 206, 6, 64, // Opcode: LXSSPX
/* 5413 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 5427
/* 5417 */    MCD::OPC_CheckField, 1, 1, 0, 192, 32, // Skip to: 13807
/* 5423 */    MCD::OPC_Decode, 200, 6, 61, // Opcode: LXSDX
/* 5427 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 5441
/* 5431 */    MCD::OPC_CheckField, 1, 1, 0, 178, 32, // Skip to: 13807
/* 5437 */    MCD::OPC_Decode, 158, 10, 64, // Opcode: STXSSPX
/* 5441 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 5455
/* 5445 */    MCD::OPC_CheckField, 1, 1, 0, 164, 32, // Skip to: 13807
/* 5451 */    MCD::OPC_Decode, 151, 10, 61, // Opcode: STXSDX
/* 5455 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 5478
/* 5459 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5462 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5470
/* 5466 */    MCD::OPC_Decode, 214, 6, 62, // Opcode: LXVW4X
/* 5470 */    MCD::OPC_FilterValue, 1, 141, 32, // Skip to: 13807
/* 5474 */    MCD::OPC_Decode, 201, 6, 61, // Opcode: LXSIBZX
/* 5478 */    MCD::OPC_FilterValue, 25, 19, 0, // Skip to: 5501
/* 5482 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5485 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5493
/* 5489 */    MCD::OPC_Decode, 211, 6, 62, // Opcode: LXVH8X
/* 5493 */    MCD::OPC_FilterValue, 1, 118, 32, // Skip to: 13807
/* 5497 */    MCD::OPC_Decode, 202, 6, 61, // Opcode: LXSIHZX
/* 5501 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 5515
/* 5505 */    MCD::OPC_CheckField, 1, 1, 0, 104, 32, // Skip to: 13807
/* 5511 */    MCD::OPC_Decode, 209, 6, 62, // Opcode: LXVD2X
/* 5515 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 5529
/* 5519 */    MCD::OPC_CheckField, 1, 1, 0, 90, 32, // Skip to: 13807
/* 5525 */    MCD::OPC_Decode, 208, 6, 62, // Opcode: LXVB16X
/* 5529 */    MCD::OPC_FilterValue, 28, 19, 0, // Skip to: 5552
/* 5533 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5536 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5544
/* 5540 */    MCD::OPC_Decode, 165, 10, 62, // Opcode: STXVW4X
/* 5544 */    MCD::OPC_FilterValue, 1, 67, 32, // Skip to: 13807
/* 5548 */    MCD::OPC_Decode, 152, 10, 61, // Opcode: STXSIBX
/* 5552 */    MCD::OPC_FilterValue, 29, 19, 0, // Skip to: 5575
/* 5556 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 5559 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5567
/* 5563 */    MCD::OPC_Decode, 162, 10, 62, // Opcode: STXVH8X
/* 5567 */    MCD::OPC_FilterValue, 1, 44, 32, // Skip to: 13807
/* 5571 */    MCD::OPC_Decode, 154, 10, 61, // Opcode: STXSIHX
/* 5575 */    MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 5589
/* 5579 */    MCD::OPC_CheckField, 1, 1, 0, 30, 32, // Skip to: 13807
/* 5585 */    MCD::OPC_Decode, 161, 10, 62, // Opcode: STXVD2X
/* 5589 */    MCD::OPC_FilterValue, 31, 22, 32, // Skip to: 13807
/* 5593 */    MCD::OPC_CheckField, 1, 1, 0, 16, 32, // Skip to: 13807
/* 5599 */    MCD::OPC_Decode, 160, 10, 62, // Opcode: STXVB16X
/* 5603 */    MCD::OPC_FilterValue, 7, 217, 0, // Skip to: 5824
/* 5607 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5610 */    MCD::OPC_FilterValue, 0, 55, 0, // Skip to: 5669
/* 5614 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5617 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 5625
/* 5621 */    MCD::OPC_Decode, 221, 6, 65, // Opcode: MFBHRBE
/* 5625 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 5633
/* 5629 */    MCD::OPC_Decode, 234, 6, 49, // Opcode: MFPMR
/* 5633 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 5647
/* 5637 */    MCD::OPC_CheckField, 11, 15, 0, 228, 31, // Skip to: 13807
/* 5643 */    MCD::OPC_Decode, 170, 2, 0, // Opcode: CLRBHRB
/* 5647 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 5655
/* 5651 */    MCD::OPC_Decode, 141, 7, 66, // Opcode: MTPMR
/* 5655 */    MCD::OPC_FilterValue, 22, 212, 31, // Skip to: 13807
/* 5659 */    MCD::OPC_CheckField, 11, 12, 0, 206, 31, // Skip to: 13807
/* 5665 */    MCD::OPC_Decode, 206, 10, 46, // Opcode: TCHECK
/* 5669 */    MCD::OPC_FilterValue, 1, 143, 0, // Skip to: 5816
/* 5673 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5676 */    MCD::OPC_FilterValue, 20, 16, 0, // Skip to: 5696
/* 5680 */    MCD::OPC_CheckField, 22, 4, 0, 185, 31, // Skip to: 13807
/* 5686 */    MCD::OPC_CheckField, 11, 10, 0, 179, 31, // Skip to: 13807
/* 5692 */    MCD::OPC_Decode, 205, 10, 67, // Opcode: TBEGIN
/* 5696 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 5710
/* 5700 */    MCD::OPC_CheckField, 11, 14, 0, 165, 31, // Skip to: 13807
/* 5706 */    MCD::OPC_Decode, 216, 10, 68, // Opcode: TEND
/* 5710 */    MCD::OPC_FilterValue, 23, 16, 0, // Skip to: 5730
/* 5714 */    MCD::OPC_CheckField, 22, 3, 0, 151, 31, // Skip to: 13807
/* 5720 */    MCD::OPC_CheckField, 11, 10, 0, 145, 31, // Skip to: 13807
/* 5726 */    MCD::OPC_Decode, 234, 10, 67, // Opcode: TSR
/* 5730 */    MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 5738
/* 5734 */    MCD::OPC_Decode, 197, 10, 69, // Opcode: TABORTWC
/* 5738 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 5746
/* 5742 */    MCD::OPC_Decode, 195, 10, 69, // Opcode: TABORTDC
/* 5746 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 5754
/* 5750 */    MCD::OPC_Decode, 198, 10, 70, // Opcode: TABORTWCI
/* 5754 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 5762
/* 5758 */    MCD::OPC_Decode, 196, 10, 70, // Opcode: TABORTDCI
/* 5762 */    MCD::OPC_FilterValue, 28, 16, 0, // Skip to: 5782
/* 5766 */    MCD::OPC_CheckField, 21, 5, 0, 99, 31, // Skip to: 13807
/* 5772 */    MCD::OPC_CheckField, 11, 5, 0, 93, 31, // Skip to: 13807
/* 5778 */    MCD::OPC_Decode, 194, 10, 71, // Opcode: TABORT
/* 5782 */    MCD::OPC_FilterValue, 29, 16, 0, // Skip to: 5802
/* 5786 */    MCD::OPC_CheckField, 21, 5, 0, 79, 31, // Skip to: 13807
/* 5792 */    MCD::OPC_CheckField, 11, 5, 0, 73, 31, // Skip to: 13807
/* 5798 */    MCD::OPC_Decode, 233, 10, 71, // Opcode: TRECLAIM
/* 5802 */    MCD::OPC_FilterValue, 31, 65, 31, // Skip to: 13807
/* 5806 */    MCD::OPC_CheckField, 11, 15, 0, 59, 31, // Skip to: 13807
/* 5812 */    MCD::OPC_Decode, 232, 10, 0, // Opcode: TRECHKPT
/* 5816 */    MCD::OPC_FilterValue, 2, 51, 31, // Skip to: 13807
/* 5820 */    MCD::OPC_Decode, 230, 5, 72, // Opcode: ISEL
/* 5824 */    MCD::OPC_FilterValue, 8, 43, 0, // Skip to: 5871
/* 5828 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5831 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5851
/* 5835 */    MCD::OPC_CheckField, 6, 6, 4, 30, 31, // Skip to: 13807
/* 5841 */    MCD::OPC_CheckField, 0, 2, 0, 24, 31, // Skip to: 13807
/* 5847 */    MCD::OPC_Decode, 249, 6, 73, // Opcode: MTCRF
/* 5851 */    MCD::OPC_FilterValue, 1, 16, 31, // Skip to: 13807
/* 5855 */    MCD::OPC_CheckField, 6, 6, 4, 10, 31, // Skip to: 13807
/* 5861 */    MCD::OPC_CheckField, 0, 2, 0, 4, 31, // Skip to: 13807
/* 5867 */    MCD::OPC_Decode, 139, 7, 74, // Opcode: MTOCRF
/* 5871 */    MCD::OPC_FilterValue, 9, 180, 2, // Skip to: 6567
/* 5875 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5878 */    MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 5925
/* 5882 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5885 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5905
/* 5889 */    MCD::OPC_CheckField, 11, 9, 0, 232, 30, // Skip to: 13807
/* 5895 */    MCD::OPC_CheckField, 0, 2, 2, 226, 30, // Skip to: 13807
/* 5901 */    MCD::OPC_Decode, 222, 6, 47, // Opcode: MFCR
/* 5905 */    MCD::OPC_FilterValue, 1, 218, 30, // Skip to: 13807
/* 5909 */    MCD::OPC_CheckField, 11, 1, 0, 212, 30, // Skip to: 13807
/* 5915 */    MCD::OPC_CheckField, 0, 2, 2, 206, 30, // Skip to: 13807
/* 5921 */    MCD::OPC_Decode, 232, 6, 75, // Opcode: MFOCRF
/* 5925 */    MCD::OPC_FilterValue, 1, 16, 0, // Skip to: 5945
/* 5929 */    MCD::OPC_CheckField, 11, 5, 0, 192, 30, // Skip to: 13807
/* 5935 */    MCD::OPC_CheckField, 1, 1, 1, 186, 30, // Skip to: 13807
/* 5941 */    MCD::OPC_Decode, 244, 6, 76, // Opcode: MFVSRD
/* 5945 */    MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 5965
/* 5949 */    MCD::OPC_CheckField, 11, 10, 0, 172, 30, // Skip to: 13807
/* 5955 */    MCD::OPC_CheckField, 0, 2, 2, 166, 30, // Skip to: 13807
/* 5961 */    MCD::OPC_Decode, 231, 6, 47, // Opcode: MFMSR
/* 5965 */    MCD::OPC_FilterValue, 3, 16, 0, // Skip to: 5985
/* 5969 */    MCD::OPC_CheckField, 11, 5, 0, 152, 30, // Skip to: 13807
/* 5975 */    MCD::OPC_CheckField, 1, 1, 1, 146, 30, // Skip to: 13807
/* 5981 */    MCD::OPC_Decode, 246, 6, 77, // Opcode: MFVSRWZ
/* 5985 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 5999
/* 5989 */    MCD::OPC_CheckField, 1, 1, 0, 132, 30, // Skip to: 13807
/* 5995 */    MCD::OPC_Decode, 137, 7, 78, // Opcode: MTMSR
/* 5999 */    MCD::OPC_FilterValue, 5, 25, 0, // Skip to: 6028
/* 6003 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 6006 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6014
/* 6010 */    MCD::OPC_Decode, 138, 7, 78, // Opcode: MTMSRD
/* 6014 */    MCD::OPC_FilterValue, 1, 109, 30, // Skip to: 13807
/* 6018 */    MCD::OPC_CheckField, 11, 5, 0, 103, 30, // Skip to: 13807
/* 6024 */    MCD::OPC_Decode, 149, 7, 79, // Opcode: MTVSRD
/* 6028 */    MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 6057
/* 6032 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 6035 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6043
/* 6039 */    MCD::OPC_Decode, 144, 7, 80, // Opcode: MTSR
/* 6043 */    MCD::OPC_FilterValue, 1, 80, 30, // Skip to: 13807
/* 6047 */    MCD::OPC_CheckField, 11, 5, 0, 74, 30, // Skip to: 13807
/* 6053 */    MCD::OPC_Decode, 151, 7, 81, // Opcode: MTVSRWA
/* 6057 */    MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 6086
/* 6061 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 6064 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6072
/* 6068 */    MCD::OPC_Decode, 145, 7, 82, // Opcode: MTSRIN
/* 6072 */    MCD::OPC_FilterValue, 1, 51, 30, // Skip to: 13807
/* 6076 */    MCD::OPC_CheckField, 11, 5, 0, 45, 30, // Skip to: 13807
/* 6082 */    MCD::OPC_Decode, 153, 7, 81, // Opcode: MTVSRWZ
/* 6086 */    MCD::OPC_FilterValue, 8, 16, 0, // Skip to: 6106
/* 6090 */    MCD::OPC_CheckField, 16, 10, 0, 31, 30, // Skip to: 13807
/* 6096 */    MCD::OPC_CheckField, 0, 2, 0, 25, 30, // Skip to: 13807
/* 6102 */    MCD::OPC_Decode, 219, 10, 83, // Opcode: TLBIEL
/* 6106 */    MCD::OPC_FilterValue, 9, 37, 0, // Skip to: 6147
/* 6110 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 6113 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6133
/* 6117 */    MCD::OPC_CheckField, 16, 5, 0, 4, 30, // Skip to: 13807
/* 6123 */    MCD::OPC_CheckField, 0, 1, 0, 254, 29, // Skip to: 13807
/* 6129 */    MCD::OPC_Decode, 218, 10, 82, // Opcode: TLBIE
/* 6133 */    MCD::OPC_FilterValue, 1, 246, 29, // Skip to: 13807
/* 6137 */    MCD::OPC_CheckField, 11, 5, 0, 240, 29, // Skip to: 13807
/* 6143 */    MCD::OPC_Decode, 245, 6, 84, // Opcode: MFVSRLD
/* 6147 */    MCD::OPC_FilterValue, 10, 46, 0, // Skip to: 6197
/* 6151 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6154 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6168
/* 6158 */    MCD::OPC_CheckField, 11, 15, 0, 219, 29, // Skip to: 13807
/* 6164 */    MCD::OPC_Decode, 188, 9, 0, // Opcode: SLBSYNC
/* 6168 */    MCD::OPC_FilterValue, 2, 211, 29, // Skip to: 13807
/* 6172 */    MCD::OPC_ExtractField, 11, 10,  // Inst{20-11} ...
/* 6175 */    MCD::OPC_FilterValue, 128, 2, 4, 0, // Skip to: 6184
/* 6180 */    MCD::OPC_Decode, 229, 6, 47, // Opcode: MFLR
/* 6184 */    MCD::OPC_FilterValue, 160, 2, 4, 0, // Skip to: 6193
/* 6189 */    MCD::OPC_Decode, 224, 6, 47, // Opcode: MFCTR
/* 6193 */    MCD::OPC_Decode, 235, 6, 49, // Opcode: MFSPR
/* 6197 */    MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 6226
/* 6201 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6204 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6218
/* 6208 */    MCD::OPC_CheckField, 11, 15, 0, 169, 29, // Skip to: 13807
/* 6214 */    MCD::OPC_Decode, 217, 10, 0, // Opcode: TLBIA
/* 6218 */    MCD::OPC_FilterValue, 2, 161, 29, // Skip to: 13807
/* 6222 */    MCD::OPC_Decode, 239, 6, 49, // Opcode: MFTB
/* 6226 */    MCD::OPC_FilterValue, 12, 37, 0, // Skip to: 6267
/* 6230 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 6233 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6253
/* 6237 */    MCD::OPC_CheckField, 16, 5, 0, 140, 29, // Skip to: 13807
/* 6243 */    MCD::OPC_CheckField, 0, 1, 0, 134, 29, // Skip to: 13807
/* 6249 */    MCD::OPC_Decode, 187, 9, 82, // Opcode: SLBMTE
/* 6253 */    MCD::OPC_FilterValue, 1, 126, 29, // Skip to: 13807
/* 6257 */    MCD::OPC_CheckField, 11, 5, 0, 120, 29, // Skip to: 13807
/* 6263 */    MCD::OPC_Decode, 152, 7, 85, // Opcode: MTVSRWS
/* 6267 */    MCD::OPC_FilterValue, 13, 31, 0, // Skip to: 6302
/* 6271 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 6274 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6294
/* 6278 */    MCD::OPC_CheckField, 16, 10, 0, 99, 29, // Skip to: 13807
/* 6284 */    MCD::OPC_CheckField, 0, 1, 0, 93, 29, // Skip to: 13807
/* 6290 */    MCD::OPC_Decode, 183, 9, 83, // Opcode: SLBIE
/* 6294 */    MCD::OPC_FilterValue, 1, 85, 29, // Skip to: 13807
/* 6298 */    MCD::OPC_Decode, 150, 7, 86, // Opcode: MTVSRDD
/* 6302 */    MCD::OPC_FilterValue, 14, 46, 0, // Skip to: 6352
/* 6306 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6309 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6323
/* 6313 */    MCD::OPC_CheckField, 16, 5, 0, 64, 29, // Skip to: 13807
/* 6319 */    MCD::OPC_Decode, 184, 9, 82, // Opcode: SLBIEG
/* 6323 */    MCD::OPC_FilterValue, 2, 56, 29, // Skip to: 13807
/* 6327 */    MCD::OPC_ExtractField, 11, 10,  // Inst{20-11} ...
/* 6330 */    MCD::OPC_FilterValue, 128, 2, 4, 0, // Skip to: 6339
/* 6335 */    MCD::OPC_Decode, 135, 7, 47, // Opcode: MTLR
/* 6339 */    MCD::OPC_FilterValue, 160, 2, 4, 0, // Skip to: 6348
/* 6344 */    MCD::OPC_Decode, 251, 6, 47, // Opcode: MTCTR
/* 6348 */    MCD::OPC_Decode, 142, 7, 66, // Opcode: MTSPR
/* 6352 */    MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 6372
/* 6356 */    MCD::OPC_CheckField, 11, 15, 0, 21, 29, // Skip to: 13807
/* 6362 */    MCD::OPC_CheckField, 0, 2, 0, 15, 29, // Skip to: 13807
/* 6368 */    MCD::OPC_Decode, 182, 9, 0, // Opcode: SLBIA
/* 6372 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 6386
/* 6376 */    MCD::OPC_CheckField, 1, 1, 1, 1, 29, // Skip to: 13807
/* 6382 */    MCD::OPC_Decode, 237, 6, 80, // Opcode: MFSR
/* 6386 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 6400
/* 6390 */    MCD::OPC_CheckField, 1, 1, 1, 243, 28, // Skip to: 13807
/* 6396 */    MCD::OPC_Decode, 238, 6, 82, // Opcode: MFSRIN
/* 6400 */    MCD::OPC_FilterValue, 24, 16, 0, // Skip to: 6420
/* 6404 */    MCD::OPC_CheckField, 21, 5, 0, 229, 28, // Skip to: 13807
/* 6410 */    MCD::OPC_CheckField, 0, 2, 0, 223, 28, // Skip to: 13807
/* 6416 */    MCD::OPC_Decode, 220, 10, 54, // Opcode: TLBIVAX
/* 6420 */    MCD::OPC_FilterValue, 26, 16, 0, // Skip to: 6440
/* 6424 */    MCD::OPC_CheckField, 16, 5, 0, 209, 28, // Skip to: 13807
/* 6430 */    MCD::OPC_CheckField, 0, 2, 2, 203, 28, // Skip to: 13807
/* 6436 */    MCD::OPC_Decode, 186, 9, 82, // Opcode: SLBMFEV
/* 6440 */    MCD::OPC_FilterValue, 28, 43, 0, // Skip to: 6487
/* 6444 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6447 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 6465
/* 6451 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 6461
/* 6457 */    MCD::OPC_Decode, 225, 10, 54, // Opcode: TLBSX
/* 6461 */    MCD::OPC_Decode, 226, 10, 58, // Opcode: TLBSX2
/* 6465 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6473
/* 6469 */    MCD::OPC_Decode, 227, 10, 58, // Opcode: TLBSX2D
/* 6473 */    MCD::OPC_FilterValue, 2, 162, 28, // Skip to: 13807
/* 6477 */    MCD::OPC_CheckField, 16, 5, 0, 156, 28, // Skip to: 13807
/* 6483 */    MCD::OPC_Decode, 185, 9, 82, // Opcode: SLBMFEE
/* 6487 */    MCD::OPC_FilterValue, 29, 21, 0, // Skip to: 6512
/* 6491 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6494 */    MCD::OPC_FilterValue, 0, 141, 28, // Skip to: 13807
/* 6498 */    MCD::OPC_CheckField, 11, 15, 0, 4, 0, // Skip to: 6508
/* 6504 */    MCD::OPC_Decode, 223, 10, 0, // Opcode: TLBRE
/* 6508 */    MCD::OPC_Decode, 224, 10, 87, // Opcode: TLBRE2
/* 6512 */    MCD::OPC_FilterValue, 30, 31, 0, // Skip to: 6547
/* 6516 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6519 */    MCD::OPC_FilterValue, 0, 116, 28, // Skip to: 13807
/* 6523 */    MCD::OPC_CheckField, 11, 15, 0, 4, 0, // Skip to: 6533
/* 6529 */    MCD::OPC_Decode, 229, 10, 0, // Opcode: TLBWE
/* 6533 */    MCD::OPC_CheckField, 16, 10, 0, 4, 0, // Skip to: 6543
/* 6539 */    MCD::OPC_Decode, 221, 10, 83, // Opcode: TLBLD
/* 6543 */    MCD::OPC_Decode, 230, 10, 87, // Opcode: TLBWE2
/* 6547 */    MCD::OPC_FilterValue, 31, 88, 28, // Skip to: 13807
/* 6551 */    MCD::OPC_CheckField, 16, 10, 0, 82, 28, // Skip to: 13807
/* 6557 */    MCD::OPC_CheckField, 0, 2, 0, 76, 28, // Skip to: 13807
/* 6563 */    MCD::OPC_Decode, 222, 10, 83, // Opcode: TLBLI
/* 6567 */    MCD::OPC_FilterValue, 10, 93, 1, // Skip to: 6920
/* 6571 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 6574 */    MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 6605
/* 6578 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6581 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6589
/* 6585 */    MCD::OPC_Decode, 180, 6, 88, // Opcode: LWARX
/* 6589 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6597
/* 6593 */    MCD::OPC_Decode, 181, 6, 88, // Opcode: LWARXL
/* 6597 */    MCD::OPC_FilterValue, 2, 38, 28, // Skip to: 13807
/* 6601 */    MCD::OPC_Decode, 255, 5, 89, // Opcode: LDX
/* 6605 */    MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 6636
/* 6609 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6612 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6620
/* 6616 */    MCD::OPC_Decode, 235, 5, 88, // Opcode: LBARX
/* 6620 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6628
/* 6624 */    MCD::OPC_Decode, 236, 5, 88, // Opcode: LBARXL
/* 6628 */    MCD::OPC_FilterValue, 2, 7, 28, // Skip to: 13807
/* 6632 */    MCD::OPC_Decode, 254, 5, 90, // Opcode: LDUX
/* 6636 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 6659
/* 6640 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6643 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6651
/* 6647 */    MCD::OPC_Decode, 247, 5, 89, // Opcode: LDARX
/* 6651 */    MCD::OPC_FilterValue, 1, 240, 27, // Skip to: 13807
/* 6655 */    MCD::OPC_Decode, 248, 5, 89, // Opcode: LDARXL
/* 6659 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 6682
/* 6663 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6666 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6674
/* 6670 */    MCD::OPC_Decode, 147, 6, 88, // Opcode: LHARX
/* 6674 */    MCD::OPC_FilterValue, 1, 217, 27, // Skip to: 13807
/* 6678 */    MCD::OPC_Decode, 148, 6, 88, // Opcode: LHARXL
/* 6682 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 6696
/* 6686 */    MCD::OPC_CheckField, 0, 2, 2, 203, 27, // Skip to: 13807
/* 6692 */    MCD::OPC_Decode, 237, 9, 89, // Opcode: STDX
/* 6696 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 6710
/* 6700 */    MCD::OPC_CheckField, 0, 2, 2, 189, 27, // Skip to: 13807
/* 6706 */    MCD::OPC_Decode, 236, 9, 91, // Opcode: STDUX
/* 6710 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 6724
/* 6714 */    MCD::OPC_CheckField, 0, 2, 2, 175, 27, // Skip to: 13807
/* 6720 */    MCD::OPC_Decode, 252, 5, 89, // Opcode: LDMX
/* 6724 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 6738
/* 6728 */    MCD::OPC_CheckField, 0, 2, 2, 161, 27, // Skip to: 13807
/* 6734 */    MCD::OPC_Decode, 184, 6, 89, // Opcode: LWAX
/* 6738 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 6752
/* 6742 */    MCD::OPC_CheckField, 0, 2, 2, 147, 27, // Skip to: 13807
/* 6748 */    MCD::OPC_Decode, 183, 6, 90, // Opcode: LWAUX
/* 6752 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 6766
/* 6756 */    MCD::OPC_CheckField, 0, 2, 0, 133, 27, // Skip to: 13807
/* 6762 */    MCD::OPC_Decode, 250, 5, 89, // Opcode: LDBRX
/* 6766 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 6780
/* 6770 */    MCD::OPC_CheckField, 0, 2, 2, 119, 27, // Skip to: 13807
/* 6776 */    MCD::OPC_Decode, 171, 6, 55, // Opcode: LSWI
/* 6780 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 6794
/* 6784 */    MCD::OPC_CheckField, 0, 2, 0, 105, 27, // Skip to: 13807
/* 6790 */    MCD::OPC_Decode, 232, 9, 89, // Opcode: STDBRX
/* 6794 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 6808
/* 6798 */    MCD::OPC_CheckField, 0, 2, 2, 91, 27, // Skip to: 13807
/* 6804 */    MCD::OPC_Decode, 132, 10, 55, // Opcode: STSWI
/* 6808 */    MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 6822
/* 6812 */    MCD::OPC_CheckField, 0, 2, 2, 77, 27, // Skip to: 13807
/* 6818 */    MCD::OPC_Decode, 191, 6, 58, // Opcode: LWZCIX
/* 6822 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 6836
/* 6826 */    MCD::OPC_CheckField, 0, 2, 2, 63, 27, // Skip to: 13807
/* 6832 */    MCD::OPC_Decode, 159, 6, 58, // Opcode: LHZCIX
/* 6836 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 6850
/* 6840 */    MCD::OPC_CheckField, 0, 2, 2, 49, 27, // Skip to: 13807
/* 6846 */    MCD::OPC_Decode, 239, 5, 58, // Opcode: LBZCIX
/* 6850 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 6864
/* 6854 */    MCD::OPC_CheckField, 0, 2, 2, 35, 27, // Skip to: 13807
/* 6860 */    MCD::OPC_Decode, 251, 5, 58, // Opcode: LDCIX
/* 6864 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 6878
/* 6868 */    MCD::OPC_CheckField, 0, 2, 2, 21, 27, // Skip to: 13807
/* 6874 */    MCD::OPC_Decode, 142, 10, 58, // Opcode: STWCIX
/* 6878 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 6892
/* 6882 */    MCD::OPC_CheckField, 0, 2, 2, 7, 27, // Skip to: 13807
/* 6888 */    MCD::OPC_Decode, 250, 9, 58, // Opcode: STHCIX
/* 6892 */    MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 6906
/* 6896 */    MCD::OPC_CheckField, 0, 2, 2, 249, 26, // Skip to: 13807
/* 6902 */    MCD::OPC_Decode, 222, 9, 58, // Opcode: STBCIX
/* 6906 */    MCD::OPC_FilterValue, 31, 241, 26, // Skip to: 13807
/* 6910 */    MCD::OPC_CheckField, 0, 2, 2, 235, 26, // Skip to: 13807
/* 6916 */    MCD::OPC_Decode, 233, 9, 58, // Opcode: STDCIX
/* 6920 */    MCD::OPC_FilterValue, 11, 242, 2, // Skip to: 7678
/* 6924 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 6927 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 6956
/* 6931 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6934 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6948
/* 6938 */    MCD::OPC_CheckField, 25, 1, 0, 207, 26, // Skip to: 13807
/* 6944 */    MCD::OPC_Decode, 221, 5, 53, // Opcode: ICBT
/* 6948 */    MCD::OPC_FilterValue, 2, 199, 26, // Skip to: 13807
/* 6952 */    MCD::OPC_Decode, 196, 6, 88, // Opcode: LWZX
/* 6956 */    MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 6985
/* 6960 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6963 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6977
/* 6967 */    MCD::OPC_CheckField, 21, 5, 0, 178, 26, // Skip to: 13807
/* 6973 */    MCD::OPC_Decode, 233, 2, 92, // Opcode: DCBST
/* 6977 */    MCD::OPC_FilterValue, 2, 170, 26, // Skip to: 13807
/* 6981 */    MCD::OPC_Decode, 194, 6, 93, // Opcode: LWZUX
/* 6985 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 7008
/* 6989 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 6992 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7000
/* 6996 */    MCD::OPC_Decode, 228, 2, 94, // Opcode: DCBF
/* 7000 */    MCD::OPC_FilterValue, 2, 147, 26, // Skip to: 13807
/* 7004 */    MCD::OPC_Decode, 244, 5, 88, // Opcode: LBZX
/* 7008 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 7022
/* 7012 */    MCD::OPC_CheckField, 0, 2, 2, 133, 26, // Skip to: 13807
/* 7018 */    MCD::OPC_Decode, 242, 5, 93, // Opcode: LBZUX
/* 7022 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 7045
/* 7026 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7029 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7037
/* 7033 */    MCD::OPC_Decode, 143, 10, 88, // Opcode: STWCX
/* 7037 */    MCD::OPC_FilterValue, 2, 110, 26, // Skip to: 13807
/* 7041 */    MCD::OPC_Decode, 148, 10, 88, // Opcode: STWX
/* 7045 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 7059
/* 7049 */    MCD::OPC_CheckField, 0, 2, 2, 96, 26, // Skip to: 13807
/* 7055 */    MCD::OPC_Decode, 146, 10, 95, // Opcode: STWUX
/* 7059 */    MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 7082
/* 7063 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7066 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7074
/* 7070 */    MCD::OPC_Decode, 234, 9, 89, // Opcode: STDCX
/* 7074 */    MCD::OPC_FilterValue, 2, 73, 26, // Skip to: 13807
/* 7078 */    MCD::OPC_Decode, 228, 9, 88, // Opcode: STBX
/* 7082 */    MCD::OPC_FilterValue, 7, 19, 0, // Skip to: 7105
/* 7086 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7089 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7097
/* 7093 */    MCD::OPC_Decode, 237, 2, 94, // Opcode: DCBTST
/* 7097 */    MCD::OPC_FilterValue, 2, 50, 26, // Skip to: 13807
/* 7101 */    MCD::OPC_Decode, 226, 9, 95, // Opcode: STBUX
/* 7105 */    MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 7128
/* 7109 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7112 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7120
/* 7116 */    MCD::OPC_Decode, 234, 2, 94, // Opcode: DCBT
/* 7120 */    MCD::OPC_FilterValue, 2, 27, 26, // Skip to: 13807
/* 7124 */    MCD::OPC_Decode, 164, 6, 88, // Opcode: LHZX
/* 7128 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 7142
/* 7132 */    MCD::OPC_CheckField, 0, 2, 2, 13, 26, // Skip to: 13807
/* 7138 */    MCD::OPC_Decode, 162, 6, 93, // Opcode: LHZUX
/* 7142 */    MCD::OPC_FilterValue, 10, 34, 0, // Skip to: 7180
/* 7146 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7149 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 7172
/* 7153 */    MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 7156 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7164
/* 7160 */    MCD::OPC_Decode, 141, 3, 96, // Opcode: DST
/* 7164 */    MCD::OPC_FilterValue, 4, 239, 25, // Skip to: 13807
/* 7168 */    MCD::OPC_Decode, 147, 3, 96, // Opcode: DSTT
/* 7172 */    MCD::OPC_FilterValue, 2, 231, 25, // Skip to: 13807
/* 7176 */    MCD::OPC_Decode, 153, 6, 88, // Opcode: LHAX
/* 7180 */    MCD::OPC_FilterValue, 11, 34, 0, // Skip to: 7218
/* 7184 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7187 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 7210
/* 7191 */    MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 7194 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7202
/* 7198 */    MCD::OPC_Decode, 143, 3, 96, // Opcode: DSTST
/* 7202 */    MCD::OPC_FilterValue, 4, 201, 25, // Skip to: 13807
/* 7206 */    MCD::OPC_Decode, 145, 3, 96, // Opcode: DSTSTT
/* 7210 */    MCD::OPC_FilterValue, 2, 193, 25, // Skip to: 13807
/* 7214 */    MCD::OPC_Decode, 151, 6, 93, // Opcode: LHAUX
/* 7218 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 7232
/* 7222 */    MCD::OPC_CheckField, 0, 2, 2, 179, 25, // Skip to: 13807
/* 7228 */    MCD::OPC_Decode, 128, 10, 88, // Opcode: STHX
/* 7232 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 7246
/* 7236 */    MCD::OPC_CheckField, 0, 2, 2, 165, 25, // Skip to: 13807
/* 7242 */    MCD::OPC_Decode, 254, 9, 95, // Opcode: STHUX
/* 7246 */    MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 7266
/* 7250 */    MCD::OPC_CheckField, 21, 5, 0, 151, 25, // Skip to: 13807
/* 7256 */    MCD::OPC_CheckField, 0, 2, 0, 145, 25, // Skip to: 13807
/* 7262 */    MCD::OPC_Decode, 232, 2, 92, // Opcode: DCBI
/* 7266 */    MCD::OPC_FilterValue, 16, 19, 0, // Skip to: 7289
/* 7270 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7273 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7281
/* 7277 */    MCD::OPC_Decode, 187, 6, 88, // Opcode: LWBRX
/* 7281 */    MCD::OPC_FilterValue, 2, 122, 25, // Skip to: 13807
/* 7285 */    MCD::OPC_Decode, 144, 6, 97, // Opcode: LFSX
/* 7289 */    MCD::OPC_FilterValue, 17, 25, 0, // Skip to: 7318
/* 7293 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7296 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7310
/* 7300 */    MCD::OPC_CheckField, 11, 15, 0, 101, 25, // Skip to: 13807
/* 7306 */    MCD::OPC_Decode, 228, 10, 0, // Opcode: TLBSYNC
/* 7310 */    MCD::OPC_FilterValue, 2, 93, 25, // Skip to: 13807
/* 7314 */    MCD::OPC_Decode, 143, 6, 98, // Opcode: LFSUX
/* 7318 */    MCD::OPC_FilterValue, 18, 31, 0, // Skip to: 7353
/* 7322 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7325 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 7345
/* 7329 */    MCD::OPC_CheckField, 23, 3, 0, 72, 25, // Skip to: 13807
/* 7335 */    MCD::OPC_CheckField, 11, 10, 0, 66, 25, // Skip to: 13807
/* 7341 */    MCD::OPC_Decode, 193, 10, 99, // Opcode: SYNC
/* 7345 */    MCD::OPC_FilterValue, 2, 58, 25, // Skip to: 13807
/* 7349 */    MCD::OPC_Decode, 138, 6, 100, // Opcode: LFDX
/* 7353 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 7367
/* 7357 */    MCD::OPC_CheckField, 0, 2, 2, 44, 25, // Skip to: 13807
/* 7363 */    MCD::OPC_Decode, 137, 6, 101, // Opcode: LFDUX
/* 7367 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 7390
/* 7371 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7374 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7382
/* 7378 */    MCD::OPC_Decode, 141, 10, 88, // Opcode: STWBRX
/* 7382 */    MCD::OPC_FilterValue, 2, 21, 25, // Skip to: 13807
/* 7386 */    MCD::OPC_Decode, 246, 9, 97, // Opcode: STFSX
/* 7390 */    MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 7413
/* 7394 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7397 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7405
/* 7401 */    MCD::OPC_Decode, 223, 9, 88, // Opcode: STBCX
/* 7405 */    MCD::OPC_FilterValue, 2, 254, 24, // Skip to: 13807
/* 7409 */    MCD::OPC_Decode, 245, 9, 102, // Opcode: STFSUX
/* 7413 */    MCD::OPC_FilterValue, 22, 19, 0, // Skip to: 7436
/* 7417 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7420 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7428
/* 7424 */    MCD::OPC_Decode, 251, 9, 88, // Opcode: STHCX
/* 7428 */    MCD::OPC_FilterValue, 2, 231, 24, // Skip to: 13807
/* 7432 */    MCD::OPC_Decode, 241, 9, 100, // Opcode: STFDX
/* 7436 */    MCD::OPC_FilterValue, 23, 25, 0, // Skip to: 7465
/* 7440 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7443 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7457
/* 7447 */    MCD::OPC_CheckField, 21, 5, 0, 210, 24, // Skip to: 13807
/* 7453 */    MCD::OPC_Decode, 227, 2, 92, // Opcode: DCBA
/* 7457 */    MCD::OPC_FilterValue, 2, 202, 24, // Skip to: 13807
/* 7461 */    MCD::OPC_Decode, 240, 9, 103, // Opcode: STFDUX
/* 7465 */    MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 7479
/* 7469 */    MCD::OPC_CheckField, 0, 2, 0, 188, 24, // Skip to: 13807
/* 7475 */    MCD::OPC_Decode, 155, 6, 88, // Opcode: LHBRX
/* 7479 */    MCD::OPC_FilterValue, 25, 43, 0, // Skip to: 7526
/* 7483 */    MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 7486 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 7506
/* 7490 */    MCD::OPC_CheckField, 11, 10, 0, 167, 24, // Skip to: 13807
/* 7496 */    MCD::OPC_CheckField, 0, 2, 0, 161, 24, // Skip to: 13807
/* 7502 */    MCD::OPC_Decode, 139, 3, 104, // Opcode: DSS
/* 7506 */    MCD::OPC_FilterValue, 4, 153, 24, // Skip to: 13807
/* 7510 */    MCD::OPC_CheckField, 11, 12, 0, 147, 24, // Skip to: 13807
/* 7516 */    MCD::OPC_CheckField, 0, 2, 0, 141, 24, // Skip to: 13807
/* 7522 */    MCD::OPC_Decode, 140, 3, 0, // Opcode: DSSALL
/* 7526 */    MCD::OPC_FilterValue, 26, 41, 0, // Skip to: 7571
/* 7530 */    MCD::OPC_ExtractField, 1, 1,  // Inst{1} ...
/* 7533 */    MCD::OPC_FilterValue, 0, 20, 0, // Skip to: 7557
/* 7537 */    MCD::OPC_CheckField, 11, 15, 0, 10, 0, // Skip to: 7553
/* 7543 */    MCD::OPC_CheckField, 0, 1, 0, 4, 0, // Skip to: 7553
/* 7549 */    MCD::OPC_Decode, 227, 4, 0, // Opcode: EnforceIEIO
/* 7553 */    MCD::OPC_Decode, 217, 6, 105, // Opcode: MBAR
/* 7557 */    MCD::OPC_FilterValue, 1, 102, 24, // Skip to: 13807
/* 7561 */    MCD::OPC_CheckField, 0, 1, 0, 96, 24, // Skip to: 13807
/* 7567 */    MCD::OPC_Decode, 139, 6, 100, // Opcode: LFIWAX
/* 7571 */    MCD::OPC_FilterValue, 27, 25, 0, // Skip to: 7600
/* 7575 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7578 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7592
/* 7582 */    MCD::OPC_CheckField, 11, 15, 0, 75, 24, // Skip to: 13807
/* 7588 */    MCD::OPC_Decode, 247, 6, 0, // Opcode: MSGSYNC
/* 7592 */    MCD::OPC_FilterValue, 2, 67, 24, // Skip to: 13807
/* 7596 */    MCD::OPC_Decode, 140, 6, 100, // Opcode: LFIWZX
/* 7600 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 7614
/* 7604 */    MCD::OPC_CheckField, 0, 2, 0, 53, 24, // Skip to: 13807
/* 7610 */    MCD::OPC_Decode, 249, 9, 88, // Opcode: STHBRX
/* 7614 */    MCD::OPC_FilterValue, 30, 25, 0, // Skip to: 7643
/* 7618 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7621 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7635
/* 7625 */    MCD::OPC_CheckField, 21, 5, 0, 32, 24, // Skip to: 13807
/* 7631 */    MCD::OPC_Decode, 218, 5, 92, // Opcode: ICBI
/* 7635 */    MCD::OPC_FilterValue, 2, 24, 24, // Skip to: 13807
/* 7639 */    MCD::OPC_Decode, 242, 9, 100, // Opcode: STFIWX
/* 7643 */    MCD::OPC_FilterValue, 31, 16, 24, // Skip to: 13807
/* 7647 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7650 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7664
/* 7654 */    MCD::OPC_CheckField, 0, 2, 0, 3, 24, // Skip to: 13807
/* 7660 */    MCD::OPC_Decode, 244, 2, 92, // Opcode: DCBZ
/* 7664 */    MCD::OPC_FilterValue, 1, 251, 23, // Skip to: 13807
/* 7668 */    MCD::OPC_CheckField, 0, 2, 0, 245, 23, // Skip to: 13807
/* 7674 */    MCD::OPC_Decode, 245, 2, 92, // Opcode: DCBZL
/* 7678 */    MCD::OPC_FilterValue, 12, 95, 0, // Skip to: 7777
/* 7682 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 7685 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 7708
/* 7689 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7692 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7700
/* 7696 */    MCD::OPC_Decode, 193, 9, 106, // Opcode: SLW
/* 7700 */    MCD::OPC_FilterValue, 1, 215, 23, // Skip to: 13807
/* 7704 */    MCD::OPC_Decode, 198, 9, 106, // Opcode: SLWo
/* 7708 */    MCD::OPC_FilterValue, 16, 19, 0, // Skip to: 7731
/* 7712 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7715 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7723
/* 7719 */    MCD::OPC_Decode, 214, 9, 106, // Opcode: SRW
/* 7723 */    MCD::OPC_FilterValue, 1, 192, 23, // Skip to: 13807
/* 7727 */    MCD::OPC_Decode, 219, 9, 106, // Opcode: SRWo
/* 7731 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 7754
/* 7735 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7738 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7746
/* 7742 */    MCD::OPC_Decode, 206, 9, 106, // Opcode: SRAW
/* 7746 */    MCD::OPC_FilterValue, 1, 169, 23, // Skip to: 13807
/* 7750 */    MCD::OPC_Decode, 209, 9, 106, // Opcode: SRAWo
/* 7754 */    MCD::OPC_FilterValue, 25, 161, 23, // Skip to: 13807
/* 7758 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7761 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7769
/* 7765 */    MCD::OPC_Decode, 207, 9, 107, // Opcode: SRAWI
/* 7769 */    MCD::OPC_FilterValue, 1, 146, 23, // Skip to: 13807
/* 7773 */    MCD::OPC_Decode, 208, 9, 107, // Opcode: SRAWIo
/* 7777 */    MCD::OPC_FilterValue, 13, 110, 1, // Skip to: 8147
/* 7781 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 7784 */    MCD::OPC_FilterValue, 0, 47, 0, // Skip to: 7835
/* 7788 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7791 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7805
/* 7795 */    MCD::OPC_CheckField, 11, 5, 0, 118, 23, // Skip to: 13807
/* 7801 */    MCD::OPC_Decode, 194, 2, 108, // Opcode: CNTLZW
/* 7805 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7819
/* 7809 */    MCD::OPC_CheckField, 11, 5, 0, 104, 23, // Skip to: 13807
/* 7815 */    MCD::OPC_Decode, 197, 2, 108, // Opcode: CNTLZWo
/* 7819 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 7827
/* 7823 */    MCD::OPC_Decode, 189, 9, 109, // Opcode: SLD
/* 7827 */    MCD::OPC_FilterValue, 3, 88, 23, // Skip to: 13807
/* 7831 */    MCD::OPC_Decode, 192, 9, 109, // Opcode: SLDo
/* 7835 */    MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 7870
/* 7839 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7842 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7856
/* 7846 */    MCD::OPC_CheckField, 11, 5, 0, 67, 23, // Skip to: 13807
/* 7852 */    MCD::OPC_Decode, 192, 2, 110, // Opcode: CNTLZD
/* 7856 */    MCD::OPC_FilterValue, 1, 59, 23, // Skip to: 13807
/* 7860 */    MCD::OPC_CheckField, 11, 5, 0, 53, 23, // Skip to: 13807
/* 7866 */    MCD::OPC_Decode, 193, 2, 110, // Opcode: CNTLZDo
/* 7870 */    MCD::OPC_FilterValue, 11, 16, 0, // Skip to: 7890
/* 7874 */    MCD::OPC_CheckField, 11, 5, 0, 39, 23, // Skip to: 13807
/* 7880 */    MCD::OPC_CheckField, 0, 2, 0, 33, 23, // Skip to: 13807
/* 7886 */    MCD::OPC_Decode, 200, 7, 108, // Opcode: POPCNTW
/* 7890 */    MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 7910
/* 7894 */    MCD::OPC_CheckField, 11, 5, 0, 19, 23, // Skip to: 13807
/* 7900 */    MCD::OPC_CheckField, 0, 2, 0, 13, 23, // Skip to: 13807
/* 7906 */    MCD::OPC_Decode, 199, 7, 110, // Opcode: POPCNTD
/* 7910 */    MCD::OPC_FilterValue, 16, 47, 0, // Skip to: 7961
/* 7914 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7917 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7931
/* 7921 */    MCD::OPC_CheckField, 11, 5, 0, 248, 22, // Skip to: 13807
/* 7927 */    MCD::OPC_Decode, 200, 2, 108, // Opcode: CNTTZW
/* 7931 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7945
/* 7935 */    MCD::OPC_CheckField, 11, 5, 0, 234, 22, // Skip to: 13807
/* 7941 */    MCD::OPC_Decode, 203, 2, 108, // Opcode: CNTTZWo
/* 7945 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 7953
/* 7949 */    MCD::OPC_Decode, 210, 9, 109, // Opcode: SRD
/* 7953 */    MCD::OPC_FilterValue, 3, 218, 22, // Skip to: 13807
/* 7957 */    MCD::OPC_Decode, 213, 9, 109, // Opcode: SRDo
/* 7961 */    MCD::OPC_FilterValue, 17, 31, 0, // Skip to: 7996
/* 7965 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7968 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7982
/* 7972 */    MCD::OPC_CheckField, 11, 5, 0, 197, 22, // Skip to: 13807
/* 7978 */    MCD::OPC_Decode, 198, 2, 110, // Opcode: CNTTZD
/* 7982 */    MCD::OPC_FilterValue, 1, 189, 22, // Skip to: 13807
/* 7986 */    MCD::OPC_CheckField, 11, 5, 0, 183, 22, // Skip to: 13807
/* 7992 */    MCD::OPC_Decode, 199, 2, 110, // Opcode: CNTTZDo
/* 7996 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 8019
/* 8000 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8003 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8011
/* 8007 */    MCD::OPC_Decode, 202, 9, 109, // Opcode: SRAD
/* 8011 */    MCD::OPC_FilterValue, 1, 160, 22, // Skip to: 13807
/* 8015 */    MCD::OPC_Decode, 205, 9, 109, // Opcode: SRADo
/* 8019 */    MCD::OPC_FilterValue, 25, 19, 0, // Skip to: 8042
/* 8023 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 8026 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8034
/* 8030 */    MCD::OPC_Decode, 203, 9, 111, // Opcode: SRADI
/* 8034 */    MCD::OPC_FilterValue, 1, 137, 22, // Skip to: 13807
/* 8038 */    MCD::OPC_Decode, 204, 9, 111, // Opcode: SRADIo
/* 8042 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 8077
/* 8046 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8049 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8063
/* 8053 */    MCD::OPC_CheckField, 11, 5, 0, 116, 22, // Skip to: 13807
/* 8059 */    MCD::OPC_Decode, 218, 4, 108, // Opcode: EXTSH
/* 8063 */    MCD::OPC_FilterValue, 1, 108, 22, // Skip to: 13807
/* 8067 */    MCD::OPC_CheckField, 11, 5, 0, 102, 22, // Skip to: 13807
/* 8073 */    MCD::OPC_Decode, 222, 4, 108, // Opcode: EXTSHo
/* 8077 */    MCD::OPC_FilterValue, 29, 31, 0, // Skip to: 8112
/* 8081 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8084 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8098
/* 8088 */    MCD::OPC_CheckField, 11, 5, 0, 81, 22, // Skip to: 13807
/* 8094 */    MCD::OPC_Decode, 213, 4, 108, // Opcode: EXTSB
/* 8098 */    MCD::OPC_FilterValue, 1, 73, 22, // Skip to: 13807
/* 8102 */    MCD::OPC_CheckField, 11, 5, 0, 67, 22, // Skip to: 13807
/* 8108 */    MCD::OPC_Decode, 217, 4, 108, // Opcode: EXTSBo
/* 8112 */    MCD::OPC_FilterValue, 30, 59, 22, // Skip to: 13807
/* 8116 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8119 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8133
/* 8123 */    MCD::OPC_CheckField, 11, 5, 0, 46, 22, // Skip to: 13807
/* 8129 */    MCD::OPC_Decode, 223, 4, 110, // Opcode: EXTSW
/* 8133 */    MCD::OPC_FilterValue, 1, 38, 22, // Skip to: 13807
/* 8137 */    MCD::OPC_CheckField, 11, 5, 0, 32, 22, // Skip to: 13807
/* 8143 */    MCD::OPC_Decode, 226, 4, 110, // Opcode: EXTSWo
/* 8147 */    MCD::OPC_FilterValue, 14, 215, 0, // Skip to: 8366
/* 8151 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8154 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 8177
/* 8158 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8161 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8169
/* 8165 */    MCD::OPC_Decode, 131, 1, 106, // Opcode: AND
/* 8169 */    MCD::OPC_FilterValue, 1, 2, 22, // Skip to: 13807
/* 8173 */    MCD::OPC_Decode, 146, 1, 106, // Opcode: ANDo
/* 8177 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 8200
/* 8181 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8184 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8192
/* 8188 */    MCD::OPC_Decode, 134, 1, 106, // Opcode: ANDC
/* 8192 */    MCD::OPC_FilterValue, 1, 235, 21, // Skip to: 13807
/* 8196 */    MCD::OPC_Decode, 137, 1, 106, // Opcode: ANDCo
/* 8200 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 8223
/* 8204 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8207 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8215
/* 8211 */    MCD::OPC_Decode, 183, 7, 106, // Opcode: NOR
/* 8215 */    MCD::OPC_FilterValue, 1, 212, 21, // Skip to: 13807
/* 8219 */    MCD::OPC_Decode, 186, 7, 106, // Opcode: NORo
/* 8223 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 8237
/* 8227 */    MCD::OPC_CheckField, 0, 2, 0, 198, 21, // Skip to: 13807
/* 8233 */    MCD::OPC_Decode, 168, 2, 112, // Opcode: BPERMD
/* 8237 */    MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 8260
/* 8241 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8244 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8252
/* 8248 */    MCD::OPC_Decode, 158, 3, 106, // Opcode: EQV
/* 8252 */    MCD::OPC_FilterValue, 1, 175, 21, // Skip to: 13807
/* 8256 */    MCD::OPC_Decode, 161, 3, 106, // Opcode: EQVo
/* 8260 */    MCD::OPC_FilterValue, 9, 19, 0, // Skip to: 8283
/* 8264 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8267 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8275
/* 8271 */    MCD::OPC_Decode, 149, 13, 106, // Opcode: XOR
/* 8275 */    MCD::OPC_FilterValue, 1, 152, 21, // Skip to: 13807
/* 8279 */    MCD::OPC_Decode, 156, 13, 106, // Opcode: XORo
/* 8283 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 8306
/* 8287 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8290 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8298
/* 8294 */    MCD::OPC_Decode, 190, 7, 106, // Opcode: ORC
/* 8298 */    MCD::OPC_FilterValue, 1, 129, 21, // Skip to: 13807
/* 8302 */    MCD::OPC_Decode, 193, 7, 106, // Opcode: ORCo
/* 8306 */    MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 8329
/* 8310 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8313 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8321
/* 8317 */    MCD::OPC_Decode, 187, 7, 106, // Opcode: OR
/* 8321 */    MCD::OPC_FilterValue, 1, 106, 21, // Skip to: 13807
/* 8325 */    MCD::OPC_Decode, 198, 7, 106, // Opcode: ORo
/* 8329 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 8352
/* 8333 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8336 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8344
/* 8340 */    MCD::OPC_Decode, 171, 7, 106, // Opcode: NAND
/* 8344 */    MCD::OPC_FilterValue, 1, 83, 21, // Skip to: 13807
/* 8348 */    MCD::OPC_Decode, 174, 7, 106, // Opcode: NANDo
/* 8352 */    MCD::OPC_FilterValue, 15, 75, 21, // Skip to: 13807
/* 8356 */    MCD::OPC_CheckField, 0, 2, 0, 69, 21, // Skip to: 13807
/* 8362 */    MCD::OPC_Decode, 179, 2, 106, // Opcode: CMPB
/* 8366 */    MCD::OPC_FilterValue, 15, 61, 21, // Skip to: 13807
/* 8370 */    MCD::OPC_CheckField, 23, 3, 0, 55, 21, // Skip to: 13807
/* 8376 */    MCD::OPC_CheckField, 6, 15, 1, 49, 21, // Skip to: 13807
/* 8382 */    MCD::OPC_CheckField, 0, 2, 0, 43, 21, // Skip to: 13807
/* 8388 */    MCD::OPC_Decode, 146, 13, 99, // Opcode: WAIT
/* 8392 */    MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 8400
/* 8396 */    MCD::OPC_Decode, 189, 6, 113, // Opcode: LWZ
/* 8400 */    MCD::OPC_FilterValue, 33, 4, 0, // Skip to: 8408
/* 8404 */    MCD::OPC_Decode, 192, 6, 113, // Opcode: LWZU
/* 8408 */    MCD::OPC_FilterValue, 34, 4, 0, // Skip to: 8416
/* 8412 */    MCD::OPC_Decode, 237, 5, 113, // Opcode: LBZ
/* 8416 */    MCD::OPC_FilterValue, 35, 4, 0, // Skip to: 8424
/* 8420 */    MCD::OPC_Decode, 240, 5, 113, // Opcode: LBZU
/* 8424 */    MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 8432
/* 8428 */    MCD::OPC_Decode, 138, 10, 113, // Opcode: STW
/* 8432 */    MCD::OPC_FilterValue, 37, 4, 0, // Skip to: 8440
/* 8436 */    MCD::OPC_Decode, 144, 10, 113, // Opcode: STWU
/* 8440 */    MCD::OPC_FilterValue, 38, 4, 0, // Skip to: 8448
/* 8444 */    MCD::OPC_Decode, 220, 9, 113, // Opcode: STB
/* 8448 */    MCD::OPC_FilterValue, 39, 4, 0, // Skip to: 8456
/* 8452 */    MCD::OPC_Decode, 224, 9, 113, // Opcode: STBU
/* 8456 */    MCD::OPC_FilterValue, 40, 4, 0, // Skip to: 8464
/* 8460 */    MCD::OPC_Decode, 157, 6, 113, // Opcode: LHZ
/* 8464 */    MCD::OPC_FilterValue, 41, 4, 0, // Skip to: 8472
/* 8468 */    MCD::OPC_Decode, 160, 6, 113, // Opcode: LHZU
/* 8472 */    MCD::OPC_FilterValue, 42, 4, 0, // Skip to: 8480
/* 8476 */    MCD::OPC_Decode, 145, 6, 113, // Opcode: LHA
/* 8480 */    MCD::OPC_FilterValue, 43, 4, 0, // Skip to: 8488
/* 8484 */    MCD::OPC_Decode, 149, 6, 113, // Opcode: LHAU
/* 8488 */    MCD::OPC_FilterValue, 44, 4, 0, // Skip to: 8496
/* 8492 */    MCD::OPC_Decode, 247, 9, 113, // Opcode: STH
/* 8496 */    MCD::OPC_FilterValue, 45, 4, 0, // Skip to: 8504
/* 8500 */    MCD::OPC_Decode, 252, 9, 113, // Opcode: STHU
/* 8504 */    MCD::OPC_FilterValue, 46, 4, 0, // Skip to: 8512
/* 8508 */    MCD::OPC_Decode, 170, 6, 113, // Opcode: LMW
/* 8512 */    MCD::OPC_FilterValue, 47, 4, 0, // Skip to: 8520
/* 8516 */    MCD::OPC_Decode, 130, 10, 113, // Opcode: STMW
/* 8520 */    MCD::OPC_FilterValue, 48, 4, 0, // Skip to: 8528
/* 8524 */    MCD::OPC_Decode, 141, 6, 114, // Opcode: LFS
/* 8528 */    MCD::OPC_FilterValue, 49, 4, 0, // Skip to: 8536
/* 8532 */    MCD::OPC_Decode, 142, 6, 114, // Opcode: LFSU
/* 8536 */    MCD::OPC_FilterValue, 50, 4, 0, // Skip to: 8544
/* 8540 */    MCD::OPC_Decode, 135, 6, 115, // Opcode: LFD
/* 8544 */    MCD::OPC_FilterValue, 51, 4, 0, // Skip to: 8552
/* 8548 */    MCD::OPC_Decode, 136, 6, 115, // Opcode: LFDU
/* 8552 */    MCD::OPC_FilterValue, 52, 4, 0, // Skip to: 8560
/* 8556 */    MCD::OPC_Decode, 243, 9, 114, // Opcode: STFS
/* 8560 */    MCD::OPC_FilterValue, 53, 4, 0, // Skip to: 8568
/* 8564 */    MCD::OPC_Decode, 244, 9, 114, // Opcode: STFSU
/* 8568 */    MCD::OPC_FilterValue, 54, 4, 0, // Skip to: 8576
/* 8572 */    MCD::OPC_Decode, 238, 9, 115, // Opcode: STFD
/* 8576 */    MCD::OPC_FilterValue, 55, 4, 0, // Skip to: 8584
/* 8580 */    MCD::OPC_Decode, 239, 9, 115, // Opcode: STFDU
/* 8584 */    MCD::OPC_FilterValue, 57, 19, 0, // Skip to: 8607
/* 8588 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8591 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 8599
/* 8595 */    MCD::OPC_Decode, 199, 6, 116, // Opcode: LXSD
/* 8599 */    MCD::OPC_FilterValue, 3, 84, 20, // Skip to: 13807
/* 8603 */    MCD::OPC_Decode, 205, 6, 116, // Opcode: LXSSP
/* 8607 */    MCD::OPC_FilterValue, 58, 27, 0, // Skip to: 8638
/* 8611 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 8614 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8622
/* 8618 */    MCD::OPC_Decode, 246, 5, 117, // Opcode: LD
/* 8622 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 8630
/* 8626 */    MCD::OPC_Decode, 253, 5, 117, // Opcode: LDU
/* 8630 */    MCD::OPC_FilterValue, 2, 53, 20, // Skip to: 13807
/* 8634 */    MCD::OPC_Decode, 179, 6, 117, // Opcode: LWA
/* 8638 */    MCD::OPC_FilterValue, 59, 113, 1, // Skip to: 9011
/* 8642 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 8645 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 8680
/* 8649 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8652 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 8666
/* 8656 */    MCD::OPC_CheckField, 16, 5, 0, 25, 20, // Skip to: 13807
/* 8662 */    MCD::OPC_Decode, 238, 4, 118, // Opcode: FCFIDS
/* 8666 */    MCD::OPC_FilterValue, 30, 17, 20, // Skip to: 13807
/* 8670 */    MCD::OPC_CheckField, 16, 5, 0, 11, 20, // Skip to: 13807
/* 8676 */    MCD::OPC_Decode, 241, 4, 118, // Opcode: FCFIDUS
/* 8680 */    MCD::OPC_FilterValue, 29, 31, 0, // Skip to: 8715
/* 8684 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8687 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 8701
/* 8691 */    MCD::OPC_CheckField, 16, 5, 0, 246, 19, // Skip to: 13807
/* 8697 */    MCD::OPC_Decode, 239, 4, 118, // Opcode: FCFIDSo
/* 8701 */    MCD::OPC_FilterValue, 30, 238, 19, // Skip to: 13807
/* 8705 */    MCD::OPC_CheckField, 16, 5, 0, 232, 19, // Skip to: 13807
/* 8711 */    MCD::OPC_Decode, 242, 4, 118, // Opcode: FCFIDUSo
/* 8715 */    MCD::OPC_FilterValue, 36, 10, 0, // Skip to: 8729
/* 8719 */    MCD::OPC_CheckField, 6, 5, 0, 218, 19, // Skip to: 13807
/* 8725 */    MCD::OPC_Decode, 140, 5, 119, // Opcode: FDIVS
/* 8729 */    MCD::OPC_FilterValue, 37, 10, 0, // Skip to: 8743
/* 8733 */    MCD::OPC_CheckField, 6, 5, 0, 204, 19, // Skip to: 13807
/* 8739 */    MCD::OPC_Decode, 141, 5, 119, // Opcode: FDIVSo
/* 8743 */    MCD::OPC_FilterValue, 40, 10, 0, // Skip to: 8757
/* 8747 */    MCD::OPC_CheckField, 6, 5, 0, 190, 19, // Skip to: 13807
/* 8753 */    MCD::OPC_Decode, 208, 5, 119, // Opcode: FSUBS
/* 8757 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 8771
/* 8761 */    MCD::OPC_CheckField, 6, 5, 0, 176, 19, // Skip to: 13807
/* 8767 */    MCD::OPC_Decode, 209, 5, 119, // Opcode: FSUBSo
/* 8771 */    MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 8785
/* 8775 */    MCD::OPC_CheckField, 6, 5, 0, 162, 19, // Skip to: 13807
/* 8781 */    MCD::OPC_Decode, 233, 4, 119, // Opcode: FADDS
/* 8785 */    MCD::OPC_FilterValue, 43, 10, 0, // Skip to: 8799
/* 8789 */    MCD::OPC_CheckField, 6, 5, 0, 148, 19, // Skip to: 13807
/* 8795 */    MCD::OPC_Decode, 234, 4, 119, // Opcode: FADDSo
/* 8799 */    MCD::OPC_FilterValue, 44, 16, 0, // Skip to: 8819
/* 8803 */    MCD::OPC_CheckField, 16, 5, 0, 134, 19, // Skip to: 13807
/* 8809 */    MCD::OPC_CheckField, 6, 5, 0, 128, 19, // Skip to: 13807
/* 8815 */    MCD::OPC_Decode, 204, 5, 120, // Opcode: FSQRTS
/* 8819 */    MCD::OPC_FilterValue, 45, 16, 0, // Skip to: 8839
/* 8823 */    MCD::OPC_CheckField, 16, 5, 0, 114, 19, // Skip to: 13807
/* 8829 */    MCD::OPC_CheckField, 6, 5, 0, 108, 19, // Skip to: 13807
/* 8835 */    MCD::OPC_Decode, 205, 5, 120, // Opcode: FSQRTSo
/* 8839 */    MCD::OPC_FilterValue, 48, 16, 0, // Skip to: 8859
/* 8843 */    MCD::OPC_CheckField, 16, 5, 0, 94, 19, // Skip to: 13807
/* 8849 */    MCD::OPC_CheckField, 6, 5, 0, 88, 19, // Skip to: 13807
/* 8855 */    MCD::OPC_Decode, 174, 5, 120, // Opcode: FRES
/* 8859 */    MCD::OPC_FilterValue, 49, 16, 0, // Skip to: 8879
/* 8863 */    MCD::OPC_CheckField, 16, 5, 0, 74, 19, // Skip to: 13807
/* 8869 */    MCD::OPC_CheckField, 6, 5, 0, 68, 19, // Skip to: 13807
/* 8875 */    MCD::OPC_Decode, 175, 5, 120, // Opcode: FRESo
/* 8879 */    MCD::OPC_FilterValue, 50, 10, 0, // Skip to: 8893
/* 8883 */    MCD::OPC_CheckField, 11, 5, 0, 54, 19, // Skip to: 13807
/* 8889 */    MCD::OPC_Decode, 154, 5, 121, // Opcode: FMULS
/* 8893 */    MCD::OPC_FilterValue, 51, 10, 0, // Skip to: 8907
/* 8897 */    MCD::OPC_CheckField, 11, 5, 0, 40, 19, // Skip to: 13807
/* 8903 */    MCD::OPC_Decode, 155, 5, 121, // Opcode: FMULSo
/* 8907 */    MCD::OPC_FilterValue, 52, 16, 0, // Skip to: 8927
/* 8911 */    MCD::OPC_CheckField, 16, 5, 0, 26, 19, // Skip to: 13807
/* 8917 */    MCD::OPC_CheckField, 6, 5, 0, 20, 19, // Skip to: 13807
/* 8923 */    MCD::OPC_Decode, 196, 5, 120, // Opcode: FRSQRTES
/* 8927 */    MCD::OPC_FilterValue, 53, 16, 0, // Skip to: 8947
/* 8931 */    MCD::OPC_CheckField, 16, 5, 0, 6, 19, // Skip to: 13807
/* 8937 */    MCD::OPC_CheckField, 6, 5, 0, 0, 19, // Skip to: 13807
/* 8943 */    MCD::OPC_Decode, 197, 5, 120, // Opcode: FRSQRTESo
/* 8947 */    MCD::OPC_FilterValue, 56, 4, 0, // Skip to: 8955
/* 8951 */    MCD::OPC_Decode, 150, 5, 122, // Opcode: FMSUBS
/* 8955 */    MCD::OPC_FilterValue, 57, 4, 0, // Skip to: 8963
/* 8959 */    MCD::OPC_Decode, 151, 5, 122, // Opcode: FMSUBSo
/* 8963 */    MCD::OPC_FilterValue, 58, 4, 0, // Skip to: 8971
/* 8967 */    MCD::OPC_Decode, 144, 5, 122, // Opcode: FMADDS
/* 8971 */    MCD::OPC_FilterValue, 59, 4, 0, // Skip to: 8979
/* 8975 */    MCD::OPC_Decode, 145, 5, 122, // Opcode: FMADDSo
/* 8979 */    MCD::OPC_FilterValue, 60, 4, 0, // Skip to: 8987
/* 8983 */    MCD::OPC_Decode, 170, 5, 122, // Opcode: FNMSUBS
/* 8987 */    MCD::OPC_FilterValue, 61, 4, 0, // Skip to: 8995
/* 8991 */    MCD::OPC_Decode, 171, 5, 122, // Opcode: FNMSUBSo
/* 8995 */    MCD::OPC_FilterValue, 62, 4, 0, // Skip to: 9003
/* 8999 */    MCD::OPC_Decode, 166, 5, 122, // Opcode: FNMADDS
/* 9003 */    MCD::OPC_FilterValue, 63, 192, 18, // Skip to: 13807
/* 9007 */    MCD::OPC_Decode, 167, 5, 122, // Opcode: FNMADDSo
/* 9011 */    MCD::OPC_FilterValue, 60, 69, 12, // Skip to: 12156
/* 9015 */    MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 9018 */    MCD::OPC_FilterValue, 0, 238, 2, // Skip to: 9772
/* 9022 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 9025 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 9048
/* 9029 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9032 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9040
/* 9036 */    MCD::OPC_Decode, 162, 13, 123, // Opcode: XSADDSP
/* 9040 */    MCD::OPC_FilterValue, 1, 155, 18, // Skip to: 13807
/* 9044 */    MCD::OPC_Decode, 209, 13, 124, // Opcode: XSMADDASP
/* 9048 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 9071
/* 9052 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9055 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9063
/* 9059 */    MCD::OPC_Decode, 137, 14, 123, // Opcode: XSSUBSP
/* 9063 */    MCD::OPC_FilterValue, 1, 132, 18, // Skip to: 13807
/* 9067 */    MCD::OPC_Decode, 211, 13, 124, // Opcode: XSMADDMSP
/* 9071 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 9094
/* 9075 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9078 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9086
/* 9082 */    MCD::OPC_Decode, 229, 13, 123, // Opcode: XSMULSP
/* 9086 */    MCD::OPC_FilterValue, 1, 109, 18, // Skip to: 13807
/* 9090 */    MCD::OPC_Decode, 221, 13, 124, // Opcode: XSMSUBASP
/* 9094 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 9117
/* 9098 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9101 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9109
/* 9105 */    MCD::OPC_Decode, 205, 13, 123, // Opcode: XSDIVSP
/* 9109 */    MCD::OPC_FilterValue, 1, 86, 18, // Skip to: 13807
/* 9113 */    MCD::OPC_Decode, 223, 13, 124, // Opcode: XSMSUBMSP
/* 9117 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 9140
/* 9121 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9124 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9132
/* 9128 */    MCD::OPC_Decode, 159, 13, 125, // Opcode: XSADDDP
/* 9132 */    MCD::OPC_FilterValue, 1, 63, 18, // Skip to: 13807
/* 9136 */    MCD::OPC_Decode, 208, 13, 126, // Opcode: XSMADDADP
/* 9140 */    MCD::OPC_FilterValue, 5, 19, 0, // Skip to: 9163
/* 9144 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9147 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9155
/* 9151 */    MCD::OPC_Decode, 134, 14, 125, // Opcode: XSSUBDP
/* 9155 */    MCD::OPC_FilterValue, 1, 40, 18, // Skip to: 13807
/* 9159 */    MCD::OPC_Decode, 210, 13, 126, // Opcode: XSMADDMDP
/* 9163 */    MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 9186
/* 9167 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9170 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9178
/* 9174 */    MCD::OPC_Decode, 226, 13, 125, // Opcode: XSMULDP
/* 9178 */    MCD::OPC_FilterValue, 1, 17, 18, // Skip to: 13807
/* 9182 */    MCD::OPC_Decode, 220, 13, 126, // Opcode: XSMSUBADP
/* 9186 */    MCD::OPC_FilterValue, 7, 19, 0, // Skip to: 9209
/* 9190 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9193 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9201
/* 9197 */    MCD::OPC_Decode, 202, 13, 125, // Opcode: XSDIVDP
/* 9201 */    MCD::OPC_FilterValue, 1, 250, 17, // Skip to: 13807
/* 9205 */    MCD::OPC_Decode, 222, 13, 126, // Opcode: XSMSUBMDP
/* 9209 */    MCD::OPC_FilterValue, 8, 20, 0, // Skip to: 9233
/* 9213 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9216 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9224
/* 9220 */    MCD::OPC_Decode, 150, 14, 127, // Opcode: XVADDSP
/* 9224 */    MCD::OPC_FilterValue, 1, 227, 17, // Skip to: 13807
/* 9228 */    MCD::OPC_Decode, 194, 14, 128, 1, // Opcode: XVMADDASP
/* 9233 */    MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 9257
/* 9237 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9240 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9248
/* 9244 */    MCD::OPC_Decode, 236, 14, 127, // Opcode: XVSUBSP
/* 9248 */    MCD::OPC_FilterValue, 1, 203, 17, // Skip to: 13807
/* 9252 */    MCD::OPC_Decode, 196, 14, 128, 1, // Opcode: XVMADDMSP
/* 9257 */    MCD::OPC_FilterValue, 10, 20, 0, // Skip to: 9281
/* 9261 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9264 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9272
/* 9268 */    MCD::OPC_Decode, 206, 14, 127, // Opcode: XVMULSP
/* 9272 */    MCD::OPC_FilterValue, 1, 179, 17, // Skip to: 13807
/* 9276 */    MCD::OPC_Decode, 202, 14, 128, 1, // Opcode: XVMSUBASP
/* 9281 */    MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 9305
/* 9285 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9288 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9296
/* 9292 */    MCD::OPC_Decode, 190, 14, 127, // Opcode: XVDIVSP
/* 9296 */    MCD::OPC_FilterValue, 1, 155, 17, // Skip to: 13807
/* 9300 */    MCD::OPC_Decode, 204, 14, 128, 1, // Opcode: XVMSUBMSP
/* 9305 */    MCD::OPC_FilterValue, 12, 20, 0, // Skip to: 9329
/* 9309 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9312 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9320
/* 9316 */    MCD::OPC_Decode, 149, 14, 127, // Opcode: XVADDDP
/* 9320 */    MCD::OPC_FilterValue, 1, 131, 17, // Skip to: 13807
/* 9324 */    MCD::OPC_Decode, 193, 14, 128, 1, // Opcode: XVMADDADP
/* 9329 */    MCD::OPC_FilterValue, 13, 20, 0, // Skip to: 9353
/* 9333 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9336 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9344
/* 9340 */    MCD::OPC_Decode, 235, 14, 127, // Opcode: XVSUBDP
/* 9344 */    MCD::OPC_FilterValue, 1, 107, 17, // Skip to: 13807
/* 9348 */    MCD::OPC_Decode, 195, 14, 128, 1, // Opcode: XVMADDMDP
/* 9353 */    MCD::OPC_FilterValue, 14, 20, 0, // Skip to: 9377
/* 9357 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9360 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9368
/* 9364 */    MCD::OPC_Decode, 205, 14, 127, // Opcode: XVMULDP
/* 9368 */    MCD::OPC_FilterValue, 1, 83, 17, // Skip to: 13807
/* 9372 */    MCD::OPC_Decode, 201, 14, 128, 1, // Opcode: XVMSUBADP
/* 9377 */    MCD::OPC_FilterValue, 15, 20, 0, // Skip to: 9401
/* 9381 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9384 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9392
/* 9388 */    MCD::OPC_Decode, 189, 14, 127, // Opcode: XVDIVDP
/* 9392 */    MCD::OPC_FilterValue, 1, 59, 17, // Skip to: 13807
/* 9396 */    MCD::OPC_Decode, 203, 14, 128, 1, // Opcode: XVMSUBMDP
/* 9401 */    MCD::OPC_FilterValue, 16, 20, 0, // Skip to: 9425
/* 9405 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9408 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9417
/* 9412 */    MCD::OPC_Decode, 214, 13, 129, 1, // Opcode: XSMAXCDP
/* 9417 */    MCD::OPC_FilterValue, 1, 34, 17, // Skip to: 13807
/* 9421 */    MCD::OPC_Decode, 235, 13, 124, // Opcode: XSNMADDASP
/* 9425 */    MCD::OPC_FilterValue, 17, 20, 0, // Skip to: 9449
/* 9429 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9432 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9441
/* 9436 */    MCD::OPC_Decode, 217, 13, 129, 1, // Opcode: XSMINCDP
/* 9441 */    MCD::OPC_FilterValue, 1, 10, 17, // Skip to: 13807
/* 9445 */    MCD::OPC_Decode, 237, 13, 124, // Opcode: XSNMADDMSP
/* 9449 */    MCD::OPC_FilterValue, 18, 20, 0, // Skip to: 9473
/* 9453 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9456 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9465
/* 9460 */    MCD::OPC_Decode, 216, 13, 129, 1, // Opcode: XSMAXJDP
/* 9465 */    MCD::OPC_FilterValue, 1, 242, 16, // Skip to: 13807
/* 9469 */    MCD::OPC_Decode, 241, 13, 124, // Opcode: XSNMSUBASP
/* 9473 */    MCD::OPC_FilterValue, 19, 20, 0, // Skip to: 9497
/* 9477 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9480 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9489
/* 9484 */    MCD::OPC_Decode, 219, 13, 129, 1, // Opcode: XSMINJDP
/* 9489 */    MCD::OPC_FilterValue, 1, 218, 16, // Skip to: 13807
/* 9493 */    MCD::OPC_Decode, 243, 13, 124, // Opcode: XSNMSUBMSP
/* 9497 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 9520
/* 9501 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9504 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9512
/* 9508 */    MCD::OPC_Decode, 215, 13, 125, // Opcode: XSMAXDP
/* 9512 */    MCD::OPC_FilterValue, 1, 195, 16, // Skip to: 13807
/* 9516 */    MCD::OPC_Decode, 234, 13, 126, // Opcode: XSNMADDADP
/* 9520 */    MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 9543
/* 9524 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9527 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9535
/* 9531 */    MCD::OPC_Decode, 218, 13, 125, // Opcode: XSMINDP
/* 9535 */    MCD::OPC_FilterValue, 1, 172, 16, // Skip to: 13807
/* 9539 */    MCD::OPC_Decode, 236, 13, 126, // Opcode: XSNMADDMDP
/* 9543 */    MCD::OPC_FilterValue, 22, 19, 0, // Skip to: 9566
/* 9547 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9550 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9558
/* 9554 */    MCD::OPC_Decode, 173, 13, 125, // Opcode: XSCPSGNDP
/* 9558 */    MCD::OPC_FilterValue, 1, 149, 16, // Skip to: 13807
/* 9562 */    MCD::OPC_Decode, 240, 13, 126, // Opcode: XSNMSUBADP
/* 9566 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 9580
/* 9570 */    MCD::OPC_CheckField, 3, 1, 1, 135, 16, // Skip to: 13807
/* 9576 */    MCD::OPC_Decode, 242, 13, 126, // Opcode: XSNMSUBMDP
/* 9580 */    MCD::OPC_FilterValue, 24, 20, 0, // Skip to: 9604
/* 9584 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9587 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9595
/* 9591 */    MCD::OPC_Decode, 198, 14, 127, // Opcode: XVMAXSP
/* 9595 */    MCD::OPC_FilterValue, 1, 112, 16, // Skip to: 13807
/* 9599 */    MCD::OPC_Decode, 212, 14, 128, 1, // Opcode: XVNMADDASP
/* 9604 */    MCD::OPC_FilterValue, 25, 20, 0, // Skip to: 9628
/* 9608 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9611 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9619
/* 9615 */    MCD::OPC_Decode, 200, 14, 127, // Opcode: XVMINSP
/* 9619 */    MCD::OPC_FilterValue, 1, 88, 16, // Skip to: 13807
/* 9623 */    MCD::OPC_Decode, 214, 14, 128, 1, // Opcode: XVNMADDMSP
/* 9628 */    MCD::OPC_FilterValue, 26, 20, 0, // Skip to: 9652
/* 9632 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9635 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9643
/* 9639 */    MCD::OPC_Decode, 168, 14, 127, // Opcode: XVCPSGNSP
/* 9643 */    MCD::OPC_FilterValue, 1, 64, 16, // Skip to: 13807
/* 9647 */    MCD::OPC_Decode, 216, 14, 128, 1, // Opcode: XVNMSUBASP
/* 9652 */    MCD::OPC_FilterValue, 27, 20, 0, // Skip to: 9676
/* 9656 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9659 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9667
/* 9663 */    MCD::OPC_Decode, 192, 14, 127, // Opcode: XVIEXPSP
/* 9667 */    MCD::OPC_FilterValue, 1, 40, 16, // Skip to: 13807
/* 9671 */    MCD::OPC_Decode, 218, 14, 128, 1, // Opcode: XVNMSUBMSP
/* 9676 */    MCD::OPC_FilterValue, 28, 20, 0, // Skip to: 9700
/* 9680 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9683 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9691
/* 9687 */    MCD::OPC_Decode, 197, 14, 127, // Opcode: XVMAXDP
/* 9691 */    MCD::OPC_FilterValue, 1, 16, 16, // Skip to: 13807
/* 9695 */    MCD::OPC_Decode, 211, 14, 128, 1, // Opcode: XVNMADDADP
/* 9700 */    MCD::OPC_FilterValue, 29, 20, 0, // Skip to: 9724
/* 9704 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9707 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9715
/* 9711 */    MCD::OPC_Decode, 199, 14, 127, // Opcode: XVMINDP
/* 9715 */    MCD::OPC_FilterValue, 1, 248, 15, // Skip to: 13807
/* 9719 */    MCD::OPC_Decode, 213, 14, 128, 1, // Opcode: XVNMADDMDP
/* 9724 */    MCD::OPC_FilterValue, 30, 20, 0, // Skip to: 9748
/* 9728 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9731 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9739
/* 9735 */    MCD::OPC_Decode, 167, 14, 127, // Opcode: XVCPSGNDP
/* 9739 */    MCD::OPC_FilterValue, 1, 224, 15, // Skip to: 13807
/* 9743 */    MCD::OPC_Decode, 215, 14, 128, 1, // Opcode: XVNMSUBADP
/* 9748 */    MCD::OPC_FilterValue, 31, 215, 15, // Skip to: 13807
/* 9752 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9755 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9763
/* 9759 */    MCD::OPC_Decode, 191, 14, 127, // Opcode: XVIEXPDP
/* 9763 */    MCD::OPC_FilterValue, 1, 200, 15, // Skip to: 13807
/* 9767 */    MCD::OPC_Decode, 217, 14, 128, 1, // Opcode: XVNMSUBMDP
/* 9772 */    MCD::OPC_FilterValue, 1, 71, 2, // Skip to: 10359
/* 9776 */    MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 9779 */    MCD::OPC_FilterValue, 0, 111, 0, // Skip to: 9894
/* 9783 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9786 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 9825
/* 9790 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 9793 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9802
/* 9797 */    MCD::OPC_Decode, 144, 15, 130, 1, // Opcode: XXSLDWI
/* 9802 */    MCD::OPC_FilterValue, 1, 161, 15, // Skip to: 13807
/* 9806 */    MCD::OPC_ExtractField, 8, 2,  // Inst{9-8} ...
/* 9809 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9817
/* 9813 */    MCD::OPC_Decode, 253, 14, 127, // Opcode: XXLAND
/* 9817 */    MCD::OPC_FilterValue, 1, 146, 15, // Skip to: 13807
/* 9821 */    MCD::OPC_Decode, 129, 15, 127, // Opcode: XXLNOR
/* 9825 */    MCD::OPC_FilterValue, 1, 138, 15, // Skip to: 13807
/* 9829 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 9832 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9841
/* 9836 */    MCD::OPC_Decode, 163, 13, 129, 1, // Opcode: XSCMPEQDP
/* 9841 */    MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 9862
/* 9845 */    MCD::OPC_CheckField, 21, 2, 0, 116, 15, // Skip to: 13807
/* 9851 */    MCD::OPC_CheckField, 0, 1, 0, 110, 15, // Skip to: 13807
/* 9857 */    MCD::OPC_Decode, 171, 13, 131, 1, // Opcode: XSCMPUDP
/* 9862 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 9870
/* 9866 */    MCD::OPC_Decode, 153, 14, 127, // Opcode: XVCMPEQSP
/* 9870 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 9878
/* 9874 */    MCD::OPC_Decode, 151, 14, 127, // Opcode: XVCMPEQDP
/* 9878 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 9886
/* 9882 */    MCD::OPC_Decode, 154, 14, 127, // Opcode: XVCMPEQSPo
/* 9886 */    MCD::OPC_FilterValue, 7, 77, 15, // Skip to: 13807
/* 9890 */    MCD::OPC_Decode, 152, 14, 127, // Opcode: XVCMPEQDPo
/* 9894 */    MCD::OPC_FilterValue, 1, 111, 0, // Skip to: 10009
/* 9898 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 9901 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 9940
/* 9905 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 9908 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9917
/* 9912 */    MCD::OPC_Decode, 140, 15, 130, 1, // Opcode: XXPERMDI
/* 9917 */    MCD::OPC_FilterValue, 1, 46, 15, // Skip to: 13807
/* 9921 */    MCD::OPC_ExtractField, 8, 2,  // Inst{9-8} ...
/* 9924 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 9932
/* 9928 */    MCD::OPC_Decode, 254, 14, 127, // Opcode: XXLANDC
/* 9932 */    MCD::OPC_FilterValue, 1, 31, 15, // Skip to: 13807
/* 9936 */    MCD::OPC_Decode, 131, 15, 127, // Opcode: XXLORC
/* 9940 */    MCD::OPC_FilterValue, 1, 23, 15, // Skip to: 13807
/* 9944 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 9947 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 9956
/* 9951 */    MCD::OPC_Decode, 167, 13, 129, 1, // Opcode: XSCMPGTDP
/* 9956 */    MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 9977
/* 9960 */    MCD::OPC_CheckField, 21, 2, 0, 1, 15, // Skip to: 13807
/* 9966 */    MCD::OPC_CheckField, 0, 1, 0, 251, 14, // Skip to: 13807
/* 9972 */    MCD::OPC_Decode, 169, 13, 131, 1, // Opcode: XSCMPODP
/* 9977 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 9985
/* 9981 */    MCD::OPC_Decode, 161, 14, 127, // Opcode: XVCMPGTSP
/* 9985 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 9993
/* 9989 */    MCD::OPC_Decode, 159, 14, 127, // Opcode: XVCMPGTDP
/* 9993 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 10001
/* 9997 */    MCD::OPC_Decode, 162, 14, 127, // Opcode: XVCMPGTSPo
/* 10001 */   MCD::OPC_FilterValue, 7, 218, 14, // Skip to: 13807
/* 10005 */   MCD::OPC_Decode, 160, 14, 127, // Opcode: XVCMPGTDPo
/* 10009 */   MCD::OPC_FilterValue, 2, 157, 0, // Skip to: 10170
/* 10013 */   MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 10016 */   MCD::OPC_FilterValue, 0, 20, 0, // Skip to: 10040
/* 10020 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10023 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 10031
/* 10027 */   MCD::OPC_Decode, 137, 15, 127, // Opcode: XXMRGHW
/* 10031 */   MCD::OPC_FilterValue, 1, 188, 14, // Skip to: 13807
/* 10035 */   MCD::OPC_Decode, 166, 13, 129, 1, // Opcode: XSCMPGEDP
/* 10040 */   MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 10054
/* 10044 */   MCD::OPC_CheckField, 3, 1, 0, 173, 14, // Skip to: 13807
/* 10050 */   MCD::OPC_Decode, 138, 15, 127, // Opcode: XXMRGLW
/* 10054 */   MCD::OPC_FilterValue, 2, 42, 0, // Skip to: 10100
/* 10058 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10061 */   MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 10092
/* 10065 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10068 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10083
/* 10072 */   MCD::OPC_CheckField, 18, 3, 0, 145, 14, // Skip to: 13807
/* 10078 */   MCD::OPC_Decode, 146, 15, 132, 1, // Opcode: XXSPLTW
/* 10083 */   MCD::OPC_FilterValue, 1, 136, 14, // Skip to: 13807
/* 10087 */   MCD::OPC_Decode, 251, 14, 133, 1, // Opcode: XXEXTRACTUW
/* 10092 */   MCD::OPC_FilterValue, 1, 127, 14, // Skip to: 13807
/* 10096 */   MCD::OPC_Decode, 157, 14, 127, // Opcode: XVCMPGESP
/* 10100 */   MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 10114
/* 10104 */   MCD::OPC_CheckField, 3, 1, 1, 113, 14, // Skip to: 13807
/* 10110 */   MCD::OPC_Decode, 155, 14, 127, // Opcode: XVCMPGEDP
/* 10114 */   MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 10128
/* 10118 */   MCD::OPC_CheckField, 3, 1, 0, 99, 14, // Skip to: 13807
/* 10124 */   MCD::OPC_Decode, 130, 15, 127, // Opcode: XXLOR
/* 10128 */   MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 10142
/* 10132 */   MCD::OPC_CheckField, 3, 1, 0, 85, 14, // Skip to: 13807
/* 10138 */   MCD::OPC_Decode, 128, 15, 127, // Opcode: XXLNAND
/* 10142 */   MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 10156
/* 10146 */   MCD::OPC_CheckField, 3, 1, 1, 71, 14, // Skip to: 13807
/* 10152 */   MCD::OPC_Decode, 158, 14, 127, // Opcode: XVCMPGESPo
/* 10156 */   MCD::OPC_FilterValue, 7, 63, 14, // Skip to: 13807
/* 10160 */   MCD::OPC_CheckField, 3, 1, 1, 57, 14, // Skip to: 13807
/* 10166 */   MCD::OPC_Decode, 156, 14, 127, // Opcode: XVCMPGEDPo
/* 10170 */   MCD::OPC_FilterValue, 3, 49, 14, // Skip to: 13807
/* 10174 */   MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 10177 */   MCD::OPC_FilterValue, 0, 20, 0, // Skip to: 10201
/* 10181 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10184 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 10192
/* 10188 */   MCD::OPC_Decode, 139, 15, 127, // Opcode: XXPERM
/* 10192 */   MCD::OPC_FilterValue, 1, 27, 14, // Skip to: 13807
/* 10196 */   MCD::OPC_Decode, 168, 13, 129, 1, // Opcode: XSCMPNEDP
/* 10201 */   MCD::OPC_FilterValue, 1, 32, 0, // Skip to: 10237
/* 10205 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10208 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 10216
/* 10212 */   MCD::OPC_Decode, 142, 15, 127, // Opcode: XXPERMR
/* 10216 */   MCD::OPC_FilterValue, 1, 3, 14, // Skip to: 13807
/* 10220 */   MCD::OPC_CheckField, 21, 2, 0, 253, 13, // Skip to: 13807
/* 10226 */   MCD::OPC_CheckField, 0, 1, 0, 247, 13, // Skip to: 13807
/* 10232 */   MCD::OPC_Decode, 164, 13, 131, 1, // Opcode: XSCMPEXPDP
/* 10237 */   MCD::OPC_FilterValue, 2, 48, 0, // Skip to: 10289
/* 10241 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10244 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 10281
/* 10248 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10251 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 10272
/* 10255 */   MCD::OPC_CheckField, 19, 2, 0, 218, 13, // Skip to: 13807
/* 10261 */   MCD::OPC_CheckField, 1, 1, 0, 212, 13, // Skip to: 13807
/* 10267 */   MCD::OPC_Decode, 145, 15, 134, 1, // Opcode: XXSPLTIB
/* 10272 */   MCD::OPC_FilterValue, 1, 203, 13, // Skip to: 13807
/* 10276 */   MCD::OPC_Decode, 252, 14, 135, 1, // Opcode: XXINSERTW
/* 10281 */   MCD::OPC_FilterValue, 1, 194, 13, // Skip to: 13807
/* 10285 */   MCD::OPC_Decode, 165, 14, 127, // Opcode: XVCMPNESP
/* 10289 */   MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 10303
/* 10293 */   MCD::OPC_CheckField, 3, 1, 1, 180, 13, // Skip to: 13807
/* 10299 */   MCD::OPC_Decode, 163, 14, 127, // Opcode: XVCMPNEDP
/* 10303 */   MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 10317
/* 10307 */   MCD::OPC_CheckField, 3, 1, 0, 166, 13, // Skip to: 13807
/* 10313 */   MCD::OPC_Decode, 133, 15, 127, // Opcode: XXLXOR
/* 10317 */   MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 10331
/* 10321 */   MCD::OPC_CheckField, 3, 1, 0, 152, 13, // Skip to: 13807
/* 10327 */   MCD::OPC_Decode, 255, 14, 127, // Opcode: XXLEQV
/* 10331 */   MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 10345
/* 10335 */   MCD::OPC_CheckField, 3, 1, 1, 138, 13, // Skip to: 13807
/* 10341 */   MCD::OPC_Decode, 166, 14, 127, // Opcode: XVCMPNESPo
/* 10345 */   MCD::OPC_FilterValue, 7, 130, 13, // Skip to: 13807
/* 10349 */   MCD::OPC_CheckField, 3, 1, 1, 124, 13, // Skip to: 13807
/* 10355 */   MCD::OPC_Decode, 164, 14, 127, // Opcode: XVCMPNEDPo
/* 10359 */   MCD::OPC_FilterValue, 2, 248, 6, // Skip to: 12147
/* 10363 */   MCD::OPC_ExtractField, 7, 4,  // Inst{10-7} ...
/* 10366 */   MCD::OPC_FilterValue, 0, 61, 0, // Skip to: 10431
/* 10370 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 10373 */   MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 10410
/* 10377 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10380 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10395
/* 10384 */   MCD::OPC_CheckField, 16, 5, 0, 89, 13, // Skip to: 13807
/* 10390 */   MCD::OPC_Decode, 129, 14, 136, 1, // Opcode: XSRSQRTESP
/* 10395 */   MCD::OPC_FilterValue, 1, 80, 13, // Skip to: 13807
/* 10399 */   MCD::OPC_CheckField, 16, 5, 0, 74, 13, // Skip to: 13807
/* 10405 */   MCD::OPC_Decode, 252, 13, 136, 1, // Opcode: XSRESP
/* 10410 */   MCD::OPC_FilterValue, 3, 65, 13, // Skip to: 13807
/* 10414 */   MCD::OPC_CheckField, 16, 5, 0, 59, 13, // Skip to: 13807
/* 10420 */   MCD::OPC_CheckField, 6, 1, 0, 53, 13, // Skip to: 13807
/* 10426 */   MCD::OPC_Decode, 133, 14, 136, 1, // Opcode: XSSQRTSP
/* 10431 */   MCD::OPC_FilterValue, 2, 135, 0, // Skip to: 10570
/* 10435 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 10438 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 10475
/* 10442 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10445 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10460
/* 10449 */   MCD::OPC_CheckField, 16, 5, 0, 24, 13, // Skip to: 13807
/* 10455 */   MCD::OPC_Decode, 185, 13, 137, 1, // Opcode: XSCVDPUXWS
/* 10460 */   MCD::OPC_FilterValue, 1, 15, 13, // Skip to: 13807
/* 10464 */   MCD::OPC_CheckField, 16, 5, 0, 9, 13, // Skip to: 13807
/* 10470 */   MCD::OPC_Decode, 181, 13, 137, 1, // Opcode: XSCVDPSXWS
/* 10475 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 10512
/* 10479 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10482 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10497
/* 10486 */   MCD::OPC_CheckField, 16, 5, 0, 243, 12, // Skip to: 13807
/* 10492 */   MCD::OPC_Decode, 246, 13, 137, 1, // Opcode: XSRDPI
/* 10497 */   MCD::OPC_FilterValue, 1, 234, 12, // Skip to: 13807
/* 10501 */   MCD::OPC_CheckField, 16, 5, 0, 228, 12, // Skip to: 13807
/* 10507 */   MCD::OPC_Decode, 250, 13, 137, 1, // Opcode: XSRDPIZ
/* 10512 */   MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 10549
/* 10516 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10519 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10534
/* 10523 */   MCD::OPC_CheckField, 16, 5, 0, 206, 12, // Skip to: 13807
/* 10529 */   MCD::OPC_Decode, 128, 14, 137, 1, // Opcode: XSRSQRTEDP
/* 10534 */   MCD::OPC_FilterValue, 1, 197, 12, // Skip to: 13807
/* 10538 */   MCD::OPC_CheckField, 16, 5, 0, 191, 12, // Skip to: 13807
/* 10544 */   MCD::OPC_Decode, 251, 13, 137, 1, // Opcode: XSREDP
/* 10549 */   MCD::OPC_FilterValue, 3, 182, 12, // Skip to: 13807
/* 10553 */   MCD::OPC_CheckField, 16, 5, 0, 176, 12, // Skip to: 13807
/* 10559 */   MCD::OPC_CheckField, 6, 1, 0, 170, 12, // Skip to: 13807
/* 10565 */   MCD::OPC_Decode, 130, 14, 137, 1, // Opcode: XSSQRTDP
/* 10570 */   MCD::OPC_FilterValue, 3, 123, 0, // Skip to: 10697
/* 10574 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10577 */   MCD::OPC_FilterValue, 0, 45, 0, // Skip to: 10626
/* 10581 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10584 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 10605
/* 10588 */   MCD::OPC_CheckField, 16, 5, 0, 141, 12, // Skip to: 13807
/* 10594 */   MCD::OPC_CheckField, 2, 1, 1, 135, 12, // Skip to: 13807
/* 10600 */   MCD::OPC_Decode, 249, 13, 137, 1, // Opcode: XSRDPIP
/* 10605 */   MCD::OPC_FilterValue, 1, 126, 12, // Skip to: 13807
/* 10609 */   MCD::OPC_CheckField, 16, 5, 0, 120, 12, // Skip to: 13807
/* 10615 */   MCD::OPC_CheckField, 2, 1, 1, 114, 12, // Skip to: 13807
/* 10621 */   MCD::OPC_Decode, 248, 13, 137, 1, // Opcode: XSRDPIM
/* 10626 */   MCD::OPC_FilterValue, 1, 105, 12, // Skip to: 13807
/* 10630 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10633 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 10676
/* 10637 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10640 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 10661
/* 10644 */   MCD::OPC_CheckField, 16, 7, 0, 85, 12, // Skip to: 13807
/* 10650 */   MCD::OPC_CheckField, 0, 1, 0, 79, 12, // Skip to: 13807
/* 10656 */   MCD::OPC_Decode, 139, 14, 138, 1, // Opcode: XSTSQRTDP
/* 10661 */   MCD::OPC_FilterValue, 1, 70, 12, // Skip to: 13807
/* 10665 */   MCD::OPC_CheckField, 16, 5, 0, 64, 12, // Skip to: 13807
/* 10671 */   MCD::OPC_Decode, 247, 13, 137, 1, // Opcode: XSRDPIC
/* 10676 */   MCD::OPC_FilterValue, 1, 55, 12, // Skip to: 13807
/* 10680 */   MCD::OPC_CheckField, 21, 2, 0, 49, 12, // Skip to: 13807
/* 10686 */   MCD::OPC_CheckField, 0, 1, 0, 43, 12, // Skip to: 13807
/* 10692 */   MCD::OPC_Decode, 138, 14, 131, 1, // Opcode: XSTDIVDP
/* 10697 */   MCD::OPC_FilterValue, 4, 135, 0, // Skip to: 10836
/* 10701 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 10704 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 10741
/* 10708 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10711 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10726
/* 10715 */   MCD::OPC_CheckField, 16, 5, 0, 14, 12, // Skip to: 13807
/* 10721 */   MCD::OPC_Decode, 180, 14, 139, 1, // Opcode: XVCVSPUXWS
/* 10726 */   MCD::OPC_FilterValue, 1, 5, 12, // Skip to: 13807
/* 10730 */   MCD::OPC_CheckField, 16, 5, 0, 255, 11, // Skip to: 13807
/* 10736 */   MCD::OPC_Decode, 178, 14, 139, 1, // Opcode: XVCVSPSXWS
/* 10741 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 10778
/* 10745 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10748 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10763
/* 10752 */   MCD::OPC_CheckField, 16, 5, 0, 233, 11, // Skip to: 13807
/* 10758 */   MCD::OPC_Decode, 226, 14, 139, 1, // Opcode: XVRSPI
/* 10763 */   MCD::OPC_FilterValue, 1, 224, 11, // Skip to: 13807
/* 10767 */   MCD::OPC_CheckField, 16, 5, 0, 218, 11, // Skip to: 13807
/* 10773 */   MCD::OPC_Decode, 230, 14, 139, 1, // Opcode: XVRSPIZ
/* 10778 */   MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 10815
/* 10782 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10785 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10800
/* 10789 */   MCD::OPC_CheckField, 16, 5, 0, 196, 11, // Skip to: 13807
/* 10795 */   MCD::OPC_Decode, 232, 14, 139, 1, // Opcode: XVRSQRTESP
/* 10800 */   MCD::OPC_FilterValue, 1, 187, 11, // Skip to: 13807
/* 10804 */   MCD::OPC_CheckField, 16, 5, 0, 181, 11, // Skip to: 13807
/* 10810 */   MCD::OPC_Decode, 225, 14, 139, 1, // Opcode: XVRESP
/* 10815 */   MCD::OPC_FilterValue, 3, 172, 11, // Skip to: 13807
/* 10819 */   MCD::OPC_CheckField, 16, 5, 0, 166, 11, // Skip to: 13807
/* 10825 */   MCD::OPC_CheckField, 6, 1, 0, 160, 11, // Skip to: 13807
/* 10831 */   MCD::OPC_Decode, 234, 14, 139, 1, // Opcode: XVSQRTSP
/* 10836 */   MCD::OPC_FilterValue, 5, 155, 0, // Skip to: 10995
/* 10840 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 10843 */   MCD::OPC_FilterValue, 0, 77, 0, // Skip to: 10924
/* 10847 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10850 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 10887
/* 10854 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10857 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10872
/* 10861 */   MCD::OPC_CheckField, 16, 5, 0, 124, 11, // Skip to: 13807
/* 10867 */   MCD::OPC_Decode, 188, 14, 139, 1, // Opcode: XVCVUXWSP
/* 10872 */   MCD::OPC_FilterValue, 1, 115, 11, // Skip to: 13807
/* 10876 */   MCD::OPC_CheckField, 16, 5, 0, 109, 11, // Skip to: 13807
/* 10882 */   MCD::OPC_Decode, 184, 14, 139, 1, // Opcode: XVCVSXWSP
/* 10887 */   MCD::OPC_FilterValue, 1, 100, 11, // Skip to: 13807
/* 10891 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10894 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 10909
/* 10898 */   MCD::OPC_CheckField, 16, 5, 0, 87, 11, // Skip to: 13807
/* 10904 */   MCD::OPC_Decode, 229, 14, 139, 1, // Opcode: XVRSPIP
/* 10909 */   MCD::OPC_FilterValue, 1, 78, 11, // Skip to: 13807
/* 10913 */   MCD::OPC_CheckField, 16, 5, 0, 72, 11, // Skip to: 13807
/* 10919 */   MCD::OPC_Decode, 228, 14, 139, 1, // Opcode: XVRSPIM
/* 10924 */   MCD::OPC_FilterValue, 1, 63, 11, // Skip to: 13807
/* 10928 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 10931 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 10974
/* 10935 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 10938 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 10959
/* 10942 */   MCD::OPC_CheckField, 16, 7, 0, 43, 11, // Skip to: 13807
/* 10948 */   MCD::OPC_CheckField, 0, 1, 0, 37, 11, // Skip to: 13807
/* 10954 */   MCD::OPC_Decode, 240, 14, 140, 1, // Opcode: XVTSQRTSP
/* 10959 */   MCD::OPC_FilterValue, 1, 28, 11, // Skip to: 13807
/* 10963 */   MCD::OPC_CheckField, 16, 5, 0, 22, 11, // Skip to: 13807
/* 10969 */   MCD::OPC_Decode, 227, 14, 139, 1, // Opcode: XVRSPIC
/* 10974 */   MCD::OPC_FilterValue, 1, 13, 11, // Skip to: 13807
/* 10978 */   MCD::OPC_CheckField, 21, 2, 0, 7, 11, // Skip to: 13807
/* 10984 */   MCD::OPC_CheckField, 0, 1, 0, 1, 11, // Skip to: 13807
/* 10990 */   MCD::OPC_Decode, 238, 14, 141, 1, // Opcode: XVTDIVSP
/* 10995 */   MCD::OPC_FilterValue, 6, 135, 0, // Skip to: 11134
/* 10999 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11002 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11039
/* 11006 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11009 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11024
/* 11013 */   MCD::OPC_CheckField, 16, 5, 0, 228, 10, // Skip to: 13807
/* 11019 */   MCD::OPC_Decode, 173, 14, 139, 1, // Opcode: XVCVDPUXWS
/* 11024 */   MCD::OPC_FilterValue, 1, 219, 10, // Skip to: 13807
/* 11028 */   MCD::OPC_CheckField, 16, 5, 0, 213, 10, // Skip to: 13807
/* 11034 */   MCD::OPC_Decode, 171, 14, 139, 1, // Opcode: XVCVDPSXWS
/* 11039 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 11076
/* 11043 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11046 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11061
/* 11050 */   MCD::OPC_CheckField, 16, 5, 0, 191, 10, // Skip to: 13807
/* 11056 */   MCD::OPC_Decode, 219, 14, 139, 1, // Opcode: XVRDPI
/* 11061 */   MCD::OPC_FilterValue, 1, 182, 10, // Skip to: 13807
/* 11065 */   MCD::OPC_CheckField, 16, 5, 0, 176, 10, // Skip to: 13807
/* 11071 */   MCD::OPC_Decode, 223, 14, 139, 1, // Opcode: XVRDPIZ
/* 11076 */   MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 11113
/* 11080 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11083 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11098
/* 11087 */   MCD::OPC_CheckField, 16, 5, 0, 154, 10, // Skip to: 13807
/* 11093 */   MCD::OPC_Decode, 231, 14, 139, 1, // Opcode: XVRSQRTEDP
/* 11098 */   MCD::OPC_FilterValue, 1, 145, 10, // Skip to: 13807
/* 11102 */   MCD::OPC_CheckField, 16, 5, 0, 139, 10, // Skip to: 13807
/* 11108 */   MCD::OPC_Decode, 224, 14, 139, 1, // Opcode: XVREDP
/* 11113 */   MCD::OPC_FilterValue, 3, 130, 10, // Skip to: 13807
/* 11117 */   MCD::OPC_CheckField, 16, 5, 0, 124, 10, // Skip to: 13807
/* 11123 */   MCD::OPC_CheckField, 6, 1, 0, 118, 10, // Skip to: 13807
/* 11129 */   MCD::OPC_Decode, 233, 14, 139, 1, // Opcode: XVSQRTDP
/* 11134 */   MCD::OPC_FilterValue, 7, 155, 0, // Skip to: 11293
/* 11138 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 11141 */   MCD::OPC_FilterValue, 0, 77, 0, // Skip to: 11222
/* 11145 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11148 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11185
/* 11152 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11155 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11170
/* 11159 */   MCD::OPC_CheckField, 16, 5, 0, 82, 10, // Skip to: 13807
/* 11165 */   MCD::OPC_Decode, 187, 14, 139, 1, // Opcode: XVCVUXWDP
/* 11170 */   MCD::OPC_FilterValue, 1, 73, 10, // Skip to: 13807
/* 11174 */   MCD::OPC_CheckField, 16, 5, 0, 67, 10, // Skip to: 13807
/* 11180 */   MCD::OPC_Decode, 183, 14, 139, 1, // Opcode: XVCVSXWDP
/* 11185 */   MCD::OPC_FilterValue, 1, 58, 10, // Skip to: 13807
/* 11189 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11192 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11207
/* 11196 */   MCD::OPC_CheckField, 16, 5, 0, 45, 10, // Skip to: 13807
/* 11202 */   MCD::OPC_Decode, 222, 14, 139, 1, // Opcode: XVRDPIP
/* 11207 */   MCD::OPC_FilterValue, 1, 36, 10, // Skip to: 13807
/* 11211 */   MCD::OPC_CheckField, 16, 5, 0, 30, 10, // Skip to: 13807
/* 11217 */   MCD::OPC_Decode, 221, 14, 139, 1, // Opcode: XVRDPIM
/* 11222 */   MCD::OPC_FilterValue, 1, 21, 10, // Skip to: 13807
/* 11226 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11229 */   MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 11272
/* 11233 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11236 */   MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 11257
/* 11240 */   MCD::OPC_CheckField, 16, 7, 0, 1, 10, // Skip to: 13807
/* 11246 */   MCD::OPC_CheckField, 0, 1, 0, 251, 9, // Skip to: 13807
/* 11252 */   MCD::OPC_Decode, 239, 14, 140, 1, // Opcode: XVTSQRTDP
/* 11257 */   MCD::OPC_FilterValue, 1, 242, 9, // Skip to: 13807
/* 11261 */   MCD::OPC_CheckField, 16, 5, 0, 236, 9, // Skip to: 13807
/* 11267 */   MCD::OPC_Decode, 220, 14, 139, 1, // Opcode: XVRDPIC
/* 11272 */   MCD::OPC_FilterValue, 1, 227, 9, // Skip to: 13807
/* 11276 */   MCD::OPC_CheckField, 21, 2, 0, 221, 9, // Skip to: 13807
/* 11282 */   MCD::OPC_CheckField, 0, 1, 0, 215, 9, // Skip to: 13807
/* 11288 */   MCD::OPC_Decode, 237, 14, 141, 1, // Opcode: XVTDIVDP
/* 11293 */   MCD::OPC_FilterValue, 8, 45, 0, // Skip to: 11342
/* 11297 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11300 */   MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 11321
/* 11304 */   MCD::OPC_CheckField, 16, 5, 0, 193, 9, // Skip to: 13807
/* 11310 */   MCD::OPC_CheckField, 6, 1, 0, 187, 9, // Skip to: 13807
/* 11316 */   MCD::OPC_Decode, 177, 13, 137, 1, // Opcode: XSCVDPSP
/* 11321 */   MCD::OPC_FilterValue, 3, 178, 9, // Skip to: 13807
/* 11325 */   MCD::OPC_CheckField, 16, 5, 0, 172, 9, // Skip to: 13807
/* 11331 */   MCD::OPC_CheckField, 6, 1, 0, 166, 9, // Skip to: 13807
/* 11337 */   MCD::OPC_Decode, 178, 13, 142, 1, // Opcode: XSCVDPSPN
/* 11342 */   MCD::OPC_FilterValue, 9, 61, 0, // Skip to: 11407
/* 11346 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11349 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11386
/* 11353 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11356 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11371
/* 11360 */   MCD::OPC_CheckField, 16, 5, 0, 137, 9, // Skip to: 13807
/* 11366 */   MCD::OPC_Decode, 201, 13, 143, 1, // Opcode: XSCVUXDSP
/* 11371 */   MCD::OPC_FilterValue, 1, 128, 9, // Skip to: 13807
/* 11375 */   MCD::OPC_CheckField, 16, 5, 0, 122, 9, // Skip to: 13807
/* 11381 */   MCD::OPC_Decode, 198, 13, 143, 1, // Opcode: XSCVSXDSP
/* 11386 */   MCD::OPC_FilterValue, 2, 113, 9, // Skip to: 13807
/* 11390 */   MCD::OPC_CheckField, 6, 1, 0, 107, 9, // Skip to: 13807
/* 11396 */   MCD::OPC_CheckField, 0, 1, 0, 101, 9, // Skip to: 13807
/* 11402 */   MCD::OPC_Decode, 142, 14, 144, 1, // Opcode: XSTSTDCSP
/* 11407 */   MCD::OPC_FilterValue, 10, 160, 0, // Skip to: 11571
/* 11411 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 11414 */   MCD::OPC_FilterValue, 0, 84, 0, // Skip to: 11502
/* 11418 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11421 */   MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 11446
/* 11425 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11428 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11437
/* 11432 */   MCD::OPC_Decode, 183, 13, 137, 1, // Opcode: XSCVDPUXDS
/* 11437 */   MCD::OPC_FilterValue, 1, 62, 9, // Skip to: 13807
/* 11441 */   MCD::OPC_Decode, 179, 13, 137, 1, // Opcode: XSCVDPSXDS
/* 11446 */   MCD::OPC_FilterValue, 1, 21, 0, // Skip to: 11471
/* 11450 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11453 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11462
/* 11457 */   MCD::OPC_Decode, 195, 13, 137, 1, // Opcode: XSCVSPDP
/* 11462 */   MCD::OPC_FilterValue, 1, 37, 9, // Skip to: 13807
/* 11466 */   MCD::OPC_Decode, 157, 13, 137, 1, // Opcode: XSABSDP
/* 11471 */   MCD::OPC_FilterValue, 3, 28, 9, // Skip to: 13807
/* 11475 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11478 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11487
/* 11482 */   MCD::OPC_Decode, 196, 13, 145, 1, // Opcode: XSCVSPDPN
/* 11487 */   MCD::OPC_FilterValue, 1, 12, 9, // Skip to: 13807
/* 11491 */   MCD::OPC_CheckField, 0, 1, 0, 6, 9, // Skip to: 13807
/* 11497 */   MCD::OPC_Decode, 143, 14, 146, 1, // Opcode: XSXEXPDP
/* 11502 */   MCD::OPC_FilterValue, 1, 23, 0, // Skip to: 11529
/* 11506 */   MCD::OPC_CheckField, 6, 1, 1, 247, 8, // Skip to: 13807
/* 11512 */   MCD::OPC_CheckField, 2, 2, 3, 241, 8, // Skip to: 13807
/* 11518 */   MCD::OPC_CheckField, 0, 1, 0, 235, 8, // Skip to: 13807
/* 11524 */   MCD::OPC_Decode, 145, 14, 146, 1, // Opcode: XSXSIGDP
/* 11529 */   MCD::OPC_FilterValue, 16, 17, 0, // Skip to: 11550
/* 11533 */   MCD::OPC_CheckField, 6, 1, 1, 220, 8, // Skip to: 13807
/* 11539 */   MCD::OPC_CheckField, 2, 2, 3, 214, 8, // Skip to: 13807
/* 11545 */   MCD::OPC_Decode, 187, 13, 137, 1, // Opcode: XSCVHPDP
/* 11550 */   MCD::OPC_FilterValue, 17, 205, 8, // Skip to: 13807
/* 11554 */   MCD::OPC_CheckField, 6, 1, 1, 199, 8, // Skip to: 13807
/* 11560 */   MCD::OPC_CheckField, 2, 2, 3, 193, 8, // Skip to: 13807
/* 11566 */   MCD::OPC_Decode, 175, 13, 137, 1, // Opcode: XSCVDPHP
/* 11571 */   MCD::OPC_FilterValue, 11, 98, 0, // Skip to: 11673
/* 11575 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11578 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11615
/* 11582 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11585 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11600
/* 11589 */   MCD::OPC_CheckField, 16, 5, 0, 164, 8, // Skip to: 13807
/* 11595 */   MCD::OPC_Decode, 200, 13, 137, 1, // Opcode: XSCVUXDDP
/* 11600 */   MCD::OPC_FilterValue, 1, 155, 8, // Skip to: 13807
/* 11604 */   MCD::OPC_CheckField, 16, 5, 0, 149, 8, // Skip to: 13807
/* 11610 */   MCD::OPC_Decode, 197, 13, 137, 1, // Opcode: XSCVSXDDP
/* 11615 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 11652
/* 11619 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11622 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11637
/* 11626 */   MCD::OPC_CheckField, 16, 5, 0, 127, 8, // Skip to: 13807
/* 11632 */   MCD::OPC_Decode, 230, 13, 137, 1, // Opcode: XSNABSDP
/* 11637 */   MCD::OPC_FilterValue, 1, 118, 8, // Skip to: 13807
/* 11641 */   MCD::OPC_CheckField, 16, 5, 0, 112, 8, // Skip to: 13807
/* 11647 */   MCD::OPC_Decode, 232, 13, 137, 1, // Opcode: XSNEGDP
/* 11652 */   MCD::OPC_FilterValue, 2, 103, 8, // Skip to: 13807
/* 11656 */   MCD::OPC_CheckField, 6, 1, 0, 97, 8, // Skip to: 13807
/* 11662 */   MCD::OPC_CheckField, 0, 1, 0, 91, 8, // Skip to: 13807
/* 11668 */   MCD::OPC_Decode, 140, 14, 144, 1, // Opcode: XSTSTDCDP
/* 11673 */   MCD::OPC_FilterValue, 12, 77, 0, // Skip to: 11754
/* 11677 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11680 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11717
/* 11684 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11687 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11702
/* 11691 */   MCD::OPC_CheckField, 16, 5, 0, 62, 8, // Skip to: 13807
/* 11697 */   MCD::OPC_Decode, 179, 14, 139, 1, // Opcode: XVCVSPUXDS
/* 11702 */   MCD::OPC_FilterValue, 1, 53, 8, // Skip to: 13807
/* 11706 */   MCD::OPC_CheckField, 16, 5, 0, 47, 8, // Skip to: 13807
/* 11712 */   MCD::OPC_Decode, 177, 14, 139, 1, // Opcode: XVCVSPSXDS
/* 11717 */   MCD::OPC_FilterValue, 1, 38, 8, // Skip to: 13807
/* 11721 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11724 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11739
/* 11728 */   MCD::OPC_CheckField, 16, 5, 0, 25, 8, // Skip to: 13807
/* 11734 */   MCD::OPC_Decode, 169, 14, 139, 1, // Opcode: XVCVDPSP
/* 11739 */   MCD::OPC_FilterValue, 1, 16, 8, // Skip to: 13807
/* 11743 */   MCD::OPC_CheckField, 16, 5, 0, 10, 8, // Skip to: 13807
/* 11749 */   MCD::OPC_Decode, 148, 14, 139, 1, // Opcode: XVABSSP
/* 11754 */   MCD::OPC_FilterValue, 13, 93, 0, // Skip to: 11851
/* 11758 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 11761 */   MCD::OPC_FilterValue, 0, 77, 0, // Skip to: 11842
/* 11765 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 11768 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11805
/* 11772 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11775 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11790
/* 11779 */   MCD::OPC_CheckField, 16, 5, 0, 230, 7, // Skip to: 13807
/* 11785 */   MCD::OPC_Decode, 186, 14, 139, 1, // Opcode: XVCVUXDSP
/* 11790 */   MCD::OPC_FilterValue, 1, 221, 7, // Skip to: 13807
/* 11794 */   MCD::OPC_CheckField, 16, 5, 0, 215, 7, // Skip to: 13807
/* 11800 */   MCD::OPC_Decode, 182, 14, 139, 1, // Opcode: XVCVSXDSP
/* 11805 */   MCD::OPC_FilterValue, 1, 206, 7, // Skip to: 13807
/* 11809 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11812 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11827
/* 11816 */   MCD::OPC_CheckField, 16, 5, 0, 193, 7, // Skip to: 13807
/* 11822 */   MCD::OPC_Decode, 208, 14, 139, 1, // Opcode: XVNABSSP
/* 11827 */   MCD::OPC_FilterValue, 1, 184, 7, // Skip to: 13807
/* 11831 */   MCD::OPC_CheckField, 16, 5, 0, 178, 7, // Skip to: 13807
/* 11837 */   MCD::OPC_Decode, 210, 14, 139, 1, // Opcode: XVNEGSP
/* 11842 */   MCD::OPC_FilterValue, 1, 169, 7, // Skip to: 13807
/* 11846 */   MCD::OPC_Decode, 242, 14, 147, 1, // Opcode: XVTSTDCSP
/* 11851 */   MCD::OPC_FilterValue, 14, 195, 0, // Skip to: 12050
/* 11855 */   MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 11858 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 11895
/* 11862 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11865 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11880
/* 11869 */   MCD::OPC_CheckField, 16, 5, 0, 140, 7, // Skip to: 13807
/* 11875 */   MCD::OPC_Decode, 172, 14, 139, 1, // Opcode: XVCVDPUXDS
/* 11880 */   MCD::OPC_FilterValue, 1, 131, 7, // Skip to: 13807
/* 11884 */   MCD::OPC_CheckField, 16, 5, 0, 125, 7, // Skip to: 13807
/* 11890 */   MCD::OPC_Decode, 170, 14, 139, 1, // Opcode: XVCVDPSXDS
/* 11895 */   MCD::OPC_FilterValue, 1, 33, 0, // Skip to: 11932
/* 11899 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11902 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 11917
/* 11906 */   MCD::OPC_CheckField, 16, 5, 0, 103, 7, // Skip to: 13807
/* 11912 */   MCD::OPC_Decode, 175, 14, 139, 1, // Opcode: XVCVSPDP
/* 11917 */   MCD::OPC_FilterValue, 1, 94, 7, // Skip to: 13807
/* 11921 */   MCD::OPC_CheckField, 16, 5, 0, 88, 7, // Skip to: 13807
/* 11927 */   MCD::OPC_Decode, 147, 14, 139, 1, // Opcode: XVABSDP
/* 11932 */   MCD::OPC_FilterValue, 3, 79, 7, // Skip to: 13807
/* 11936 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 11939 */   MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 11953
/* 11943 */   MCD::OPC_CheckField, 1, 1, 0, 66, 7, // Skip to: 13807
/* 11949 */   MCD::OPC_Decode, 206, 13, 86, // Opcode: XSIEXPDP
/* 11953 */   MCD::OPC_FilterValue, 1, 58, 7, // Skip to: 13807
/* 11957 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 11960 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 11969
/* 11964 */   MCD::OPC_Decode, 243, 14, 139, 1, // Opcode: XVXEXPDP
/* 11969 */   MCD::OPC_FilterValue, 1, 5, 0, // Skip to: 11978
/* 11973 */   MCD::OPC_Decode, 245, 14, 139, 1, // Opcode: XVXSIGDP
/* 11978 */   MCD::OPC_FilterValue, 7, 5, 0, // Skip to: 11987
/* 11982 */   MCD::OPC_Decode, 248, 14, 139, 1, // Opcode: XXBRH
/* 11987 */   MCD::OPC_FilterValue, 8, 5, 0, // Skip to: 11996
/* 11991 */   MCD::OPC_Decode, 244, 14, 139, 1, // Opcode: XVXEXPSP
/* 11996 */   MCD::OPC_FilterValue, 9, 5, 0, // Skip to: 12005
/* 12000 */   MCD::OPC_Decode, 246, 14, 139, 1, // Opcode: XVXSIGSP
/* 12005 */   MCD::OPC_FilterValue, 15, 5, 0, // Skip to: 12014
/* 12009 */   MCD::OPC_Decode, 250, 14, 139, 1, // Opcode: XXBRW
/* 12014 */   MCD::OPC_FilterValue, 23, 5, 0, // Skip to: 12023
/* 12018 */   MCD::OPC_Decode, 247, 14, 139, 1, // Opcode: XXBRD
/* 12023 */   MCD::OPC_FilterValue, 24, 5, 0, // Skip to: 12032
/* 12027 */   MCD::OPC_Decode, 174, 14, 139, 1, // Opcode: XVCVHPSP
/* 12032 */   MCD::OPC_FilterValue, 25, 5, 0, // Skip to: 12041
/* 12036 */   MCD::OPC_Decode, 176, 14, 139, 1, // Opcode: XVCVSPHP
/* 12041 */   MCD::OPC_FilterValue, 31, 226, 6, // Skip to: 13807
/* 12045 */   MCD::OPC_Decode, 249, 14, 139, 1, // Opcode: XXBRQ
/* 12050 */   MCD::OPC_FilterValue, 15, 217, 6, // Skip to: 13807
/* 12054 */   MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 12057 */   MCD::OPC_FilterValue, 0, 77, 0, // Skip to: 12138
/* 12061 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 12064 */   MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 12101
/* 12068 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 12071 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 12086
/* 12075 */   MCD::OPC_CheckField, 16, 5, 0, 190, 6, // Skip to: 13807
/* 12081 */   MCD::OPC_Decode, 185, 14, 139, 1, // Opcode: XVCVUXDDP
/* 12086 */   MCD::OPC_FilterValue, 1, 181, 6, // Skip to: 13807
/* 12090 */   MCD::OPC_CheckField, 16, 5, 0, 175, 6, // Skip to: 13807
/* 12096 */   MCD::OPC_Decode, 181, 14, 139, 1, // Opcode: XVCVSXDDP
/* 12101 */   MCD::OPC_FilterValue, 1, 166, 6, // Skip to: 13807
/* 12105 */   MCD::OPC_ExtractField, 6, 1,  // Inst{6} ...
/* 12108 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 12123
/* 12112 */   MCD::OPC_CheckField, 16, 5, 0, 153, 6, // Skip to: 13807
/* 12118 */   MCD::OPC_Decode, 207, 14, 139, 1, // Opcode: XVNABSDP
/* 12123 */   MCD::OPC_FilterValue, 1, 144, 6, // Skip to: 13807
/* 12127 */   MCD::OPC_CheckField, 16, 5, 0, 138, 6, // Skip to: 13807
/* 12133 */   MCD::OPC_Decode, 209, 14, 139, 1, // Opcode: XVNEGDP
/* 12138 */   MCD::OPC_FilterValue, 1, 129, 6, // Skip to: 13807
/* 12142 */   MCD::OPC_Decode, 241, 14, 147, 1, // Opcode: XVTSTDCDP
/* 12147 */   MCD::OPC_FilterValue, 3, 120, 6, // Skip to: 13807
/* 12151 */   MCD::OPC_Decode, 143, 15, 148, 1, // Opcode: XXSEL
/* 12156 */   MCD::OPC_FilterValue, 61, 44, 0, // Skip to: 12204
/* 12160 */   MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 12163 */   MCD::OPC_FilterValue, 1, 21, 0, // Skip to: 12188
/* 12167 */   MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 12170 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12179
/* 12174 */   MCD::OPC_Decode, 207, 6, 149, 1, // Opcode: LXV
/* 12179 */   MCD::OPC_FilterValue, 1, 88, 6, // Skip to: 13807
/* 12183 */   MCD::OPC_Decode, 159, 10, 149, 1, // Opcode: STXV
/* 12188 */   MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 12196
/* 12192 */   MCD::OPC_Decode, 150, 10, 116, // Opcode: STXSD
/* 12196 */   MCD::OPC_FilterValue, 3, 71, 6, // Skip to: 13807
/* 12200 */   MCD::OPC_Decode, 157, 10, 116, // Opcode: STXSSP
/* 12204 */   MCD::OPC_FilterValue, 62, 19, 0, // Skip to: 12227
/* 12208 */   MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 12211 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12219
/* 12215 */   MCD::OPC_Decode, 230, 9, 117, // Opcode: STD
/* 12219 */   MCD::OPC_FilterValue, 1, 48, 6, // Skip to: 13807
/* 12223 */   MCD::OPC_Decode, 235, 9, 117, // Opcode: STDU
/* 12227 */   MCD::OPC_FilterValue, 63, 40, 6, // Skip to: 13807
/* 12231 */   MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 12234 */   MCD::OPC_FilterValue, 0, 68, 0, // Skip to: 12306
/* 12238 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12241 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 12256
/* 12245 */   MCD::OPC_CheckField, 21, 2, 0, 20, 6, // Skip to: 13807
/* 12251 */   MCD::OPC_Decode, 246, 4, 150, 1, // Opcode: FCMPUS
/* 12256 */   MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 12276
/* 12260 */   MCD::OPC_CheckField, 21, 2, 0, 5, 6, // Skip to: 13807
/* 12266 */   MCD::OPC_CheckField, 11, 7, 0, 255, 5, // Skip to: 13807
/* 12272 */   MCD::OPC_Decode, 219, 6, 31, // Opcode: MCRFS
/* 12276 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 12291
/* 12280 */   MCD::OPC_CheckField, 21, 2, 0, 241, 5, // Skip to: 13807
/* 12286 */   MCD::OPC_Decode, 211, 5, 151, 1, // Opcode: FTDIV
/* 12291 */   MCD::OPC_FilterValue, 5, 232, 5, // Skip to: 13807
/* 12295 */   MCD::OPC_CheckField, 16, 7, 0, 226, 5, // Skip to: 13807
/* 12301 */   MCD::OPC_Decode, 212, 5, 152, 1, // Opcode: FTSQRT
/* 12306 */   MCD::OPC_FilterValue, 8, 11, 1, // Skip to: 12577
/* 12310 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12313 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12321
/* 12317 */   MCD::OPC_Decode, 160, 13, 3, // Opcode: XSADDQP
/* 12321 */   MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 12329
/* 12325 */   MCD::OPC_Decode, 227, 13, 3, // Opcode: XSMULQP
/* 12329 */   MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 12337
/* 12333 */   MCD::OPC_Decode, 174, 13, 3, // Opcode: XSCPSGNQP
/* 12337 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 12352
/* 12341 */   MCD::OPC_CheckField, 21, 2, 0, 180, 5, // Skip to: 13807
/* 12347 */   MCD::OPC_Decode, 170, 13, 153, 1, // Opcode: XSCMPOQP
/* 12352 */   MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 12367
/* 12356 */   MCD::OPC_CheckField, 21, 2, 0, 165, 5, // Skip to: 13807
/* 12362 */   MCD::OPC_Decode, 165, 13, 153, 1, // Opcode: XSCMPEXPQP
/* 12367 */   MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 12375
/* 12371 */   MCD::OPC_Decode, 212, 13, 3, // Opcode: XSMADDQP
/* 12375 */   MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 12383
/* 12379 */   MCD::OPC_Decode, 224, 13, 3, // Opcode: XSMSUBQP
/* 12383 */   MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 12391
/* 12387 */   MCD::OPC_Decode, 238, 13, 3, // Opcode: XSNMADDQP
/* 12391 */   MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 12399
/* 12395 */   MCD::OPC_Decode, 244, 13, 3, // Opcode: XSNMSUBQP
/* 12399 */   MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 12407
/* 12403 */   MCD::OPC_Decode, 135, 14, 3, // Opcode: XSSUBQP
/* 12407 */   MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 12415
/* 12411 */   MCD::OPC_Decode, 203, 13, 3, // Opcode: XSDIVQP
/* 12415 */   MCD::OPC_FilterValue, 20, 11, 0, // Skip to: 12430
/* 12419 */   MCD::OPC_CheckField, 21, 2, 0, 102, 5, // Skip to: 13807
/* 12425 */   MCD::OPC_Decode, 172, 13, 153, 1, // Opcode: XSCMPUQP
/* 12430 */   MCD::OPC_FilterValue, 22, 5, 0, // Skip to: 12439
/* 12434 */   MCD::OPC_Decode, 141, 14, 154, 1, // Opcode: XSTSTDCQP
/* 12439 */   MCD::OPC_FilterValue, 25, 51, 0, // Skip to: 12494
/* 12443 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 12446 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12454
/* 12450 */   MCD::OPC_Decode, 158, 13, 6, // Opcode: XSABSQP
/* 12454 */   MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 12462
/* 12458 */   MCD::OPC_Decode, 144, 14, 6, // Opcode: XSXEXPQP
/* 12462 */   MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 12470
/* 12466 */   MCD::OPC_Decode, 231, 13, 6, // Opcode: XSNABSQP
/* 12470 */   MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 12478
/* 12474 */   MCD::OPC_Decode, 233, 13, 6, // Opcode: XSNEGQP
/* 12478 */   MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 12486
/* 12482 */   MCD::OPC_Decode, 146, 14, 6, // Opcode: XSXSIGQP
/* 12486 */   MCD::OPC_FilterValue, 27, 37, 5, // Skip to: 13807
/* 12490 */   MCD::OPC_Decode, 131, 14, 6, // Opcode: XSSQRTQP
/* 12494 */   MCD::OPC_FilterValue, 26, 70, 0, // Skip to: 12568
/* 12498 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 12501 */   MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 12509
/* 12505 */   MCD::OPC_Decode, 193, 13, 6, // Opcode: XSCVQPUWZ
/* 12509 */   MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 12518
/* 12513 */   MCD::OPC_Decode, 199, 13, 155, 1, // Opcode: XSCVUDQP
/* 12518 */   MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 12526
/* 12522 */   MCD::OPC_Decode, 191, 13, 6, // Opcode: XSCVQPSWZ
/* 12526 */   MCD::OPC_FilterValue, 10, 5, 0, // Skip to: 12535
/* 12530 */   MCD::OPC_Decode, 194, 13, 155, 1, // Opcode: XSCVSDQP
/* 12535 */   MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 12543
/* 12539 */   MCD::OPC_Decode, 192, 13, 6, // Opcode: XSCVQPUDZ
/* 12543 */   MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 12551
/* 12547 */   MCD::OPC_Decode, 188, 13, 6, // Opcode: XSCVQPDP
/* 12551 */   MCD::OPC_FilterValue, 22, 5, 0, // Skip to: 12560
/* 12555 */   MCD::OPC_Decode, 176, 13, 155, 1, // Opcode: XSCVDPQP
/* 12560 */   MCD::OPC_FilterValue, 25, 219, 4, // Skip to: 13807
/* 12564 */   MCD::OPC_Decode, 190, 13, 6, // Opcode: XSCVQPSDZ
/* 12568 */   MCD::OPC_FilterValue, 27, 211, 4, // Skip to: 13807
/* 12572 */   MCD::OPC_Decode, 207, 13, 156, 1, // Opcode: XSIEXPQP
/* 12577 */   MCD::OPC_FilterValue, 9, 95, 0, // Skip to: 12676
/* 12581 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12584 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12592
/* 12588 */   MCD::OPC_Decode, 161, 13, 3, // Opcode: XSADDQPO
/* 12592 */   MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 12600
/* 12596 */   MCD::OPC_Decode, 228, 13, 3, // Opcode: XSMULQPO
/* 12600 */   MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 12608
/* 12604 */   MCD::OPC_Decode, 213, 13, 3, // Opcode: XSMADDQPO
/* 12608 */   MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 12616
/* 12612 */   MCD::OPC_Decode, 225, 13, 3, // Opcode: XSMSUBQPO
/* 12616 */   MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 12624
/* 12620 */   MCD::OPC_Decode, 239, 13, 3, // Opcode: XSNMADDQPO
/* 12624 */   MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 12632
/* 12628 */   MCD::OPC_Decode, 245, 13, 3, // Opcode: XSNMSUBQPO
/* 12632 */   MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 12640
/* 12636 */   MCD::OPC_Decode, 136, 14, 3, // Opcode: XSSUBQPO
/* 12640 */   MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 12648
/* 12644 */   MCD::OPC_Decode, 204, 13, 3, // Opcode: XSDIVQPO
/* 12648 */   MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 12662
/* 12652 */   MCD::OPC_CheckField, 16, 5, 27, 125, 4, // Skip to: 13807
/* 12658 */   MCD::OPC_Decode, 132, 14, 6, // Opcode: XSSQRTQPO
/* 12662 */   MCD::OPC_FilterValue, 26, 117, 4, // Skip to: 13807
/* 12666 */   MCD::OPC_CheckField, 16, 5, 20, 111, 4, // Skip to: 13807
/* 12672 */   MCD::OPC_Decode, 189, 13, 6, // Opcode: XSCVQPDPO
/* 12676 */   MCD::OPC_FilterValue, 10, 21, 0, // Skip to: 12701
/* 12680 */   MCD::OPC_ExtractField, 6, 3,  // Inst{8-6} ...
/* 12683 */   MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 12692
/* 12687 */   MCD::OPC_Decode, 253, 13, 157, 1, // Opcode: XSRQPI
/* 12692 */   MCD::OPC_FilterValue, 1, 87, 4, // Skip to: 13807
/* 12696 */   MCD::OPC_Decode, 255, 13, 157, 1, // Opcode: XSRQPXP
/* 12701 */   MCD::OPC_FilterValue, 11, 11, 0, // Skip to: 12716
/* 12705 */   MCD::OPC_CheckField, 6, 3, 0, 72, 4, // Skip to: 13807
/* 12711 */   MCD::OPC_Decode, 254, 13, 157, 1, // Opcode: XSRQPIX
/* 12716 */   MCD::OPC_FilterValue, 12, 46, 0, // Skip to: 12766
/* 12720 */   MCD::OPC_ExtractField, 6, 6,  // Inst{11-6} ...
/* 12723 */   MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 12737
/* 12727 */   MCD::OPC_CheckField, 12, 9, 0, 50, 4, // Skip to: 13807
/* 12733 */   MCD::OPC_Decode, 129, 7, 105, // Opcode: MTFSB1
/* 12737 */   MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 12751
/* 12741 */   MCD::OPC_CheckField, 12, 9, 0, 36, 4, // Skip to: 13807
/* 12747 */   MCD::OPC_Decode, 128, 7, 105, // Opcode: MTFSB0
/* 12751 */   MCD::OPC_FilterValue, 4, 28, 4, // Skip to: 13807
/* 12755 */   MCD::OPC_CheckField, 17, 6, 0, 22, 4, // Skip to: 13807
/* 12761 */   MCD::OPC_Decode, 131, 7, 158, 1, // Opcode: MTFSFI
/* 12766 */   MCD::OPC_FilterValue, 13, 17, 0, // Skip to: 12787
/* 12770 */   MCD::OPC_CheckField, 17, 6, 0, 7, 4, // Skip to: 13807
/* 12776 */   MCD::OPC_CheckField, 6, 6, 4, 1, 4, // Skip to: 13807
/* 12782 */   MCD::OPC_Decode, 132, 7, 158, 1, // Opcode: MTFSFIo
/* 12787 */   MCD::OPC_FilterValue, 14, 27, 0, // Skip to: 12818
/* 12791 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12794 */   MCD::OPC_FilterValue, 18, 11, 0, // Skip to: 12809
/* 12798 */   MCD::OPC_CheckField, 11, 10, 0, 235, 3, // Skip to: 13807
/* 12804 */   MCD::OPC_Decode, 227, 6, 159, 1, // Opcode: MFFS
/* 12809 */   MCD::OPC_FilterValue, 22, 226, 3, // Skip to: 13807
/* 12813 */   MCD::OPC_Decode, 130, 7, 160, 1, // Opcode: MTFSF
/* 12818 */   MCD::OPC_FilterValue, 15, 27, 0, // Skip to: 12849
/* 12822 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12825 */   MCD::OPC_FilterValue, 18, 11, 0, // Skip to: 12840
/* 12829 */   MCD::OPC_CheckField, 11, 10, 0, 204, 3, // Skip to: 13807
/* 12835 */   MCD::OPC_Decode, 228, 6, 159, 1, // Opcode: MFFSo
/* 12840 */   MCD::OPC_FilterValue, 22, 195, 3, // Skip to: 13807
/* 12844 */   MCD::OPC_Decode, 134, 7, 160, 1, // Opcode: MTFSFo
/* 12849 */   MCD::OPC_FilterValue, 16, 123, 0, // Skip to: 12976
/* 12853 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12856 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12864
/* 12860 */   MCD::OPC_Decode, 249, 4, 119, // Opcode: FCPSGNS
/* 12864 */   MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 12878
/* 12868 */   MCD::OPC_CheckField, 16, 5, 0, 165, 3, // Skip to: 13807
/* 12874 */   MCD::OPC_Decode, 163, 5, 120, // Opcode: FNEGS
/* 12878 */   MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 12892
/* 12882 */   MCD::OPC_CheckField, 16, 5, 0, 151, 3, // Skip to: 13807
/* 12888 */   MCD::OPC_Decode, 147, 5, 120, // Opcode: FMR
/* 12892 */   MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 12906
/* 12896 */   MCD::OPC_CheckField, 16, 5, 0, 137, 3, // Skip to: 13807
/* 12902 */   MCD::OPC_Decode, 159, 5, 120, // Opcode: FNABSS
/* 12906 */   MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 12920
/* 12910 */   MCD::OPC_CheckField, 16, 5, 0, 123, 3, // Skip to: 13807
/* 12916 */   MCD::OPC_Decode, 230, 4, 120, // Opcode: FABSS
/* 12920 */   MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 12934
/* 12924 */   MCD::OPC_CheckField, 16, 5, 0, 109, 3, // Skip to: 13807
/* 12930 */   MCD::OPC_Decode, 183, 5, 120, // Opcode: FRINS
/* 12934 */   MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 12948
/* 12938 */   MCD::OPC_CheckField, 16, 5, 0, 95, 3, // Skip to: 13807
/* 12944 */   MCD::OPC_Decode, 191, 5, 120, // Opcode: FRIZS
/* 12948 */   MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 12962
/* 12952 */   MCD::OPC_CheckField, 16, 5, 0, 81, 3, // Skip to: 13807
/* 12958 */   MCD::OPC_Decode, 187, 5, 120, // Opcode: FRIPS
/* 12962 */   MCD::OPC_FilterValue, 15, 73, 3, // Skip to: 13807
/* 12966 */   MCD::OPC_CheckField, 16, 5, 0, 67, 3, // Skip to: 13807
/* 12972 */   MCD::OPC_Decode, 179, 5, 120, // Opcode: FRIMS
/* 12976 */   MCD::OPC_FilterValue, 17, 123, 0, // Skip to: 13103
/* 12980 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12983 */   MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 12991
/* 12987 */   MCD::OPC_Decode, 250, 4, 119, // Opcode: FCPSGNSo
/* 12991 */   MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 13005
/* 12995 */   MCD::OPC_CheckField, 16, 5, 0, 38, 3, // Skip to: 13807
/* 13001 */   MCD::OPC_Decode, 164, 5, 120, // Opcode: FNEGSo
/* 13005 */   MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 13019
/* 13009 */   MCD::OPC_CheckField, 16, 5, 0, 24, 3, // Skip to: 13807
/* 13015 */   MCD::OPC_Decode, 148, 5, 120, // Opcode: FMRo
/* 13019 */   MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 13033
/* 13023 */   MCD::OPC_CheckField, 16, 5, 0, 10, 3, // Skip to: 13807
/* 13029 */   MCD::OPC_Decode, 160, 5, 120, // Opcode: FNABSSo
/* 13033 */   MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 13047
/* 13037 */   MCD::OPC_CheckField, 16, 5, 0, 252, 2, // Skip to: 13807
/* 13043 */   MCD::OPC_Decode, 231, 4, 120, // Opcode: FABSSo
/* 13047 */   MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 13061
/* 13051 */   MCD::OPC_CheckField, 16, 5, 0, 238, 2, // Skip to: 13807
/* 13057 */   MCD::OPC_Decode, 184, 5, 120, // Opcode: FRINSo
/* 13061 */   MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 13075
/* 13065 */   MCD::OPC_CheckField, 16, 5, 0, 224, 2, // Skip to: 13807
/* 13071 */   MCD::OPC_Decode, 192, 5, 120, // Opcode: FRIZSo
/* 13075 */   MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 13089
/* 13079 */   MCD::OPC_CheckField, 16, 5, 0, 210, 2, // Skip to: 13807
/* 13085 */   MCD::OPC_Decode, 188, 5, 120, // Opcode: FRIPSo
/* 13089 */   MCD::OPC_FilterValue, 15, 202, 2, // Skip to: 13807
/* 13093 */   MCD::OPC_CheckField, 16, 5, 0, 196, 2, // Skip to: 13807
/* 13099 */   MCD::OPC_Decode, 180, 5, 120, // Opcode: FRIMSo
/* 13103 */   MCD::OPC_FilterValue, 24, 16, 0, // Skip to: 13123
/* 13107 */   MCD::OPC_CheckField, 16, 5, 0, 182, 2, // Skip to: 13807
/* 13113 */   MCD::OPC_CheckField, 6, 5, 0, 176, 2, // Skip to: 13807
/* 13119 */   MCD::OPC_Decode, 193, 5, 118, // Opcode: FRSP
/* 13123 */   MCD::OPC_FilterValue, 25, 16, 0, // Skip to: 13143
/* 13127 */   MCD::OPC_CheckField, 16, 5, 0, 162, 2, // Skip to: 13807
/* 13133 */   MCD::OPC_CheckField, 6, 5, 0, 156, 2, // Skip to: 13807
/* 13139 */   MCD::OPC_Decode, 194, 5, 118, // Opcode: FRSPo
/* 13143 */   MCD::OPC_FilterValue, 28, 93, 0, // Skip to: 13240
/* 13147 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13150 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 13165
/* 13154 */   MCD::OPC_CheckField, 16, 5, 0, 135, 2, // Skip to: 13807
/* 13160 */   MCD::OPC_Decode, 131, 5, 161, 1, // Opcode: FCTIW
/* 13165 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 13180
/* 13169 */   MCD::OPC_CheckField, 16, 5, 0, 120, 2, // Skip to: 13807
/* 13175 */   MCD::OPC_Decode, 132, 5, 161, 1, // Opcode: FCTIWU
/* 13180 */   MCD::OPC_FilterValue, 25, 11, 0, // Skip to: 13195
/* 13184 */   MCD::OPC_CheckField, 16, 5, 0, 105, 2, // Skip to: 13807
/* 13190 */   MCD::OPC_Decode, 251, 4, 161, 1, // Opcode: FCTID
/* 13195 */   MCD::OPC_FilterValue, 26, 11, 0, // Skip to: 13210
/* 13199 */   MCD::OPC_CheckField, 16, 5, 0, 90, 2, // Skip to: 13807
/* 13205 */   MCD::OPC_Decode, 237, 4, 161, 1, // Opcode: FCFID
/* 13210 */   MCD::OPC_FilterValue, 29, 11, 0, // Skip to: 13225
/* 13214 */   MCD::OPC_CheckField, 16, 5, 0, 75, 2, // Skip to: 13807
/* 13220 */   MCD::OPC_Decode, 252, 4, 161, 1, // Opcode: FCTIDU
/* 13225 */   MCD::OPC_FilterValue, 30, 66, 2, // Skip to: 13807
/* 13229 */   MCD::OPC_CheckField, 16, 5, 0, 60, 2, // Skip to: 13807
/* 13235 */   MCD::OPC_Decode, 240, 4, 161, 1, // Opcode: FCFIDU
/* 13240 */   MCD::OPC_FilterValue, 29, 93, 0, // Skip to: 13337
/* 13244 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13247 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 13262
/* 13251 */   MCD::OPC_CheckField, 16, 5, 0, 38, 2, // Skip to: 13807
/* 13257 */   MCD::OPC_Decode, 138, 5, 161, 1, // Opcode: FCTIWo
/* 13262 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 13277
/* 13266 */   MCD::OPC_CheckField, 16, 5, 0, 23, 2, // Skip to: 13807
/* 13272 */   MCD::OPC_Decode, 135, 5, 161, 1, // Opcode: FCTIWUo
/* 13277 */   MCD::OPC_FilterValue, 25, 11, 0, // Skip to: 13292
/* 13281 */   MCD::OPC_CheckField, 16, 5, 0, 8, 2, // Skip to: 13807
/* 13287 */   MCD::OPC_Decode, 130, 5, 161, 1, // Opcode: FCTIDo
/* 13292 */   MCD::OPC_FilterValue, 26, 11, 0, // Skip to: 13307
/* 13296 */   MCD::OPC_CheckField, 16, 5, 0, 249, 1, // Skip to: 13807
/* 13302 */   MCD::OPC_Decode, 244, 4, 161, 1, // Opcode: FCFIDo
/* 13307 */   MCD::OPC_FilterValue, 29, 11, 0, // Skip to: 13322
/* 13311 */   MCD::OPC_CheckField, 16, 5, 0, 234, 1, // Skip to: 13807
/* 13317 */   MCD::OPC_Decode, 255, 4, 161, 1, // Opcode: FCTIDUo
/* 13322 */   MCD::OPC_FilterValue, 30, 225, 1, // Skip to: 13807
/* 13326 */   MCD::OPC_CheckField, 16, 5, 0, 219, 1, // Skip to: 13807
/* 13332 */   MCD::OPC_Decode, 243, 4, 161, 1, // Opcode: FCFIDUo
/* 13337 */   MCD::OPC_FilterValue, 30, 63, 0, // Skip to: 13404
/* 13341 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13344 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 13359
/* 13348 */   MCD::OPC_CheckField, 16, 5, 0, 197, 1, // Skip to: 13807
/* 13354 */   MCD::OPC_Decode, 136, 5, 161, 1, // Opcode: FCTIWZ
/* 13359 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 13374
/* 13363 */   MCD::OPC_CheckField, 16, 5, 0, 182, 1, // Skip to: 13807
/* 13369 */   MCD::OPC_Decode, 133, 5, 161, 1, // Opcode: FCTIWUZ
/* 13374 */   MCD::OPC_FilterValue, 25, 11, 0, // Skip to: 13389
/* 13378 */   MCD::OPC_CheckField, 16, 5, 0, 167, 1, // Skip to: 13807
/* 13384 */   MCD::OPC_Decode, 128, 5, 161, 1, // Opcode: FCTIDZ
/* 13389 */   MCD::OPC_FilterValue, 29, 158, 1, // Skip to: 13807
/* 13393 */   MCD::OPC_CheckField, 16, 5, 0, 152, 1, // Skip to: 13807
/* 13399 */   MCD::OPC_Decode, 253, 4, 161, 1, // Opcode: FCTIDUZ
/* 13404 */   MCD::OPC_FilterValue, 31, 63, 0, // Skip to: 13471
/* 13408 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13411 */   MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 13426
/* 13415 */   MCD::OPC_CheckField, 16, 5, 0, 130, 1, // Skip to: 13807
/* 13421 */   MCD::OPC_Decode, 137, 5, 161, 1, // Opcode: FCTIWZo
/* 13426 */   MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 13441
/* 13430 */   MCD::OPC_CheckField, 16, 5, 0, 115, 1, // Skip to: 13807
/* 13436 */   MCD::OPC_Decode, 134, 5, 161, 1, // Opcode: FCTIWUZo
/* 13441 */   MCD::OPC_FilterValue, 25, 11, 0, // Skip to: 13456
/* 13445 */   MCD::OPC_CheckField, 16, 5, 0, 100, 1, // Skip to: 13807
/* 13451 */   MCD::OPC_Decode, 129, 5, 161, 1, // Opcode: FCTIDZo
/* 13456 */   MCD::OPC_FilterValue, 29, 91, 1, // Skip to: 13807
/* 13460 */   MCD::OPC_CheckField, 16, 5, 0, 85, 1, // Skip to: 13807
/* 13466 */   MCD::OPC_Decode, 254, 4, 161, 1, // Opcode: FCTIDUZo
/* 13471 */   MCD::OPC_FilterValue, 36, 11, 0, // Skip to: 13486
/* 13475 */   MCD::OPC_CheckField, 6, 5, 0, 70, 1, // Skip to: 13807
/* 13481 */   MCD::OPC_Decode, 139, 5, 162, 1, // Opcode: FDIV
/* 13486 */   MCD::OPC_FilterValue, 37, 11, 0, // Skip to: 13501
/* 13490 */   MCD::OPC_CheckField, 6, 5, 0, 55, 1, // Skip to: 13807
/* 13496 */   MCD::OPC_Decode, 142, 5, 162, 1, // Opcode: FDIVo
/* 13501 */   MCD::OPC_FilterValue, 40, 11, 0, // Skip to: 13516
/* 13505 */   MCD::OPC_CheckField, 6, 5, 0, 40, 1, // Skip to: 13807
/* 13511 */   MCD::OPC_Decode, 207, 5, 162, 1, // Opcode: FSUB
/* 13516 */   MCD::OPC_FilterValue, 41, 11, 0, // Skip to: 13531
/* 13520 */   MCD::OPC_CheckField, 6, 5, 0, 25, 1, // Skip to: 13807
/* 13526 */   MCD::OPC_Decode, 210, 5, 162, 1, // Opcode: FSUBo
/* 13531 */   MCD::OPC_FilterValue, 42, 11, 0, // Skip to: 13546
/* 13535 */   MCD::OPC_CheckField, 6, 5, 0, 10, 1, // Skip to: 13807
/* 13541 */   MCD::OPC_Decode, 232, 4, 162, 1, // Opcode: FADD
/* 13546 */   MCD::OPC_FilterValue, 43, 11, 0, // Skip to: 13561
/* 13550 */   MCD::OPC_CheckField, 6, 5, 0, 251, 0, // Skip to: 13807
/* 13556 */   MCD::OPC_Decode, 235, 4, 162, 1, // Opcode: FADDo
/* 13561 */   MCD::OPC_FilterValue, 44, 17, 0, // Skip to: 13582
/* 13565 */   MCD::OPC_CheckField, 16, 5, 0, 236, 0, // Skip to: 13807
/* 13571 */   MCD::OPC_CheckField, 6, 5, 0, 230, 0, // Skip to: 13807
/* 13577 */   MCD::OPC_Decode, 203, 5, 161, 1, // Opcode: FSQRT
/* 13582 */   MCD::OPC_FilterValue, 45, 17, 0, // Skip to: 13603
/* 13586 */   MCD::OPC_CheckField, 16, 5, 0, 215, 0, // Skip to: 13807
/* 13592 */   MCD::OPC_CheckField, 6, 5, 0, 209, 0, // Skip to: 13807
/* 13598 */   MCD::OPC_Decode, 206, 5, 161, 1, // Opcode: FSQRTo
/* 13603 */   MCD::OPC_FilterValue, 46, 5, 0, // Skip to: 13612
/* 13607 */   MCD::OPC_Decode, 201, 5, 163, 1, // Opcode: FSELS
/* 13612 */   MCD::OPC_FilterValue, 47, 5, 0, // Skip to: 13621
/* 13616 */   MCD::OPC_Decode, 202, 5, 163, 1, // Opcode: FSELSo
/* 13621 */   MCD::OPC_FilterValue, 48, 17, 0, // Skip to: 13642
/* 13625 */   MCD::OPC_CheckField, 16, 5, 0, 176, 0, // Skip to: 13807
/* 13631 */   MCD::OPC_CheckField, 6, 5, 0, 170, 0, // Skip to: 13807
/* 13637 */   MCD::OPC_Decode, 173, 5, 161, 1, // Opcode: FRE
/* 13642 */   MCD::OPC_FilterValue, 49, 17, 0, // Skip to: 13663
/* 13646 */   MCD::OPC_CheckField, 16, 5, 0, 155, 0, // Skip to: 13807
/* 13652 */   MCD::OPC_CheckField, 6, 5, 0, 149, 0, // Skip to: 13807
/* 13658 */   MCD::OPC_Decode, 176, 5, 161, 1, // Opcode: FREo
/* 13663 */   MCD::OPC_FilterValue, 50, 11, 0, // Skip to: 13678
/* 13667 */   MCD::OPC_CheckField, 11, 5, 0, 134, 0, // Skip to: 13807
/* 13673 */   MCD::OPC_Decode, 153, 5, 164, 1, // Opcode: FMUL
/* 13678 */   MCD::OPC_FilterValue, 51, 11, 0, // Skip to: 13693
/* 13682 */   MCD::OPC_CheckField, 11, 5, 0, 119, 0, // Skip to: 13807
/* 13688 */   MCD::OPC_Decode, 156, 5, 164, 1, // Opcode: FMULo
/* 13693 */   MCD::OPC_FilterValue, 52, 17, 0, // Skip to: 13714
/* 13697 */   MCD::OPC_CheckField, 16, 5, 0, 104, 0, // Skip to: 13807
/* 13703 */   MCD::OPC_CheckField, 6, 5, 0, 98, 0, // Skip to: 13807
/* 13709 */   MCD::OPC_Decode, 195, 5, 161, 1, // Opcode: FRSQRTE
/* 13714 */   MCD::OPC_FilterValue, 53, 17, 0, // Skip to: 13735
/* 13718 */   MCD::OPC_CheckField, 16, 5, 0, 83, 0, // Skip to: 13807
/* 13724 */   MCD::OPC_CheckField, 6, 5, 0, 77, 0, // Skip to: 13807
/* 13730 */   MCD::OPC_Decode, 198, 5, 161, 1, // Opcode: FRSQRTEo
/* 13735 */   MCD::OPC_FilterValue, 56, 5, 0, // Skip to: 13744
/* 13739 */   MCD::OPC_Decode, 149, 5, 165, 1, // Opcode: FMSUB
/* 13744 */   MCD::OPC_FilterValue, 57, 5, 0, // Skip to: 13753
/* 13748 */   MCD::OPC_Decode, 152, 5, 165, 1, // Opcode: FMSUBo
/* 13753 */   MCD::OPC_FilterValue, 58, 5, 0, // Skip to: 13762
/* 13757 */   MCD::OPC_Decode, 143, 5, 165, 1, // Opcode: FMADD
/* 13762 */   MCD::OPC_FilterValue, 59, 5, 0, // Skip to: 13771
/* 13766 */   MCD::OPC_Decode, 146, 5, 165, 1, // Opcode: FMADDo
/* 13771 */   MCD::OPC_FilterValue, 60, 5, 0, // Skip to: 13780
/* 13775 */   MCD::OPC_Decode, 169, 5, 165, 1, // Opcode: FNMSUB
/* 13780 */   MCD::OPC_FilterValue, 61, 5, 0, // Skip to: 13789
/* 13784 */   MCD::OPC_Decode, 172, 5, 165, 1, // Opcode: FNMSUBo
/* 13789 */   MCD::OPC_FilterValue, 62, 5, 0, // Skip to: 13798
/* 13793 */   MCD::OPC_Decode, 165, 5, 165, 1, // Opcode: FNMADD
/* 13798 */   MCD::OPC_FilterValue, 63, 5, 0, // Skip to: 13807
/* 13802 */   MCD::OPC_Decode, 168, 5, 165, 1, // Opcode: FNMADDo
/* 13807 */   MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableQPX32[] = {
/* 0 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3 */       MCD::OPC_FilterValue, 0, 63, 0, // Skip to: 70
/* 7 */       MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 10 */      MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 25
/* 14 */      MCD::OPC_CheckField, 26, 6, 4, 178, 7, // Skip to: 1990
/* 20 */      MCD::OPC_Decode, 220, 7, 166, 1, // Opcode: QVFCMPEQb
/* 25 */      MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 40
/* 29 */      MCD::OPC_CheckField, 26, 6, 4, 163, 7, // Skip to: 1990
/* 35 */      MCD::OPC_Decode, 223, 7, 166, 1, // Opcode: QVFCMPGTb
/* 40 */      MCD::OPC_FilterValue, 2, 11, 0, // Skip to: 55
/* 44 */      MCD::OPC_CheckField, 26, 6, 4, 148, 7, // Skip to: 1990
/* 50 */      MCD::OPC_Decode, 162, 8, 166, 1, // Opcode: QVFTSTNANb
/* 55 */      MCD::OPC_FilterValue, 3, 139, 7, // Skip to: 1990
/* 59 */      MCD::OPC_CheckField, 26, 6, 4, 133, 7, // Skip to: 1990
/* 65 */      MCD::OPC_Decode, 226, 7, 166, 1, // Opcode: QVFCMPLTb
/* 70 */      MCD::OPC_FilterValue, 2, 21, 0, // Skip to: 95
/* 74 */      MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 77 */      MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 86
/* 81 */      MCD::OPC_Decode, 171, 8, 167, 1, // Opcode: QVFXXMADDS
/* 86 */      MCD::OPC_FilterValue, 4, 108, 7, // Skip to: 1990
/* 90 */      MCD::OPC_Decode, 170, 8, 167, 1, // Opcode: QVFXXMADD
/* 95 */      MCD::OPC_FilterValue, 6, 21, 0, // Skip to: 120
/* 99 */      MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 102 */     MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 111
/* 106 */     MCD::OPC_Decode, 169, 8, 167, 1, // Opcode: QVFXXCPNMADDS
/* 111 */     MCD::OPC_FilterValue, 4, 83, 7, // Skip to: 1990
/* 115 */     MCD::OPC_Decode, 168, 8, 167, 1, // Opcode: QVFXXCPNMADD
/* 120 */     MCD::OPC_FilterValue, 8, 17, 0, // Skip to: 141
/* 124 */     MCD::OPC_CheckField, 26, 6, 4, 68, 7, // Skip to: 1990
/* 130 */     MCD::OPC_CheckField, 6, 1, 0, 62, 7, // Skip to: 1990
/* 136 */     MCD::OPC_Decode, 240, 7, 168, 1, // Opcode: QVFLOGICALb
/* 141 */     MCD::OPC_FilterValue, 10, 191, 0, // Skip to: 336
/* 145 */     MCD::OPC_ExtractField, 6, 3,  // Inst{8-6} ...
/* 148 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 163
/* 152 */     MCD::OPC_CheckField, 26, 6, 4, 40, 7, // Skip to: 1990
/* 158 */     MCD::OPC_Decode, 203, 7, 169, 1, // Opcode: QVALIGNI
/* 163 */     MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 184
/* 167 */     MCD::OPC_CheckField, 26, 6, 4, 25, 7, // Skip to: 1990
/* 173 */     MCD::OPC_CheckField, 11, 5, 0, 19, 7, // Skip to: 1990
/* 179 */     MCD::OPC_Decode, 206, 7, 170, 1, // Opcode: QVESPLATI
/* 184 */     MCD::OPC_FilterValue, 4, 37, 0, // Skip to: 225
/* 188 */     MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 191 */     MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 200
/* 195 */     MCD::OPC_Decode, 174, 8, 171, 1, // Opcode: QVGPCI
/* 200 */     MCD::OPC_FilterValue, 31, 250, 6, // Skip to: 1990
/* 204 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 207 */     MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 216
/* 211 */     MCD::OPC_Decode, 218, 8, 172, 1, // Opcode: QVSTFCSXI
/* 216 */     MCD::OPC_FilterValue, 2, 234, 6, // Skip to: 1990
/* 220 */     MCD::OPC_Decode, 239, 8, 172, 1, // Opcode: QVSTFSXI
/* 225 */     MCD::OPC_FilterValue, 5, 33, 0, // Skip to: 262
/* 229 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 232 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 247
/* 236 */     MCD::OPC_CheckField, 26, 6, 31, 212, 6, // Skip to: 1990
/* 242 */     MCD::OPC_Decode, 214, 8, 172, 1, // Opcode: QVSTFCSUXI
/* 247 */     MCD::OPC_FilterValue, 2, 203, 6, // Skip to: 1990
/* 251 */     MCD::OPC_CheckField, 26, 6, 31, 197, 6, // Skip to: 1990
/* 257 */     MCD::OPC_Decode, 234, 8, 172, 1, // Opcode: QVSTFSUXI
/* 262 */     MCD::OPC_FilterValue, 6, 33, 0, // Skip to: 299
/* 266 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 269 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 284
/* 273 */     MCD::OPC_CheckField, 26, 6, 31, 175, 6, // Skip to: 1990
/* 279 */     MCD::OPC_Decode, 210, 8, 172, 1, // Opcode: QVSTFCDXI
/* 284 */     MCD::OPC_FilterValue, 2, 166, 6, // Skip to: 1990
/* 288 */     MCD::OPC_CheckField, 26, 6, 31, 160, 6, // Skip to: 1990
/* 294 */     MCD::OPC_Decode, 227, 8, 172, 1, // Opcode: QVSTFDXI
/* 299 */     MCD::OPC_FilterValue, 7, 151, 6, // Skip to: 1990
/* 303 */     MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 306 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 321
/* 310 */     MCD::OPC_CheckField, 26, 6, 31, 138, 6, // Skip to: 1990
/* 316 */     MCD::OPC_Decode, 206, 8, 172, 1, // Opcode: QVSTFCDUXI
/* 321 */     MCD::OPC_FilterValue, 2, 129, 6, // Skip to: 1990
/* 325 */     MCD::OPC_CheckField, 26, 6, 31, 123, 6, // Skip to: 1990
/* 331 */     MCD::OPC_Decode, 223, 8, 172, 1, // Opcode: QVSTFDUXI
/* 336 */     MCD::OPC_FilterValue, 11, 123, 0, // Skip to: 463
/* 340 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 343 */     MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 358
/* 347 */     MCD::OPC_CheckField, 26, 6, 31, 101, 6, // Skip to: 1990
/* 353 */     MCD::OPC_Decode, 219, 8, 172, 1, // Opcode: QVSTFCSXIA
/* 358 */     MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 373
/* 362 */     MCD::OPC_CheckField, 26, 6, 31, 86, 6, // Skip to: 1990
/* 368 */     MCD::OPC_Decode, 215, 8, 172, 1, // Opcode: QVSTFCSUXIA
/* 373 */     MCD::OPC_FilterValue, 6, 11, 0, // Skip to: 388
/* 377 */     MCD::OPC_CheckField, 26, 6, 31, 71, 6, // Skip to: 1990
/* 383 */     MCD::OPC_Decode, 211, 8, 172, 1, // Opcode: QVSTFCDXIA
/* 388 */     MCD::OPC_FilterValue, 7, 11, 0, // Skip to: 403
/* 392 */     MCD::OPC_CheckField, 26, 6, 31, 56, 6, // Skip to: 1990
/* 398 */     MCD::OPC_Decode, 207, 8, 172, 1, // Opcode: QVSTFCDUXIA
/* 403 */     MCD::OPC_FilterValue, 20, 11, 0, // Skip to: 418
/* 407 */     MCD::OPC_CheckField, 26, 6, 31, 41, 6, // Skip to: 1990
/* 413 */     MCD::OPC_Decode, 240, 8, 172, 1, // Opcode: QVSTFSXIA
/* 418 */     MCD::OPC_FilterValue, 21, 11, 0, // Skip to: 433
/* 422 */     MCD::OPC_CheckField, 26, 6, 31, 26, 6, // Skip to: 1990
/* 428 */     MCD::OPC_Decode, 235, 8, 172, 1, // Opcode: QVSTFSUXIA
/* 433 */     MCD::OPC_FilterValue, 22, 11, 0, // Skip to: 448
/* 437 */     MCD::OPC_CheckField, 26, 6, 31, 11, 6, // Skip to: 1990
/* 443 */     MCD::OPC_Decode, 228, 8, 172, 1, // Opcode: QVSTFDXIA
/* 448 */     MCD::OPC_FilterValue, 23, 2, 6, // Skip to: 1990
/* 452 */     MCD::OPC_CheckField, 26, 6, 31, 252, 5, // Skip to: 1990
/* 458 */     MCD::OPC_Decode, 224, 8, 172, 1, // Opcode: QVSTFDUXIA
/* 463 */     MCD::OPC_FilterValue, 12, 55, 0, // Skip to: 522
/* 467 */     MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 470 */     MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 479
/* 474 */     MCD::OPC_Decode, 136, 8, 167, 1, // Opcode: QVFPERM
/* 479 */     MCD::OPC_FilterValue, 31, 227, 5, // Skip to: 1990
/* 483 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 486 */     MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 495
/* 490 */     MCD::OPC_Decode, 203, 8, 172, 1, // Opcode: QVLPCRSX
/* 495 */     MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 504
/* 499 */     MCD::OPC_Decode, 202, 8, 172, 1, // Opcode: QVLPCRDX
/* 504 */     MCD::OPC_FilterValue, 16, 5, 0, // Skip to: 513
/* 508 */     MCD::OPC_Decode, 200, 8, 172, 1, // Opcode: QVLPCLSX
/* 513 */     MCD::OPC_FilterValue, 18, 193, 5, // Skip to: 1990
/* 517 */     MCD::OPC_Decode, 199, 8, 172, 1, // Opcode: QVLPCLDX
/* 522 */     MCD::OPC_FilterValue, 14, 32, 1, // Skip to: 814
/* 526 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 529 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 544
/* 533 */     MCD::OPC_CheckField, 26, 6, 31, 171, 5, // Skip to: 1990
/* 539 */     MCD::OPC_Decode, 181, 8, 172, 1, // Opcode: QVLFCSX
/* 544 */     MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 559
/* 548 */     MCD::OPC_CheckField, 26, 6, 31, 156, 5, // Skip to: 1990
/* 554 */     MCD::OPC_Decode, 179, 8, 172, 1, // Opcode: QVLFCSUX
/* 559 */     MCD::OPC_FilterValue, 2, 11, 0, // Skip to: 574
/* 563 */     MCD::OPC_CheckField, 26, 6, 31, 141, 5, // Skip to: 1990
/* 569 */     MCD::OPC_Decode, 177, 8, 172, 1, // Opcode: QVLFCDX
/* 574 */     MCD::OPC_FilterValue, 3, 11, 0, // Skip to: 589
/* 578 */     MCD::OPC_CheckField, 26, 6, 31, 126, 5, // Skip to: 1990
/* 584 */     MCD::OPC_Decode, 175, 8, 172, 1, // Opcode: QVLFCDUX
/* 589 */     MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 604
/* 593 */     MCD::OPC_CheckField, 26, 6, 31, 111, 5, // Skip to: 1990
/* 599 */     MCD::OPC_Decode, 216, 8, 172, 1, // Opcode: QVSTFCSX
/* 604 */     MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 619
/* 608 */     MCD::OPC_CheckField, 26, 6, 31, 96, 5, // Skip to: 1990
/* 614 */     MCD::OPC_Decode, 212, 8, 172, 1, // Opcode: QVSTFCSUX
/* 619 */     MCD::OPC_FilterValue, 6, 11, 0, // Skip to: 634
/* 623 */     MCD::OPC_CheckField, 26, 6, 31, 81, 5, // Skip to: 1990
/* 629 */     MCD::OPC_Decode, 208, 8, 172, 1, // Opcode: QVSTFCDX
/* 634 */     MCD::OPC_FilterValue, 7, 11, 0, // Skip to: 649
/* 638 */     MCD::OPC_CheckField, 26, 6, 31, 66, 5, // Skip to: 1990
/* 644 */     MCD::OPC_Decode, 204, 8, 172, 1, // Opcode: QVSTFCDUX
/* 649 */     MCD::OPC_FilterValue, 16, 11, 0, // Skip to: 664
/* 653 */     MCD::OPC_CheckField, 26, 6, 31, 51, 5, // Skip to: 1990
/* 659 */     MCD::OPC_Decode, 195, 8, 172, 1, // Opcode: QVLFSX
/* 664 */     MCD::OPC_FilterValue, 17, 11, 0, // Skip to: 679
/* 668 */     MCD::OPC_CheckField, 26, 6, 31, 36, 5, // Skip to: 1990
/* 674 */     MCD::OPC_Decode, 193, 8, 173, 1, // Opcode: QVLFSUX
/* 679 */     MCD::OPC_FilterValue, 18, 11, 0, // Skip to: 694
/* 683 */     MCD::OPC_CheckField, 26, 6, 31, 21, 5, // Skip to: 1990
/* 689 */     MCD::OPC_Decode, 186, 8, 172, 1, // Opcode: QVLFDX
/* 694 */     MCD::OPC_FilterValue, 19, 11, 0, // Skip to: 709
/* 698 */     MCD::OPC_CheckField, 26, 6, 31, 6, 5, // Skip to: 1990
/* 704 */     MCD::OPC_Decode, 184, 8, 174, 1, // Opcode: QVLFDUX
/* 709 */     MCD::OPC_FilterValue, 20, 11, 0, // Skip to: 724
/* 713 */     MCD::OPC_CheckField, 26, 6, 31, 247, 4, // Skip to: 1990
/* 719 */     MCD::OPC_Decode, 237, 8, 172, 1, // Opcode: QVSTFSX
/* 724 */     MCD::OPC_FilterValue, 21, 11, 0, // Skip to: 739
/* 728 */     MCD::OPC_CheckField, 26, 6, 31, 232, 4, // Skip to: 1990
/* 734 */     MCD::OPC_Decode, 232, 8, 175, 1, // Opcode: QVSTFSUX
/* 739 */     MCD::OPC_FilterValue, 22, 11, 0, // Skip to: 754
/* 743 */     MCD::OPC_CheckField, 26, 6, 31, 217, 4, // Skip to: 1990
/* 749 */     MCD::OPC_Decode, 225, 8, 172, 1, // Opcode: QVSTFDX
/* 754 */     MCD::OPC_FilterValue, 23, 11, 0, // Skip to: 769
/* 758 */     MCD::OPC_CheckField, 26, 6, 31, 202, 4, // Skip to: 1990
/* 764 */     MCD::OPC_Decode, 221, 8, 176, 1, // Opcode: QVSTFDUX
/* 769 */     MCD::OPC_FilterValue, 26, 11, 0, // Skip to: 784
/* 773 */     MCD::OPC_CheckField, 26, 6, 31, 187, 4, // Skip to: 1990
/* 779 */     MCD::OPC_Decode, 191, 8, 172, 1, // Opcode: QVLFIWZX
/* 784 */     MCD::OPC_FilterValue, 27, 11, 0, // Skip to: 799
/* 788 */     MCD::OPC_CheckField, 26, 6, 31, 172, 4, // Skip to: 1990
/* 794 */     MCD::OPC_Decode, 189, 8, 172, 1, // Opcode: QVLFIWAX
/* 799 */     MCD::OPC_FilterValue, 30, 163, 4, // Skip to: 1990
/* 803 */     MCD::OPC_CheckField, 26, 6, 31, 157, 4, // Skip to: 1990
/* 809 */     MCD::OPC_Decode, 230, 8, 172, 1, // Opcode: QVSTFIWX
/* 814 */     MCD::OPC_FilterValue, 15, 32, 1, // Skip to: 1106
/* 818 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 821 */     MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 836
/* 825 */     MCD::OPC_CheckField, 26, 6, 31, 135, 4, // Skip to: 1990
/* 831 */     MCD::OPC_Decode, 182, 8, 172, 1, // Opcode: QVLFCSXA
/* 836 */     MCD::OPC_FilterValue, 1, 11, 0, // Skip to: 851
/* 840 */     MCD::OPC_CheckField, 26, 6, 31, 120, 4, // Skip to: 1990
/* 846 */     MCD::OPC_Decode, 180, 8, 172, 1, // Opcode: QVLFCSUXA
/* 851 */     MCD::OPC_FilterValue, 2, 11, 0, // Skip to: 866
/* 855 */     MCD::OPC_CheckField, 26, 6, 31, 105, 4, // Skip to: 1990
/* 861 */     MCD::OPC_Decode, 178, 8, 172, 1, // Opcode: QVLFCDXA
/* 866 */     MCD::OPC_FilterValue, 3, 11, 0, // Skip to: 881
/* 870 */     MCD::OPC_CheckField, 26, 6, 31, 90, 4, // Skip to: 1990
/* 876 */     MCD::OPC_Decode, 176, 8, 172, 1, // Opcode: QVLFCDUXA
/* 881 */     MCD::OPC_FilterValue, 4, 11, 0, // Skip to: 896
/* 885 */     MCD::OPC_CheckField, 26, 6, 31, 75, 4, // Skip to: 1990
/* 891 */     MCD::OPC_Decode, 217, 8, 172, 1, // Opcode: QVSTFCSXA
/* 896 */     MCD::OPC_FilterValue, 5, 11, 0, // Skip to: 911
/* 900 */     MCD::OPC_CheckField, 26, 6, 31, 60, 4, // Skip to: 1990
/* 906 */     MCD::OPC_Decode, 213, 8, 172, 1, // Opcode: QVSTFCSUXA
/* 911 */     MCD::OPC_FilterValue, 6, 11, 0, // Skip to: 926
/* 915 */     MCD::OPC_CheckField, 26, 6, 31, 45, 4, // Skip to: 1990
/* 921 */     MCD::OPC_Decode, 209, 8, 172, 1, // Opcode: QVSTFCDXA
/* 926 */     MCD::OPC_FilterValue, 7, 11, 0, // Skip to: 941
/* 930 */     MCD::OPC_CheckField, 26, 6, 31, 30, 4, // Skip to: 1990
/* 936 */     MCD::OPC_Decode, 205, 8, 172, 1, // Opcode: QVSTFCDUXA
/* 941 */     MCD::OPC_FilterValue, 16, 11, 0, // Skip to: 956
/* 945 */     MCD::OPC_CheckField, 26, 6, 31, 15, 4, // Skip to: 1990
/* 951 */     MCD::OPC_Decode, 196, 8, 172, 1, // Opcode: QVLFSXA
/* 956 */     MCD::OPC_FilterValue, 17, 11, 0, // Skip to: 971
/* 960 */     MCD::OPC_CheckField, 26, 6, 31, 0, 4, // Skip to: 1990
/* 966 */     MCD::OPC_Decode, 194, 8, 172, 1, // Opcode: QVLFSUXA
/* 971 */     MCD::OPC_FilterValue, 18, 11, 0, // Skip to: 986
/* 975 */     MCD::OPC_CheckField, 26, 6, 31, 241, 3, // Skip to: 1990
/* 981 */     MCD::OPC_Decode, 187, 8, 172, 1, // Opcode: QVLFDXA
/* 986 */     MCD::OPC_FilterValue, 19, 11, 0, // Skip to: 1001
/* 990 */     MCD::OPC_CheckField, 26, 6, 31, 226, 3, // Skip to: 1990
/* 996 */     MCD::OPC_Decode, 185, 8, 172, 1, // Opcode: QVLFDUXA
/* 1001 */    MCD::OPC_FilterValue, 20, 11, 0, // Skip to: 1016
/* 1005 */    MCD::OPC_CheckField, 26, 6, 31, 211, 3, // Skip to: 1990
/* 1011 */    MCD::OPC_Decode, 238, 8, 172, 1, // Opcode: QVSTFSXA
/* 1016 */    MCD::OPC_FilterValue, 21, 11, 0, // Skip to: 1031
/* 1020 */    MCD::OPC_CheckField, 26, 6, 31, 196, 3, // Skip to: 1990
/* 1026 */    MCD::OPC_Decode, 233, 8, 172, 1, // Opcode: QVSTFSUXA
/* 1031 */    MCD::OPC_FilterValue, 22, 11, 0, // Skip to: 1046
/* 1035 */    MCD::OPC_CheckField, 26, 6, 31, 181, 3, // Skip to: 1990
/* 1041 */    MCD::OPC_Decode, 226, 8, 172, 1, // Opcode: QVSTFDXA
/* 1046 */    MCD::OPC_FilterValue, 23, 11, 0, // Skip to: 1061
/* 1050 */    MCD::OPC_CheckField, 26, 6, 31, 166, 3, // Skip to: 1990
/* 1056 */    MCD::OPC_Decode, 222, 8, 172, 1, // Opcode: QVSTFDUXA
/* 1061 */    MCD::OPC_FilterValue, 26, 11, 0, // Skip to: 1076
/* 1065 */    MCD::OPC_CheckField, 26, 6, 31, 151, 3, // Skip to: 1990
/* 1071 */    MCD::OPC_Decode, 192, 8, 172, 1, // Opcode: QVLFIWZXA
/* 1076 */    MCD::OPC_FilterValue, 27, 11, 0, // Skip to: 1091
/* 1080 */    MCD::OPC_CheckField, 26, 6, 31, 136, 3, // Skip to: 1990
/* 1086 */    MCD::OPC_Decode, 190, 8, 172, 1, // Opcode: QVLFIWAXA
/* 1091 */    MCD::OPC_FilterValue, 30, 127, 3, // Skip to: 1990
/* 1095 */    MCD::OPC_CheckField, 26, 6, 31, 121, 3, // Skip to: 1990
/* 1101 */    MCD::OPC_Decode, 231, 8, 172, 1, // Opcode: QVSTFIWXA
/* 1106 */    MCD::OPC_FilterValue, 16, 186, 0, // Skip to: 1296
/* 1110 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1113 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1128
/* 1117 */    MCD::OPC_CheckField, 26, 6, 4, 99, 3, // Skip to: 1990
/* 1123 */    MCD::OPC_Decode, 228, 7, 177, 1, // Opcode: QVFCPSGN
/* 1128 */    MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 1149
/* 1132 */    MCD::OPC_CheckField, 26, 6, 4, 84, 3, // Skip to: 1990
/* 1138 */    MCD::OPC_CheckField, 16, 5, 0, 78, 3, // Skip to: 1990
/* 1144 */    MCD::OPC_Decode, 128, 8, 178, 1, // Opcode: QVFNEG
/* 1149 */    MCD::OPC_FilterValue, 2, 17, 0, // Skip to: 1170
/* 1153 */    MCD::OPC_CheckField, 26, 6, 4, 63, 3, // Skip to: 1990
/* 1159 */    MCD::OPC_CheckField, 16, 5, 0, 57, 3, // Skip to: 1990
/* 1165 */    MCD::OPC_Decode, 245, 7, 178, 1, // Opcode: QVFMR
/* 1170 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 1191
/* 1174 */    MCD::OPC_CheckField, 26, 6, 4, 42, 3, // Skip to: 1990
/* 1180 */    MCD::OPC_CheckField, 16, 5, 0, 36, 3, // Skip to: 1990
/* 1186 */    MCD::OPC_Decode, 254, 7, 178, 1, // Opcode: QVFNABS
/* 1191 */    MCD::OPC_FilterValue, 8, 17, 0, // Skip to: 1212
/* 1195 */    MCD::OPC_CheckField, 26, 6, 4, 21, 3, // Skip to: 1990
/* 1201 */    MCD::OPC_CheckField, 16, 5, 0, 15, 3, // Skip to: 1990
/* 1207 */    MCD::OPC_Decode, 209, 7, 178, 1, // Opcode: QVFABS
/* 1212 */    MCD::OPC_FilterValue, 12, 17, 0, // Skip to: 1233
/* 1216 */    MCD::OPC_CheckField, 26, 6, 4, 0, 3, // Skip to: 1990
/* 1222 */    MCD::OPC_CheckField, 16, 5, 0, 250, 2, // Skip to: 1990
/* 1228 */    MCD::OPC_Decode, 143, 8, 178, 1, // Opcode: QVFRIN
/* 1233 */    MCD::OPC_FilterValue, 13, 17, 0, // Skip to: 1254
/* 1237 */    MCD::OPC_CheckField, 26, 6, 4, 235, 2, // Skip to: 1990
/* 1243 */    MCD::OPC_CheckField, 16, 5, 0, 229, 2, // Skip to: 1990
/* 1249 */    MCD::OPC_Decode, 147, 8, 178, 1, // Opcode: QVFRIZ
/* 1254 */    MCD::OPC_FilterValue, 14, 17, 0, // Skip to: 1275
/* 1258 */    MCD::OPC_CheckField, 26, 6, 4, 214, 2, // Skip to: 1990
/* 1264 */    MCD::OPC_CheckField, 16, 5, 0, 208, 2, // Skip to: 1990
/* 1270 */    MCD::OPC_Decode, 145, 8, 178, 1, // Opcode: QVFRIP
/* 1275 */    MCD::OPC_FilterValue, 15, 199, 2, // Skip to: 1990
/* 1279 */    MCD::OPC_CheckField, 26, 6, 4, 193, 2, // Skip to: 1990
/* 1285 */    MCD::OPC_CheckField, 16, 5, 0, 187, 2, // Skip to: 1990
/* 1291 */    MCD::OPC_Decode, 141, 8, 178, 1, // Opcode: QVFRIM
/* 1296 */    MCD::OPC_FilterValue, 18, 21, 0, // Skip to: 1321
/* 1300 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1303 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1312
/* 1307 */    MCD::OPC_Decode, 165, 8, 167, 1, // Opcode: QVFXMADDS
/* 1312 */    MCD::OPC_FilterValue, 4, 162, 2, // Skip to: 1990
/* 1316 */    MCD::OPC_Decode, 164, 8, 167, 1, // Opcode: QVFXMADD
/* 1321 */    MCD::OPC_FilterValue, 22, 21, 0, // Skip to: 1346
/* 1325 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1328 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1337
/* 1332 */    MCD::OPC_Decode, 173, 8, 167, 1, // Opcode: QVFXXNPMADDS
/* 1337 */    MCD::OPC_FilterValue, 4, 137, 2, // Skip to: 1990
/* 1341 */    MCD::OPC_Decode, 172, 8, 167, 1, // Opcode: QVFXXNPMADD
/* 1346 */    MCD::OPC_FilterValue, 24, 23, 0, // Skip to: 1373
/* 1350 */    MCD::OPC_CheckField, 26, 6, 4, 122, 2, // Skip to: 1990
/* 1356 */    MCD::OPC_CheckField, 16, 5, 0, 116, 2, // Skip to: 1990
/* 1362 */    MCD::OPC_CheckField, 6, 5, 0, 110, 2, // Skip to: 1990
/* 1368 */    MCD::OPC_Decode, 150, 8, 179, 1, // Opcode: QVFRSPs
/* 1373 */    MCD::OPC_FilterValue, 28, 161, 0, // Skip to: 1538
/* 1377 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1380 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 1401
/* 1384 */    MCD::OPC_CheckField, 26, 6, 4, 88, 2, // Skip to: 1990
/* 1390 */    MCD::OPC_CheckField, 16, 5, 0, 82, 2, // Skip to: 1990
/* 1396 */    MCD::OPC_Decode, 235, 7, 178, 1, // Opcode: QVFCTIW
/* 1401 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 1422
/* 1405 */    MCD::OPC_CheckField, 26, 6, 4, 67, 2, // Skip to: 1990
/* 1411 */    MCD::OPC_CheckField, 16, 5, 0, 61, 2, // Skip to: 1990
/* 1417 */    MCD::OPC_Decode, 236, 7, 178, 1, // Opcode: QVFCTIWU
/* 1422 */    MCD::OPC_FilterValue, 25, 17, 0, // Skip to: 1443
/* 1426 */    MCD::OPC_CheckField, 26, 6, 4, 46, 2, // Skip to: 1990
/* 1432 */    MCD::OPC_CheckField, 16, 5, 0, 40, 2, // Skip to: 1990
/* 1438 */    MCD::OPC_Decode, 230, 7, 178, 1, // Opcode: QVFCTID
/* 1443 */    MCD::OPC_FilterValue, 26, 33, 0, // Skip to: 1480
/* 1447 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1450 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1465
/* 1454 */    MCD::OPC_CheckField, 16, 5, 0, 18, 2, // Skip to: 1990
/* 1460 */    MCD::OPC_Decode, 215, 7, 178, 1, // Opcode: QVFCFIDS
/* 1465 */    MCD::OPC_FilterValue, 4, 9, 2, // Skip to: 1990
/* 1469 */    MCD::OPC_CheckField, 16, 5, 0, 3, 2, // Skip to: 1990
/* 1475 */    MCD::OPC_Decode, 214, 7, 178, 1, // Opcode: QVFCFID
/* 1480 */    MCD::OPC_FilterValue, 29, 17, 0, // Skip to: 1501
/* 1484 */    MCD::OPC_CheckField, 26, 6, 4, 244, 1, // Skip to: 1990
/* 1490 */    MCD::OPC_CheckField, 16, 5, 0, 238, 1, // Skip to: 1990
/* 1496 */    MCD::OPC_Decode, 231, 7, 178, 1, // Opcode: QVFCTIDU
/* 1501 */    MCD::OPC_FilterValue, 30, 229, 1, // Skip to: 1990
/* 1505 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1508 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1523
/* 1512 */    MCD::OPC_CheckField, 16, 5, 0, 216, 1, // Skip to: 1990
/* 1518 */    MCD::OPC_Decode, 217, 7, 178, 1, // Opcode: QVFCFIDUS
/* 1523 */    MCD::OPC_FilterValue, 4, 207, 1, // Skip to: 1990
/* 1527 */    MCD::OPC_CheckField, 16, 5, 0, 201, 1, // Skip to: 1990
/* 1533 */    MCD::OPC_Decode, 216, 7, 178, 1, // Opcode: QVFCFIDU
/* 1538 */    MCD::OPC_FilterValue, 30, 87, 0, // Skip to: 1629
/* 1542 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1545 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 1566
/* 1549 */    MCD::OPC_CheckField, 26, 6, 4, 179, 1, // Skip to: 1990
/* 1555 */    MCD::OPC_CheckField, 16, 5, 0, 173, 1, // Skip to: 1990
/* 1561 */    MCD::OPC_Decode, 238, 7, 178, 1, // Opcode: QVFCTIWZ
/* 1566 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 1587
/* 1570 */    MCD::OPC_CheckField, 26, 6, 4, 158, 1, // Skip to: 1990
/* 1576 */    MCD::OPC_CheckField, 16, 5, 0, 152, 1, // Skip to: 1990
/* 1582 */    MCD::OPC_Decode, 237, 7, 178, 1, // Opcode: QVFCTIWUZ
/* 1587 */    MCD::OPC_FilterValue, 25, 17, 0, // Skip to: 1608
/* 1591 */    MCD::OPC_CheckField, 26, 6, 4, 137, 1, // Skip to: 1990
/* 1597 */    MCD::OPC_CheckField, 16, 5, 0, 131, 1, // Skip to: 1990
/* 1603 */    MCD::OPC_Decode, 233, 7, 178, 1, // Opcode: QVFCTIDZ
/* 1608 */    MCD::OPC_FilterValue, 29, 122, 1, // Skip to: 1990
/* 1612 */    MCD::OPC_CheckField, 26, 6, 4, 116, 1, // Skip to: 1990
/* 1618 */    MCD::OPC_CheckField, 16, 5, 0, 110, 1, // Skip to: 1990
/* 1624 */    MCD::OPC_Decode, 232, 7, 178, 1, // Opcode: QVFCTIDUZ
/* 1629 */    MCD::OPC_FilterValue, 34, 33, 0, // Skip to: 1666
/* 1633 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1636 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1651
/* 1640 */    MCD::OPC_CheckField, 11, 5, 0, 88, 1, // Skip to: 1990
/* 1646 */    MCD::OPC_Decode, 167, 8, 180, 1, // Opcode: QVFXMULS
/* 1651 */    MCD::OPC_FilterValue, 4, 79, 1, // Skip to: 1990
/* 1655 */    MCD::OPC_CheckField, 11, 5, 0, 73, 1, // Skip to: 1990
/* 1661 */    MCD::OPC_Decode, 166, 8, 180, 1, // Opcode: QVFXMUL
/* 1666 */    MCD::OPC_FilterValue, 40, 33, 0, // Skip to: 1703
/* 1670 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1673 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1688
/* 1677 */    MCD::OPC_CheckField, 6, 5, 0, 51, 1, // Skip to: 1990
/* 1683 */    MCD::OPC_Decode, 160, 8, 181, 1, // Opcode: QVFSUBSs
/* 1688 */    MCD::OPC_FilterValue, 4, 42, 1, // Skip to: 1990
/* 1692 */    MCD::OPC_CheckField, 6, 5, 0, 36, 1, // Skip to: 1990
/* 1698 */    MCD::OPC_Decode, 158, 8, 177, 1, // Opcode: QVFSUB
/* 1703 */    MCD::OPC_FilterValue, 42, 33, 0, // Skip to: 1740
/* 1707 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1710 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1725
/* 1714 */    MCD::OPC_CheckField, 6, 5, 0, 14, 1, // Skip to: 1990
/* 1720 */    MCD::OPC_Decode, 213, 7, 181, 1, // Opcode: QVFADDSs
/* 1725 */    MCD::OPC_FilterValue, 4, 5, 1, // Skip to: 1990
/* 1729 */    MCD::OPC_CheckField, 6, 5, 0, 255, 0, // Skip to: 1990
/* 1735 */    MCD::OPC_Decode, 211, 7, 177, 1, // Opcode: QVFADD
/* 1740 */    MCD::OPC_FilterValue, 46, 11, 0, // Skip to: 1755
/* 1744 */    MCD::OPC_CheckField, 26, 6, 4, 240, 0, // Skip to: 1990
/* 1750 */    MCD::OPC_Decode, 155, 8, 182, 1, // Opcode: QVFSELb
/* 1755 */    MCD::OPC_FilterValue, 48, 45, 0, // Skip to: 1804
/* 1759 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1762 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 1783
/* 1766 */    MCD::OPC_CheckField, 16, 5, 0, 218, 0, // Skip to: 1990
/* 1772 */    MCD::OPC_CheckField, 6, 5, 0, 212, 0, // Skip to: 1990
/* 1778 */    MCD::OPC_Decode, 139, 8, 178, 1, // Opcode: QVFRES
/* 1783 */    MCD::OPC_FilterValue, 4, 203, 0, // Skip to: 1990
/* 1787 */    MCD::OPC_CheckField, 16, 5, 0, 197, 0, // Skip to: 1990
/* 1793 */    MCD::OPC_CheckField, 6, 5, 0, 191, 0, // Skip to: 1990
/* 1799 */    MCD::OPC_Decode, 138, 8, 178, 1, // Opcode: QVFRE
/* 1804 */    MCD::OPC_FilterValue, 50, 33, 0, // Skip to: 1841
/* 1808 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1811 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 1826
/* 1815 */    MCD::OPC_CheckField, 11, 5, 0, 169, 0, // Skip to: 1990
/* 1821 */    MCD::OPC_Decode, 253, 7, 183, 1, // Opcode: QVFMULSs
/* 1826 */    MCD::OPC_FilterValue, 4, 160, 0, // Skip to: 1990
/* 1830 */    MCD::OPC_CheckField, 11, 5, 0, 154, 0, // Skip to: 1990
/* 1836 */    MCD::OPC_Decode, 251, 7, 180, 1, // Opcode: QVFMUL
/* 1841 */    MCD::OPC_FilterValue, 52, 45, 0, // Skip to: 1890
/* 1845 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1848 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 1869
/* 1852 */    MCD::OPC_CheckField, 16, 5, 0, 132, 0, // Skip to: 1990
/* 1858 */    MCD::OPC_CheckField, 6, 5, 0, 126, 0, // Skip to: 1990
/* 1864 */    MCD::OPC_Decode, 152, 8, 178, 1, // Opcode: QVFRSQRTES
/* 1869 */    MCD::OPC_FilterValue, 4, 117, 0, // Skip to: 1990
/* 1873 */    MCD::OPC_CheckField, 16, 5, 0, 111, 0, // Skip to: 1990
/* 1879 */    MCD::OPC_CheckField, 6, 5, 0, 105, 0, // Skip to: 1990
/* 1885 */    MCD::OPC_Decode, 151, 8, 178, 1, // Opcode: QVFRSQRTE
/* 1890 */    MCD::OPC_FilterValue, 56, 21, 0, // Skip to: 1915
/* 1894 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1897 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1906
/* 1901 */    MCD::OPC_Decode, 250, 7, 184, 1, // Opcode: QVFMSUBSs
/* 1906 */    MCD::OPC_FilterValue, 4, 80, 0, // Skip to: 1990
/* 1910 */    MCD::OPC_Decode, 248, 7, 167, 1, // Opcode: QVFMSUB
/* 1915 */    MCD::OPC_FilterValue, 58, 21, 0, // Skip to: 1940
/* 1919 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1922 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1931
/* 1926 */    MCD::OPC_Decode, 244, 7, 184, 1, // Opcode: QVFMADDSs
/* 1931 */    MCD::OPC_FilterValue, 4, 55, 0, // Skip to: 1990
/* 1935 */    MCD::OPC_Decode, 242, 7, 167, 1, // Opcode: QVFMADD
/* 1940 */    MCD::OPC_FilterValue, 60, 21, 0, // Skip to: 1965
/* 1944 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1947 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1956
/* 1951 */    MCD::OPC_Decode, 135, 8, 184, 1, // Opcode: QVFNMSUBSs
/* 1956 */    MCD::OPC_FilterValue, 4, 30, 0, // Skip to: 1990
/* 1960 */    MCD::OPC_Decode, 133, 8, 167, 1, // Opcode: QVFNMSUB
/* 1965 */    MCD::OPC_FilterValue, 62, 21, 0, // Skip to: 1990
/* 1969 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1972 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 1981
/* 1976 */    MCD::OPC_Decode, 132, 8, 184, 1, // Opcode: QVFNMADDSs
/* 1981 */    MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 1990
/* 1985 */    MCD::OPC_Decode, 130, 8, 167, 1, // Opcode: QVFNMADD
/* 1990 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  llvm_unreachable("Invalid index!");
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
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (decodeSImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 4);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeUImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeUImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRC_NOR0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 2, 14);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 2, 14);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 5, 7);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 2, 24);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 11, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeUImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 1) << 5;
    tmp |= fieldFromInstruction(insn, 6, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 1) << 5;
    tmp |= fieldFromInstruction(insn, 6, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 5, 1) << 5;
    tmp |= fieldFromInstruction(insn, 6, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 15, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 21, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 61:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 62:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 63:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 64:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    if (decodeUImmOperand<10>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 66:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 21, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 25, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCRRC0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCRRC0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRC_NOR0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 12, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 12, 8);
    if (decodeCRBitMOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 8);
    if (decodeCRBitMOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 79:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 81:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 85:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 86:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 21, 2);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 21, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 21, 2);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 105:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 112:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 113:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 21);
    if (decodeMemRIOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 114:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 21);
    if (decodeMemRIOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 115:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 21);
    if (decodeMemRIOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 116:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 2, 19);
    if (decodeMemRIXOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 117:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 2, 19);
    if (decodeMemRIXOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 118:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 119:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 120:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 121:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 122:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 123:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 124:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 125:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 126:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 127:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 128:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 129:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 130:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 131:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 132:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 133:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 134:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 8);
    if (decodeUImmOperand<8>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 135:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 136:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 137:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 138:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 139:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 140:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 141:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 142:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 143:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 144:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 7);
    if (decodeUImmOperand<7>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 145:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 146:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 147:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 6;
    tmp |= fieldFromInstruction(insn, 6, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (decodeUImmOperand<7>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 148:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 1, 1) << 5;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 1) << 5;
    tmp |= fieldFromInstruction(insn, 6, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 149:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 1) << 5;
    tmp |= fieldFromInstruction(insn, 21, 5) << 0;
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 17);
    if (decodeMemRIX16Operands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 150:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 151:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 152:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 153:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 154:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 7);
    if (decodeUImmOperand<7>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 155:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 156:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 157:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 158:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 159:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 160:
    tmp = fieldFromInstruction(insn, 17, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 161:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 162:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 163:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 164:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 165:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 166:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 167:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 168:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 4);
    if (decodeUImmOperand<12>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 169:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 170:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 171:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 12);
    if (decodeUImmOperand<12>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 172:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 173:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 174:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 175:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 176:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 177:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 178:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 179:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 180:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 181:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 182:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQBRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 183:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 184:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeQSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
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
