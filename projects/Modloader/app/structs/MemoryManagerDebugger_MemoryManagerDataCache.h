#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemoryManagerDebugger_MemoryManagerDataCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemoryManagerDebugger_MemoryManagerDataCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryManagerDebugger_MemoryManagerDataCache_DEFINED)
#include <Modloader/app/structs/MemoryManagerDebugger_MemoryManagerDataCache__Fields.h>
#if defined(IL2CPP_STRUCT_MemoryManagerDebugger_MemoryManagerDataCache__Fields_DEFINED)
#define IL2CPP_STRUCT_MemoryManagerDebugger_MemoryManagerDataCache_DEFINED
struct MemoryManagerDebugger_MemoryManagerDataCache__Class;
struct MemoryManagerDebugger_MemoryManagerDataCache {
    struct MemoryManagerDebugger_MemoryManagerDataCache__Class* klass;
    MonitorData* monitor;
    struct MemoryManagerDebugger_MemoryManagerDataCache__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemoryManagerDebugger_MemoryManagerDataCache_FWDDECL)
#define IL2CPP_STRUCT_MemoryManagerDebugger_MemoryManagerDataCache_FWDDECL
#include <Modloader/app/structs/MemoryManagerDebugger_MemoryManagerDataCache__Class.h>
#endif
#undef IL2CPP_STRUCT_MemoryManagerDebugger_MemoryManagerDataCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryManagerDebugger_MemoryManagerDataCache_DEFINED) && !defined(IL2CPP_STRUCT_MemoryManagerDebugger_MemoryManagerDataCache_FWDDECL)
#include <Modloader/app/structs/MemoryManagerDebugger_MemoryManagerDataCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemoryManagerDebugger_MemoryManagerDataCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
