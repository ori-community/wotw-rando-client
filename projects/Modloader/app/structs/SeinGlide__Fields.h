#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinGlide__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinGlide__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGlide__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SeinGlide_State__Enum.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinGlide_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinGlide__Fields_DEFINED
struct AnimationCurve;
struct GameObject;
struct HorizontalPlatformMovementSettings_SpeedMultiplierSet;
struct MoonAnimation;
struct CharacterTimelineTurning;
struct SeinGlide__Fields {
    struct CharacterState__Fields _;
    struct AnimationCurve* LeafSize;
    struct AnimationCurve* DistanceToKnockback;
    struct GameObject* LeafRig;
    float RunningTime;
    float MinHeightToGlide;
    float GlideSpeed;
    float GravityMultiplier;
    struct HorizontalPlatformMovementSettings_SpeedMultiplierSet* MoveSpeed;
    struct MoonAnimation* LeafGlide;
    struct MoonAnimation* LeafGlideDeploy;
    struct MoonAnimation* LeafGlideTurn;
    float RootMotionMultiplier;
    bool NeedsRightTriggerReleased;
    bool m_pressedMoveHorizontally;
    bool m_wasMovingHorizontally;
    bool m_leafFinishedAppearing;
    bool m_interruptingTurnAnim;
    float m_lockGlidingRemainingTime;
    SeinGlide_State__Enum m_currentState;

    bool GlideInterruptsDoubleJump;
    struct CharacterTimelineTurning* m_currentTurning;
    bool _WantsToFaceLeft_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinGlide__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinGlide__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/CharacterTimelineTurning.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings_SpeedMultiplierSet.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_SeinGlide__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGlide__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinGlide__Fields_FWDDECL)
#include <Modloader/app/structs/SeinGlide__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinGlide__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
