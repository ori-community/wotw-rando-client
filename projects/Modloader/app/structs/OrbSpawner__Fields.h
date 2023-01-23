#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OrbSpawner__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OrbSpawner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OrbSpawner__Fields_DEFINED)
#include <Modloader/app/structs/DropPickup_State__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/OrbSpawner_EnergyPlantOverrideType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_OrbSpawner_EnergyPlantOverrideType__Enum_DEFINED) && defined(IL2CPP_STRUCT_DropPickup_State__Enum_DEFINED)
#define IL2CPP_STRUCT_OrbSpawner__Fields_DEFINED
struct DropLootSettings;
struct Transform;
struct AnimationCurve;
struct EventTriggerAnimator;
struct OrbSpawner__Fields {
    struct MonoBehaviour__Fields _;
    struct DropLootSettings* LootSettings;
    bool LootOnHard;
    bool AbundantOrbMode;
    struct Vector2 SpawnOffset;
    bool OverrideGravity;
    struct Vector3 GravityOverride;
    struct Transform* m_transform;
    int32_t IdealOrbCount;
    int32_t NumberOfExpOrbs;
    int32_t NumberOfHealthOrbs;
    int32_t NumberOfEnergyOrbs;
    bool ShouldSpawnExpOrbs;
    bool ShouldSpawnLoot;
    bool HealthPlantOverride;
    OrbSpawner_EnergyPlantOverrideType__Enum EnergyPlantOverride;

    int32_t m_numberOfSmallOrbs;
    int32_t m_numberOfMediumOrbs;
    int32_t m_numberOfLargeOrbs;
    struct AnimationCurve* HorizontalSpeed;
    struct AnimationCurve* VerticalSpeed;
    DropPickup_State__Enum DropPickupState;

    struct EventTriggerAnimator* SpawnOrbsAnimatorTrigger;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OrbSpawner__Fields_FWDDECL)
#define IL2CPP_STRUCT_OrbSpawner__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/DropLootSettings.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_OrbSpawner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OrbSpawner__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OrbSpawner__Fields_FWDDECL)
#include <Modloader/app/structs/OrbSpawner__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OrbSpawner__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
