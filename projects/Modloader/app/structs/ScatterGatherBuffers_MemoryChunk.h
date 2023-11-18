#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScatterGatherBuffers_MemoryChunk_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScatterGatherBuffers_MemoryChunk_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScatterGatherBuffers_MemoryChunk_DEFINED)
#include <Modloader/app/structs/ScatterGatherBuffers_MemoryChunk__Fields.h>
#if defined(IL2CPP_STRUCT_ScatterGatherBuffers_MemoryChunk__Fields_DEFINED)
#define IL2CPP_STRUCT_ScatterGatherBuffers_MemoryChunk_DEFINED
struct ScatterGatherBuffers_MemoryChunk__Class;
struct ScatterGatherBuffers_MemoryChunk {
    struct ScatterGatherBuffers_MemoryChunk__Class* klass;
    MonitorData* monitor;
    struct ScatterGatherBuffers_MemoryChunk__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScatterGatherBuffers_MemoryChunk_FWDDECL)
#define IL2CPP_STRUCT_ScatterGatherBuffers_MemoryChunk_FWDDECL
#include <Modloader/app/structs/ScatterGatherBuffers_MemoryChunk__Class.h>
#endif
#undef IL2CPP_STRUCT_ScatterGatherBuffers_MemoryChunk_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScatterGatherBuffers_MemoryChunk_DEFINED) && !defined(IL2CPP_STRUCT_ScatterGatherBuffers_MemoryChunk_FWDDECL)
#include <Modloader/app/structs/ScatterGatherBuffers_MemoryChunk.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScatterGatherBuffers_MemoryChunk.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
