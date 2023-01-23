#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetParentAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetParentAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetParentAction_DEFINED)
#include <Modloader/app/structs/SetParentAction__Fields.h>
#if defined(IL2CPP_STRUCT_SetParentAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SetParentAction_DEFINED
struct SetParentAction__Class;
struct SetParentAction {
    struct SetParentAction__Class* klass;
    MonitorData* monitor;
    struct SetParentAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetParentAction_FWDDECL)
#define IL2CPP_STRUCT_SetParentAction_FWDDECL
#include <Modloader/app/structs/SetParentAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SetParentAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetParentAction_DEFINED) && !defined(IL2CPP_STRUCT_SetParentAction_FWDDECL)
#include <Modloader/app/structs/SetParentAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetParentAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
