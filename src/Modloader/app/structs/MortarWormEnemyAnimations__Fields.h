#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarWormEnemyAnimations__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarWormEnemyAnimations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarWormEnemyAnimations__Fields_DEFINED)
#define IL2CPP_STRUCT_MortarWormEnemyAnimations__Fields_DEFINED
struct TextureAnimationWithTransitions;
struct MortarWormDirectionalAnimations;
struct __declspec(align(8)) MortarWormEnemyAnimations__Fields {
    struct TextureAnimationWithTransitions* Idle;
    struct TextureAnimationWithTransitions* Charging;
    struct MortarWormDirectionalAnimations* Shooting;
    struct TextureAnimationWithTransitions* Hidden;
    struct TextureAnimationWithTransitions* Hiding;
    struct TextureAnimationWithTransitions* Emerging;
};
#endif
#if !defined(IL2CPP_STRUCT_MortarWormEnemyAnimations__Fields_FWDDECL)
#define IL2CPP_STRUCT_MortarWormEnemyAnimations__Fields_FWDDECL
#include <Modloader/app/structs/MortarWormDirectionalAnimations.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_MortarWormEnemyAnimations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarWormEnemyAnimations__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MortarWormEnemyAnimations__Fields_FWDDECL)
#include <Modloader/app/structs/MortarWormEnemyAnimations__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarWormEnemyAnimations__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
