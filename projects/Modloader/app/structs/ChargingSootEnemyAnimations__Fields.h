#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChargingSootEnemyAnimations__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChargingSootEnemyAnimations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChargingSootEnemyAnimations__Fields_DEFINED)
#define IL2CPP_STRUCT_ChargingSootEnemyAnimations__Fields_DEFINED
struct TextureAnimationWithTransitions;
struct __declspec(align(8)) ChargingSootEnemyAnimations__Fields {
    struct TextureAnimationWithTransitions* Idle;
    struct TextureAnimationWithTransitions* Walk;
    struct TextureAnimationWithTransitions* RunBack;
    struct TextureAnimationWithTransitions* Charging;
    struct TextureAnimationWithTransitions* Shooting;
    struct TextureAnimationWithTransitions* Thrown;
    struct TextureAnimationWithTransitions* Stomped;
    struct TextureAnimationWithTransitions* Stunned;
};
#endif
#if !defined(IL2CPP_STRUCT_ChargingSootEnemyAnimations__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChargingSootEnemyAnimations__Fields_FWDDECL
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_ChargingSootEnemyAnimations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChargingSootEnemyAnimations__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChargingSootEnemyAnimations__Fields_FWDDECL)
#include <Modloader/app/structs/ChargingSootEnemyAnimations__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChargingSootEnemyAnimations__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
