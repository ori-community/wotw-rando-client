#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProtocolType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProtocolType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProtocolType__Enum_DEFINED)
#define IL2CPP_STRUCT_ProtocolType__Enum_DEFINED
enum class ProtocolType__Enum : int32_t {
    IP = 0x00000000,
    IPv6HopByHopOptions = 0x00000000,
    Icmp = 0x00000001,
    Igmp = 0x00000002,
    Ggp = 0x00000003,
    IPv4 = 0x00000004,
    Tcp = 0x00000006,
    Pup = 0x0000000c,
    Udp = 0x00000011,
    Idp = 0x00000016,
    IPv6 = 0x00000029,
    IPv6RoutingHeader = 0x0000002b,
    IPv6FragmentHeader = 0x0000002c,
    IPSecEncapsulatingSecurityPayload = 0x00000032,
    IPSecAuthenticationHeader = 0x00000033,
    IcmpV6 = 0x0000003a,
    IPv6NoNextHeader = 0x0000003b,
    IPv6DestinationOptions = 0x0000003c,
    ND = 0x0000004d,
    Raw = 0x000000ff,
    Unspecified = 0x00000000,
    Ipx = 0x000003e8,
    Spx = 0x000004e8,
    SpxII = 0x000004e9,
    Unknown = -1,
};
#endif
#if !defined(IL2CPP_STRUCT_ProtocolType__Enum_FWDDECL)
#define IL2CPP_STRUCT_ProtocolType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ProtocolType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProtocolType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ProtocolType__Enum_FWDDECL)
#include <Modloader/app/structs/ProtocolType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProtocolType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
