#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MainThreadLoadingDebugger_NotifyEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MainThreadLoadingDebugger_NotifyEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainThreadLoadingDebugger_NotifyEntry_DEFINED)
#include <Modloader/app/structs/MainThreadLoadingDebugger_NotifyEntry__Fields.h>
#if defined(IL2CPP_STRUCT_MainThreadLoadingDebugger_NotifyEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_MainThreadLoadingDebugger_NotifyEntry_DEFINED
struct MainThreadLoadingDebugger_NotifyEntry__Class;
struct MainThreadLoadingDebugger_NotifyEntry {
    struct MainThreadLoadingDebugger_NotifyEntry__Class* klass;
    MonitorData* monitor;
    struct MainThreadLoadingDebugger_NotifyEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MainThreadLoadingDebugger_NotifyEntry_FWDDECL)
#define IL2CPP_STRUCT_MainThreadLoadingDebugger_NotifyEntry_FWDDECL
#include <Modloader/app/structs/MainThreadLoadingDebugger_NotifyEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_MainThreadLoadingDebugger_NotifyEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainThreadLoadingDebugger_NotifyEntry_DEFINED) && !defined(IL2CPP_STRUCT_MainThreadLoadingDebugger_NotifyEntry_FWDDECL)
#include <Modloader/app/structs/MainThreadLoadingDebugger_NotifyEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MainThreadLoadingDebugger_NotifyEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
