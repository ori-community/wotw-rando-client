#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CFProxyType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CFProxyType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFProxyType__Enum_DEFINED)
#define IL2CPP_STRUCT_CFProxyType__Enum_DEFINED
enum class CFProxyType__Enum : int32_t {
    None = 0x00000000,
    AutoConfigurationUrl = 0x00000001,
    AutoConfigurationJavaScript = 0x00000002,
    FTP = 0x00000003,
    HTTP = 0x00000004,
    HTTPS = 0x00000005,
    SOCKS = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_CFProxyType__Enum_FWDDECL)
#define IL2CPP_STRUCT_CFProxyType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_CFProxyType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFProxyType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_CFProxyType__Enum_FWDDECL)
#include <Modloader/app/structs/CFProxyType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CFProxyType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
