#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinInteraction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinInteraction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinInteraction__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_SeinInteraction__Fields_DEFINED
struct MoonAnimation;
struct GameObject;
struct Event_1;
struct SeinInteraction_ThrowKeystoneSettings__Array;
struct HorizontalPlatformMovementSettings;
struct AnimationCurve;
struct List_1_SeinInteraction_ThrownKeystone_;
struct ICharacterInteractable;
struct MessageBox;
struct Action;
struct SeinInteraction__Fields {
    struct CharacterState__Fields _;
    struct MoonAnimation* PickUpTorch;
    struct MoonAnimation* IdleListenAnimation;
    struct MoonAnimation* ReceiveMap;
    struct GameObject* KeystoneProjectile;
    struct Event_1* ThrowSoundEvent;
    struct SeinInteraction_ThrowKeystoneSettings__Array* ThrowKeyStoneSetups;
    struct SeinInteraction_ThrowKeystoneSettings__Array* TandemThrowKeyStoneSetups;
    struct HorizontalPlatformMovementSettings* ThrowKeystoneMovementSettings;
    float AirThrowJumpSpeedY;
    float ThresholdSpeedToApplyJumpY;
    float KeystoneSpeed;
    struct AnimationCurve* KeystoneTrajectoryX;
    struct AnimationCurve* KeystoneTrajectoryY;
    struct Vector2 Variance;
    int32_t m_keystoneTimelineIndex;
    bool m_isInNPCInteraction;
    struct List_1_SeinInteraction_ThrownKeystone_* m_thrownKeystones;
    bool m_spriteMirrorLock;
    struct ICharacterInteractable* m_currentInteractable;
    struct ActiveAnimationHandle m_activeAnimation;
    struct MessageBox* m_interactionHintMessageBox;
    struct Action* m_onFinishThrow;
    int32_t StonesBeingThrown;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinInteraction__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinInteraction__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/ICharacterInteractable.h>
#include <Modloader/app/structs/List_1_SeinInteraction_ThrownKeystone_.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SeinInteraction_ThrowKeystoneSettings__Array.h>
#endif
#undef IL2CPP_STRUCT_SeinInteraction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinInteraction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinInteraction__Fields_FWDDECL)
#include <Modloader/app/structs/SeinInteraction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinInteraction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
