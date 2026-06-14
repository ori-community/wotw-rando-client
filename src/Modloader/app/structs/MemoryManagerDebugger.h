#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemoryManagerDebugger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemoryManagerDebugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryManagerDebugger_DEFINED)
#define IL2CPP_STRUCT_MemoryManagerDebugger_DEFINED
struct MemoryManagerDebugger__Class;
struct MemoryManagerDebugger {
    struct MemoryManagerDebugger__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MemoryManagerDebugger_FWDDECL)
#define IL2CPP_STRUCT_MemoryManagerDebugger_FWDDECL
#include <Modloader/app/structs/MemoryManagerDebugger__Class.h>
#endif
#undef IL2CPP_STRUCT_MemoryManagerDebugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryManagerDebugger_DEFINED) && !defined(IL2CPP_STRUCT_MemoryManagerDebugger_FWDDECL)
#include <Modloader/app/structs/MemoryManagerDebugger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemoryManagerDebugger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
