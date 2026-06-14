#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BushSetupController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BushSetupController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BushSetupController__Fields_DEFINED)
#include <Modloader/app/structs/BushSetupController_State__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_BushSetupController_State__Enum_DEFINED)
#define IL2CPP_STRUCT_BushSetupController__Fields_DEFINED
struct SpriteAnimator;
struct TextureAnimation;
struct GameObject;
struct MovieTextureController;
struct BushSetupController__Fields {
    struct MonoBehaviour__Fields _;
    struct SpriteAnimator* NaruSpriteAnimator;
    struct SpriteAnimator* SeinSpriteAnimator;
    struct TextureAnimation* KneelingRockAnimation;
    struct TextureAnimation* KneelingRockToLiftSeinAnimation;
    struct TextureAnimation* LiftSeinAnimation;
    struct TextureAnimation* LiftSeinToRockReachAnimation;
    struct TextureAnimation* RockReachAnimation;
    struct TextureAnimation* RockFallSeinAnimation;
    struct TextureAnimation* RockFallNaruAnimation;
    struct TextureAnimation* RockReachToLiftSeinAnimation;
    struct TextureAnimation* NoticeSeinAnimation;
    struct GameObject* LightCeremonyEffects;
    struct MovieTextureController* MovieTextureController;
    BushSetupController_State__Enum CurrentState;

    float m_stateCurrentTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BushSetupController__Fields_FWDDECL)
#define IL2CPP_STRUCT_BushSetupController__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MovieTextureController.h>
#include <Modloader/app/structs/SpriteAnimator.h>
#include <Modloader/app/structs/TextureAnimation.h>
#endif
#undef IL2CPP_STRUCT_BushSetupController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BushSetupController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BushSetupController__Fields_FWDDECL)
#include <Modloader/app/structs/BushSetupController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BushSetupController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
