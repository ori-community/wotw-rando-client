#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NvnMemoryDebugger_NvnDataCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NvnMemoryDebugger_NvnDataCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_NvnMemoryDebugger_NvnDataCache_DEFINED)
#include <Modloader/app/structs/NvnMemoryDebugger_NvnDataCache__Fields.h>
#if defined(IL2CPP_STRUCT_NvnMemoryDebugger_NvnDataCache__Fields_DEFINED)
#define IL2CPP_STRUCT_NvnMemoryDebugger_NvnDataCache_DEFINED
struct NvnMemoryDebugger_NvnDataCache__Class;
struct NvnMemoryDebugger_NvnDataCache {
    struct NvnMemoryDebugger_NvnDataCache__Class* klass;
    MonitorData* monitor;
    struct NvnMemoryDebugger_NvnDataCache__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NvnMemoryDebugger_NvnDataCache_FWDDECL)
#define IL2CPP_STRUCT_NvnMemoryDebugger_NvnDataCache_FWDDECL
#include <Modloader/app/structs/NvnMemoryDebugger_NvnDataCache__Class.h>
#endif
#undef IL2CPP_STRUCT_NvnMemoryDebugger_NvnDataCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_NvnMemoryDebugger_NvnDataCache_DEFINED) && !defined(IL2CPP_STRUCT_NvnMemoryDebugger_NvnDataCache_FWDDECL)
#include <Modloader/app/structs/NvnMemoryDebugger_NvnDataCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NvnMemoryDebugger_NvnDataCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
