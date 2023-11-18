#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InflaterState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InflaterState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_InflaterState__Enum_DEFINED)
#define IL2CPP_STRUCT_InflaterState__Enum_DEFINED
enum class InflaterState__Enum : int32_t {
    ReadingHeader = 0x00000000,
    ReadingBFinal = 0x00000002,
    ReadingBType = 0x00000003,
    ReadingNumLitCodes = 0x00000004,
    ReadingNumDistCodes = 0x00000005,
    ReadingNumCodeLengthCodes = 0x00000006,
    ReadingCodeLengthCodes = 0x00000007,
    ReadingTreeCodesBefore = 0x00000008,
    ReadingTreeCodesAfter = 0x00000009,
    DecodeTop = 0x0000000a,
    HaveInitialLength = 0x0000000b,
    HaveFullLength = 0x0000000c,
    HaveDistCode = 0x0000000d,
    UncompressedAligning = 0x0000000f,
    UncompressedByte1 = 0x00000010,
    UncompressedByte2 = 0x00000011,
    UncompressedByte3 = 0x00000012,
    UncompressedByte4 = 0x00000013,
    DecodingUncompressed = 0x00000014,
    StartReadingFooter = 0x00000015,
    ReadingFooter = 0x00000016,
    VerifyingFooter = 0x00000017,
    Done = 0x00000018,
};
#endif
#if !defined(IL2CPP_STRUCT_InflaterState__Enum_FWDDECL)
#define IL2CPP_STRUCT_InflaterState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_InflaterState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_InflaterState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_InflaterState__Enum_FWDDECL)
#include <Modloader/app/structs/InflaterState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InflaterState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
