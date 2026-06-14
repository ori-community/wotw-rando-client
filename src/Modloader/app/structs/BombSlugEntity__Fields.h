#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BombSlugEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BombSlugEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BombSlugEntity__Fields_DEFINED)
#include <Modloader/app/structs/BombSlugEntity_BombSlugState__Enum.h>
#include <Modloader/app/structs/SpikeSlugEntity__Fields.h>
#if defined(IL2CPP_STRUCT_SpikeSlugEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_BombSlugEntity_BombSlugState__Enum_DEFINED)
#define IL2CPP_STRUCT_BombSlugEntity__Fields_DEFINED
struct MoonTimeline;
struct GameObject;
struct DamageDealer;
struct ShootMultiProjectileRadialBehaviourNew;
struct BombSlugEntity__Fields {
    struct SpikeSlugEntity__Fields _;
    struct MoonTimeline* BombModeTimeline;
    float BombModeDuration;
    struct GameObject* ExplosionPrefab;
    struct DamageDealer* ContactDamageDealer;
    bool ShootProjectileOnExplode;
    struct ShootMultiProjectileRadialBehaviourNew* OnDeathShootBehaviour;
    float m_timeInState;
    BombSlugEntity_BombSlugState__Enum m_state;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BombSlugEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_BombSlugEntity__Fields_FWDDECL
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ShootMultiProjectileRadialBehaviourNew.h>
#endif
#undef IL2CPP_STRUCT_BombSlugEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BombSlugEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BombSlugEntity__Fields_FWDDECL)
#include <Modloader/app/structs/BombSlugEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BombSlugEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
