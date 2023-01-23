#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShootingSpiderAnimations__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShootingSpiderAnimations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootingSpiderAnimations__Fields_DEFINED)
#define IL2CPP_STRUCT_ShootingSpiderAnimations__Fields_DEFINED
struct TextureAnimationWithTransitions;
struct __declspec(align(8)) ShootingSpiderAnimations__Fields {
    struct TextureAnimationWithTransitions* Respawn;
    struct TextureAnimationWithTransitions* Charging;
    struct TextureAnimationWithTransitions* Idle;
    struct TextureAnimationWithTransitions* Shooting;
    struct TextureAnimationWithTransitions* Hurt;
};
#endif
#if !defined(IL2CPP_STRUCT_ShootingSpiderAnimations__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShootingSpiderAnimations__Fields_FWDDECL
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_ShootingSpiderAnimations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootingSpiderAnimations__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShootingSpiderAnimations__Fields_FWDDECL)
#include <Modloader/app/structs/ShootingSpiderAnimations__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShootingSpiderAnimations__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
