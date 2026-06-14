#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeflateStreamNative__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeflateStreamNative__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateStreamNative__Fields_DEFINED)
#include <Modloader/app/structs/GCHandle.h>
#if defined(IL2CPP_STRUCT_GCHandle_DEFINED)
#define IL2CPP_STRUCT_DeflateStreamNative__Fields_DEFINED
struct DeflateStreamNative_UnmanagedReadOrWrite;
struct Stream;
struct DeflateStreamNative_SafeDeflateStreamHandle;
struct Byte__Array;
struct __declspec(align(8)) DeflateStreamNative__Fields {
    struct DeflateStreamNative_UnmanagedReadOrWrite* feeder;
    struct Stream* base_stream;
    struct DeflateStreamNative_SafeDeflateStreamHandle* z_stream;
    struct GCHandle data;
    bool disposed;
    struct Byte__Array* io_buffer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeflateStreamNative__Fields_FWDDECL)
#define IL2CPP_STRUCT_DeflateStreamNative__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DeflateStreamNative_SafeDeflateStreamHandle.h>
#include <Modloader/app/structs/DeflateStreamNative_UnmanagedReadOrWrite.h>
#include <Modloader/app/structs/Stream.h>
#endif
#undef IL2CPP_STRUCT_DeflateStreamNative__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateStreamNative__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DeflateStreamNative__Fields_FWDDECL)
#include <Modloader/app/structs/DeflateStreamNative__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeflateStreamNative__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
