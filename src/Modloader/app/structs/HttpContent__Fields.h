#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpContent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpContent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpContent__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpContent__Fields_DEFINED
struct HttpContent_FixedMemoryStream;
struct Stream;
struct HttpContentHeaders;
struct __declspec(align(8)) HttpContent__Fields {
    struct HttpContent_FixedMemoryStream* buffer;
    struct Stream* stream;
    bool disposed;
    struct HttpContentHeaders* headers;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpContent__Fields_FWDDECL)
#define IL2CPP_STRUCT_HttpContent__Fields_FWDDECL
#include <Modloader/app/structs/HttpContentHeaders.h>
#include <Modloader/app/structs/HttpContent_FixedMemoryStream.h>
#include <Modloader/app/structs/Stream.h>
#endif
#undef IL2CPP_STRUCT_HttpContent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpContent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HttpContent__Fields_FWDDECL)
#include <Modloader/app/structs/HttpContent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpContent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
