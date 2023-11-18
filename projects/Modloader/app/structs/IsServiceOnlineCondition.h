#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsServiceOnlineCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsServiceOnlineCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsServiceOnlineCondition_DEFINED)
#include <Modloader/app/structs/IsServiceOnlineCondition__Fields.h>
#if defined(IL2CPP_STRUCT_IsServiceOnlineCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_IsServiceOnlineCondition_DEFINED
struct IsServiceOnlineCondition__Class;
struct IsServiceOnlineCondition {
    struct IsServiceOnlineCondition__Class* klass;
    MonitorData* monitor;
    struct IsServiceOnlineCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsServiceOnlineCondition_FWDDECL)
#define IL2CPP_STRUCT_IsServiceOnlineCondition_FWDDECL
#include <Modloader/app/structs/IsServiceOnlineCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_IsServiceOnlineCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsServiceOnlineCondition_DEFINED) && !defined(IL2CPP_STRUCT_IsServiceOnlineCondition_FWDDECL)
#include <Modloader/app/structs/IsServiceOnlineCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsServiceOnlineCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
