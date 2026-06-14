#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EarlyZChildDebugger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EarlyZChildDebugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_EarlyZChildDebugger_DEFINED)
#include <Modloader/app/structs/EarlyZChildDebugger__Fields.h>
#if defined(IL2CPP_STRUCT_EarlyZChildDebugger__Fields_DEFINED)
#define IL2CPP_STRUCT_EarlyZChildDebugger_DEFINED
struct EarlyZChildDebugger__Class;
struct EarlyZChildDebugger {
    struct EarlyZChildDebugger__Class* klass;
    MonitorData* monitor;
    struct EarlyZChildDebugger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EarlyZChildDebugger_FWDDECL)
#define IL2CPP_STRUCT_EarlyZChildDebugger_FWDDECL
#include <Modloader/app/structs/EarlyZChildDebugger__Class.h>
#endif
#undef IL2CPP_STRUCT_EarlyZChildDebugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_EarlyZChildDebugger_DEFINED) && !defined(IL2CPP_STRUCT_EarlyZChildDebugger_FWDDECL)
#include <Modloader/app/structs/EarlyZChildDebugger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EarlyZChildDebugger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
