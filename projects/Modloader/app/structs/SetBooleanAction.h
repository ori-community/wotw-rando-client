#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetBooleanAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetBooleanAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetBooleanAction_DEFINED)
#include <Modloader/app/structs/SetBooleanAction__Fields.h>
#if defined(IL2CPP_STRUCT_SetBooleanAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SetBooleanAction_DEFINED
struct SetBooleanAction__Class;
struct SetBooleanAction {
    struct SetBooleanAction__Class* klass;
    MonitorData* monitor;
    struct SetBooleanAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetBooleanAction_FWDDECL)
#define IL2CPP_STRUCT_SetBooleanAction_FWDDECL
#include <Modloader/app/structs/SetBooleanAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SetBooleanAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetBooleanAction_DEFINED) && !defined(IL2CPP_STRUCT_SetBooleanAction_FWDDECL)
#include <Modloader/app/structs/SetBooleanAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetBooleanAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
