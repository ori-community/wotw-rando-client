#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivationBasedOnCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivationBasedOnCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivationBasedOnCondition_DEFINED)
#include <Modloader/app/structs/ActivationBasedOnCondition__Fields.h>
#if defined(IL2CPP_STRUCT_ActivationBasedOnCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivationBasedOnCondition_DEFINED
struct ActivationBasedOnCondition__Class;
struct ActivationBasedOnCondition {
    struct ActivationBasedOnCondition__Class* klass;
    MonitorData* monitor;
    struct ActivationBasedOnCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivationBasedOnCondition_FWDDECL)
#define IL2CPP_STRUCT_ActivationBasedOnCondition_FWDDECL
#include <Modloader/app/structs/ActivationBasedOnCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_ActivationBasedOnCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivationBasedOnCondition_DEFINED) && !defined(IL2CPP_STRUCT_ActivationBasedOnCondition_FWDDECL)
#include <Modloader/app/structs/ActivationBasedOnCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivationBasedOnCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
