#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinPrefabFactory__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinPrefabFactory__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPrefabFactory__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinPrefabFactory__Fields_DEFINED
struct SeinCharacter;
struct SeinPrefabSet;
struct SeinNestedPrefab__Array;
struct SeinNestedPrefab;
struct SeinPrefabFactory__Fields {
    struct MonoBehaviour__Fields _;
    struct SeinCharacter* Sein;
    struct SeinPrefabSet* SeinPrefabSet;
    struct SeinNestedPrefab__Array* m_prefabs;
    struct SeinNestedPrefab* Bash;
    struct SeinNestedPrefab* Hold;
    struct SeinNestedPrefab* ChargeJump;
    struct SeinNestedPrefab* Crouch;
    struct SeinNestedPrefab* DoubleJump;
    struct SeinNestedPrefab* Fall;
    struct SeinNestedPrefab* Glide;
    struct SeinNestedPrefab* FeatherFlap;
    struct SeinNestedPrefab* GrabPushPull;
    struct SeinNestedPrefab* GrabWall;
    struct SeinNestedPrefab* Jump;
    struct SeinNestedPrefab* PushAgainstWall;
    struct SeinNestedPrefab* Run;
    struct SeinNestedPrefab* Idle;
    struct SeinNestedPrefab* SpiritFlame;
    struct SeinNestedPrefab* StandingOnEdge;
    struct SeinNestedPrefab* WallJump;
    struct SeinNestedPrefab* WallSlide;
    struct SeinNestedPrefab* Swimming;
    struct SeinNestedPrefab* SoulFlame;
    struct SeinNestedPrefab* Grenade;
    struct SeinNestedPrefab* SpiritLeash;
    struct SeinNestedPrefab* GrabRope;
    struct SeinNestedPrefab* GrabSurface;
    struct SeinNestedPrefab* PickupProcessor;
    struct SeinNestedPrefab* SpiritMagnet;
    struct SeinNestedPrefab* Bow;
    struct SeinNestedPrefab* Melee;
    struct SeinNestedPrefab* Combo;
    struct SeinNestedPrefab* Digging;
    struct SeinNestedPrefab* DashNew;
    struct SeinNestedPrefab* GlowSpell;
    struct SeinNestedPrefab* InvisibilitySpell;
    struct SeinNestedPrefab* StickyMineSpell;
    struct SeinNestedPrefab* ChakramSpell;
    struct SeinNestedPrefab* GoldenSein;
    struct SeinNestedPrefab* Blaze;
    struct SeinNestedPrefab* TurretSpell;
    struct SeinNestedPrefab* SpiritSpearSpell;
    struct SeinNestedPrefab* MeditateSpell;
    struct SeinNestedPrefab* SpiritSentrySpell;
    struct SeinNestedPrefab* HomingMissileSpell;
    struct SeinNestedPrefab* Launch;
    struct SeinNestedPrefab* CinematicToGameplay;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinPrefabFactory__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinPrefabFactory__Fields_FWDDECL
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SeinNestedPrefab.h>
#include <Modloader/app/structs/SeinNestedPrefab__Array.h>
#include <Modloader/app/structs/SeinPrefabSet.h>
#endif
#undef IL2CPP_STRUCT_SeinPrefabFactory__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPrefabFactory__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinPrefabFactory__Fields_FWDDECL)
#include <Modloader/app/structs/SeinPrefabFactory__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinPrefabFactory__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
