#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinDrill__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinDrill__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDrill__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/SeinDrill_DrillState__Enum.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_SeinDrill_DrillState__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinDrill__Fields_DEFINED
struct GameObject;
struct MoonAnimator;
struct DrillZone;
struct SeinDrill__Fields {
    struct CharacterState__Fields _;
    bool DebugEnabled;
    float DigDashDamage;
    float SwimDashDamage;
    float DashDamageRadius;
    float DashDamageForce;
    struct LayerMask DashDamageLayerMask;
    float MinSpeedToStartDrill;
    float MaxDrillSpeed;
    float DecelSmoothTime;
    float DecelMaxSpeed;
    float DrillTurnSmoothTime;
    float SwimAngleDeltaLimit;
    float DrillEnterDistance;
    float DrillEnterMaxAngle;
    struct GameObject* DrillDashEffect;
    struct MoonAnimator* m_seinAnimator;
    struct DrillZone* m_targetDrillZone;
    SeinDrill_DrillState__Enum m_drillState;

    float m_dashDecelSmoothVelocity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinDrill__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinDrill__Fields_FWDDECL
#include <Modloader/app/structs/DrillZone.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimator.h>
#endif
#undef IL2CPP_STRUCT_SeinDrill__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDrill__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinDrill__Fields_FWDDECL)
#include <Modloader/app/structs/SeinDrill__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinDrill__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
