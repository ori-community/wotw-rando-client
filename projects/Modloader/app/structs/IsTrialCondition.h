#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsTrialCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsTrialCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsTrialCondition_DEFINED)
#include <Modloader/app/structs/IsTrialCondition__Fields.h>
#if defined(IL2CPP_STRUCT_IsTrialCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_IsTrialCondition_DEFINED
struct IsTrialCondition__Class;
struct IsTrialCondition {
    struct IsTrialCondition__Class* klass;
    MonitorData* monitor;
    struct IsTrialCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsTrialCondition_FWDDECL)
#define IL2CPP_STRUCT_IsTrialCondition_FWDDECL
#include <Modloader/app/structs/IsTrialCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_IsTrialCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsTrialCondition_DEFINED) && !defined(IL2CPP_STRUCT_IsTrialCondition_FWDDECL)
#include <Modloader/app/structs/IsTrialCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsTrialCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
