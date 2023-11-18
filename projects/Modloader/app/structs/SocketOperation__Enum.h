#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SocketOperation__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SocketOperation__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketOperation__Enum_DEFINED)
#define IL2CPP_STRUCT_SocketOperation__Enum_DEFINED
enum class SocketOperation__Enum : int32_t {
    Accept = 0x00000000,
    Connect = 0x00000001,
    Receive = 0x00000002,
    ReceiveFrom = 0x00000003,
    Send = 0x00000004,
    SendTo = 0x00000005,
    RecvJustCallback = 0x00000006,
    SendJustCallback = 0x00000007,
    Disconnect = 0x00000008,
    AcceptReceive = 0x00000009,
    ReceiveGeneric = 0x0000000a,
    SendGeneric = 0x0000000b,
};
#endif
#if !defined(IL2CPP_STRUCT_SocketOperation__Enum_FWDDECL)
#define IL2CPP_STRUCT_SocketOperation__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SocketOperation__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketOperation__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SocketOperation__Enum_FWDDECL)
#include <Modloader/app/structs/SocketOperation__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SocketOperation__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
