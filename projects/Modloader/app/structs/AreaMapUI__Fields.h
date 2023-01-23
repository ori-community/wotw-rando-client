#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AreaMapUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AreaMapUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapUI__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_AreaMapUI__Fields_DEFINED
struct List_1_AreaMapCanvas_;
struct GameObject;
struct MessageBox;
struct ScaleAnimator;
struct MoonTimeline;
struct Transform;
struct AreaMapLegend;
struct MessageProvider;
struct AreaMapDebugNavigation;
struct AreaMapNavigation;
struct AreaMapIconManager;
struct IconPlacementScaler;
struct AreaMapCanvasOverlay__Array;
struct List_1_UnityEngine_GameObject_;
struct AreaMapUI__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_AreaMapCanvas_* Canvases;
    struct GameObject* PlayerPositionMarkerPrefab;
    struct GameObject* SoulFlamePositionMarkerPrefab;
    struct GameObject* ObjectivePrefab;
    struct GameObject* IconPrefab;
    struct GameObject* TrailPrefab;
    struct MessageBox* ObjectiveText;
    struct ScaleAnimator* ObjectiveTextAnimator;
    struct GameObject* ObjectiveIcon;
    struct MoonTimeline* FadeOutTimeline;
    struct MoonTimeline* FadeInTimeline;
    struct Transform* m_fadeGroup;
    struct AreaMapLegend* AreaMapLegend;
    struct MessageProvider* ObjectiveMessageProvider;
    struct MessageProvider* CompletedMessageProvider;
    struct Vector3 PlayerPositionOffset;
    struct GameObject* _PlayerPositionMarker_k__BackingField;
    struct GameObject* _SoulFlamePositionMarker_k__BackingField;
    struct AreaMapDebugNavigation* _DebugNavigation_k__BackingField;
    struct AreaMapNavigation* _Navigation_k__BackingField;
    struct AreaMapIconManager* _IconManager_k__BackingField;
    struct IconPlacementScaler* _IconScaler_k__BackingField;
    bool m_isInited;
    bool m_shouldResetMaps;
    bool m_shouldResetMapsImmediate;
    struct AreaMapCanvasOverlay__Array* m_canvasOverlays;
    int32_t m_maskGenerationIndex;
    struct List_1_UnityEngine_GameObject_* m_Trail;
    int32_t TrailFadeStartSeconds;
    bool TrailFill;
    bool TrailEnabled;
    bool m_showingLabels;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AreaMapUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_AreaMapUI__Fields_FWDDECL
#include <Modloader/app/structs/AreaMapCanvasOverlay__Array.h>
#include <Modloader/app/structs/AreaMapDebugNavigation.h>
#include <Modloader/app/structs/AreaMapIconManager.h>
#include <Modloader/app/structs/AreaMapLegend.h>
#include <Modloader/app/structs/AreaMapNavigation.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IconPlacementScaler.h>
#include <Modloader/app/structs/List_1_AreaMapCanvas_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ScaleAnimator.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_AreaMapUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AreaMapUI__Fields_FWDDECL)
#include <Modloader/app/structs/AreaMapUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AreaMapUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
