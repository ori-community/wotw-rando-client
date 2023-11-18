#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ZlibCodec__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ZlibCodec__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZlibCodec__Fields_DEFINED)
#include <Modloader/app/structs/CompressionLevel__Enum.h>
#include <Modloader/app/structs/CompressionStrategy__Enum.h>
#if defined(IL2CPP_STRUCT_CompressionLevel__Enum_DEFINED) && defined(IL2CPP_STRUCT_CompressionStrategy__Enum_DEFINED)
#define IL2CPP_STRUCT_ZlibCodec__Fields_DEFINED
struct Byte__Array;
struct String;
struct DeflateManager;
struct InflateManager;
struct __declspec(align(8)) ZlibCodec__Fields {
    struct Byte__Array* InputBuffer;
    int32_t NextIn;
    int32_t AvailableBytesIn;
    int64_t TotalBytesIn;
    struct Byte__Array* OutputBuffer;
    int32_t NextOut;
    int32_t AvailableBytesOut;
    int64_t TotalBytesOut;
    struct String* Message;
    struct DeflateManager* dstate;
    struct InflateManager* istate;
    uint32_t _Adler32;
    CompressionLevel__Enum CompressLevel;

    int32_t WindowBits;
    CompressionStrategy__Enum Strategy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ZlibCodec__Fields_FWDDECL)
#define IL2CPP_STRUCT_ZlibCodec__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DeflateManager.h>
#include <Modloader/app/structs/InflateManager.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ZlibCodec__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZlibCodec__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ZlibCodec__Fields_FWDDECL)
#include <Modloader/app/structs/ZlibCodec__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ZlibCodec__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
