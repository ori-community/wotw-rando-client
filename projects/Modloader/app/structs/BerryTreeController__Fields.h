#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BerryTreeController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BerryTreeController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BerryTreeController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_BerryTreeController__Fields_DEFINED
struct SpriteAnimator;
struct TextureAnimation;
struct Naru;
struct BerryTreeController__Fields {
    struct MonoBehaviour__Fields _;
    struct SpriteAnimator* NaruSpriteAnimator;
    struct SpriteAnimator* TreeSpriteAnimator;
    struct TextureAnimation* NaruAnimationA;
    struct TextureAnimation* NaruAnimationB;
    struct TextureAnimation* NaruAnimationC;
    struct TextureAnimation* NaruAnimationD;
    struct TextureAnimation* TreeAnimationA;
    struct TextureAnimation* TreeAnimationB;
    struct TextureAnimation* TreeAnimationC;
    struct TextureAnimation* TreeAnimationD;
    struct TextureAnimation* SeinClimbOnNaruAnimation;
    struct Naru* Naru;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BerryTreeController__Fields_FWDDECL)
#define IL2CPP_STRUCT_BerryTreeController__Fields_FWDDECL
#include <Modloader/app/structs/Naru.h>
#include <Modloader/app/structs/SpriteAnimator.h>
#include <Modloader/app/structs/TextureAnimation.h>
#endif
#undef IL2CPP_STRUCT_BerryTreeController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BerryTreeController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BerryTreeController__Fields_FWDDECL)
#include <Modloader/app/structs/BerryTreeController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BerryTreeController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
