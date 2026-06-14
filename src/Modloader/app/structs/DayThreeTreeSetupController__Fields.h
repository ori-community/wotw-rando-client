#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DayThreeTreeSetupController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DayThreeTreeSetupController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DayThreeTreeSetupController__Fields_DEFINED)
#include <Modloader/app/structs/DayThreeTreeSetupController_State__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DayThreeTreeSetupController_State__Enum_DEFINED)
#define IL2CPP_STRUCT_DayThreeTreeSetupController__Fields_DEFINED
struct SpriteAnimator;
struct SpriteAnimatorWithTransitions;
struct TextureAnimation;
struct TextureAnimationWithTransitions;
struct CharacterAnimationSystem;
struct MovieTextureController;
struct DayThreeTreeSetupController__Fields {
    struct MonoBehaviour__Fields _;
    struct SpriteAnimator* NaruClimbSpriteAnimator;
    struct SpriteAnimatorWithTransitions* NaruBranchSpriteAnimatorWithTransitions;
    struct SpriteAnimator* TreeSpriteAnimator;
    struct TextureAnimation* NaruBranchGrabAnimation;
    struct TextureAnimationWithTransitions* NaruBranchIdleAnimation;
    struct TextureAnimationWithTransitions* NaruBranchReachAnimation;
    struct TextureAnimationWithTransitions* NaruBranchBackwardsAnimation;
    struct TextureAnimationWithTransitions* NaruBranchJumpAnimation;
    struct TextureAnimationWithTransitions* NaruBranchJumpIdleAnimation;
    struct TextureAnimationWithTransitions* NaruBranchJumpIdleCollapseAnimation;
    struct CharacterAnimationSystem* NaruBranchAnimationSystem;
    DayThreeTreeSetupController_State__Enum CurrentState;

    float m_stateCurrentTime;
    int32_t m_jumpsCount;
    struct MovieTextureController* MovieTextureController;
    struct TextureAnimationWithTransitions* TextureAnimationWithTransitions;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DayThreeTreeSetupController__Fields_FWDDECL)
#define IL2CPP_STRUCT_DayThreeTreeSetupController__Fields_FWDDECL
#include <Modloader/app/structs/CharacterAnimationSystem.h>
#include <Modloader/app/structs/MovieTextureController.h>
#include <Modloader/app/structs/SpriteAnimator.h>
#include <Modloader/app/structs/SpriteAnimatorWithTransitions.h>
#include <Modloader/app/structs/TextureAnimation.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_DayThreeTreeSetupController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DayThreeTreeSetupController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DayThreeTreeSetupController__Fields_FWDDECL)
#include <Modloader/app/structs/DayThreeTreeSetupController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DayThreeTreeSetupController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
