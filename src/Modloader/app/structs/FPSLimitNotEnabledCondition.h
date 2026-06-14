#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSLimitNotEnabledCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSLimitNotEnabledCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSLimitNotEnabledCondition_DEFINED)
#include <Modloader/app/structs/FPSLimitNotEnabledCondition__Fields.h>
#if defined(IL2CPP_STRUCT_FPSLimitNotEnabledCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_FPSLimitNotEnabledCondition_DEFINED
struct FPSLimitNotEnabledCondition__Class;
struct FPSLimitNotEnabledCondition {
    struct FPSLimitNotEnabledCondition__Class* klass;
    MonitorData* monitor;
    struct FPSLimitNotEnabledCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSLimitNotEnabledCondition_FWDDECL)
#define IL2CPP_STRUCT_FPSLimitNotEnabledCondition_FWDDECL
#include <Modloader/app/structs/FPSLimitNotEnabledCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_FPSLimitNotEnabledCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSLimitNotEnabledCondition_DEFINED) && !defined(IL2CPP_STRUCT_FPSLimitNotEnabledCondition_FWDDECL)
#include <Modloader/app/structs/FPSLimitNotEnabledCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSLimitNotEnabledCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
