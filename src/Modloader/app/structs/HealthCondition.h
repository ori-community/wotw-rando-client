#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HealthCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HealthCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_HealthCondition_DEFINED)
#include <Modloader/app/structs/HealthCondition__Fields.h>
#if defined(IL2CPP_STRUCT_HealthCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_HealthCondition_DEFINED
struct HealthCondition__Class;
struct HealthCondition {
    struct HealthCondition__Class* klass;
    MonitorData* monitor;
    struct HealthCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HealthCondition_FWDDECL)
#define IL2CPP_STRUCT_HealthCondition_FWDDECL
#include <Modloader/app/structs/HealthCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_HealthCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_HealthCondition_DEFINED) && !defined(IL2CPP_STRUCT_HealthCondition_FWDDECL)
#include <Modloader/app/structs/HealthCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HealthCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
