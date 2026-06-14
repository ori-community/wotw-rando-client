#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetGameObjectAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetGameObjectAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGameObjectAction_DEFINED)
#include <Modloader/app/structs/SetGameObjectAction__Fields.h>
#if defined(IL2CPP_STRUCT_SetGameObjectAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SetGameObjectAction_DEFINED
struct SetGameObjectAction__Class;
struct SetGameObjectAction {
    struct SetGameObjectAction__Class* klass;
    MonitorData* monitor;
    struct SetGameObjectAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetGameObjectAction_FWDDECL)
#define IL2CPP_STRUCT_SetGameObjectAction_FWDDECL
#include <Modloader/app/structs/SetGameObjectAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SetGameObjectAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGameObjectAction_DEFINED) && !defined(IL2CPP_STRUCT_SetGameObjectAction_FWDDECL)
#include <Modloader/app/structs/SetGameObjectAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetGameObjectAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
