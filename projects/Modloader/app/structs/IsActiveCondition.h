#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsActiveCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsActiveCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsActiveCondition_DEFINED)
#include <Modloader/app/structs/IsActiveCondition__Fields.h>
#if defined(IL2CPP_STRUCT_IsActiveCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_IsActiveCondition_DEFINED
struct IsActiveCondition__Class;
struct IsActiveCondition {
    struct IsActiveCondition__Class* klass;
    MonitorData* monitor;
    struct IsActiveCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsActiveCondition_FWDDECL)
#define IL2CPP_STRUCT_IsActiveCondition_FWDDECL
#include <Modloader/app/structs/IsActiveCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_IsActiveCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsActiveCondition_DEFINED) && !defined(IL2CPP_STRUCT_IsActiveCondition_FWDDECL)
#include <Modloader/app/structs/IsActiveCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsActiveCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
