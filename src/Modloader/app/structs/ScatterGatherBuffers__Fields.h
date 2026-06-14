#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScatterGatherBuffers__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScatterGatherBuffers__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScatterGatherBuffers__Fields_DEFINED)
#define IL2CPP_STRUCT_ScatterGatherBuffers__Fields_DEFINED
struct ScatterGatherBuffers_MemoryChunk;
struct __declspec(align(8)) ScatterGatherBuffers__Fields {
    struct ScatterGatherBuffers_MemoryChunk* headChunk;
    struct ScatterGatherBuffers_MemoryChunk* currentChunk;
    int32_t nextChunkLength;
    int32_t totalLength;
    int32_t chunkCount;
};
#endif
#if !defined(IL2CPP_STRUCT_ScatterGatherBuffers__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScatterGatherBuffers__Fields_FWDDECL
#include <Modloader/app/structs/ScatterGatherBuffers_MemoryChunk.h>
#endif
#undef IL2CPP_STRUCT_ScatterGatherBuffers__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScatterGatherBuffers__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScatterGatherBuffers__Fields_FWDDECL)
#include <Modloader/app/structs/ScatterGatherBuffers__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScatterGatherBuffers__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
