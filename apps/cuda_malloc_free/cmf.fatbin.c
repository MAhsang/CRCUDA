#include "fatBinaryCtl.h"
#define __CUDAFATBINSECTION  ".nvFatBinSegment"
#define __CUDAFATBINDATASECTION  ".nv_fatbin"
asm(
".section .nv_fatbin, \"a\"\n"
".align 8\n"
"fatbinData:\n"
".quad 0x00100001ba55ed50,0x0000000000000a18,0x0000004801010002,0x0000000000000658\n"
".quad 0x0000000000000000,0x0000000a00010002,0x0000000600000040,0x0000000000000015\n"
".quad 0x0000000000000000,0x0000000000000000,0x000075632e666d63,0x33010102464c457f\n"
".quad 0x0000000000000002,0x0000000100be0002,0x0000000000000000,0x00000000000005b0\n"
".quad 0x0000000000000330,0x00380040000a010a,0x0001000a00400003,0x7472747368732e00\n"
".quad 0x747274732e006261,0x746d79732e006261,0x747865742e006261,0x656b796d385a5f2e\n"
".quad 0x2e0066506c656e72,0x2e6f666e692e766e,0x72656b796d385a5f,0x6e2e0066506c656e\n"
".quad 0x6465726168732e76,0x656b796d385a5f2e,0x2e0066506c656e72,0x395a5f2e74786574\n"
".quad 0x6c656e72656b796d,0x2e766e2e00665032,0x395a5f2e6f666e69,0x6c656e72656b796d\n"
".quad 0x2e766e2e00665032,0x5f2e646572616873,0x6e72656b796d395a,0x2e00006650326c65\n"
".quad 0x6261747274736873,0x6261747274732e00,0x6261746d79732e00,0x656b796d385a5f00\n"
".quad 0x2e0066506c656e72,0x385a5f2e74786574,0x6c656e72656b796d,0x692e766e2e006650\n"
".quad 0x6d385a5f2e6f666e,0x506c656e72656b79,0x68732e766e2e0066,0x385a5f2e64657261\n"
".quad 0x6c656e72656b796d,0x6475635f5f006650,0x5a5f5f6d72617061,0x656e72656b796d38\n"
".quad 0x5a5f00745f66506c,0x656e72656b796d39,0x65742e006650326c,0x796d395a5f2e7478\n"
".quad 0x50326c656e72656b,0x6e692e766e2e0066,0x796d395a5f2e6f66,0x50326c656e72656b\n"
".quad 0x68732e766e2e0066,0x395a5f2e64657261,0x6c656e72656b796d,0x75635f5f00665032\n"
".quad 0x5f5f6d7261706164,0x6e72656b796d395a,0x00745f6650326c65,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0006000300000029,0x0000000000000000\n"
".quad 0x0000000000000000,0x0008000300000054,0x0000000000000000,0x0000000000000000\n"
".quad 0x0007000300000097,0x0000000000000000,0x0000000000000000,0x00090003000000c4\n"
".quad 0x0000000000000000,0x0000000000000000,0x000610120000001b,0x0000000000000000\n"
".quad 0x0000000000000040,0x0007101200000088,0x0000000000000000,0x0000000000000040\n"
".quad 0x000c170400081803,0x0000000000000000,0x000818030023f000,0x00000000000c1704\n"
".quad 0x0023f00000000000,0x0023c78010004205,0x04000780a0000005,0x0020478060014c01\n"
".quad 0x44014780a0000005,0xc410078030020001,0x04120003c0000205,0x042007802000c801\n"
".quad 0xa0c00781d00e0005,0x0023c78010004205,0x04000780a0000005,0x0020478060014c01\n"
".quad 0xc410078030020001,0x042007802000c805,0x80c00780d00e0201,0x00000780b0000001\n"
".quad 0xa0c00781d00e0201,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000300000001,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000040,0x00000000000000a6,0x0000000000000000,0x0000000000000001\n"
".quad 0x0000000000000000,0x000000030000000b,0x0000000000000000,0x0000000000000000\n"
".quad 0x00000000000000e6,0x00000000000000fa,0x0000000000000000,0x0000000000000001\n"
".quad 0x0000000000000000,0x0000000200000013,0x0000000000000000,0x0000000000000000\n"
".quad 0x00000000000001e0,0x00000000000000a8,0x0000000400000002,0x0000000000000008\n"
".quad 0x0000000000000018,0x7000000000000074,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000288,0x0000000000000014,0x0000000700000003,0x0000000000000004\n"
".quad 0x0000000000000000,0x700000000000002f,0x0000000000000000,0x0000000000000000\n"
".quad 0x000000000000029c,0x0000000000000014,0x0000000600000003,0x0000000000000004\n"
".quad 0x0000000000000000,0x000000010000001b,0x0000000000000006,0x0000000000000000\n"
".quad 0x00000000000002b0,0x0000000000000040,0x0200000500000003,0x0000000000000004\n"
".quad 0x0000000000000000,0x000000010000005f,0x0000000000000006,0x0000000000000000\n"
".quad 0x00000000000002f0,0x0000000000000040,0x0200000600000003,0x0000000000000004\n"
".quad 0x0000000000000000,0x0000000800000046,0x0000000000000003,0x0000000000000000\n"
".quad 0x0000000000000330,0x0000000000000018,0x0000000600000000,0x0000000000000008\n"
".quad 0x0000000000000000,0x000000080000008c,0x0000000000000003,0x0000000000000000\n"
".quad 0x0000000000000330,0x0000000000000018,0x0000000700000000,0x0000000000000008\n"
".quad 0x0000000000000000,0x0000000500000006,0x00000000000005b0,0x0000000000000000\n"
".quad 0x0000000000000000,0x00000000000000a8,0x00000000000000a8,0x0000000000000008\n"
".quad 0x0000000500000001,0x00000000000002b0,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000080,0x0000000000000080,0x0000000000000008,0x0000000600000001\n"
".quad 0x0000000000000330,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000018,0x0000000000000008,0x0000005001010001,0x0000000000000328\n"
".quad 0x0000004000000000,0x0000000a00010004,0x0000000600000048,0x0000000000001015\n"
".quad 0x0000000000000000,0x0000000000000c86,0x0000000000000000,0x000075632e666d63\n"
".quad 0x30da8f4d95c59c78,0x2ba84457e4cf8610,0x0b659bc490eb2ab5,0xaba956f43d8f53da\n"
".quad 0x720e26ac076c6595,0x1f38ef7feaaaca1c,0xe082a5695e0b2010,0x3389fb199df79e30\n"
".quad 0x443f28594ba15b42,0x997e3095ea8643d8,0x6921ba73f13a7093,0x379e471a48298982\n"
".quad 0x943d7c3ffbafecf2,0x8ac178d1c28c4cca,0xc7895266df8aa73c,0x114f2cc68d10bb71\n"
".quad 0xaa9b5684454d38ab,0x90752aa0e347895b,0x12cdd82c62b065c9,0x6b1a9af82d5be092\n"
".quad 0xa40fba308c02ed52,0x45ce1a5045c55962,0x460a1cee039dd68a,0x080552960896c0b3\n"
".quad 0x2b62e026d3097b05,0x20e2e64652ba2099,0x5021a5175f2ebbbf,0x70bae4c20f2a2613\n"
".quad 0xa6cbcc4548ccc959,0x113dbb6caebfbcaf,0x0a9e79c25a841cce,0xbcf4a74acb0bae1f\n"
".quad 0x2a6762352ebd3864,0x9982b74baf0d2e7d,0x8ca1de7230ddace2,0x0b9a6a86c9ad8a56\n"
".quad 0x4a3237625cf72403,0xfb2d196104ae80e8,0x62b0388fbb41dc72,0x0f032ba149142ff1\n"
".quad 0xf59a9c9801cfdf55,0x6640cb5a9901d6a0,0x66cd350bad7d32a8,0x908b2e074176550e\n"
".quad 0x0e44790d92e45350,0x4c038792e88f590c,0xe0d996a8bc2623d6,0x2f4d11e05603912c\n"
".quad 0x6717c4781500e1f5,0x0f25ddc7acb2b871,0xaa5a32a4599b1607,0xc1db4581dabeb252\n"
".quad 0x54183d9b1a076a2b,0xc37ea83f4cd8f03b,0xb3ae1bf16db03655,0x2c0ec634f8361854\n"
".quad 0x1b92e1a971522676,0x8fa2e59db1e171f4,0x8ccbe10b37c79303,0x16f6f026b42ecc6c\n"
".quad 0x5fcb39f93e2fd3b0,0x3ff53df644ad097e,0xd825547d55bea87a,0x6947272042dac427\n"
".quad 0x158b4878fef27cc4,0xfc0bd7a37f8985e4,0xddc591047122ef38,0x7d922f9a37560021\n"
".quad 0xdbfd02936929b524,0xb7c3ef5339de176b,0xa3cf6f0562963faf,0xd6d8b218590e5f7a\n"
".quad 0x18dfe270e96d22d8,0xebb6c5e5ee6ed1c9,0xe208f167a19946c7,0xd1725bf432af4baa\n"
".quad 0x8f73690846a5d9ae,0x1a32da4f128ede72,0xd654027656b8b6c2,0x0b99a453710bd453\n"
".quad 0xccfda9a30e29a68c,0xaad64b350b646f7d,0xbbb366f19560a456,0xdcfe5bebd3f8820d\n"
".quad 0xea3cd614dc132ed4,0xf85fbaf1b473772a,0x35b49e3b8d10edc3,0xc5655a0d2bdcc66c\n"
".quad 0xd3cf84d93d9d3692,0xb604943bdc59db67,0x142347d799a4ec5b,0x87a48f7ebf983d3f\n"
".quad 0xbdef3f528cba256e,0xf52c2766967dc258,0xfaf4c35782601e0b,0xc57fc29edb371c21\n"
".quad 0xd4087bd18010bdef,0x2dce3db2341c765c,0x47fec3a26c25e1b3,0xfcdcb033e39b0078\n"
".quad 0x0000002ceac95703\n"
".text");
#ifdef __cplusplus
extern "C" {
#endif
extern const unsigned long long fatbinData[325];
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
extern "C" {
#endif
static const __fatBinC_Wrapper_t __fatDeviceText __attribute__ ((aligned (8))) __attribute__ ((section (__CUDAFATBINSECTION)))= 
	{ 0x466243b1, 1, fatbinData, 0 };
#ifdef __cplusplus
}
#endif
