#include "fatBinaryCtl.h"
#define __CUDAFATBINSECTION  ".nvFatBinSegment"
#define __CUDAFATBINDATASECTION  ".nv_fatbin"
asm(
".section .nv_fatbin, \"a\"\n"
".align 8\n"
"fatbinData:\n"
".quad 0x00100001ba55ed50,0x0000000000000288,0x0000005001010002,0x0000000000000238\n"
".quad 0x0000000000000000,0x0000002300010007,0x0000000800000040,0x0000000000000011\n"
".quad 0x0000000000000000,0x0000000000000000,0x2075632e74736574,0x0000000000000000\n"
".quad 0x33010102464c457f,0x0000000000000007,0x0000000100be0002,0x0000000000000000\n"
".quad 0x0000000000000190,0x0000000000000090,0x0038004000230523,0x0001000400400003\n"
".quad 0x7472747368732e00,0x747274732e006261,0x746d79732e006261,0x7368732e00006261\n"
".quad 0x732e006261747274,0x732e006261747274,0x0000006261746d79,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000300000001,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000040,0x000000000000001b,0x0000000000000000\n"
".quad 0x0000000000000001,0x0000000000000000,0x000000030000000b,0x0000000000000000\n"
".quad 0x0000000000000000,0x000000000000005b,0x000000000000001b,0x0000000000000000\n"
".quad 0x0000000000000001,0x0000000000000000,0x0000000200000013,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000078,0x0000000000000018,0x0000000000000002\n"
".quad 0x0000000000000008,0x0000000000000018,0x0000000500000006,0x0000000000000190\n"
".quad 0x0000000000000000,0x0000000000000000,0x00000000000000a8,0x00000000000000a8\n"
".quad 0x0000000000000008,0x0000000500000001,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000008\n"
".quad 0x0000000600000001,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000008\n"
".text");
#ifdef __cplusplus
extern "C" {
#endif
extern const unsigned long long fatbinData[83];
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
extern "C" {
#endif
static const __fatBinC_Wrapper_t __fatDeviceText __attribute__ ((aligned (8))) __attribute__ ((section (__CUDAFATBINSECTION)))= 
	{ 0x466243b1, 2, fatbinData, (void**)__cudaPrelinkedFatbins };
#ifdef __cplusplus
}
#endif
