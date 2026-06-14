#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoChunkStream_Chunk_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoChunkStream_Chunk_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoChunkStream_Chunk_DEFINED)
#include <Modloader/app/structs/MonoChunkStream_Chunk__Fields.h>
#if defined(IL2CPP_STRUCT_MonoChunkStream_Chunk__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoChunkStream_Chunk_DEFINED
struct MonoChunkStream_Chunk__Class;
struct MonoChunkStream_Chunk {
    struct MonoChunkStream_Chunk__Class* klass;
    MonitorData* monitor;
    struct MonoChunkStream_Chunk__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoChunkStream_Chunk_FWDDECL)
#define IL2CPP_STRUCT_MonoChunkStream_Chunk_FWDDECL
#include <Modloader/app/structs/MonoChunkStream_Chunk__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoChunkStream_Chunk_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoChunkStream_Chunk_DEFINED) && !defined(IL2CPP_STRUCT_MonoChunkStream_Chunk_FWDDECL)
#include <Modloader/app/structs/MonoChunkStream_Chunk.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoChunkStream_Chunk.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
