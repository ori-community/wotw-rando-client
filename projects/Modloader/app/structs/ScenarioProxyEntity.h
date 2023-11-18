#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenarioProxyEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenarioProxyEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenarioProxyEntity_DEFINED)
#include <Modloader/app/structs/ScenarioProxyEntity__Fields.h>
#if defined(IL2CPP_STRUCT_ScenarioProxyEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_ScenarioProxyEntity_DEFINED
struct ScenarioProxyEntity__Class;
struct ScenarioProxyEntity {
    struct ScenarioProxyEntity__Class* klass;
    MonitorData* monitor;
    struct ScenarioProxyEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenarioProxyEntity_FWDDECL)
#define IL2CPP_STRUCT_ScenarioProxyEntity_FWDDECL
#include <Modloader/app/structs/ScenarioProxyEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_ScenarioProxyEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenarioProxyEntity_DEFINED) && !defined(IL2CPP_STRUCT_ScenarioProxyEntity_FWDDECL)
#include <Modloader/app/structs/ScenarioProxyEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenarioProxyEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
