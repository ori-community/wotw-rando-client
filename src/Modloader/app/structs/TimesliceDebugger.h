#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimesliceDebugger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimesliceDebugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceDebugger_DEFINED)
#include <Modloader/app/structs/TimesliceDebugger__Fields.h>
#if defined(IL2CPP_STRUCT_TimesliceDebugger__Fields_DEFINED)
#define IL2CPP_STRUCT_TimesliceDebugger_DEFINED
struct TimesliceDebugger__Class;
struct TimesliceDebugger {
    struct TimesliceDebugger__Class* klass;
    MonitorData* monitor;
    struct TimesliceDebugger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimesliceDebugger_FWDDECL)
#define IL2CPP_STRUCT_TimesliceDebugger_FWDDECL
#include <Modloader/app/structs/TimesliceDebugger__Class.h>
#endif
#undef IL2CPP_STRUCT_TimesliceDebugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceDebugger_DEFINED) && !defined(IL2CPP_STRUCT_TimesliceDebugger_FWDDECL)
#include <Modloader/app/structs/TimesliceDebugger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimesliceDebugger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
