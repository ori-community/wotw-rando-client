#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeflateStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeflateStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateStream__Fields_DEFINED)
#include <Modloader/app/structs/CompressionMode__Enum.h>
#include <Modloader/app/structs/Stream__Fields.h>
#if defined(IL2CPP_STRUCT_Stream__Fields_DEFINED) && defined(IL2CPP_STRUCT_CompressionMode__Enum_DEFINED)
#define IL2CPP_STRUCT_DeflateStream__Fields_DEFINED
struct Stream;
struct DeflateStreamNative;
struct DeflateStream__Fields {
    struct Stream__Fields _;
    struct Stream* base_stream;
    CompressionMode__Enum mode;

    bool leaveOpen;
    bool disposed;
    struct DeflateStreamNative* native;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeflateStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_DeflateStream__Fields_FWDDECL
#include <Modloader/app/structs/DeflateStreamNative.h>
#include <Modloader/app/structs/Stream.h>
#endif
#undef IL2CPP_STRUCT_DeflateStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DeflateStream__Fields_FWDDECL)
#include <Modloader/app/structs/DeflateStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeflateStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
