#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossLaserAttackCeiling__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossLaserAttackCeiling__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossLaserAttackCeiling__Fields_DEFINED)
#include <Modloader/app/structs/SpiderBossLaserAttackCeiling_State__Enum.h>
#include <Modloader/app/structs/SpiderBossLaserAttack__Fields.h>
#if defined(IL2CPP_STRUCT_SpiderBossLaserAttack__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpiderBossLaserAttackCeiling_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiderBossLaserAttackCeiling__Fields_DEFINED
struct MoonTimeline;
struct FloatAnimationParameter;
struct SpiderBossLaserAttackCeiling__Fields {
    struct SpiderBossLaserAttack__Fields _;
    struct MoonTimeline* TransitionTimeline;
    struct MoonTimeline* ShootAndDescendTimeline;
    struct FloatAnimationParameter* AnimationParameterAngle;
    SpiderBossLaserAttackCeiling_State__Enum m_state;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossLaserAttackCeiling__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossLaserAttackCeiling__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossLaserAttackCeiling__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossLaserAttackCeiling__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossLaserAttackCeiling__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBossLaserAttackCeiling__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossLaserAttackCeiling__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
