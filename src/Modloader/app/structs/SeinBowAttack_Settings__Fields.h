#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinBowAttack_Settings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinBowAttack_Settings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBowAttack_Settings__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinBowAttack_Settings__Fields_DEFINED
struct MoonTimeline;
struct GameObject;
struct MoonFloat;
struct MoonAnimation;
struct Kickback;
struct __declspec(align(8)) SeinBowAttack_Settings__Fields {
    struct MoonTimeline* DrawTimeline;
    struct MoonTimeline* DrawRapidTimeline;
    struct MoonTimeline* RecoverTimeline;
    struct MoonTimeline* PullChargeTimeline;
    struct MoonTimeline* ChargeRecoverTimeline;
    struct GameObject* AimEffect;
    struct GameObject* ChargeEffect;
    struct MoonFloat* ArrowChargeAmount;
    struct MoonAnimation* AimLoopAnimationBow;
    float SpeedMultiplier;
    float MinAimAngle;
    float ChargeKickbackStrength;
    struct Kickback* ChargeKickback;
    bool ControlAfterShot;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinBowAttack_Settings__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinBowAttack_Settings__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Kickback.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_SeinBowAttack_Settings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBowAttack_Settings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinBowAttack_Settings__Fields_FWDDECL)
#include <Modloader/app/structs/SeinBowAttack_Settings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinBowAttack_Settings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
