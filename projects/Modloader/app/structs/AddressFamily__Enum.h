#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddressFamily__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddressFamily__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddressFamily__Enum_DEFINED)
#define IL2CPP_STRUCT_AddressFamily__Enum_DEFINED
enum class AddressFamily__Enum : int32_t {
    Unknown = -1,
    Unspecified = 0x00000000,
    Unix = 0x00000001,
    InterNetwork = 0x00000002,
    ImpLink = 0x00000003,
    Pup = 0x00000004,
    Chaos = 0x00000005,
    NS = 0x00000006,
    Ipx = 0x00000006,
    Iso = 0x00000007,
    Osi = 0x00000007,
    Ecma = 0x00000008,
    DataKit = 0x00000009,
    Ccitt = 0x0000000a,
    Sna = 0x0000000b,
    DecNet = 0x0000000c,
    DataLink = 0x0000000d,
    Lat = 0x0000000e,
    HyperChannel = 0x0000000f,
    AppleTalk = 0x00000010,
    NetBios = 0x00000011,
    VoiceView = 0x00000012,
    FireFox = 0x00000013,
    Banyan = 0x00000015,
    Atm = 0x00000016,
    InterNetworkV6 = 0x00000017,
    Cluster = 0x00000018,
    Ieee12844 = 0x00000019,
    Irda = 0x0000001a,
    NetworkDesigners = 0x0000001c,
    Max = 0x0000001d,
};
#endif
#if !defined(IL2CPP_STRUCT_AddressFamily__Enum_FWDDECL)
#define IL2CPP_STRUCT_AddressFamily__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AddressFamily__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddressFamily__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AddressFamily__Enum_FWDDECL)
#include <Modloader/app/structs/AddressFamily__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddressFamily__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
