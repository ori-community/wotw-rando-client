#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyFloatAnimationParameterAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyFloatAnimationParameterAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyFloatAnimationParameterAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyFloatAnimationParameterAnimator__Fields_DEFINED
struct FloatAnimationParameter;
struct MoonAnimator;
struct AnimationCurve;
struct LegacyFloatAnimationParameterAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct FloatAnimationParameter* Parameter;
    struct MoonAnimator* AnimatedObject;
    struct AnimationCurve* AnimationCurve;
    float m_originalValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyFloatAnimationParameterAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyFloatAnimationParameterAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/MoonAnimator.h>
#endif
#undef IL2CPP_STRUCT_LegacyFloatAnimationParameterAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyFloatAnimationParameterAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyFloatAnimationParameterAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyFloatAnimationParameterAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyFloatAnimationParameterAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
