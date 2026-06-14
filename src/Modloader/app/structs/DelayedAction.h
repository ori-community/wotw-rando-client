#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DelayedAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DelayedAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedAction_DEFINED)
#include <Modloader/app/structs/DelayedAction__Fields.h>
#if defined(IL2CPP_STRUCT_DelayedAction__Fields_DEFINED)
#define IL2CPP_STRUCT_DelayedAction_DEFINED
struct DelayedAction__Class;
struct DelayedAction {
    struct DelayedAction__Class* klass;
    MonitorData* monitor;
    struct DelayedAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DelayedAction_FWDDECL)
#define IL2CPP_STRUCT_DelayedAction_FWDDECL
#include <Modloader/app/structs/DelayedAction__Class.h>
#endif
#undef IL2CPP_STRUCT_DelayedAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedAction_DEFINED) && !defined(IL2CPP_STRUCT_DelayedAction_FWDDECL)
#include <Modloader/app/structs/DelayedAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DelayedAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
