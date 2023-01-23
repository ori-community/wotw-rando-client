#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControllerButtonInput__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControllerButtonInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerButtonInput__Fields_DEFINED)
#include <Modloader/app/structs/CachedButtonInput__Fields.h>
#include <Modloader/app/structs/XboxControllerInput_Button__Enum.h>
#if defined(IL2CPP_STRUCT_CachedButtonInput__Fields_DEFINED) && defined(IL2CPP_STRUCT_XboxControllerInput_Button__Enum_DEFINED)
#define IL2CPP_STRUCT_ControllerButtonInput__Fields_DEFINED
struct ControllerButtonInput__Fields {
    struct CachedButtonInput__Fields _;
    XboxControllerInput_Button__Enum Button;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControllerButtonInput__Fields_FWDDECL)
#define IL2CPP_STRUCT_ControllerButtonInput__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ControllerButtonInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerButtonInput__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ControllerButtonInput__Fields_FWDDECL)
#include <Modloader/app/structs/ControllerButtonInput__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControllerButtonInput__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
