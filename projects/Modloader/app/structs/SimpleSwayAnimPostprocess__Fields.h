#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleSwayAnimPostprocess__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleSwayAnimPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess__Fields_DEFINED)
#include <Modloader/app/structs/AnimationPostprocess__Fields.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_Params.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_PerFrameReadOnly.h>
#if defined(IL2CPP_STRUCT_AnimationPostprocess__Fields_DEFINED) && defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess_Params_DEFINED) && defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess_PerFrameReadOnly_DEFINED)
#define IL2CPP_STRUCT_SimpleSwayAnimPostprocess__Fields_DEFINED
struct VerletPhysicsAnimationPostprocess;
struct JointChains;
struct JointChains_Chain__Array;
struct SimpleSwayAnimPostprocess_SwayChain__Array;
struct SimpleSwayAnimPostprocess__Fields {
    struct AnimationPostprocess__Fields _;
    struct VerletPhysicsAnimationPostprocess* FancyPostprocess;
    int32_t OrderNumber;
    struct JointChains* JointChains;
    bool InWater;
    struct SimpleSwayAnimPostprocess_Params m_params;
    bool ForceUpdateParamsEachFrame;
    bool DebugDraw;
    bool m_wasJustActivated;
    struct JointChains_Chain__Array* m_chains;
    bool m_swaysInitialized;
    struct SimpleSwayAnimPostprocess_SwayChain__Array* m_sways;
    struct SimpleSwayAnimPostprocess_PerFrameReadOnly m_common;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess__Fields_FWDDECL)
#define IL2CPP_STRUCT_SimpleSwayAnimPostprocess__Fields_FWDDECL
#include <Modloader/app/structs/JointChains.h>
#include <Modloader/app/structs/JointChains_Chain__Array.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_SwayChain__Array.h>
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess.h>
#endif
#undef IL2CPP_STRUCT_SimpleSwayAnimPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess__Fields_FWDDECL)
#include <Modloader/app/structs/SimpleSwayAnimPostprocess__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleSwayAnimPostprocess__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
