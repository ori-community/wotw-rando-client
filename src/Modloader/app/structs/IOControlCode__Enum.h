#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IOControlCode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IOControlCode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_IOControlCode__Enum_DEFINED)
#define IL2CPP_STRUCT_IOControlCode__Enum_DEFINED
enum class IOControlCode__Enum : int64_t {
    AsyncIO = 0x000000008004667d,
    NonBlockingIO = 0x000000008004667e,
    DataToRead = 0x000000004004667f,
    OobDataRead = 0x0000000040047307,
    AssociateHandle = 0x0000000088000001,
    EnableCircularQueuing = 0x0000000028000002,
    Flush = 0x0000000028000004,
    GetBroadcastAddress = 0x0000000048000005,
    GetExtensionFunctionPointer = 0x00000000c8000006,
    GetQos = 0x00000000c8000007,
    GetGroupQos = 0x00000000c8000008,
    MultipointLoopback = 0x0000000088000009,
    MulticastScope = 0x000000008800000a,
    SetQos = 0x000000008800000b,
    SetGroupQos = 0x000000008800000c,
    TranslateHandle = 0x00000000c800000d,
    RoutingInterfaceQuery = 0x00000000c8000014,
    RoutingInterfaceChange = 0x0000000088000015,
    AddressListQuery = 0x0000000048000016,
    AddressListChange = 0x0000000028000017,
    QueryTargetPnpHandle = 0x0000000048000018,
    NamespaceChange = 0x0000000088000019,
    AddressListSort = 0x00000000c8000019,
    ReceiveAll = 0x0000000098000001,
    ReceiveAllMulticast = 0x0000000098000002,
    ReceiveAllIgmpMulticast = 0x0000000098000003,
    KeepAliveValues = 0x0000000098000004,
    AbsorbRouterAlert = 0x0000000098000005,
    UnicastInterface = 0x0000000098000006,
    LimitBroadcasts = 0x0000000098000007,
    BindToInterface = 0x0000000098000008,
    MulticastInterface = 0x0000000098000009,
    AddMulticastGroupOnInterface = 0x000000009800000a,
    DeleteMulticastGroupFromInterface = 0x000000009800000b,
};
#endif
#if !defined(IL2CPP_STRUCT_IOControlCode__Enum_FWDDECL)
#define IL2CPP_STRUCT_IOControlCode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_IOControlCode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_IOControlCode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_IOControlCode__Enum_FWDDECL)
#include <Modloader/app/structs/IOControlCode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IOControlCode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
