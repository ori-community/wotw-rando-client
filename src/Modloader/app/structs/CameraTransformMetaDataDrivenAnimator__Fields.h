#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraTransformMetaDataDrivenAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraTransformMetaDataDrivenAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraTransformMetaDataDrivenAnimator__Fields_DEFINED)
#include <Modloader/app/structs/LegacyAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraTransformMetaDataDrivenAnimator__Fields_DEFINED
struct AnimationMetaData;
struct CameraTransformMetaDataDrivenAnimator__Fields {
    struct LegacyAnimator__Fields _;
    struct AnimationMetaData* AnimationMetaData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraTransformMetaDataDrivenAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraTransformMetaDataDrivenAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationMetaData.h>
#endif
#undef IL2CPP_STRUCT_CameraTransformMetaDataDrivenAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraTransformMetaDataDrivenAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraTransformMetaDataDrivenAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/CameraTransformMetaDataDrivenAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraTransformMetaDataDrivenAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
