#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EVRComponentProperty__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EVRComponentProperty__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRComponentProperty__Enum_DEFINED)
#define IL2CPP_STRUCT_EVRComponentProperty__Enum_DEFINED
enum class EVRComponentProperty__Enum : int32_t {
    IsStatic = 0x00000001,
    IsVisible = 0x00000002,
    IsTouched = 0x00000004,
    IsPressed = 0x00000008,
    IsScrolled = 0x00000010,
};
#endif
#if !defined(IL2CPP_STRUCT_EVRComponentProperty__Enum_FWDDECL)
#define IL2CPP_STRUCT_EVRComponentProperty__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EVRComponentProperty__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRComponentProperty__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EVRComponentProperty__Enum_FWDDECL)
#include <Modloader/app/structs/EVRComponentProperty__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EVRComponentProperty__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
