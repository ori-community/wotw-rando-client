#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsStream__Fields_DEFINED)
#include <Modloader/app/structs/Stream__Fields.h>
#if defined(IL2CPP_STRUCT_Stream__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsStream__Fields_DEFINED
struct MemoryStream;
struct Byte__Array;
struct TlsStream__Fields {
    struct Stream__Fields _;
    bool canRead;
    bool canWrite;
    struct MemoryStream* buffer;
    struct Byte__Array* temp;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_TlsStream__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/MemoryStream.h>
#endif
#undef IL2CPP_STRUCT_TlsStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TlsStream__Fields_FWDDECL)
#include <Modloader/app/structs/TlsStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
