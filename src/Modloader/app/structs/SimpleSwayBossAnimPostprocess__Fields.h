#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess__Fields_DEFINED)
#include <Modloader/app/structs/AnimationPostprocess__Fields.h>
#include <Modloader/app/structs/JobHandle.h>
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_Job.h>
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_Params.h>
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_PerFrameReadOnly.h>
#include <Modloader/app/structs/TransformAccessArray.h>
#if defined(IL2CPP_STRUCT_AnimationPostprocess__Fields_DEFINED) && defined(IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_Params_DEFINED) && defined(IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_Job_DEFINED) && defined(IL2CPP_STRUCT_JobHandle_DEFINED) && defined(IL2CPP_STRUCT_TransformAccessArray_DEFINED) && defined(IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_PerFrameReadOnly_DEFINED)
#define IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess__Fields_DEFINED
struct JointChains;
struct VerletPhysicsAnimationPostprocess;
struct JointChains_Chain__Array;
struct SimpleSwayBossAnimPostprocess__Fields {
    struct AnimationPostprocess__Fields _;
    int32_t OrderNumber;
    struct JointChains* JointChains;
    bool InWater;
    struct SimpleSwayBossAnimPostprocess_Params m_params;
    bool ForceUpdateParamsEachFrame;
    bool DebugDraw;
    bool m_wasJustActivated;
    struct VerletPhysicsAnimationPostprocess* m_fancyVerlet;
    struct JointChains_Chain__Array* m_chains;
    bool m_swaysInitialized;
    struct SimpleSwayBossAnimPostprocess_Job m_job;
    bool m_scheduled;
    bool m_executed;
    struct JobHandle m_jobHandle;
    struct TransformAccessArray m_transforms;
    struct SimpleSwayBossAnimPostprocess_PerFrameReadOnly m_common;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess__Fields_FWDDECL)
#define IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess__Fields_FWDDECL
#include <Modloader/app/structs/JointChains.h>
#include <Modloader/app/structs/JointChains_Chain__Array.h>
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess.h>
#endif
#undef IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess__Fields_FWDDECL)
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
