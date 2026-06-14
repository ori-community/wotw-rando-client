#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatorPostprocessPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatorPostprocessPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorPostprocessPlayer__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimatorPostprocessPlayer__Fields_DEFINED
struct MoonReference_1_MoonAnimator_;
struct MoonReference_1_Moon_Animation_IAnimatorPostprocessPlayerCompatible_;
struct MoonAnimator;
struct IAnimatorPostprocessPlayerCompatible;
struct AnimatorPostprocessPlayer__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_MoonAnimator_* Animator;
    struct MoonReference_1_Moon_Animation_IAnimatorPostprocessPlayerCompatible_* Postprocess;
    float BlendInDuration;
    float BlendOutDuration;
    struct MoonAnimator* m_resolvedAnimator;
    struct IAnimatorPostprocessPlayerCompatible* m_resolvedPostprocess;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimatorPostprocessPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimatorPostprocessPlayer__Fields_FWDDECL
#include <Modloader/app/structs/IAnimatorPostprocessPlayerCompatible.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonReference_1_MoonAnimator_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Animation_IAnimatorPostprocessPlayerCompatible_.h>
#endif
#undef IL2CPP_STRUCT_AnimatorPostprocessPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorPostprocessPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimatorPostprocessPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/AnimatorPostprocessPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatorPostprocessPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
