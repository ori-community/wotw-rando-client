#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreLoadingEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreLoadingEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreLoadingEntity__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_PreLoadingEntity__Fields_DEFINED
struct SceneMetaData;
struct Condition_1;
struct RuntimeSceneMetaData;
struct List_1_Moon_Timeline_FixedDurationSceneEntity_;
struct PreLoadingEntity__Fields {
    struct TimelineEntity__Fields _;
    bool OverrideSceneMetaData;
    struct SceneMetaData* m_sceneMetaData;
    bool KeepSceneHidden;
    bool OnlyLoadNextScene;
    struct Condition_1* SkipLoadCondition;
    bool m_isSkipping;
    bool m_loaded;
    bool m_enabled;
    bool m_presumeComplete;
    struct RuntimeSceneMetaData* m_runtimeSceneMetaData;
    bool m_blockingForSceneLoad;
    int32_t m_suspensionTicketID;
    struct List_1_Moon_Timeline_FixedDurationSceneEntity_* m_entities;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PreLoadingEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_PreLoadingEntity__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_FixedDurationSceneEntity_.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#include <Modloader/app/structs/SceneMetaData.h>
#endif
#undef IL2CPP_STRUCT_PreLoadingEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreLoadingEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PreLoadingEntity__Fields_FWDDECL)
#include <Modloader/app/structs/PreLoadingEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreLoadingEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
