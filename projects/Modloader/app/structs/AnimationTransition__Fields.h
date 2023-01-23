#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationTransition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationTransition__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationTransition__Fields_DEFINED
struct MoonAnimation;
struct __declspec(align(8)) AnimationTransition__Fields {
    struct MoonAnimation* TargetAnimation;
    struct MoonAnimation* TransitionAnimation;
    float Duration;
    float CrossfadeFromSourceDuration;
    float CrossfadeToTargetDuration;
    bool HasExitRange;
    float ExitRangeBegin;
    float ExitRangeEnd;
    float TargetNormalizedStartTime;
    bool IsFolded;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimationTransition__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimationTransition__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_AnimationTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationTransition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationTransition__Fields_FWDDECL)
#include <Modloader/app/structs/AnimationTransition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationTransition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
