#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DayFourBushSetupController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DayFourBushSetupController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DayFourBushSetupController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DayFourBushSetupController__Fields_DEFINED
struct SpriteAnimator;
struct TextureAnimation;
struct Transform;
struct BabySein;
struct MovieTextureController;
struct DayFourBushSetupController__Fields {
    struct MonoBehaviour__Fields _;
    struct SpriteAnimator* SeinSpriteAnimator;
    struct SpriteAnimator* LeafSpriteAnimator;
    struct SpriteAnimator* BranchSpriteAnimator;
    struct SpriteAnimator* BerriesSpriteAnimator;
    struct TextureAnimation* BerriesFallAnimation;
    struct TextureAnimation* BranchBreakAnimation;
    struct TextureAnimation* BranchIdleAnimation;
    struct TextureAnimation* LeafIdleAnimation;
    struct TextureAnimation* SeinFloatAnimation;
    struct Transform* CameraTargetDuringSequence;
    struct BabySein* BabySeinWithBerries;
    struct MovieTextureController* MovieTextureController;
    struct Transform* SeinSpawnPisition;
    bool m_branchAnimationWasPlayed;
    bool m_berriesAnimationWasPlayed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DayFourBushSetupController__Fields_FWDDECL)
#define IL2CPP_STRUCT_DayFourBushSetupController__Fields_FWDDECL
#include <Modloader/app/structs/BabySein.h>
#include <Modloader/app/structs/MovieTextureController.h>
#include <Modloader/app/structs/SpriteAnimator.h>
#include <Modloader/app/structs/TextureAnimation.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DayFourBushSetupController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DayFourBushSetupController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DayFourBushSetupController__Fields_FWDDECL)
#include <Modloader/app/structs/DayFourBushSetupController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DayFourBushSetupController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
