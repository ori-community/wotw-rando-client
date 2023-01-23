#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HasAbilityCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HasAbilityCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasAbilityCondition_DEFINED)
#include <Modloader/app/structs/HasAbilityCondition__Fields.h>
#if defined(IL2CPP_STRUCT_HasAbilityCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_HasAbilityCondition_DEFINED
struct HasAbilityCondition__Class;
struct HasAbilityCondition {
    struct HasAbilityCondition__Class* klass;
    MonitorData* monitor;
    struct HasAbilityCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HasAbilityCondition_FWDDECL)
#define IL2CPP_STRUCT_HasAbilityCondition_FWDDECL
#include <Modloader/app/structs/HasAbilityCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_HasAbilityCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasAbilityCondition_DEFINED) && !defined(IL2CPP_STRUCT_HasAbilityCondition_FWDDECL)
#include <Modloader/app/structs/HasAbilityCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HasAbilityCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
