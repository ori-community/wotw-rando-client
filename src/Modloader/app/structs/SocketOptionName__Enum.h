#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SocketOptionName__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SocketOptionName__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketOptionName__Enum_DEFINED)
#define IL2CPP_STRUCT_SocketOptionName__Enum_DEFINED
enum class SocketOptionName__Enum : int32_t {
    Debug = 0x00000001,
    AcceptConnection = 0x00000002,
    ReuseAddress = 0x00000004,
    KeepAlive = 0x00000008,
    DontRoute = 0x00000010,
    Broadcast = 0x00000020,
    UseLoopback = 0x00000040,
    Linger = 0x00000080,
    OutOfBandInline = 0x00000100,
    DontLinger = -129,
    ExclusiveAddressUse = -5,
    SendBuffer = 0x00001001,
    ReceiveBuffer = 0x00001002,
    SendLowWater = 0x00001003,
    ReceiveLowWater = 0x00001004,
    SendTimeout = 0x00001005,
    ReceiveTimeout = 0x00001006,
    Error = 0x00001007,
    Type = 0x00001008,
    ReuseUnicastPort = 0x00003007,
    MaxConnections = 0x7fffffff,
    IPOptions = 0x00000001,
    HeaderIncluded = 0x00000002,
    TypeOfService = 0x00000003,
    IpTimeToLive = 0x00000004,
    MulticastInterface = 0x00000009,
    MulticastTimeToLive = 0x0000000a,
    MulticastLoopback = 0x0000000b,
    AddMembership = 0x0000000c,
    DropMembership = 0x0000000d,
    DontFragment = 0x0000000e,
    AddSourceMembership = 0x0000000f,
    DropSourceMembership = 0x00000010,
    BlockSource = 0x00000011,
    UnblockSource = 0x00000012,
    PacketInformation = 0x00000013,
    HopLimit = 0x00000015,
    IPProtectionLevel = 0x00000017,
    IPv6Only = 0x0000001b,
    NoDelay = 0x00000001,
    BsdUrgent = 0x00000002,
    Expedited = 0x00000002,
    NoChecksum = 0x00000001,
    ChecksumCoverage = 0x00000014,
    UpdateAcceptContext = 0x0000700b,
    UpdateConnectContext = 0x00007010,
};
#endif
#if !defined(IL2CPP_STRUCT_SocketOptionName__Enum_FWDDECL)
#define IL2CPP_STRUCT_SocketOptionName__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SocketOptionName__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketOptionName__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SocketOptionName__Enum_FWDDECL)
#include <Modloader/app/structs/SocketOptionName__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SocketOptionName__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
