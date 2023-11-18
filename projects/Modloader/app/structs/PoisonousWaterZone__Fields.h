#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PoisonousWaterZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PoisonousWaterZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoisonousWaterZone__Fields_DEFINED)
#include <Modloader/app/structs/MetaballRenderer__Fields.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_MetaballRenderer__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_PoisonousWaterZone__Fields_DEFINED
struct AnimationCurve;
struct Damage;
struct WaterZone;
struct PoisonousWaterZone__Fields {
    struct MetaballRenderer__Fields _;
    int32_t DamageAmount;
    float DamageInterval;
    float SeparationForce;
    float FloatingForce;
    float Drag;
    struct AnimationCurve* RadiusCurve;
    float m_addTimer;
    float m_damageTimer;
    struct Damage* m_damage;
    struct WaterZone* m_waterZone;
    float m_ballLifetime;
    struct Rect m_zoneBounds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PoisonousWaterZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_PoisonousWaterZone__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/WaterZone.h>
#endif
#undef IL2CPP_STRUCT_PoisonousWaterZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoisonousWaterZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PoisonousWaterZone__Fields_FWDDECL)
#include <Modloader/app/structs/PoisonousWaterZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PoisonousWaterZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
