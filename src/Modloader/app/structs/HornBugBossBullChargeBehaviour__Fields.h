#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornBugBossBullChargeBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornBugBossBullChargeBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugBossBullChargeBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/HornbugBossBaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_HornbugBossBaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_HornBugBossBullChargeBehaviour__Fields_DEFINED
struct MoonTimeline;
struct GameObject;
struct RootMotionProcessorData;
struct GroundEntityLocomotion;
struct HornBugBossBullChargeBehaviour__Fields {
    struct HornbugBossBaseBehaviour__Fields _;
    struct MoonTimeline* Antic;
    struct MoonTimeline* Run;
    struct MoonTimeline* Attack;
    struct MoonTimeline* Recover;
    struct GameObject* AttackTarget;
    struct GameObject* ImpactEffect;
    struct RootMotionProcessorData* RootMotion;
    float RunSpeed;
    float RunTimeScale;
    float AttackDistance;
    float AttackTimeScale;
    struct GroundEntityLocomotion* m_locomotion;
    struct MoonTimeline* m_curTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HornBugBossBullChargeBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_HornBugBossBullChargeBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_HornBugBossBullChargeBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugBossBullChargeBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HornBugBossBullChargeBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/HornBugBossBullChargeBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornBugBossBullChargeBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
