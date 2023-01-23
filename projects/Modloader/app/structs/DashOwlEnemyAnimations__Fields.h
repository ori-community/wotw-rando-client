#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DashOwlEnemyAnimations__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DashOwlEnemyAnimations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlEnemyAnimations__Fields_DEFINED)
#define IL2CPP_STRUCT_DashOwlEnemyAnimations__Fields_DEFINED
struct TextureAnimationWithTransitions;
struct __declspec(align(8)) DashOwlEnemyAnimations__Fields {
    struct TextureAnimationWithTransitions* Idle;
    struct TextureAnimationWithTransitions* Alert;
    struct TextureAnimationWithTransitions* FlyHome;
    struct TextureAnimationWithTransitions* Bashed;
    struct TextureAnimationWithTransitions* HitWall;
    struct TextureAnimationWithTransitions* HitGround;
    struct TextureAnimationWithTransitions* HitCeiling;
    struct TextureAnimationWithTransitions* Dash;
    struct TextureAnimationWithTransitions* DashAlert;
    struct TextureAnimationWithTransitions* Frozen;
    struct TextureAnimationWithTransitions* HurtFront;
    struct TextureAnimationWithTransitions* HurtBack;
    struct TextureAnimationWithTransitions* Spin;
};
#endif
#if !defined(IL2CPP_STRUCT_DashOwlEnemyAnimations__Fields_FWDDECL)
#define IL2CPP_STRUCT_DashOwlEnemyAnimations__Fields_FWDDECL
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_DashOwlEnemyAnimations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlEnemyAnimations__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DashOwlEnemyAnimations__Fields_FWDDECL)
#include <Modloader/app/structs/DashOwlEnemyAnimations__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DashOwlEnemyAnimations__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
