#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NvnMemoryDebugger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NvnMemoryDebugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_NvnMemoryDebugger_DEFINED)
#define IL2CPP_STRUCT_NvnMemoryDebugger_DEFINED
struct NvnMemoryDebugger__Class;
struct NvnMemoryDebugger {
    struct NvnMemoryDebugger__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NvnMemoryDebugger_FWDDECL)
#define IL2CPP_STRUCT_NvnMemoryDebugger_FWDDECL
#include <Modloader/app/structs/NvnMemoryDebugger__Class.h>
#endif
#undef IL2CPP_STRUCT_NvnMemoryDebugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_NvnMemoryDebugger_DEFINED) && !defined(IL2CPP_STRUCT_NvnMemoryDebugger_FWDDECL)
#include <Modloader/app/structs/NvnMemoryDebugger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NvnMemoryDebugger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
