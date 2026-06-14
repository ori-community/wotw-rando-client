#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ButtonAxisInput__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ButtonAxisInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ButtonAxisInput__Fields_DEFINED)
#include <Modloader/app/structs/ButtonAxisInput_Mode__Enum.h>
#include <Modloader/app/structs/CachedAxisInput__Fields.h>
#if defined(IL2CPP_STRUCT_CachedAxisInput__Fields_DEFINED) && defined(IL2CPP_STRUCT_ButtonAxisInput_Mode__Enum_DEFINED)
#define IL2CPP_STRUCT_ButtonAxisInput__Fields_DEFINED
struct IButtonInput;
struct ButtonAxisInput__Fields {
    struct CachedAxisInput__Fields _;
    struct IButtonInput* m_button;
    ButtonAxisInput_Mode__Enum m_mode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ButtonAxisInput__Fields_FWDDECL)
#define IL2CPP_STRUCT_ButtonAxisInput__Fields_FWDDECL
#include <Modloader/app/structs/IButtonInput.h>
#endif
#undef IL2CPP_STRUCT_ButtonAxisInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ButtonAxisInput__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ButtonAxisInput__Fields_FWDDECL)
#include <Modloader/app/structs/ButtonAxisInput__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ButtonAxisInput__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
