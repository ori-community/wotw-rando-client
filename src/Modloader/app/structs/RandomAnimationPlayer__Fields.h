#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RandomAnimationPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RandomAnimationPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RandomAnimationPlayer__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_RandomAnimationPlayer__Fields_DEFINED
struct SpriteAnimator;
struct RandomAnimationPlayer_WeightedAnimation__Array;
struct RandomAnimationPlayer__Fields {
    struct MonoBehaviour__Fields _;
    struct SpriteAnimator* m_spriteAnimator;
    float m_time;
    struct RandomAnimationPlayer_WeightedAnimation__Array* Animations;
    float m_totalWeight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RandomAnimationPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_RandomAnimationPlayer__Fields_FWDDECL
#include <Modloader/app/structs/RandomAnimationPlayer_WeightedAnimation__Array.h>
#include <Modloader/app/structs/SpriteAnimator.h>
#endif
#undef IL2CPP_STRUCT_RandomAnimationPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RandomAnimationPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RandomAnimationPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/RandomAnimationPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RandomAnimationPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
