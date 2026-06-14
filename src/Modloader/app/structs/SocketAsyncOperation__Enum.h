#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SocketAsyncOperation__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SocketAsyncOperation__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketAsyncOperation__Enum_DEFINED)
#define IL2CPP_STRUCT_SocketAsyncOperation__Enum_DEFINED
enum class SocketAsyncOperation__Enum : int32_t {
    None = 0x00000000,
    Accept = 0x00000001,
    Connect = 0x00000002,
    Disconnect = 0x00000003,
    Receive = 0x00000004,
    ReceiveFrom = 0x00000005,
    ReceiveMessageFrom = 0x00000006,
    Send = 0x00000007,
    SendPackets = 0x00000008,
    SendTo = 0x00000009,
};
#endif
#if !defined(IL2CPP_STRUCT_SocketAsyncOperation__Enum_FWDDECL)
#define IL2CPP_STRUCT_SocketAsyncOperation__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SocketAsyncOperation__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketAsyncOperation__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SocketAsyncOperation__Enum_FWDDECL)
#include <Modloader/app/structs/SocketAsyncOperation__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SocketAsyncOperation__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
