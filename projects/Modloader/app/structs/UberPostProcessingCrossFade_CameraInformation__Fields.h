#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPostProcessingCrossFade_CameraInformation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPostProcessingCrossFade_CameraInformation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostProcessingCrossFade_CameraInformation__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_UberPostProcessingCrossFade_CameraInformation__Fields_DEFINED
struct CameraSettings;
struct CameraAdditiveSettings;
struct Color__Array;
struct __declspec(align(8)) UberPostProcessingCrossFade_CameraInformation__Fields {
    struct Vector3 Position;
    struct Quaternion Rotation;
    struct CameraSettings* Settings;
    struct CameraAdditiveSettings* AdditiveSettings;
    struct Color__Array* FogGradient;
    struct Color__Array* MultiplyFogGradient;
    struct Vector3 Speed;
    float FieldOfView;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPostProcessingCrossFade_CameraInformation__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberPostProcessingCrossFade_CameraInformation__Fields_FWDDECL
#include <Modloader/app/structs/CameraAdditiveSettings.h>
#include <Modloader/app/structs/CameraSettings.h>
#include <Modloader/app/structs/Color__Array.h>
#endif
#undef IL2CPP_STRUCT_UberPostProcessingCrossFade_CameraInformation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostProcessingCrossFade_CameraInformation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberPostProcessingCrossFade_CameraInformation__Fields_FWDDECL)
#include <Modloader/app/structs/UberPostProcessingCrossFade_CameraInformation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPostProcessingCrossFade_CameraInformation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
