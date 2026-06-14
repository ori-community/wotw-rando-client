#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoChunkStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoChunkStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoChunkStream_DEFINED)
#include <Modloader/app/structs/MonoChunkStream__Fields.h>
#if defined(IL2CPP_STRUCT_MonoChunkStream__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoChunkStream_DEFINED
struct MonoChunkStream__Class;
struct MonoChunkStream {
    struct MonoChunkStream__Class* klass;
    MonitorData* monitor;
    struct MonoChunkStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoChunkStream_FWDDECL)
#define IL2CPP_STRUCT_MonoChunkStream_FWDDECL
#include <Modloader/app/structs/MonoChunkStream__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoChunkStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoChunkStream_DEFINED) && !defined(IL2CPP_STRUCT_MonoChunkStream_FWDDECL)
#include <Modloader/app/structs/MonoChunkStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoChunkStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
