#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarWormEnemyDeath__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarWormEnemyDeath__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarWormEnemyDeath__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MortarWormEnemyDeath__Fields_DEFINED
struct TextureAnimation;
struct MortarWormEnemyDeath__Fields {
    struct MonoBehaviour__Fields _;
    struct TextureAnimation* Diagonal;
    struct TextureAnimation* Upright;
    struct TextureAnimation* UpsideDown;
    struct TextureAnimation* Wall;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarWormEnemyDeath__Fields_FWDDECL)
#define IL2CPP_STRUCT_MortarWormEnemyDeath__Fields_FWDDECL
#include <Modloader/app/structs/TextureAnimation.h>
#endif
#undef IL2CPP_STRUCT_MortarWormEnemyDeath__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarWormEnemyDeath__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MortarWormEnemyDeath__Fields_FWDDECL)
#include <Modloader/app/structs/MortarWormEnemyDeath__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarWormEnemyDeath__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
