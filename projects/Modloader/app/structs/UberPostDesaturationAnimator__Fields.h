#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPostDesaturationAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPostDesaturationAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostDesaturationAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPostDesaturationAnimator__Fields_DEFINED
struct AnimationCurve;
struct CameraPostProcessing;
struct UberPostDesaturationAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct AnimationCurve* AnimationCurve;
    struct CameraPostProcessing* m_cameraPostProcessing;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPostDesaturationAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberPostDesaturationAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/CameraPostProcessing.h>
#endif
#undef IL2CPP_STRUCT_UberPostDesaturationAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostDesaturationAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberPostDesaturationAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/UberPostDesaturationAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPostDesaturationAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
