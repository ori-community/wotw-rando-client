#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicCameraTargetting__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicCameraTargetting__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicCameraTargetting__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_DynamicCameraTargetting__Fields_DEFINED
struct CameraTargetsProvider;
struct Transform;
struct EntitySettings;
struct InterestSettings;
struct AbilityBasedSetting;
struct CameraOffsetController_OffsetLayer;
struct CameraTarget_TargetLayer;
struct BlendFloat;
struct List_1_UnityEngine_Rect_;
struct DynamicCameraTargetting__Fields {
    struct MonoBehaviour__Fields _;
    struct CameraTargetsProvider* TargetsProvider;
    struct Transform* CameraTargetTransform;
    struct Vector2 ZoomRange;
    float ExtraMinZoom;
    float ExtraMaxZoom;
    struct Vector2 VerticalPaddings;
    struct Vector2 HorizontalPaddings;
    float ActivationLerpTime;
    float CameraTargetLerpSpeed;
    float ZoomLerpTimeDec;
    bool UseSwitchZoomLerpTime;
    float SwitchZoomLerpTimeDec;
    float ZoomLerpTimeInc;
    float BlendTime;
    bool EnableDebugDraw;
    bool RespectOffsetZones;
    bool KeepOriOnScreen;
    struct EntitySettings* Entity;
    struct InterestSettings* NPC;
    struct AbilityBasedSetting* HookPlant;
    struct AbilityBasedSetting* BashLantern;
    struct InterestSettings* Pickups;
    bool UseFieldOfView;
    float FOVIncreaseAdjustmentTime;
    float FOVDecreaseAdjustmentTime;
    float MaxFOVOffset;
    float MaxFOVTargetZ;
    float IncreaseTimeGate;
    float DecreaseTimeGate;
    float BrightnessDecreaseAdjustmentTime;
    float BrightnessIncreaseAdjustmentTime;
    bool DoBrightnessAdditive;
    bool DoBrightnessMultiplicative;
    float BrightnessAdditive;
    float BrightnessMultiplicative;
    bool DoExtraBrightnessForEnemies;
    float ExtraBrightnessPerEnemy;
    float MaxBrightnessForEnemies;
    bool m_isSuspended;
    bool m_isActive;
    float m_weight;
    float m_extraDarkness;
    float m_fovIncreaseTimer;
    float m_fovDecreaseTimer;
    struct CameraOffsetController_OffsetLayer* m_offsetLayer;
    struct CameraTarget_TargetLayer* m_targetLayer;
    struct BlendFloat* m_targetWeight;
    float m_currentZoomVelocity;
    bool _Bypass_k__BackingField;
    bool _OnlyUseDynamicWithEnemies_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    float m_fovWeight;
    float m_brightnessWeight;
    float _FOVMultiplier_k__BackingField;
    struct Vector3 m_charMovement;
    struct List_1_UnityEngine_Rect_* m_tempRectList;
    struct List_1_UnityEngine_Rect_* m_rects;
    float m_fovSpeed;
    float m_brightnessSpeed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicCameraTargetting__Fields_FWDDECL)
#define IL2CPP_STRUCT_DynamicCameraTargetting__Fields_FWDDECL
#include <Modloader/app/structs/AbilityBasedSetting.h>
#include <Modloader/app/structs/BlendFloat.h>
#include <Modloader/app/structs/CameraOffsetController_OffsetLayer.h>
#include <Modloader/app/structs/CameraTarget_TargetLayer.h>
#include <Modloader/app/structs/CameraTargetsProvider.h>
#include <Modloader/app/structs/EntitySettings.h>
#include <Modloader/app/structs/InterestSettings.h>
#include <Modloader/app/structs/List_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DynamicCameraTargetting__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicCameraTargetting__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DynamicCameraTargetting__Fields_FWDDECL)
#include <Modloader/app/structs/DynamicCameraTargetting__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicCameraTargetting__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
