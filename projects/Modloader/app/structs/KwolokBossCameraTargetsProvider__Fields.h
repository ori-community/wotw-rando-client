#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossCameraTargetsProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossCameraTargetsProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossCameraTargetsProvider__Fields_DEFINED)
#include <Modloader/app/structs/CameraTargetsProvider__Fields.h>
#include <Modloader/app/structs/KwolokBossCameraTargetsProvider_CutoffMode__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CameraTargetsProvider__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_KwolokBossCameraTargetsProvider_CutoffMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_KwolokBossCameraTargetsProvider__Fields_DEFINED
struct KwolokBossEntity;
struct Transform;
struct OriPredictionHelper_Settings;
struct KwolokBossCameraTargetsProvider_MultiTargetCameraSettings;
struct List_1_Moon_CameraTargetSettings_;
struct OriPredictionHelper;
struct KwolokBossCameraTargetsProvider__Fields {
    struct CameraTargetsProvider__Fields _;
    struct KwolokBossEntity* Kwolok;
    struct Transform* KwolokReferenceTransform;
    struct Vector3 KwolokReferenceOffset;
    KwolokBossCameraTargetsProvider_CutoffMode__Enum CutoffLogic;

    struct OriPredictionHelper_Settings* m_oriPredictionSettings;
    struct Vector2 OriPaddingEscape;
    struct KwolokBossCameraTargetsProvider_MultiTargetCameraSettings* CameraSettingsEscape;
    float KwolokCutoffDistanceEscape;
    struct Vector2 OriPaddingFight;
    struct Transform* GroundPositionFight;
    float KwolokCutoffDistanceFight;
    float MaxGroundDistanceDryPhase;
    struct KwolokBossCameraTargetsProvider_MultiTargetCameraSettings* CameraSettingsDryPhase;
    float MaxGroundDistanceWaterPhase;
    struct KwolokBossCameraTargetsProvider_MultiTargetCameraSettings* CameraSettingsWaterPhase;
    struct Vector2 KwolokPaddingDeath;
    struct Vector2 KwolokTargetOffsetDeath;
    struct KwolokBossCameraTargetsProvider_MultiTargetCameraSettings* CameraSettingsDefeatedPhase;
    float CameraLerpSpeedMultiplierDefeatedPhase;
    struct Vector2 GroundPadding;
    struct Vector2 KwolokPadding;
    float KwolokPositionSmoothTime;
    struct List_1_Moon_CameraTargetSettings_* m_targets;
    struct OriPredictionHelper* m_oriPrediction;
    struct Vector3 m_kwolokSmoothedPosition;
    struct Vector3 m_kwolokPositionDampCurrentSpeed;
    float m_disableTimer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossCameraTargetsProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossCameraTargetsProvider__Fields_FWDDECL
#include <Modloader/app/structs/KwolokBossCameraTargetsProvider_MultiTargetCameraSettings.h>
#include <Modloader/app/structs/KwolokBossEntity.h>
#include <Modloader/app/structs/List_1_Moon_CameraTargetSettings_.h>
#include <Modloader/app/structs/OriPredictionHelper.h>
#include <Modloader/app/structs/OriPredictionHelper_Settings.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossCameraTargetsProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossCameraTargetsProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossCameraTargetsProvider__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossCameraTargetsProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossCameraTargetsProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
