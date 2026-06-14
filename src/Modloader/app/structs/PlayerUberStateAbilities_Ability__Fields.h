#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStateAbilities_Ability__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStateAbilities_Ability__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateAbilities_Ability__Fields_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#if defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStateAbilities_Ability__Fields_DEFINED
struct __declspec(align(8)) PlayerUberStateAbilities_Ability__Fields {
    AbilityType__Enum Type;

    bool HasAbility;
    int32_t AbilityLevel;
    uint8_t UnlockOrder;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStateAbilities_Ability__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStateAbilities_Ability__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_PlayerUberStateAbilities_Ability__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateAbilities_Ability__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStateAbilities_Ability__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerUberStateAbilities_Ability__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStateAbilities_Ability__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
