#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EarlyZParentDebugger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EarlyZParentDebugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_EarlyZParentDebugger_DEFINED)
#include <Modloader/app/structs/EarlyZParentDebugger__Fields.h>
#if defined(IL2CPP_STRUCT_EarlyZParentDebugger__Fields_DEFINED)
#define IL2CPP_STRUCT_EarlyZParentDebugger_DEFINED
struct EarlyZParentDebugger__Class;
struct EarlyZParentDebugger {
    struct EarlyZParentDebugger__Class* klass;
    MonitorData* monitor;
    struct EarlyZParentDebugger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EarlyZParentDebugger_FWDDECL)
#define IL2CPP_STRUCT_EarlyZParentDebugger_FWDDECL
#include <Modloader/app/structs/EarlyZParentDebugger__Class.h>
#endif
#undef IL2CPP_STRUCT_EarlyZParentDebugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_EarlyZParentDebugger_DEFINED) && !defined(IL2CPP_STRUCT_EarlyZParentDebugger_FWDDECL)
#include <Modloader/app/structs/EarlyZParentDebugger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EarlyZParentDebugger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
