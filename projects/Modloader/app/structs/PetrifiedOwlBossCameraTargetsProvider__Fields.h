#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossCameraTargetsProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossCameraTargetsProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossCameraTargetsProvider__Fields_DEFINED)
#include <Modloader/app/structs/CameraTargetsProvider__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CameraTargetsProvider__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossCameraTargetsProvider__Fields_DEFINED
struct PetrifiedOwlBossEntity;
struct OriPredictionHelper_Settings;
struct Transform;
struct List_1_Moon_CameraTargetSettings_;
struct OriPredictionHelper;
struct PetrifiedOwlBossCameraTargetsProvider__Fields {
    struct CameraTargetsProvider__Fields _;
    struct PetrifiedOwlBossEntity* Powl;
    float MaxTargetVerticalOffsetFromOri;
    struct Vector2 OriPadding;
    struct OriPredictionHelper_Settings* m_oriPredictionSettings;
    bool TEST_FRAME_GROUND;
    struct Transform* Arena1GroundHeightTransform;
    struct Transform* Arena2GroundHeightTransform;
    struct Vector2 GroundPadding;
    float LavaMaxOffsetFromOri;
    float LavaFocusedThreshold;
    struct Transform* PowlReferenceTransform;
    struct Vector3 PowlReferenceOffsetArena1;
    struct Vector3 PowlReferenceOffsetArena2;
    struct Vector2 PowlPadding;
    float PowlPositionSmoothTime;
    float PowlCutOffDistanceFight1;
    float PowlCutOffDistanceFight2;
    struct List_1_Moon_CameraTargetSettings_* m_targets;
    struct OriPredictionHelper* m_oriPrediction;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossCameraTargetsProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossCameraTargetsProvider__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_CameraTargetSettings_.h>
#include <Modloader/app/structs/OriPredictionHelper.h>
#include <Modloader/app/structs/OriPredictionHelper_Settings.h>
#include <Modloader/app/structs/PetrifiedOwlBossEntity.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossCameraTargetsProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossCameraTargetsProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossCameraTargetsProvider__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossCameraTargetsProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossCameraTargetsProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
