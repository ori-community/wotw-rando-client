#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlPhaseBBrain__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlPhaseBBrain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlPhaseBBrain__Fields_DEFINED)
#include <Modloader/app/structs/PetrifiedOwlBrainBase__Fields.h>
#if defined(IL2CPP_STRUCT_PetrifiedOwlBrainBase__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlPhaseBBrain__Fields_DEFINED
struct Robin;
struct Brain;
struct GameObject;
struct DamageReceiverForwarder;
struct BrainBehaviour;
struct PetrifiedOwlPhaseBBrain__Fields {
    struct PetrifiedOwlBrainBase__Fields _;
    struct Robin* Robin;
    struct Brain* Brain;
    struct GameObject* LeftHornModel;
    struct GameObject* RightHornModel;
    struct DamageReceiverForwarder* LeftHornDamageReceiver;
    struct DamageReceiverForwarder* RightHornDamageReceiver;
    struct BrainBehaviour* HornDestroyedBehaviour;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlPhaseBBrain__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlPhaseBBrain__Fields_FWDDECL
#include <Modloader/app/structs/Brain.h>
#include <Modloader/app/structs/BrainBehaviour.h>
#include <Modloader/app/structs/DamageReceiverForwarder.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Robin.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlPhaseBBrain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlPhaseBBrain__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlPhaseBBrain__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlPhaseBBrain__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlPhaseBBrain__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
