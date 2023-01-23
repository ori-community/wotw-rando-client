#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AreaMapNavigation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AreaMapNavigation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapNavigation__Fields_DEFINED)
#include <Modloader/app/structs/AreaMapNavigation_State__Enum.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_AreaMapNavigation_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UnityEngine_Vector2__DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_AreaMapNavigation__Fields_DEFINED
struct Transform;
struct UISoundSettingsAsset;
struct AnimationCurve;
struct AreaMapUI;
struct AreaMapScrollLimit__Array;
struct AreaMapNavigation__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* MapPivot;
    float AreaMapZoomLevel;
    float WorldMapZoomLevel;
    float AreaMapCloseZoomLevel;
    float m_scrollTime;
    float m_time;
    float m_volumeFactor;
    float m_lastZoom;
    bool m_focusOnPlayer;
    struct WwiseEventSystem_SoundHandle m_zoomOutHandle;
    struct WwiseEventSystem_SoundHandle m_zoomInHandle;
    float m_zoomBuffer;
    float VolumeDecayFactor;
    struct UISoundSettingsAsset* Sounds;
    struct WwiseEventSystem_SoundHandle m_scrollingSoundHandle;
    struct AnimationCurve* ScrollingSensitivityCurve;
    struct Vector2 m_lastDragPosition;
    bool m_firstUpdate;
    struct Vector2 m_scrollPosition;
    struct AreaMapUI* m_areaMapUi;
    struct AreaMapScrollLimit__Array* m_scrollLimits;
    AreaMapNavigation_State__Enum CurrentState;

    struct Vector3 m_target;
    struct Bounds _Bounds_k__BackingField;
    struct Vector2 m_fromPosition;
    struct Vector2 m_toPosition;
    float m_focusTime;
    struct Transform* m_followTransform;
    struct Nullable_1_UnityEngine_Vector2_ m_retainedPosition;
    struct Rect m_scrollAreaLimit;
    bool m_wasScrolling;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AreaMapNavigation__Fields_FWDDECL)
#define IL2CPP_STRUCT_AreaMapNavigation__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/AreaMapScrollLimit__Array.h>
#include <Modloader/app/structs/AreaMapUI.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UISoundSettingsAsset.h>
#endif
#undef IL2CPP_STRUCT_AreaMapNavigation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapNavigation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AreaMapNavigation__Fields_FWDDECL)
#include <Modloader/app/structs/AreaMapNavigation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AreaMapNavigation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
