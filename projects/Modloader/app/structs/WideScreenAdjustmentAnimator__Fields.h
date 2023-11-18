#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WideScreenAdjustmentAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WideScreenAdjustmentAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WideScreenAdjustmentAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_WideScreenAdjustmentAnimator__Fields_DEFINED
struct AnimationCurve;
struct CameraPuppetController;
struct WideScreenAdjustmentAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct AnimationCurve* WideScreenHorizontalPanCurve;
    struct AnimationCurve* WideScreenVerticalPanCurve;
    struct AnimationCurve* WideScreenZoomCurve;
    struct CameraPuppetController* m_puppet;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WideScreenAdjustmentAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_WideScreenAdjustmentAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/CameraPuppetController.h>
#endif
#undef IL2CPP_STRUCT_WideScreenAdjustmentAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WideScreenAdjustmentAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WideScreenAdjustmentAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/WideScreenAdjustmentAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WideScreenAdjustmentAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
