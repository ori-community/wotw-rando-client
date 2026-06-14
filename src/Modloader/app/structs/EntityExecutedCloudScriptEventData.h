#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityExecutedCloudScriptEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityExecutedCloudScriptEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityExecutedCloudScriptEventData_DEFINED)
#include <Modloader/app/structs/EntityExecutedCloudScriptEventData__Fields.h>
#if defined(IL2CPP_STRUCT_EntityExecutedCloudScriptEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityExecutedCloudScriptEventData_DEFINED
struct EntityExecutedCloudScriptEventData__Class;
struct EntityExecutedCloudScriptEventData {
    struct EntityExecutedCloudScriptEventData__Class* klass;
    MonitorData* monitor;
    struct EntityExecutedCloudScriptEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityExecutedCloudScriptEventData_FWDDECL)
#define IL2CPP_STRUCT_EntityExecutedCloudScriptEventData_FWDDECL
#include <Modloader/app/structs/EntityExecutedCloudScriptEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityExecutedCloudScriptEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityExecutedCloudScriptEventData_DEFINED) && !defined(IL2CPP_STRUCT_EntityExecutedCloudScriptEventData_FWDDECL)
#include <Modloader/app/structs/EntityExecutedCloudScriptEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityExecutedCloudScriptEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
