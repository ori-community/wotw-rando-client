#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationPostprocess__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPostprocess__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationPostprocess__Fields_DEFINED
struct FloatAnimationParameter;
struct GameObject;
struct MoonAnimator;
struct AnimationPostprocessGroup;
struct AnimationPostprocess__Fields {
    struct MonoBehaviour__Fields _;
    float Weight;
    struct FloatAnimationParameter* WeightParameter;
    struct GameObject* AutoAddTarget;
    struct MoonAnimator* TargetAnimator;
    struct AnimationPostprocessGroup* Group;
    struct AnimationPostprocessGroup* SubGroup;
    struct MoonAnimator* m_moonAnimator;
    bool m_registeredToMoonDriver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationPostprocess__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimationPostprocess__Fields_FWDDECL
#include <Modloader/app/structs/AnimationPostprocessGroup.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimator.h>
#endif
#undef IL2CPP_STRUCT_AnimationPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPostprocess__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationPostprocess__Fields_FWDDECL)
#include <Modloader/app/structs/AnimationPostprocess__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationPostprocess__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
