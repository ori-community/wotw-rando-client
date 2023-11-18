#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SocketError__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SocketError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketError__Enum_DEFINED)
#define IL2CPP_STRUCT_SocketError__Enum_DEFINED
enum class SocketError__Enum : int32_t {
    Success = 0x00000000,
    SocketError = -1,
    Interrupted = 0x00002714,
    AccessDenied = 0x0000271d,
    Fault = 0x0000271e,
    InvalidArgument = 0x00002726,
    TooManyOpenSockets = 0x00002728,
    WouldBlock = 0x00002733,
    InProgress = 0x00002734,
    AlreadyInProgress = 0x00002735,
    NotSocket = 0x00002736,
    DestinationAddressRequired = 0x00002737,
    MessageSize = 0x00002738,
    ProtocolType = 0x00002739,
    ProtocolOption = 0x0000273a,
    ProtocolNotSupported = 0x0000273b,
    SocketNotSupported = 0x0000273c,
    OperationNotSupported = 0x0000273d,
    ProtocolFamilyNotSupported = 0x0000273e,
    AddressFamilyNotSupported = 0x0000273f,
    AddressAlreadyInUse = 0x00002740,
    AddressNotAvailable = 0x00002741,
    NetworkDown = 0x00002742,
    NetworkUnreachable = 0x00002743,
    NetworkReset = 0x00002744,
    ConnectionAborted = 0x00002745,
    ConnectionReset = 0x00002746,
    NoBufferSpaceAvailable = 0x00002747,
    IsConnected = 0x00002748,
    NotConnected = 0x00002749,
    Shutdown = 0x0000274a,
    TimedOut = 0x0000274c,
    ConnectionRefused = 0x0000274d,
    HostDown = 0x00002750,
    HostUnreachable = 0x00002751,
    ProcessLimit = 0x00002753,
    SystemNotReady = 0x0000276b,
    VersionNotSupported = 0x0000276c,
    NotInitialized = 0x0000276d,
    Disconnecting = 0x00002775,
    TypeNotFound = 0x0000277d,
    HostNotFound = 0x00002af9,
    TryAgain = 0x00002afa,
    NoRecovery = 0x00002afb,
    NoData = 0x00002afc,
    IOPending = 0x000003e5,
    OperationAborted = 0x000003e3,
};
#endif
#if !defined(IL2CPP_STRUCT_SocketError__Enum_FWDDECL)
#define IL2CPP_STRUCT_SocketError__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SocketError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketError__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SocketError__Enum_FWDDECL)
#include <Modloader/app/structs/SocketError__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SocketError__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
