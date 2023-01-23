#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingEnemyAnimations__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingEnemyAnimations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingEnemyAnimations__Fields_DEFINED)
#define IL2CPP_STRUCT_RammingEnemyAnimations__Fields_DEFINED
struct TextureAnimationWithTransitions;
struct __declspec(align(8)) RammingEnemyAnimations__Fields {
    struct TextureAnimationWithTransitions* Idle;
    struct TextureAnimationWithTransitions* Alert;
    struct TextureAnimationWithTransitions* Running;
    struct TextureAnimationWithTransitions* Stunned;
    struct TextureAnimationWithTransitions* Braking;
    struct TextureAnimationWithTransitions* Thrown;
    struct TextureAnimationWithTransitions* Retreat;
    struct TextureAnimationWithTransitions* HitWall;
    struct TextureAnimationWithTransitions* KnockBack;
};
#endif
#if !defined(IL2CPP_STRUCT_RammingEnemyAnimations__Fields_FWDDECL)
#define IL2CPP_STRUCT_RammingEnemyAnimations__Fields_FWDDECL
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_RammingEnemyAnimations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingEnemyAnimations__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RammingEnemyAnimations__Fields_FWDDECL)
#include <Modloader/app/structs/RammingEnemyAnimations__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingEnemyAnimations__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
