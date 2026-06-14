#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChunkedInputStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChunkedInputStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChunkedInputStream__Fields_DEFINED)
#include <Modloader/app/structs/RequestStream__Fields.h>
#if defined(IL2CPP_STRUCT_RequestStream__Fields_DEFINED)
#define IL2CPP_STRUCT_ChunkedInputStream__Fields_DEFINED
struct MonoChunkStream;
struct HttpListenerContext;
struct ChunkedInputStream__Fields {
    struct RequestStream__Fields _;
    bool disposed;
    struct MonoChunkStream* decoder;
    struct HttpListenerContext* context;
    bool no_more_data;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChunkedInputStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChunkedInputStream__Fields_FWDDECL
#include <Modloader/app/structs/HttpListenerContext.h>
#include <Modloader/app/structs/MonoChunkStream.h>
#endif
#undef IL2CPP_STRUCT_ChunkedInputStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChunkedInputStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChunkedInputStream__Fields_FWDDECL)
#include <Modloader/app/structs/ChunkedInputStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChunkedInputStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
