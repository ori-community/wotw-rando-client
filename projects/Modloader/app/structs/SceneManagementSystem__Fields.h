#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneManagementSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneManagementSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneManagementSystem__Fields_DEFINED)
#include <Modloader/app/structs/ScenesManager_SceneManagementMode__Enum.h>
#if defined(IL2CPP_STRUCT_ScenesManager_SceneManagementMode__Enum_DEFINED)
#define IL2CPP_STRUCT_SceneManagementSystem__Fields_DEFINED
struct Dictionary_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_;
struct List_1_RuntimeSceneMetaData_;
struct RuntimeSceneMetaData;
struct FixedDurationSceneEntity;
struct __declspec(align(8)) SceneManagementSystem__Fields {
    struct Dictionary_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_* m_loadedStates;
    struct List_1_RuntimeSceneMetaData_* m_sceneStateToRemove;
    int32_t m_sceneEntityPlayCount;
    ScenesManager_SceneManagementMode__Enum Mode;

    float _IncreasedSceneEntityPlayCountTime_k__BackingField;
    struct RuntimeSceneMetaData* LastMasterTimelineScene;
    struct FixedDurationSceneEntity* LastFixedDurationSceneEntity;
    struct List_1_RuntimeSceneMetaData_* m_toRemove;
    bool m_isSuspended;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneManagementSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneManagementSystem__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_.h>
#include <Modloader/app/structs/FixedDurationSceneEntity.h>
#include <Modloader/app/structs/List_1_RuntimeSceneMetaData_.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#endif
#undef IL2CPP_STRUCT_SceneManagementSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneManagementSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneManagementSystem__Fields_FWDDECL)
#include <Modloader/app/structs/SceneManagementSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneManagementSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
