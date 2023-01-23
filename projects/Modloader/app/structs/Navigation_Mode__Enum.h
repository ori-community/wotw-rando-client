#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Navigation_Mode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Navigation_Mode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Navigation_Mode__Enum_DEFINED)
#define IL2CPP_STRUCT_Navigation_Mode__Enum_DEFINED
enum class Navigation_Mode__Enum : int32_t {
    None = 0x00000000,
    Horizontal = 0x00000001,
    Vertical = 0x00000002,
    Automatic = 0x00000003,
    Explicit = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_Navigation_Mode__Enum_FWDDECL)
#define IL2CPP_STRUCT_Navigation_Mode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Navigation_Mode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Navigation_Mode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Navigation_Mode__Enum_FWDDECL)
#include <Modloader/app/structs/Navigation_Mode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Navigation_Mode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
