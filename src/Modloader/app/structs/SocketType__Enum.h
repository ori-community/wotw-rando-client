#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SocketType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SocketType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketType__Enum_DEFINED)
#define IL2CPP_STRUCT_SocketType__Enum_DEFINED
enum class SocketType__Enum : int32_t {
    Stream = 0x00000001,
    Dgram = 0x00000002,
    Raw = 0x00000003,
    Rdm = 0x00000004,
    Seqpacket = 0x00000005,
    Unknown = -1,
};
#endif
#if !defined(IL2CPP_STRUCT_SocketType__Enum_FWDDECL)
#define IL2CPP_STRUCT_SocketType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SocketType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SocketType__Enum_FWDDECL)
#include <Modloader/app/structs/SocketType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SocketType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
