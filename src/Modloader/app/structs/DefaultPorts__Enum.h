#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultPorts__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultPorts__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultPorts__Enum_DEFINED)
#define IL2CPP_STRUCT_DefaultPorts__Enum_DEFINED
enum class DefaultPorts__Enum : int32_t {
    DEFAULT_FTP_PORT = 0x00000015,
    DEFAULT_GOPHER_PORT = 0x00000046,
    DEFAULT_HTTP_PORT = 0x00000050,
    DEFAULT_HTTPS_PORT = 0x000001bb,
    DEFAULT_NNTP_PORT = 0x00000077,
    DEFAULT_SMTP_PORT = 0x00000019,
    DEFAULT_TELNET_PORT = 0x00000017,
};
#endif
#if !defined(IL2CPP_STRUCT_DefaultPorts__Enum_FWDDECL)
#define IL2CPP_STRUCT_DefaultPorts__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DefaultPorts__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultPorts__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DefaultPorts__Enum_FWDDECL)
#include <Modloader/app/structs/DefaultPorts__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultPorts__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
