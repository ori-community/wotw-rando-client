#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenarioSceneEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenarioSceneEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenarioSceneEntity_DEFINED)
#include <Modloader/app/structs/ScenarioSceneEntity__Fields.h>
#if defined(IL2CPP_STRUCT_ScenarioSceneEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_ScenarioSceneEntity_DEFINED
struct ScenarioSceneEntity__Class;
struct ScenarioSceneEntity {
    struct ScenarioSceneEntity__Class* klass;
    MonitorData* monitor;
    struct ScenarioSceneEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenarioSceneEntity_FWDDECL)
#define IL2CPP_STRUCT_ScenarioSceneEntity_FWDDECL
#include <Modloader/app/structs/ScenarioSceneEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_ScenarioSceneEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenarioSceneEntity_DEFINED) && !defined(IL2CPP_STRUCT_ScenarioSceneEntity_FWDDECL)
#include <Modloader/app/structs/ScenarioSceneEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenarioSceneEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
