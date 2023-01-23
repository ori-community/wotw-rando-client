#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActionTimer_TimedAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActionTimer_TimedAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionTimer_TimedAction_DEFINED)
#include <Modloader/app/structs/ActionTimer_TimedAction__Fields.h>
#if defined(IL2CPP_STRUCT_ActionTimer_TimedAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ActionTimer_TimedAction_DEFINED
struct ActionTimer_TimedAction__Class;
struct ActionTimer_TimedAction {
    struct ActionTimer_TimedAction__Class* klass;
    MonitorData* monitor;
    struct ActionTimer_TimedAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActionTimer_TimedAction_FWDDECL)
#define IL2CPP_STRUCT_ActionTimer_TimedAction_FWDDECL
#include <Modloader/app/structs/ActionTimer_TimedAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ActionTimer_TimedAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionTimer_TimedAction_DEFINED) && !defined(IL2CPP_STRUCT_ActionTimer_TimedAction_FWDDECL)
#include <Modloader/app/structs/ActionTimer_TimedAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActionTimer_TimedAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
