#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComboInput__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComboInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComboInput__Fields_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/ButtonInputType__Enum.h>
#include <Modloader/app/structs/InputDirection__Enum.h>
#if defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED) && defined(IL2CPP_STRUCT_InputDirection__Enum_DEFINED) && defined(IL2CPP_STRUCT_ButtonInputType__Enum_DEFINED)
#define IL2CPP_STRUCT_ComboInput__Fields_DEFINED
struct __declspec(align(8)) ComboInput__Fields {
    AbilityType__Enum m_actionInput;

    InputDirection__Enum m_directionInput;

    ButtonInputType__Enum m_buttonInputType;

    bool m_startFacingLeft;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ComboInput__Fields_FWDDECL)
#define IL2CPP_STRUCT_ComboInput__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ComboInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComboInput__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ComboInput__Fields_FWDDECL)
#include <Modloader/app/structs/ComboInput__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComboInput__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
