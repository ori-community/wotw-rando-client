#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TcpState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TcpState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TcpState__Enum_DEFINED)
#define IL2CPP_STRUCT_TcpState__Enum_DEFINED
enum class TcpState__Enum : int32_t {
    Unknown = 0x00000000,
    Closed = 0x00000001,
    Listen = 0x00000002,
    SynSent = 0x00000003,
    SynReceived = 0x00000004,
    Established = 0x00000005,
    FinWait1 = 0x00000006,
    FinWait2 = 0x00000007,
    CloseWait = 0x00000008,
    Closing = 0x00000009,
    LastAck = 0x0000000a,
    TimeWait = 0x0000000b,
    DeleteTcb = 0x0000000c,
};
#endif
#if !defined(IL2CPP_STRUCT_TcpState__Enum_FWDDECL)
#define IL2CPP_STRUCT_TcpState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_TcpState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TcpState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_TcpState__Enum_FWDDECL)
#include <Modloader/app/structs/TcpState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TcpState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
