#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GZipDecoder_GzipHeaderState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GZipDecoder_GzipHeaderState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GZipDecoder_GzipHeaderState__Enum_DEFINED)
#define IL2CPP_STRUCT_GZipDecoder_GzipHeaderState__Enum_DEFINED
enum class GZipDecoder_GzipHeaderState__Enum : int32_t {
    ReadingID1 = 0x00000000,
    ReadingID2 = 0x00000001,
    ReadingCM = 0x00000002,
    ReadingFLG = 0x00000003,
    ReadingMMTime = 0x00000004,
    ReadingXFL = 0x00000005,
    ReadingOS = 0x00000006,
    ReadingXLen1 = 0x00000007,
    ReadingXLen2 = 0x00000008,
    ReadingXLenData = 0x00000009,
    ReadingFileName = 0x0000000a,
    ReadingComment = 0x0000000b,
    ReadingCRC16Part1 = 0x0000000c,
    ReadingCRC16Part2 = 0x0000000d,
    Done = 0x0000000e,
    ReadingCRC = 0x0000000f,
    ReadingFileSize = 0x00000010,
};
#endif
#if !defined(IL2CPP_STRUCT_GZipDecoder_GzipHeaderState__Enum_FWDDECL)
#define IL2CPP_STRUCT_GZipDecoder_GzipHeaderState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_GZipDecoder_GzipHeaderState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GZipDecoder_GzipHeaderState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_GZipDecoder_GzipHeaderState__Enum_FWDDECL)
#include <Modloader/app/structs/GZipDecoder_GzipHeaderState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GZipDecoder_GzipHeaderState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
