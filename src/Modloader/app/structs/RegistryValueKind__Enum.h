#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegistryValueKind__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegistryValueKind__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegistryValueKind__Enum_DEFINED)
#define IL2CPP_STRUCT_RegistryValueKind__Enum_DEFINED
enum class RegistryValueKind__Enum : int32_t {
    Unknown = 0x00000000,
    String = 0x00000001,
    ExpandString = 0x00000002,
    Binary = 0x00000003,
    DWord = 0x00000004,
    MultiString = 0x00000007,
    QWord = 0x0000000b,
    None = -1,
};
#endif
#if !defined(IL2CPP_STRUCT_RegistryValueKind__Enum_FWDDECL)
#define IL2CPP_STRUCT_RegistryValueKind__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_RegistryValueKind__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegistryValueKind__Enum_DEFINED) && !defined(IL2CPP_STRUCT_RegistryValueKind__Enum_FWDDECL)
#include <Modloader/app/structs/RegistryValueKind__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegistryValueKind__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
