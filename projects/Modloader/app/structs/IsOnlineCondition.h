#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsOnlineCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsOnlineCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsOnlineCondition_DEFINED)
#include <Modloader/app/structs/IsOnlineCondition__Fields.h>
#if defined(IL2CPP_STRUCT_IsOnlineCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_IsOnlineCondition_DEFINED
struct IsOnlineCondition__Class;
struct IsOnlineCondition {
    struct IsOnlineCondition__Class* klass;
    MonitorData* monitor;
    struct IsOnlineCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsOnlineCondition_FWDDECL)
#define IL2CPP_STRUCT_IsOnlineCondition_FWDDECL
#include <Modloader/app/structs/IsOnlineCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_IsOnlineCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsOnlineCondition_DEFINED) && !defined(IL2CPP_STRUCT_IsOnlineCondition_FWDDECL)
#include <Modloader/app/structs/IsOnlineCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsOnlineCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
