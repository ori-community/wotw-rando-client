#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldMapUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldMapUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldMapUI__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_WorldMapUI__Fields_DEFINED
struct Transform;
struct GameObject;
struct List_1_Quest_;
struct Camera;
struct MoonTimeline;
struct AnimationCurve;
struct CleverMenuItemSelectionManager;
struct SceneRoot;
struct EventTriggerAnimator__Array;
struct List_1_QuestIconUI_;
struct List_1_UnityEngine_Transform_;
struct CameraSettings;
struct SliceRenderSettings;
struct WorldMapOverworldArea__Array;
struct List_1_UnityEngine_GameObject_;
struct SceneSettingsComponent;
struct WorldMapUI__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* PlayerMarker;
    struct Transform* CursorTransform;
    struct Transform* CursorTransformWorldSpace;
    struct GameObject* FogGroup;
    struct Transform* WorldSpaceMapRoot;
    bool _Activated_k__BackingField;
    float FullZoom;
    float CloseZoom;
    struct GameObject* QuestIconUIPrefab;
    bool ShowOnlyQuestsOnTheList;
    struct List_1_Quest_* WorldMapQuests;
    struct Camera* Camera;
    struct MoonTimeline* UiFadeIn;
    struct MoonTimeline* UiFadeOut;
    struct Transform* m_UiGroup;
    bool m_showSavePedestalIcons;
    struct AnimationCurve* m_iconSpaceLerpCurve;
    struct CleverMenuItemSelectionManager* NavigationManager;
    struct SceneRoot* SceneRoot;
    struct AnimationCurve* ZoomXYCurve;
    struct AnimationCurve* ZoomZCurve;
    struct Vector3 CameraOffset;
    struct Rect ScrollAreaLimit;
    struct EventTriggerAnimator__Array* CinematicModeTriggers;
    struct List_1_QuestIconUI_* m_questIcons;
    struct List_1_UnityEngine_Transform_* m_savePedestalIcons;
    struct Vector3 m_originalCamPosition;
    struct CameraSettings* m_cameraSettings;
    struct SliceRenderSettings* m_slicedRenderSettings;
    bool m_enabled;
    bool m_ignoreNavigationMenuItemChange;
    struct Vector2 m_lastDragPosition;
    float m_scrollTime;
    struct WorldMapOverworldArea__Array* m_worldMapOverworldAreas;
    struct List_1_UnityEngine_GameObject_* m_hiddenScenes;
    struct Rect m_cursorAreaLimit;
    struct Vector3 m_cursorWorldPosition;
    bool m_areaUnderCursor;
    struct Vector3 m_previusCamPosition;
    bool m_wasInCinematicMode;
    struct SceneSettingsComponent* m_sceneSettings;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WorldMapUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_WorldMapUI__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/CameraSettings.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/EventTriggerAnimator__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_QuestIconUI_.h>
#include <Modloader/app/structs/List_1_Quest_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SceneSettingsComponent.h>
#include <Modloader/app/structs/SliceRenderSettings.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/WorldMapOverworldArea__Array.h>
#endif
#undef IL2CPP_STRUCT_WorldMapUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldMapUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WorldMapUI__Fields_FWDDECL)
#include <Modloader/app/structs/WorldMapUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldMapUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
