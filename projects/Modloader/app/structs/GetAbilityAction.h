#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetAbilityAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetAbilityAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetAbilityAction_DEFINED)
#include <Modloader/app/structs/GetAbilityAction__Fields.h>
#if defined(IL2CPP_STRUCT_GetAbilityAction__Fields_DEFINED)
#define IL2CPP_STRUCT_GetAbilityAction_DEFINED
struct GetAbilityAction__Class;
struct GetAbilityAction {
    struct GetAbilityAction__Class* klass;
    MonitorData* monitor;
    struct GetAbilityAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetAbilityAction_FWDDECL)
#define IL2CPP_STRUCT_GetAbilityAction_FWDDECL
#include <Modloader/app/structs/GetAbilityAction__Class.h>
#endif
#undef IL2CPP_STRUCT_GetAbilityAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetAbilityAction_DEFINED) && !defined(IL2CPP_STRUCT_GetAbilityAction_FWDDECL)
#include <Modloader/app/structs/GetAbilityAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetAbilityAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
