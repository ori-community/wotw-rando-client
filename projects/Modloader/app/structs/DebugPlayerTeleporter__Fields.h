#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugPlayerTeleporter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugPlayerTeleporter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugPlayerTeleporter__Fields_DEFINED)
#include <Modloader/app/structs/DebugPlayerTeleporter_DebugMarkerMode__Enum.h>
#include <Modloader/app/structs/DebugPlayerTeleporter_LocomotionRequestMode__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DebugPlayerTeleporter_LocomotionRequestMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_DebugPlayerTeleporter_DebugMarkerMode__Enum_DEFINED)
#define IL2CPP_STRUCT_DebugPlayerTeleporter__Fields_DEFINED
struct GameObject;
struct AnimationCurve;
struct List_1_Moon_Entity_;
struct DebugPlayerTeleporter__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* NoClipGhostPrefab;
    struct AnimationCurve* AxisToSpeedCurve;
    struct GameObject* m_noClipGhost;
    bool m_noClipParamsEnabled;
    struct GameObject* NoClipNavigationGhostPrefab;
    struct GameObject* NoClipNavigationSelectionPrefab;
    struct GameObject* m_noClipNavigationGhost;
    struct GameObject* m_noClipNavigationSelectionGhost;
    struct List_1_Moon_Entity_* m_entities;
    float doubleClickDelay;
    DebugPlayerTeleporter_LocomotionRequestMode__Enum m_locomotionRequestMode;

    DebugPlayerTeleporter_DebugMarkerMode__Enum m_mode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugPlayerTeleporter__Fields_FWDDECL)
#define IL2CPP_STRUCT_DebugPlayerTeleporter__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_Moon_Entity_.h>
#endif
#undef IL2CPP_STRUCT_DebugPlayerTeleporter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugPlayerTeleporter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DebugPlayerTeleporter__Fields_FWDDECL)
#include <Modloader/app/structs/DebugPlayerTeleporter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugPlayerTeleporter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
