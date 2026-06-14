#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FishEnemyAnimations__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FishEnemyAnimations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishEnemyAnimations__Fields_DEFINED)
#define IL2CPP_STRUCT_FishEnemyAnimations__Fields_DEFINED
struct TwistAnimationSet;
struct TextureAnimationWithTransitions;
struct __declspec(align(8)) FishEnemyAnimations__Fields {
    struct TwistAnimationSet* Idle;
    struct TwistAnimationSet* Swim;
    struct TextureAnimationWithTransitions* Attack;
    struct TextureAnimationWithTransitions* Bashed;
    struct TextureAnimationWithTransitions* BounceCeiling;
    struct TextureAnimationWithTransitions* BounceFloor;
    struct TextureAnimationWithTransitions* BounceWall;
    struct TextureAnimationWithTransitions* Fall;
    struct TextureAnimationWithTransitions* Flop;
    struct TextureAnimationWithTransitions* IdleFlipHorizontal;
    struct TextureAnimationWithTransitions* IdleFlipVertical;
    struct TextureAnimationWithTransitions* SwimFlipHorizontal;
    struct TextureAnimationWithTransitions* SwimFlipVertical;
};
#endif
#if !defined(IL2CPP_STRUCT_FishEnemyAnimations__Fields_FWDDECL)
#define IL2CPP_STRUCT_FishEnemyAnimations__Fields_FWDDECL
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#include <Modloader/app/structs/TwistAnimationSet.h>
#endif
#undef IL2CPP_STRUCT_FishEnemyAnimations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishEnemyAnimations__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FishEnemyAnimations__Fields_FWDDECL)
#include <Modloader/app/structs/FishEnemyAnimations__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FishEnemyAnimations__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
