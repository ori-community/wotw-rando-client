#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenesManagerBehaviourLegacy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenesManagerBehaviourLegacy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerBehaviourLegacy__Fields_DEFINED)
#include <Modloader/app/structs/ScenesManagerBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_ScenesManagerBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_ScenesManagerBehaviourLegacy__Fields_DEFINED
struct HashSet_1_RuntimeSceneMetaData_;
struct List_1_SceneManagerScene_;
struct ScenesManagerBehaviourLegacy__Fields {
    struct ScenesManagerBehaviour__Fields _;
    struct HashSet_1_RuntimeSceneMetaData_* m_scenesToEnable;
    struct List_1_SceneManagerScene_* m_enablingScenes;
    struct Vector2 _CurrentCameraTargetPositionExtrapolated_k__BackingField;
    struct Vector2 _CurrentCameraTargetPositionExtrapolatedShort_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenesManagerBehaviourLegacy__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScenesManagerBehaviourLegacy__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_RuntimeSceneMetaData_.h>
#include <Modloader/app/structs/List_1_SceneManagerScene_.h>
#endif
#undef IL2CPP_STRUCT_ScenesManagerBehaviourLegacy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerBehaviourLegacy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScenesManagerBehaviourLegacy__Fields_FWDDECL)
#include <Modloader/app/structs/ScenesManagerBehaviourLegacy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenesManagerBehaviourLegacy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
