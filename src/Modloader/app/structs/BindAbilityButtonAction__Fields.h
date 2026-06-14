#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BindAbilityButtonAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BindAbilityButtonAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BindAbilityButtonAction__Fields_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/Input_Button__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Input_Button__Enum_DEFINED)
#define IL2CPP_STRUCT_BindAbilityButtonAction__Fields_DEFINED
struct BindAbilityButtonAction__Fields {
    struct ActionMethod__Fields _;
    AbilityType__Enum AbilityType;

    Input_Button__Enum Button;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BindAbilityButtonAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_BindAbilityButtonAction__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_BindAbilityButtonAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BindAbilityButtonAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BindAbilityButtonAction__Fields_FWDDECL)
#include <Modloader/app/structs/BindAbilityButtonAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BindAbilityButtonAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
