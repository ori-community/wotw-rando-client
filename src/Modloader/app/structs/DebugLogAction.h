#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugLogAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugLogAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugLogAction_DEFINED)
#include <Modloader/app/structs/DebugLogAction__Fields.h>
#if defined(IL2CPP_STRUCT_DebugLogAction__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugLogAction_DEFINED
struct DebugLogAction__Class;
struct DebugLogAction {
    struct DebugLogAction__Class* klass;
    MonitorData* monitor;
    struct DebugLogAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugLogAction_FWDDECL)
#define IL2CPP_STRUCT_DebugLogAction_FWDDECL
#include <Modloader/app/structs/DebugLogAction__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugLogAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugLogAction_DEFINED) && !defined(IL2CPP_STRUCT_DebugLogAction_FWDDECL)
#include <Modloader/app/structs/DebugLogAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugLogAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
