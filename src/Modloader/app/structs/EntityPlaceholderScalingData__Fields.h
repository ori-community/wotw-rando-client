#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityPlaceholderScalingData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityPlaceholderScalingData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPlaceholderScalingData__Fields_DEFINED)
#include <Modloader/app/structs/EntityPlaceholderScalingData_EntityCategory__Enum.h>
#include <Modloader/app/structs/EntityPlaceholderScalingData_SelectedAttackProperties.h>
#include <Modloader/app/structs/ScreenshotIcon_EnemyType__Enum.h>
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_ScreenshotIcon_EnemyType__Enum_DEFINED) && defined(IL2CPP_STRUCT_EntityPlaceholderScalingData_EntityCategory__Enum_DEFINED) && defined(IL2CPP_STRUCT_EntityPlaceholderScalingData_SelectedAttackProperties_DEFINED)
#define IL2CPP_STRUCT_EntityPlaceholderScalingData__Fields_DEFINED
struct Texture2D;
struct String;
struct ExposedProperties;
struct EntityPlaceholderScalingData_Difficulties;
struct EntityPlaceholderScalingData__Fields {
    struct ScriptableObject__Fields _;
    struct Texture2D* DisplayTexture;
    struct String* Name;
    struct ExposedProperties* Prefab;
    ScreenshotIcon_EnemyType__Enum IconType;

    float BaseHealth;
    int32_t NumberOfExperienceOrbs;
    float HeartLootChance;
    float EnergyLootChance;
    EntityPlaceholderScalingData_EntityCategory__Enum Category;

    struct EntityPlaceholderScalingData_Difficulties* Scaling;
    struct EntityPlaceholderScalingData_SelectedAttackProperties SelectedAttacks;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityPlaceholderScalingData__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityPlaceholderScalingData__Fields_FWDDECL
#include <Modloader/app/structs/EntityPlaceholderScalingData_Difficulties.h>
#include <Modloader/app/structs/ExposedProperties.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_EntityPlaceholderScalingData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPlaceholderScalingData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityPlaceholderScalingData__Fields_FWDDECL)
#include <Modloader/app/structs/EntityPlaceholderScalingData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityPlaceholderScalingData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
