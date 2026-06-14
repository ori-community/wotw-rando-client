#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerExecutedCloudScriptEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerExecutedCloudScriptEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerExecutedCloudScriptEventData_DEFINED)
#include <Modloader/app/structs/PlayerExecutedCloudScriptEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerExecutedCloudScriptEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerExecutedCloudScriptEventData_DEFINED
struct PlayerExecutedCloudScriptEventData__Class;
struct PlayerExecutedCloudScriptEventData {
    struct PlayerExecutedCloudScriptEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerExecutedCloudScriptEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerExecutedCloudScriptEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerExecutedCloudScriptEventData_FWDDECL
#include <Modloader/app/structs/PlayerExecutedCloudScriptEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerExecutedCloudScriptEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerExecutedCloudScriptEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerExecutedCloudScriptEventData_FWDDECL)
#include <Modloader/app/structs/PlayerExecutedCloudScriptEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerExecutedCloudScriptEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
