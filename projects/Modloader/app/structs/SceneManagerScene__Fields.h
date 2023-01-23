#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneManagerScene__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneManagerScene__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneManagerScene__Fields_DEFINED)
#include <Modloader/app/structs/SceneState__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SceneState__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SceneManagerScene__Fields_DEFINED
struct SceneRoot;
struct RuntimeSceneMetaData;
struct __declspec(align(8)) SceneManagerScene__Fields {
    struct SceneRoot* SceneRoot;
    struct RuntimeSceneMetaData* MetaData;
    bool HasStartBeenCalled;
    SceneState__Enum m_currentState;

    float UnloadTime;
    float TimeOfDisabled;
    float TimeOfLoad;
    float LoadingTime;
    float LastActivationBeginTime;
    float LastActivationDuration;
    float LastDeactivationBeginTime;
    float LastDeactivationDuration;
    bool PreventUnloading;
    bool KeepLoadedForCheckpoint;
    bool IsHidden;
    bool HideOnLoadCompleted;
    bool _ShouldBeReady_k__BackingField;
    bool _ShouldBeVisible_k__BackingField;
    bool _ShouldBeEnabled_k__BackingField;
    float _DistanceToPositionOnLastEnable_k__BackingField;
    struct Vector3 _CameraTargetOnLastEnabled_k__BackingField;
    float _DistanceToPositionOnLastLoad_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneManagerScene__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneManagerScene__Fields_FWDDECL
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#include <Modloader/app/structs/SceneRoot.h>
#endif
#undef IL2CPP_STRUCT_SceneManagerScene__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneManagerScene__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneManagerScene__Fields_FWDDECL)
#include <Modloader/app/structs/SceneManagerScene__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneManagerScene__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
