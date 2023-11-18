#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SocketAsyncEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SocketAsyncEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketAsyncEventArgs__Fields_DEFINED)
#include <Modloader/app/structs/SocketAsyncOperation__Enum.h>
#include <Modloader/app/structs/SocketError__Enum.h>
#if defined(IL2CPP_STRUCT_SocketAsyncOperation__Enum_DEFINED) && defined(IL2CPP_STRUCT_SocketError__Enum_DEFINED)
#define IL2CPP_STRUCT_SocketAsyncEventArgs__Fields_DEFINED
struct EndPoint;
struct Socket;
struct SocketAsyncResult;
struct IList_1_System_ArraySegment_1_;
struct Object;
struct EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs_;
struct __declspec(align(8)) SocketAsyncEventArgs__Fields {
    bool disposed;
    int32_t in_progress;
    struct EndPoint* remote_ep;
    struct Socket* current_socket;
    struct SocketAsyncResult* socket_async_result;
    struct Socket* _AcceptSocket_k__BackingField;
    struct IList_1_System_ArraySegment_1_* m_BufferList;
    int32_t _BytesTransferred_k__BackingField;
    int32_t _Count_k__BackingField;
    SocketAsyncOperation__Enum _LastOperation_k__BackingField;

    int32_t _SendPacketsSendSize_k__BackingField;
    SocketError__Enum _SocketError_k__BackingField;

    struct Object* _UserToken_k__BackingField;
    struct EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs_* Completed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SocketAsyncEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_SocketAsyncEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/EndPoint.h>
#include <Modloader/app/structs/EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs_.h>
#include <Modloader/app/structs/IList_1_System_ArraySegment_1_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Socket.h>
#include <Modloader/app/structs/SocketAsyncResult.h>
#endif
#undef IL2CPP_STRUCT_SocketAsyncEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketAsyncEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SocketAsyncEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/SocketAsyncEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SocketAsyncEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
