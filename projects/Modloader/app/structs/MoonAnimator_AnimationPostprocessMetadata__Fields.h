#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimator_AnimationPostprocessMetadata__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimator_AnimationPostprocessMetadata__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_AnimationPostprocessMetadata__Fields_DEFINED)
#include <Modloader/app/structs/MoonAnimator_AnimationPostprocessState__Enum.h>
#if defined(IL2CPP_STRUCT_MoonAnimator_AnimationPostprocessState__Enum_DEFINED)
#define IL2CPP_STRUCT_MoonAnimator_AnimationPostprocessMetadata__Fields_DEFINED
struct AnimationPostprocess;
struct __declspec(align(8)) MoonAnimator_AnimationPostprocessMetadata__Fields {
    struct AnimationPostprocess* Animation;
    MoonAnimator_AnimationPostprocessState__Enum State;

    float CurrentBlendTime;
    float BlendDuration;
    float OriginalWeight;
    bool IsProcessingActive;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimator_AnimationPostprocessMetadata__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimator_AnimationPostprocessMetadata__Fields_FWDDECL
#include <Modloader/app/structs/AnimationPostprocess.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimator_AnimationPostprocessMetadata__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_AnimationPostprocessMetadata__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimator_AnimationPostprocessMetadata__Fields_FWDDECL)
#include <Modloader/app/structs/MoonAnimator_AnimationPostprocessMetadata__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimator_AnimationPostprocessMetadata__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
