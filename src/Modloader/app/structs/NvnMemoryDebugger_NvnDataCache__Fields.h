#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NvnMemoryDebugger_NvnDataCache__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NvnMemoryDebugger_NvnDataCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NvnMemoryDebugger_NvnDataCache__Fields_DEFINED)
#define IL2CPP_STRUCT_NvnMemoryDebugger_NvnDataCache__Fields_DEFINED
struct List_1_UberShader_optimizations_gc_NvnMemoryDebugger_NvnPoolCache_;
struct __declspec(align(8)) NvnMemoryDebugger_NvnDataCache__Fields {
    struct List_1_UberShader_optimizations_gc_NvnMemoryDebugger_NvnPoolCache_* Pools;
    uint64_t TotalUsedBytes;
    uint64_t TotalAllocBytes;
    uint64_t LargestLBufferCurrent;
    uint64_t LargestLBufferPeak;
};
#endif
#if !defined(IL2CPP_STRUCT_NvnMemoryDebugger_NvnDataCache__Fields_FWDDECL)
#define IL2CPP_STRUCT_NvnMemoryDebugger_NvnDataCache__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UberShader_optimizations_gc_NvnMemoryDebugger_NvnPoolCache_.h>
#endif
#undef IL2CPP_STRUCT_NvnMemoryDebugger_NvnDataCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NvnMemoryDebugger_NvnDataCache__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NvnMemoryDebugger_NvnDataCache__Fields_FWDDECL)
#include <Modloader/app/structs/NvnMemoryDebugger_NvnDataCache__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NvnMemoryDebugger_NvnDataCache__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
