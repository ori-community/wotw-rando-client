#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeVerletAnimationPostprocess__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeVerletAnimationPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeVerletAnimationPostprocess__Fields_DEFINED)
#include <Modloader/app/structs/AnimationVerletPlayable.h>
#include <Modloader/app/structs/AnimationVerletPlayableConfiguration.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_AnimationVerletPlayableConfiguration_DEFINED) && defined(IL2CPP_STRUCT_AnimationVerletPlayable_DEFINED)
#define IL2CPP_STRUCT_NativeVerletAnimationPostprocess__Fields_DEFINED
struct NativeVerletAnimationPostprocess_Structure__Array;
struct MoonAnimator;
struct NativeVerletAnimationPostprocess__Fields {
    struct MonoBehaviour__Fields _;
    struct AnimationVerletPlayableConfiguration Configuration;
    struct NativeVerletAnimationPostprocess_Structure__Array* Structures;
    struct MoonAnimator* m_animator;
    struct AnimationVerletPlayable m_verletPlayable;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NativeVerletAnimationPostprocess__Fields_FWDDECL)
#define IL2CPP_STRUCT_NativeVerletAnimationPostprocess__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/NativeVerletAnimationPostprocess_Structure__Array.h>
#endif
#undef IL2CPP_STRUCT_NativeVerletAnimationPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeVerletAnimationPostprocess__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NativeVerletAnimationPostprocess__Fields_FWDDECL)
#include <Modloader/app/structs/NativeVerletAnimationPostprocess__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeVerletAnimationPostprocess__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
