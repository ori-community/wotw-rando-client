#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugRendererSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugRendererSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugRendererSettings__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_DebugRendererSettings__Fields_DEFINED
struct List_1_DebugRendererSettings_SettingsPattern_;
struct DebugRendererSettings_SettingsPattern;
struct Dictionary_2_SceneMetaData_UnityEngine_Rect_;
struct List_1_UnityEngine_Collider_;
struct List_1_InvisibleCheckpoint_;
struct List_1_UnityEngine_Rigidbody_;
struct List_1_CheckpointRestrictZone_;
struct DebugRendererSettings_DebugRendererLegendView;
struct List_1_UnityEngine_MeshFilter_;
struct List_1_VerletStructure_;
struct GUIContent;
struct StringBuilder;
struct GUIStyle;
struct Dictionary_2_CheckpointRestrictZone_System_String_;
struct DebugRendererSettings__Fields {
    struct MonoBehaviour__Fields _;
    int32_t CurrentPatternIndex;
    struct List_1_DebugRendererSettings_SettingsPattern_* Patterns;
    struct DebugRendererSettings_SettingsPattern* m_currentPattern;
    bool m_shouldUpdateCache;
    int32_t m_delayUpdateForFrames;
    struct Dictionary_2_SceneMetaData_UnityEngine_Rect_* m_cachedSceneBounds;
    struct List_1_UnityEngine_Collider_* m_cachedColliders;
    struct List_1_UnityEngine_Collider_* m_cachedDamageColliders;
    struct List_1_UnityEngine_Collider_* m_cachedSolidColliders;
    struct List_1_UnityEngine_Collider_* m_cachedSeinCharacterColliders;
    struct List_1_UnityEngine_Collider_* m_cachedCollidersTemp;
    struct List_1_InvisibleCheckpoint_* m_cachedInvisibleCheckpoints;
    struct List_1_InvisibleCheckpoint_* m_cachedInvisibleCheckpointsTemp;
    struct List_1_UnityEngine_Rigidbody_* m_cachedRigidbodiesTemp;
    struct List_1_UnityEngine_Rigidbody_* m_cachedRigidbodiesWithCollider;
    struct List_1_UnityEngine_Rigidbody_* m_cachedRigidbodiesWithoutCollider;
    struct List_1_CheckpointRestrictZone_* m_checkpointRestrictZonesTemp;
    struct List_1_CheckpointRestrictZone_* m_checkpointRestrictZones;
    struct DebugRendererSettings_DebugRendererLegendView* m_legendView;
    struct List_1_UnityEngine_MeshFilter_* m_earlyZObjects;
    struct List_1_UnityEngine_MeshFilter_* m_tempMeshFilterCollection;
    struct List_1_VerletStructure_* m_cachedVerletStructuresTemp;
    struct List_1_VerletStructure_* m_cachedVerletStructures;
    struct Rect m_respawnPointRect;
    struct Rect m_rigidbodyRect;
    struct Rect m_checkpointRestrictZoneDotRect;
    struct Rect m_checkpointRestrictZoneRect;
    struct GUIContent* m_tempGUIContent;
    struct StringBuilder* m_builder;
    struct GUIStyle* m_labelStyle;
    struct Dictionary_2_CheckpointRestrictZone_System_String_* m_cachedCheckpointRestrictZoneInfos;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugRendererSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_DebugRendererSettings__Fields_FWDDECL
#include <Modloader/app/structs/DebugRendererSettings_DebugRendererLegendView.h>
#include <Modloader/app/structs/DebugRendererSettings_SettingsPattern.h>
#include <Modloader/app/structs/Dictionary_2_CheckpointRestrictZone_System_String_.h>
#include <Modloader/app/structs/Dictionary_2_SceneMetaData_UnityEngine_Rect_.h>
#include <Modloader/app/structs/GUIContent.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/List_1_CheckpointRestrictZone_.h>
#include <Modloader/app/structs/List_1_DebugRendererSettings_SettingsPattern_.h>
#include <Modloader/app/structs/List_1_InvisibleCheckpoint_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/List_1_UnityEngine_MeshFilter_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Rigidbody_.h>
#include <Modloader/app/structs/List_1_VerletStructure_.h>
#include <Modloader/app/structs/StringBuilder.h>
#endif
#undef IL2CPP_STRUCT_DebugRendererSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugRendererSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DebugRendererSettings__Fields_FWDDECL)
#include <Modloader/app/structs/DebugRendererSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugRendererSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
