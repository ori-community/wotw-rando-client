#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OrbSpawnerSettingsOverride__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OrbSpawnerSettingsOverride__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OrbSpawnerSettingsOverride__Fields_DEFINED)
#include <Modloader/app/structs/DropPickup_State__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_DropPickup_State__Enum_DEFINED)
#define IL2CPP_STRUCT_OrbSpawnerSettingsOverride__Fields_DEFINED
struct AnimationCurve;
struct __declspec(align(8)) OrbSpawnerSettingsOverride__Fields {
    bool OverrideHorizontalSpeedCurve;
    struct AnimationCurve* HorizontalSpeedCurve;
    bool OverrideVerticalSpeedCurve;
    struct AnimationCurve* VerticalSpeedCurve;
    bool OverrideGravity;
    struct Vector3 GravityOverride;
    bool OverrideInitialDropPickupState;
    DropPickup_State__Enum InitialDropPickupState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OrbSpawnerSettingsOverride__Fields_FWDDECL)
#define IL2CPP_STRUCT_OrbSpawnerSettingsOverride__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_OrbSpawnerSettingsOverride__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OrbSpawnerSettingsOverride__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OrbSpawnerSettingsOverride__Fields_FWDDECL)
#include <Modloader/app/structs/OrbSpawnerSettingsOverride__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OrbSpawnerSettingsOverride__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
