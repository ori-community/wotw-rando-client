#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStateAbilities__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStateAbilities__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateAbilities__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStateAbilities__Fields_DEFINED
struct Dictionary_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_;
struct List_1_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_;
struct Action;
struct __declspec(align(8)) PlayerUberStateAbilities__Fields {
    struct Dictionary_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_* m_abilities;
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_* m_abilitiesList;
    struct Action* m_setDirtyCallback;
    bool m_abilitiesFoldout;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStateAbilities__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStateAbilities__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Dictionary_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_.h>
#include <Modloader/app/structs/List_1_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberStateAbilities__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateAbilities__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStateAbilities__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerUberStateAbilities__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStateAbilities__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
