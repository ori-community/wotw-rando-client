#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossCameraTargetsProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossCameraTargetsProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossCameraTargetsProvider__Fields_DEFINED)
#include <Modloader/app/structs/CameraTargetsProvider__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CameraTargetsProvider__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_SpiderBossCameraTargetsProvider__Fields_DEFINED
struct SpiderBossEntity;
struct Transform;
struct OriPredictionHelper_Settings;
struct List_1_Moon_CameraTargetSettings_;
struct OriPredictionHelper;
struct SpiderBossCameraTargetsProvider__Fields {
    struct CameraTargetsProvider__Fields _;
    struct SpiderBossEntity* Spider;
    struct Transform* SpiderReferenceTransform;
    struct Vector3 SpiderReferenceOffset;
    struct OriPredictionHelper_Settings* m_oriPredictionSettings;
    struct Vector2 OriPaddingEscape;
    struct Vector2 OriPaddingFight;
    float MaxGroundDistance;
    struct Vector2 GroundPadding;
    struct Vector2 SpiderPadding;
    float SpiderMinHeight;
    struct Transform* GroundArena1;
    float SpiderCutOffDistance;
    float SpiderPositionSmoothTime;
    struct List_1_Moon_CameraTargetSettings_* m_targets;
    struct OriPredictionHelper* m_oriPrediction;
    struct Vector3 m_spiderSmoothedPosition;
    struct Vector3 m_spiderPositionDampCurrentSpeed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossCameraTargetsProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossCameraTargetsProvider__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_CameraTargetSettings_.h>
#include <Modloader/app/structs/OriPredictionHelper.h>
#include <Modloader/app/structs/OriPredictionHelper_Settings.h>
#include <Modloader/app/structs/SpiderBossEntity.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossCameraTargetsProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossCameraTargetsProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossCameraTargetsProvider__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBossCameraTargetsProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossCameraTargetsProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
