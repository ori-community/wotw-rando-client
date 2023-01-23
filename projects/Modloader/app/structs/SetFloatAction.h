#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetFloatAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetFloatAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetFloatAction_DEFINED)
#include <Modloader/app/structs/SetFloatAction__Fields.h>
#if defined(IL2CPP_STRUCT_SetFloatAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SetFloatAction_DEFINED
struct SetFloatAction__Class;
struct SetFloatAction {
    struct SetFloatAction__Class* klass;
    MonitorData* monitor;
    struct SetFloatAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetFloatAction_FWDDECL)
#define IL2CPP_STRUCT_SetFloatAction_FWDDECL
#include <Modloader/app/structs/SetFloatAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SetFloatAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetFloatAction_DEFINED) && !defined(IL2CPP_STRUCT_SetFloatAction_FWDDECL)
#include <Modloader/app/structs/SetFloatAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetFloatAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
