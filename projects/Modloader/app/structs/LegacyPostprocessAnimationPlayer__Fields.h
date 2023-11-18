#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyPostprocessAnimationPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyPostprocessAnimationPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyPostprocessAnimationPlayer__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyPostprocessAnimationPlayer__Fields_DEFINED
struct AnimationPostprocess;
struct AnimationCurve;
struct GameObject;
struct MoonAnimator;
struct LegacyPostprocessAnimationPlayer__Fields {
    struct BaseAnimator__Fields _;
    struct AnimationPostprocess* Postprocess;
    struct AnimationCurve* WeightCurve;
    struct GameObject* AnimatedObject;
    bool TweakMode;
    bool m_started;
    struct MoonAnimator* m_moonAnimator;
    struct AnimationPostprocess* m_postprocessInstance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyPostprocessAnimationPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyPostprocessAnimationPlayer__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/AnimationPostprocess.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimator.h>
#endif
#undef IL2CPP_STRUCT_LegacyPostprocessAnimationPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyPostprocessAnimationPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyPostprocessAnimationPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyPostprocessAnimationPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyPostprocessAnimationPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
