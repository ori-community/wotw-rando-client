#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemoryLabelDebugger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemoryLabelDebugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryLabelDebugger_DEFINED)
#define IL2CPP_STRUCT_MemoryLabelDebugger_DEFINED
struct MemoryLabelDebugger__Class;
struct MemoryLabelDebugger {
    struct MemoryLabelDebugger__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MemoryLabelDebugger_FWDDECL)
#define IL2CPP_STRUCT_MemoryLabelDebugger_FWDDECL
#include <Modloader/app/structs/MemoryLabelDebugger__Class.h>
#endif
#undef IL2CPP_STRUCT_MemoryLabelDebugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryLabelDebugger_DEFINED) && !defined(IL2CPP_STRUCT_MemoryLabelDebugger_FWDDECL)
#include <Modloader/app/structs/MemoryLabelDebugger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemoryLabelDebugger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
