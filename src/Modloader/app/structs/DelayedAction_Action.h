#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DelayedAction_Action_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DelayedAction_Action_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedAction_Action_DEFINED)
#include <Modloader/app/structs/DelayedAction_Action__Fields.h>
#if defined(IL2CPP_STRUCT_DelayedAction_Action__Fields_DEFINED)
#define IL2CPP_STRUCT_DelayedAction_Action_DEFINED
struct DelayedAction_Action__Class;
struct DelayedAction_Action {
    struct DelayedAction_Action__Class* klass;
    MonitorData* monitor;
    struct DelayedAction_Action__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DelayedAction_Action_FWDDECL)
#define IL2CPP_STRUCT_DelayedAction_Action_FWDDECL
#include <Modloader/app/structs/DelayedAction_Action__Class.h>
#endif
#undef IL2CPP_STRUCT_DelayedAction_Action_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedAction_Action_DEFINED) && !defined(IL2CPP_STRUCT_DelayedAction_Action_FWDDECL)
#include <Modloader/app/structs/DelayedAction_Action.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DelayedAction_Action.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
