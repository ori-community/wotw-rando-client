#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FocusType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FocusType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FocusType__Enum_DEFINED)
#define IL2CPP_STRUCT_FocusType__Enum_DEFINED
enum class FocusType__Enum : int32_t {
    Native = 0x00000000,
    Keyboard = 0x00000001,
    Passive = 0x00000002,
};
#endif
#if !defined(IL2CPP_STRUCT_FocusType__Enum_FWDDECL)
#define IL2CPP_STRUCT_FocusType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_FocusType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FocusType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_FocusType__Enum_FWDDECL)
#include <Modloader/app/structs/FocusType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FocusType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
