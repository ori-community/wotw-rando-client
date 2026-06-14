#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PoisonousWaterPocket__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PoisonousWaterPocket__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoisonousWaterPocket__Fields_DEFINED)
#include <Modloader/app/structs/RectangleGameplayZone__Fields.h>
#if defined(IL2CPP_STRUCT_RectangleGameplayZone__Fields_DEFINED)
#define IL2CPP_STRUCT_PoisonousWaterPocket__Fields_DEFINED
struct MoonTimeline;
struct Damage;
struct WaterZone;
struct PoisonousWaterPocket__Fields {
    struct RectangleGameplayZone__Fields _;
    int32_t DamageAmount;
    float DamageInterval;
    bool SnapToSurface;
    struct MoonTimeline* SpreadTimeline;
    float Timeout;
    float SeparationForce;
    float m_damageTimer;
    float m_timeoutTimer;
    float m_timelinePlayTime;
    struct Damage* m_damage;
    struct WaterZone* m_waterZone;
    bool _DamageDealt_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PoisonousWaterPocket__Fields_FWDDECL)
#define IL2CPP_STRUCT_PoisonousWaterPocket__Fields_FWDDECL
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/WaterZone.h>
#endif
#undef IL2CPP_STRUCT_PoisonousWaterPocket__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoisonousWaterPocket__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PoisonousWaterPocket__Fields_FWDDECL)
#include <Modloader/app/structs/PoisonousWaterPocket__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PoisonousWaterPocket__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
