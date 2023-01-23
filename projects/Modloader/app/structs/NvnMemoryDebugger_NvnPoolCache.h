#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NvnMemoryDebugger_NvnPoolCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NvnMemoryDebugger_NvnPoolCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_NvnMemoryDebugger_NvnPoolCache_DEFINED)
#include <Modloader/app/structs/NvnMemoryDebugger_NvnPoolCache__Fields.h>
#if defined(IL2CPP_STRUCT_NvnMemoryDebugger_NvnPoolCache__Fields_DEFINED)
#define IL2CPP_STRUCT_NvnMemoryDebugger_NvnPoolCache_DEFINED
struct NvnMemoryDebugger_NvnPoolCache__Class;
struct NvnMemoryDebugger_NvnPoolCache {
    struct NvnMemoryDebugger_NvnPoolCache__Class* klass;
    MonitorData* monitor;
    struct NvnMemoryDebugger_NvnPoolCache__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NvnMemoryDebugger_NvnPoolCache_FWDDECL)
#define IL2CPP_STRUCT_NvnMemoryDebugger_NvnPoolCache_FWDDECL
#include <Modloader/app/structs/NvnMemoryDebugger_NvnPoolCache__Class.h>
#endif
#undef IL2CPP_STRUCT_NvnMemoryDebugger_NvnPoolCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_NvnMemoryDebugger_NvnPoolCache_DEFINED) && !defined(IL2CPP_STRUCT_NvnMemoryDebugger_NvnPoolCache_FWDDECL)
#include <Modloader/app/structs/NvnMemoryDebugger_NvnPoolCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NvnMemoryDebugger_NvnPoolCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
