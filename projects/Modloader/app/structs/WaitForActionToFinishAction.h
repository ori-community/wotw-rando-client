#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitForActionToFinishAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitForActionToFinishAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForActionToFinishAction_DEFINED)
#include <Modloader/app/structs/WaitForActionToFinishAction__Fields.h>
#if defined(IL2CPP_STRUCT_WaitForActionToFinishAction__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitForActionToFinishAction_DEFINED
struct WaitForActionToFinishAction__Class;
struct WaitForActionToFinishAction {
    struct WaitForActionToFinishAction__Class* klass;
    MonitorData* monitor;
    struct WaitForActionToFinishAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitForActionToFinishAction_FWDDECL)
#define IL2CPP_STRUCT_WaitForActionToFinishAction_FWDDECL
#include <Modloader/app/structs/WaitForActionToFinishAction__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitForActionToFinishAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForActionToFinishAction_DEFINED) && !defined(IL2CPP_STRUCT_WaitForActionToFinishAction_FWDDECL)
#include <Modloader/app/structs/WaitForActionToFinishAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitForActionToFinishAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
