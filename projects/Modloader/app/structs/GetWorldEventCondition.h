#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetWorldEventCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetWorldEventCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetWorldEventCondition_DEFINED)
#include <Modloader/app/structs/GetWorldEventCondition__Fields.h>
#if defined(IL2CPP_STRUCT_GetWorldEventCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_GetWorldEventCondition_DEFINED
struct GetWorldEventCondition__Class;
struct GetWorldEventCondition {
    struct GetWorldEventCondition__Class* klass;
    MonitorData* monitor;
    struct GetWorldEventCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetWorldEventCondition_FWDDECL)
#define IL2CPP_STRUCT_GetWorldEventCondition_FWDDECL
#include <Modloader/app/structs/GetWorldEventCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_GetWorldEventCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetWorldEventCondition_DEFINED) && !defined(IL2CPP_STRUCT_GetWorldEventCondition_FWDDECL)
#include <Modloader/app/structs/GetWorldEventCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetWorldEventCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
