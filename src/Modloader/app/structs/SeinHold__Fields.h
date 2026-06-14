#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinHold__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinHold__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinHold__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_SeinHold__Fields_DEFINED
struct IHoldable;
struct IThrowable;
struct SeinHold_States;
struct StateMachine_2;
struct MoonAnimation;
struct MessageProvider;
struct AnimationCurve;
struct SeinGrenadeTrajectory;
struct SeinHold_ThrowAnimationSet__Array;
struct Action_1_IHoldable_;
struct Action;
struct Dictionary_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_;
struct MessageBox;
struct SeinHold__Fields {
    struct CharacterState__Fields _;
    bool m_preventTorchPose;
    bool m_isUsing;
    struct IHoldable* m_currentHoldable;
    struct IThrowable* m_throwable;
    bool m_spriteMirrorLock;
    bool m_dropButtonActive;
    float m_dropButtonDownTime;
    struct SeinHold_States* State;
    struct StateMachine_2* Logic;
    float PickupRadius;
    float PickupRadiusAir;
    float PickupMovingObjectsCheckRadius;
    float DropButtonMaxTime;
    struct LayerMask PickupCheckLayerMask;
    struct LayerMask EndDropCollisionLayerMask;
    struct MoonAnimation* PickupTorch;
    struct MoonAnimation* PickupTorchFinish;
    struct MoonAnimation* DropTorch;
    struct MessageProvider* PickupHintMessage;
    float AimSpeed;
    float AimSmoothDamp;
    float FlipCharacterThresholdZone;
    float FlipZoneSpeed;
    float ClampBelowYCord;
    struct AnimationCurve* VelocityCurve;
    float MinThrowVelocity;
    float MaxThrowVelocity;
    struct SeinGrenadeTrajectory* Trajectory;
    float ThrowInAirButtonMaxTime;
    float AirThrowVelocityMultiplier;
    float ThrowStartingMagnitude;
    float ThrowStartingAngle;
    struct SeinHold_ThrowAnimationSet__Array* ThrowAnimationSets;
    struct Action_1_IHoldable_* OnPickUp;
    struct Action* OnDrop;
    struct Action* m_finishThrowAction;
    struct Dictionary_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_* m_throwAnimationSets;
    bool m_dropImmediate;
    struct Vector2 m_aimerVelocity;
    struct Vector2 m_aimerPos;
    struct Vector2 m_targetAimerPos;
    struct Vector2 m_throwVelocity;
    bool m_playingThrowAnimation;
    bool m_shouldThrow;
    struct MessageBox* m_messageBox;
    float m_hintTimeout;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinHold__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinHold__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_IHoldable_.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Dictionary_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_.h>
#include <Modloader/app/structs/IHoldable.h>
#include <Modloader/app/structs/IThrowable.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SeinGrenadeTrajectory.h>
#include <Modloader/app/structs/SeinHold_States.h>
#include <Modloader/app/structs/SeinHold_ThrowAnimationSet__Array.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_SeinHold__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinHold__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinHold__Fields_FWDDECL)
#include <Modloader/app/structs/SeinHold__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinHold__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
