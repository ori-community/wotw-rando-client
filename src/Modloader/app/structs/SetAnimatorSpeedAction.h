#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetAnimatorSpeedAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetAnimatorSpeedAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetAnimatorSpeedAction_DEFINED)
#include <Modloader/app/structs/SetAnimatorSpeedAction__Fields.h>
#if defined(IL2CPP_STRUCT_SetAnimatorSpeedAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SetAnimatorSpeedAction_DEFINED
struct SetAnimatorSpeedAction__Class;
struct SetAnimatorSpeedAction {
    struct SetAnimatorSpeedAction__Class* klass;
    MonitorData* monitor;
    struct SetAnimatorSpeedAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetAnimatorSpeedAction_FWDDECL)
#define IL2CPP_STRUCT_SetAnimatorSpeedAction_FWDDECL
#include <Modloader/app/structs/SetAnimatorSpeedAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SetAnimatorSpeedAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetAnimatorSpeedAction_DEFINED) && !defined(IL2CPP_STRUCT_SetAnimatorSpeedAction_FWDDECL)
#include <Modloader/app/structs/SetAnimatorSpeedAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetAnimatorSpeedAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
