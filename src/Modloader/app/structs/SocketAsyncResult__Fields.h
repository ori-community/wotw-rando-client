#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SocketAsyncResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SocketAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketAsyncResult__Fields_DEFINED)
#include <Modloader/app/structs/IOAsyncResult__Fields.h>
#include <Modloader/app/structs/SocketFlags__Enum.h>
#include <Modloader/app/structs/SocketOperation__Enum.h>
#if defined(IL2CPP_STRUCT_IOAsyncResult__Fields_DEFINED) && defined(IL2CPP_STRUCT_SocketOperation__Enum_DEFINED) && defined(IL2CPP_STRUCT_SocketFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_SocketAsyncResult__Fields_DEFINED
struct Socket;
struct Exception;
struct EndPoint;
struct Byte__Array;
struct IPAddress__Array;
struct IList_1_System_ArraySegment_1_;
struct SocketAsyncResult__Fields {
    struct IOAsyncResult__Fields _;
    struct Socket* socket;
    SocketOperation__Enum operation;

    struct Exception* DelayedException;
    struct EndPoint* EndPoint;
    struct Byte__Array* Buffer;
    int32_t Offset;
    int32_t Size;
    SocketFlags__Enum SockFlags;

    struct Socket* AcceptSocket;
    struct IPAddress__Array* Addresses;
    int32_t Port;
    struct IList_1_System_ArraySegment_1_* Buffers;
    bool ReuseSocket;
    int32_t CurrentAddress;
    struct Socket* AcceptedSocket;
    int32_t Total;
    int32_t error;
    int32_t EndCalled;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SocketAsyncResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_SocketAsyncResult__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/EndPoint.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IList_1_System_ArraySegment_1_.h>
#include <Modloader/app/structs/IPAddress__Array.h>
#include <Modloader/app/structs/Socket.h>
#endif
#undef IL2CPP_STRUCT_SocketAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketAsyncResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SocketAsyncResult__Fields_FWDDECL)
#include <Modloader/app/structs/SocketAsyncResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SocketAsyncResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
