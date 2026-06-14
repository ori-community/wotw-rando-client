#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameplayCameraTargetsProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameplayCameraTargetsProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplayCameraTargetsProvider__Fields_DEFINED)
#include <Modloader/app/structs/CameraTargetsProvider__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_CameraTargetsProvider__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_GameplayCameraTargetsProvider__Fields_DEFINED
struct List_1_GameplayCameraTargetEntry_;
struct OriPredictionHelper_Settings;
struct List_1_Moon_CameraTargetSettings_;
struct OriPredictionHelper;
struct CameraTargetData;
struct GameplayCameraTargetsProvider__Fields {
    struct CameraTargetsProvider__Fields _;
    struct List_1_GameplayCameraTargetEntry_* Targets;
    struct OriPredictionHelper_Settings* m_oriPredictionSettings;
    struct List_1_Moon_CameraTargetSettings_* m_targets;
    struct OriPredictionHelper* m_oriPrediction;
    struct Vector2 CharacterPadding;
    struct Vector2 CharacterOffset;
    struct Vector2 CharacterPaddingMax;
    struct Vector2 MinSpeedBeforePaddingGrows;
    float PaddingLerpSpeed;
    float PaddingWorldSpeedMultiplier;
    struct Vector2 m_characterPadding;
    struct CameraTargetData* m_tempData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameplayCameraTargetsProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameplayCameraTargetsProvider__Fields_FWDDECL
#include <Modloader/app/structs/CameraTargetData.h>
#include <Modloader/app/structs/List_1_GameplayCameraTargetEntry_.h>
#include <Modloader/app/structs/List_1_Moon_CameraTargetSettings_.h>
#include <Modloader/app/structs/OriPredictionHelper.h>
#include <Modloader/app/structs/OriPredictionHelper_Settings.h>
#endif
#undef IL2CPP_STRUCT_GameplayCameraTargetsProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplayCameraTargetsProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameplayCameraTargetsProvider__Fields_FWDDECL)
#include <Modloader/app/structs/GameplayCameraTargetsProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameplayCameraTargetsProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
