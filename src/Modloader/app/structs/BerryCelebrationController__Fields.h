#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BerryCelebrationController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BerryCelebrationController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BerryCelebrationController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_BerryCelebrationController__Fields_DEFINED
struct SpriteAnimator;
struct TextureAnimation;
struct MovieTextureController;
struct GameObject;
struct SoundProvider;
struct BerryCelebrationController__Fields {
    struct MonoBehaviour__Fields _;
    struct SpriteAnimator* BerryCelebrationSpriteAnimator;
    struct TextureAnimation* BerryCelebrationAnimation;
    struct MovieTextureController* MovieTextureController;
    struct GameObject* Rope;
    struct SoundProvider* IntroSoundProvider;
    struct SoundProvider* LoopSoundProvider;
    float IntroFadeInDuration;
    float LoopFadeInDuration;
    float m_introLength;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BerryCelebrationController__Fields_FWDDECL)
#define IL2CPP_STRUCT_BerryCelebrationController__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MovieTextureController.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SpriteAnimator.h>
#include <Modloader/app/structs/TextureAnimation.h>
#endif
#undef IL2CPP_STRUCT_BerryCelebrationController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BerryCelebrationController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BerryCelebrationController__Fields_FWDDECL)
#include <Modloader/app/structs/BerryCelebrationController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BerryCelebrationController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
