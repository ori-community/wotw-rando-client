#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenarioSceneEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenarioSceneEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenarioSceneEntity__Fields_DEFINED)
#include <Modloader/app/structs/MoonTimeline__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTimeline__Fields_DEFINED)
#define IL2CPP_STRUCT_ScenarioSceneEntity__Fields_DEFINED
struct SceneMetaData;
struct ScenarioSceneEntity__Fields {
    struct MoonTimeline__Fields _;
    struct SceneMetaData* SceneMetaData;
    float _SceneDuration_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenarioSceneEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScenarioSceneEntity__Fields_FWDDECL
#include <Modloader/app/structs/SceneMetaData.h>
#endif
#undef IL2CPP_STRUCT_ScenarioSceneEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenarioSceneEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScenarioSceneEntity__Fields_FWDDECL)
#include <Modloader/app/structs/ScenarioSceneEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenarioSceneEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
