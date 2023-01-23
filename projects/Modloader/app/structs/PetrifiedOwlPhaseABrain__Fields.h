#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlPhaseABrain__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlPhaseABrain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlPhaseABrain__Fields_DEFINED)
#include <Modloader/app/structs/PetrifiedOwlBrainBase__Fields.h>
#if defined(IL2CPP_STRUCT_PetrifiedOwlBrainBase__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlPhaseABrain__Fields_DEFINED
struct Robin;
struct Brain;
struct GameObject__Array;
struct DamageReceiverForwarder;
struct BrainBehaviour;
struct GameObject;
struct AnimationPostprocess;
struct SoundProvider;
struct PetrifiedOwlPhaseABrain__Fields {
    struct PetrifiedOwlBrainBase__Fields _;
    struct Robin* Robin;
    struct Brain* Brain;
    struct GameObject__Array* HornDamageReceivers;
    struct DamageReceiverForwarder* LeftClawDamageReceiver;
    struct DamageReceiverForwarder* RightClawDamageReceiver;
    struct BrainBehaviour* LeftClawHurtBehaviour;
    struct BrainBehaviour* RightClawHurtBehaviour;
    struct GameObject* HurtMaskLeftPrefab;
    struct GameObject* HurtMaskRightPrefab;
    float HurtMaskTransitionSpeed;
    struct AnimationPostprocess* HitReactionClawLeft;
    struct AnimationPostprocess* HitReactionClawRight;
    struct SoundProvider* HurtSound;
    struct BrainBehaviour* IdleBehaviour;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlPhaseABrain__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlPhaseABrain__Fields_FWDDECL
#include <Modloader/app/structs/AnimationPostprocess.h>
#include <Modloader/app/structs/Brain.h>
#include <Modloader/app/structs/BrainBehaviour.h>
#include <Modloader/app/structs/DamageReceiverForwarder.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/Robin.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlPhaseABrain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlPhaseABrain__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlPhaseABrain__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlPhaseABrain__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlPhaseABrain__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
