#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsLoadingInProgressCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsLoadingInProgressCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsLoadingInProgressCondition_DEFINED)
#include <Modloader/app/structs/IsLoadingInProgressCondition__Fields.h>
#if defined(IL2CPP_STRUCT_IsLoadingInProgressCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_IsLoadingInProgressCondition_DEFINED
struct IsLoadingInProgressCondition__Class;
struct IsLoadingInProgressCondition {
    struct IsLoadingInProgressCondition__Class* klass;
    MonitorData* monitor;
    struct IsLoadingInProgressCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsLoadingInProgressCondition_FWDDECL)
#define IL2CPP_STRUCT_IsLoadingInProgressCondition_FWDDECL
#include <Modloader/app/structs/IsLoadingInProgressCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_IsLoadingInProgressCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsLoadingInProgressCondition_DEFINED) && !defined(IL2CPP_STRUCT_IsLoadingInProgressCondition_FWDDECL)
#include <Modloader/app/structs/IsLoadingInProgressCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsLoadingInProgressCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
