#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinTurretSpell__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinTurretSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinTurretSpell__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SeinTurretSpell_State__Enum.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinTurretSpell_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinTurretSpell__Fields_DEFINED
struct SeinTurretSpell_BalancingData;
struct GameObject;
struct Event_1;
struct MoonTimeline;
struct EventTriggerAnimator;
struct SeinTurretSpell__Fields {
    struct CharacterState__Fields _;
    struct SeinTurretSpell_BalancingData* BalancingData;
    struct GameObject* SpiritTurretPrefab;
    struct Event_1* NotEnoughEnergyEvent;
    struct Event_1* EnableSoundEvent;
    float MultiSpawnDelay;
    float HorizontalAirMaxSpeed;
    float HorizontalAirDeceleration;
    float WaterMaxSpeed;
    float WaterDeceleration;
    struct MoonTimeline* GroundTimeline;
    struct EventTriggerAnimator* GroundReleaseTrigger;
    struct MoonTimeline* AirTimeline;
    struct EventTriggerAnimator* AirReleaseTrigger;
    struct MoonTimeline* WaterTimeline;
    struct EventTriggerAnimator* WaterReleaseTrigger;
    bool m_hasReleasedTurret;
    SeinTurretSpell_State__Enum m_state;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinTurretSpell__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinTurretSpell__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SeinTurretSpell_BalancingData.h>
#endif
#undef IL2CPP_STRUCT_SeinTurretSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinTurretSpell__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinTurretSpell__Fields_FWDDECL)
#include <Modloader/app/structs/SeinTurretSpell__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinTurretSpell__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
