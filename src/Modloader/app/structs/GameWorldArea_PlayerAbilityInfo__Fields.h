#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameWorldArea_PlayerAbilityInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameWorldArea_PlayerAbilityInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameWorldArea_PlayerAbilityInfo__Fields_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED)
#define IL2CPP_STRUCT_GameWorldArea_PlayerAbilityInfo__Fields_DEFINED
struct PlayerUberStateDescriptor;
struct __declspec(align(8)) GameWorldArea_PlayerAbilityInfo__Fields {
    struct Vector2 Position;
    struct PlayerUberStateDescriptor* Descriptor;
    AbilityType__Enum Ability;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameWorldArea_PlayerAbilityInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameWorldArea_PlayerAbilityInfo__Fields_FWDDECL
#include <Modloader/app/structs/PlayerUberStateDescriptor.h>
#endif
#undef IL2CPP_STRUCT_GameWorldArea_PlayerAbilityInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameWorldArea_PlayerAbilityInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameWorldArea_PlayerAbilityInfo__Fields_FWDDECL)
#include <Modloader/app/structs/GameWorldArea_PlayerAbilityInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameWorldArea_PlayerAbilityInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
