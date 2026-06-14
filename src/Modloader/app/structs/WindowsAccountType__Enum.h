#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindowsAccountType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindowsAccountType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowsAccountType__Enum_DEFINED)
#define IL2CPP_STRUCT_WindowsAccountType__Enum_DEFINED
enum class WindowsAccountType__Enum : int32_t {
    Normal = 0x00000000,
    Guest = 0x00000001,
    System = 0x00000002,
    Anonymous = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_WindowsAccountType__Enum_FWDDECL)
#define IL2CPP_STRUCT_WindowsAccountType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_WindowsAccountType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowsAccountType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_WindowsAccountType__Enum_FWDDECL)
#include <Modloader/app/structs/WindowsAccountType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindowsAccountType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
