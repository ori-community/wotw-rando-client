#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControllerAxisInput__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControllerAxisInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerAxisInput__Fields_DEFINED)
#include <Modloader/app/structs/CachedAxisInput__Fields.h>
#include <Modloader/app/structs/XboxControllerInput_Axis__Enum.h>
#if defined(IL2CPP_STRUCT_CachedAxisInput__Fields_DEFINED) && defined(IL2CPP_STRUCT_XboxControllerInput_Axis__Enum_DEFINED)
#define IL2CPP_STRUCT_ControllerAxisInput__Fields_DEFINED
struct ControllerAxisInput__Fields {
    struct CachedAxisInput__Fields _;
    XboxControllerInput_Axis__Enum m_axis;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControllerAxisInput__Fields_FWDDECL)
#define IL2CPP_STRUCT_ControllerAxisInput__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ControllerAxisInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerAxisInput__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ControllerAxisInput__Fields_FWDDECL)
#include <Modloader/app/structs/ControllerAxisInput__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControllerAxisInput__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
