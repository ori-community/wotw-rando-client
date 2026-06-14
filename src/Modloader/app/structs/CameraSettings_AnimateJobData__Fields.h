#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraSettings_AnimateJobData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraSettings_AnimateJobData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSettings_AnimateJobData__Fields_DEFINED)
#include <Modloader/app/structs/BlendGradientColorsJob.h>
#include <Modloader/app/structs/JobHandle.h>
#if defined(IL2CPP_STRUCT_BlendGradientColorsJob_DEFINED) && defined(IL2CPP_STRUCT_JobHandle_DEFINED)
#define IL2CPP_STRUCT_CameraSettings_AnimateJobData__Fields_DEFINED
struct __declspec(align(8)) CameraSettings_AnimateJobData__Fields {
    struct BlendGradientColorsJob GradientJob;
    struct BlendGradientColorsJob GradientMultJob;
    struct JobHandle GradientJobHandle;
    struct JobHandle GradientMultJobHandle;
    bool IsRunningJob;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraSettings_AnimateJobData__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraSettings_AnimateJobData__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CameraSettings_AnimateJobData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSettings_AnimateJobData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraSettings_AnimateJobData__Fields_FWDDECL)
#include <Modloader/app/structs/CameraSettings_AnimateJobData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraSettings_AnimateJobData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
