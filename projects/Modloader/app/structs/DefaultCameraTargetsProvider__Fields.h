#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultCameraTargetsProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultCameraTargetsProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultCameraTargetsProvider__Fields_DEFINED)
#include <Modloader/app/structs/CameraTargetsProvider__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CameraTargetsProvider__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_DefaultCameraTargetsProvider__Fields_DEFINED
struct List_1_DefaultCameraProviderEntry_;
struct OriPredictionHelper_Settings;
struct List_1_Moon_CameraTargetSettings_;
struct OriPredictionHelper;
struct DefaultCameraTargetsProvider__Fields {
    struct CameraTargetsProvider__Fields _;
    struct List_1_DefaultCameraProviderEntry_* Targets;
    struct OriPredictionHelper_Settings* m_oriPredictionSettings;
    struct List_1_Moon_CameraTargetSettings_* m_targets;
    struct OriPredictionHelper* m_oriPrediction;
    struct Vector3 m_kwolokSmoothedPosition;
    struct Vector3 m_kwolokPositionDampCurrentSpeed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DefaultCameraTargetsProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_DefaultCameraTargetsProvider__Fields_FWDDECL
#include <Modloader/app/structs/List_1_DefaultCameraProviderEntry_.h>
#include <Modloader/app/structs/List_1_Moon_CameraTargetSettings_.h>
#include <Modloader/app/structs/OriPredictionHelper.h>
#include <Modloader/app/structs/OriPredictionHelper_Settings.h>
#endif
#undef IL2CPP_STRUCT_DefaultCameraTargetsProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultCameraTargetsProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DefaultCameraTargetsProvider__Fields_FWDDECL)
#include <Modloader/app/structs/DefaultCameraTargetsProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultCameraTargetsProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
