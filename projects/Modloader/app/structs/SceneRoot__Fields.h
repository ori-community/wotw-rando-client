#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneRoot__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneRoot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneRoot__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SceneState__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SceneState__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SceneRoot__Fields_DEFINED
struct SceneMetaData;
struct List_1_UnityEngine_Object_;
struct SceneRootData;
struct Component_1__Array;
struct List_1_System_Boolean_;
struct List_1_UnityEngine_Component_;
struct List_1_UnityEngine_GameObject_;
struct Object_1__Array;
struct TimeSlicedActivationTask;
struct TimesliceSceneUnloadTask;
struct SceneSettingsComponent;
struct HashSet_1_UnityEngine_GameObject_;
struct SceneRoot__Fields {
    struct MonoBehaviour__Fields _;
    struct SceneMetaData* MetaData;
    struct List_1_UnityEngine_Object_* SceneResources;
    struct SceneRootData* SceneRootData;
    struct Component_1__Array* m_sceneRootPreEnabledObservers;
    struct Component_1__Array* m_sceneRootPostEnabledObservers;
    struct List_1_System_Boolean_* m_allPotentialObjectsToTimeSliceEnableModifier;
    struct List_1_UnityEngine_Component_* m_postEnabledObservers;
    struct List_1_UnityEngine_Component_* m_preDisableObservers;
    struct List_1_UnityEngine_GameObject_* m_objectsToTimeSliceEnable;
    struct List_1_UnityEngine_GameObject_* m_allPotentialObjectsToTimeSliceEnable;
    struct List_1_UnityEngine_GameObject_* m_objectsToTimesliceDisable;
    struct Component_1__Array* m_frustumOptimizedObjects;
    bool IsUnloading;
    struct Component_1__Array* sceneRootPreDisableObservers;
    struct Object_1__Array* ResourcesToUnload;
    struct TimeSlicedActivationTask* m_activationTask;
    struct TimesliceSceneUnloadTask* m_unloadTask;
    int32_t UnloadJobPriority;
    bool m_highPriorityEnabling;
    SceneState__Enum m_state;

    struct Vector3 m_previousPosition;
    struct SceneSettingsComponent* m_sceneSettings;
    bool _IsReady_k__BackingField;
    bool _IsVisible_k__BackingField;
    struct HashSet_1_UnityEngine_GameObject_* m_lightCanvases;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneRoot__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneRoot__Fields_FWDDECL
#include <Modloader/app/structs/Component_1__Array.h>
#include <Modloader/app/structs/HashSet_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/List_1_System_Boolean_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Component_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Object_.h>
#include <Modloader/app/structs/Object_1__Array.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/SceneRootData.h>
#include <Modloader/app/structs/SceneSettingsComponent.h>
#include <Modloader/app/structs/TimeSlicedActivationTask.h>
#include <Modloader/app/structs/TimesliceSceneUnloadTask.h>
#endif
#undef IL2CPP_STRUCT_SceneRoot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneRoot__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneRoot__Fields_FWDDECL)
#include <Modloader/app/structs/SceneRoot__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneRoot__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
