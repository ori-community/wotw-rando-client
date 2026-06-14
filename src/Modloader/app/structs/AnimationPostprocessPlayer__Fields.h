#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationPostprocessPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationPostprocessPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPostprocessPlayer__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationPostprocessPlayer__Fields_DEFINED
struct MoonReference_1_MoonAnimator_;
struct MoonAnimator;
struct AnimationPostprocess;
struct MoonReference_1_AnimationPostprocess_;
struct AnimationCurve;
struct AnimationPostprocessPlayer__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_MoonAnimator_* Animator;
    struct MoonAnimator* m_moonAnimator;
    struct AnimationPostprocess* m_postprocessInstance;
    float m_time;
    struct MoonReference_1_AnimationPostprocess_* AnimationPostprocess;
    struct AnimationPostprocess* Postprocess;
    struct AnimationCurve* WeightCurve;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationPostprocessPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimationPostprocessPlayer__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/AnimationPostprocess.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonReference_1_AnimationPostprocess_.h>
#include <Modloader/app/structs/MoonReference_1_MoonAnimator_.h>
#endif
#undef IL2CPP_STRUCT_AnimationPostprocessPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPostprocessPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationPostprocessPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/AnimationPostprocessPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationPostprocessPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
