#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindowsInstallationType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindowsInstallationType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowsInstallationType__Enum_DEFINED)
#define IL2CPP_STRUCT_WindowsInstallationType__Enum_DEFINED
enum class WindowsInstallationType__Enum : int32_t {
    Unknown = 0x00000000,
    Client = 0x00000001,
    Server = 0x00000002,
    ServerCore = 0x00000003,
    Embedded = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_WindowsInstallationType__Enum_FWDDECL)
#define IL2CPP_STRUCT_WindowsInstallationType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_WindowsInstallationType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowsInstallationType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_WindowsInstallationType__Enum_FWDDECL)
#include <Modloader/app/structs/WindowsInstallationType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindowsInstallationType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
