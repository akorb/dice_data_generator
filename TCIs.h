#ifndef INCLUDE_TCIs
#define INCLUDE_TCIs

static const char tci_bl1[] = {  0x67, 0xf5, 0x75, 0x48, 0x20, 0xdb, 0x99, 0xd9, 0xbe, 0x0f, 0xe6, 0x4f,
  0x58, 0x22, 0xab, 0x06, 0x91, 0xbf, 0x85, 0x53, 0xcf, 0x29, 0x38, 0x33,
  0x9f, 0x18, 0x4f, 0x05, 0x2a, 0xa3, 0x7c, 0x00};
static const char tci_bl2[] = {  0xe1, 0x12, 0xc5, 0x90, 0xb5, 0x2f, 0xe1, 0xf2, 0xef, 0x08, 0xc6, 0xdf,
  0x18, 0x32, 0xb3, 0x5c, 0x4c, 0xc5, 0x72, 0x5c, 0x25, 0x0a, 0xba, 0xeb,
  0xcd, 0x74, 0x8a, 0x93, 0x82, 0x59, 0x68, 0x8b};
static const char tci_bl31[] = {  0x3f, 0x38, 0xbf, 0x71, 0x21, 0x20, 0x92, 0xd7, 0xfa, 0xaa, 0x45, 0x5b,
  0x1b, 0xfc, 0x8e, 0x70, 0x0d, 0x50, 0x03, 0x9a, 0x08, 0xd3, 0x18, 0x31,
  0xd0, 0x3b, 0x32, 0x54, 0x6f, 0x25, 0x5f, 0x87};
static const char tci_bl32[] = {  0xc8, 0xf4, 0x23, 0x8b, 0xb1, 0x72, 0xdd, 0x99, 0x0a, 0x16, 0xe3, 0x1b,
  0x95, 0x1a, 0x6a, 0xba, 0xcb, 0x76, 0xe3, 0x7b, 0xa9, 0x70, 0xd9, 0x16,
  0x86, 0x64, 0x65, 0x6e, 0xb7, 0x7a, 0xd3, 0x23};

#endif