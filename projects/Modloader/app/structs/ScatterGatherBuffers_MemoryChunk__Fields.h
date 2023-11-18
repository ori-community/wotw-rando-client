#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScatterGatherBuffers_MemoryChunk__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScatterGatherBuffers_MemoryChunk__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScatterGatherBuffers_MemoryChunk__Fields_DEFINED)
#define IL2CPP_STRUCT_ScatterGatherBuffers_MemoryChunk__Fields_DEFINED
struct Byte__Array;
struct ScatterGatherBuffers_MemoryChunk;
struct __declspec(align(8)) ScatterGatherBuffers_MemoryChunk__Fields {
    struct Byte__Array* Buffer;
    int32_t FreeOffset;
    struct ScatterGatherBuffers_MemoryChunk* Next;
};
#endif
#if !defined(IL2CPP_STRUCT_ScatterGatherBuffers_MemoryChunk__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScatterGatherBuffers_MemoryChunk__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/ScatterGatherBuffers_MemoryChunk.h>
#endif
#undef IL2CPP_STRUCT_ScatterGatherBuffers_MemoryChunk__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScatterGatherBuffers_MemoryChunk__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScatterGatherBuffers_MemoryChunk__Fields_FWDDECL)
#include <Modloader/app/structs/ScatterGatherBuffers_MemoryChunk__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScatterGatherBuffers_MemoryChunk__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
