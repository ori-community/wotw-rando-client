#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AddressFamily__Enum.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/BufferOffsetSize_1__Array.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/EndPoint.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IList_1_System_ArraySegment_1_.h>
#include <Modloader/app/structs/IOControlCode__Enum.h>
#include <Modloader/app/structs/IOSelectorJob.h>
#include <Modloader/app/structs/IPAddress.h>
#include <Modloader/app/structs/IPAddress__Array.h>
#include <Modloader/app/structs/IPEndPoint.h>
#include <Modloader/app/structs/IPProtectionLevel__Enum.h>
#include <Modloader/app/structs/NetworkInterfaceComponent__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ProtocolType__Enum.h>
#include <Modloader/app/structs/SafeSocketHandle.h>
#include <Modloader/app/structs/SelectMode__Enum.h>
#include <Modloader/app/structs/SemaphoreSlim.h>
#include <Modloader/app/structs/Socket.h>
#include <Modloader/app/structs/SocketAddress.h>
#include <Modloader/app/structs/SocketAsyncEventArgs.h>
#include <Modloader/app/structs/SocketAsyncOperation__Enum.h>
#include <Modloader/app/structs/SocketAsyncResult.h>
#include <Modloader/app/structs/SocketError__Enum.h>
#include <Modloader/app/structs/SocketFlags__Enum.h>
#include <Modloader/app/structs/SocketOperation__Enum.h>
#include <Modloader/app/structs/SocketOptionLevel__Enum.h>
#include <Modloader/app/structs/SocketOptionName__Enum.h>
#include <Modloader/app/structs/SocketShutdown__Enum.h>
#include <Modloader/app/structs/SocketType__Enum.h>
#include <Modloader/app/structs/Socket_WSABUF.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Thread.h>

namespace app::classes::System::Net::Sockets::Socket {
    IL2CPP_REGISTER_METHOD(
        0x01BE48E0,
        void,
        ctor_1,
        app::Socket* this_ptr,
        app::AddressFamily__Enum address_family,
        app::SocketType__Enum socket_type,
        app::ProtocolType__Enum protocol_type
    )
    IL2CPP_REGISTER_METHOD(0x01BE4E80, bool, get_SupportsIPv4, )
    IL2CPP_REGISTER_METHOD(0x01BE4F30, bool, get_OSSupportsIPv4, )
    IL2CPP_REGISTER_METHOD(0x01BE4FE0, bool, get_SupportsIPv6, )
    IL2CPP_REGISTER_METHOD(0x01BE5090, bool, get_OSSupportsIPv6, )
    IL2CPP_REGISTER_METHOD(0x01BE5140, void*, get_Handle, app::Socket* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::AddressFamily__Enum, get_AddressFamily, app::Socket* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A010, app::SocketType__Enum, get_SocketType, app::Socket* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::ProtocolType__Enum, get_ProtocolType, app::Socket* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BE5160, void, set_ExclusiveAddressUse, app::Socket* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01BE5250, void, set_DontFragment, app::Socket* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01BE5330, bool, get_DualMode, app::Socket* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BE5440, void, set_DualMode, app::Socket* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01BE5530, bool, get_IsDualMode, app::Socket* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01BE5650,
        int32_t,
        Send_1,
        app::Socket* this_ptr,
        app::IList_1_System_ArraySegment_1_* buffers,
        app::SocketFlags__Enum socket_flags
    )
    IL2CPP_REGISTER_METHOD(
        0x01BE5730,
        int32_t,
        Send_2,
        app::Socket* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t size,
        app::SocketFlags__Enum socket_flags
    )
    IL2CPP_REGISTER_METHOD(
        0x01BE5830,
        int32_t,
        Receive_1,
        app::Socket* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t size,
        app::SocketFlags__Enum socket_flags
    )
    IL2CPP_REGISTER_METHOD(
        0x01BE5930,
        int32_t,
        Receive_2,
        app::Socket* this_ptr,
        app::IList_1_System_ArraySegment_1_* buffers,
        app::SocketFlags__Enum socket_flags
    )
    IL2CPP_REGISTER_METHOD(
        0x01BE5A10,
        int32_t,
        IOControl_1,
        app::Socket* this_ptr,
        app::IOControlCode__Enum io_control_code,
        app::Byte__Array* option_in_value,
        app::Byte__Array* option_out_value
    )
    IL2CPP_REGISTER_METHOD(0x01BE5BB0, void, SetIPProtectionLevel, app::Socket* this_ptr, app::IPProtectionLevel__Enum level)
    IL2CPP_REGISTER_METHOD(
        0x01BE5D00,
        app::IAsyncResult*,
        BeginSend_1,
        app::Socket* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t size,
        app::SocketFlags__Enum socket_flags,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(
        0x01BE5E30,
        app::IAsyncResult*,
        BeginSend_2,
        app::Socket* this_ptr,
        app::IList_1_System_ArraySegment_1_* buffers,
        app::SocketFlags__Enum socket_flags,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x01BE5F40, int32_t, EndSend_1, app::Socket* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(
        0x01BE60E0,
        app::IAsyncResult*,
        BeginReceive_1,
        app::Socket* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t size,
        app::SocketFlags__Enum socket_flags,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x01BE6210, int32_t, EndReceive_1, app::Socket* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(0x01BE63B0, app::Object*, get_InternalSyncObject, )
    IL2CPP_REGISTER_METHOD(0x01BE6590, bool, get_CleanedUp, app::Socket* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BE65A0, void, InitializeSockets, )
    IL2CPP_REGISTER_METHOD(0x01BE6880, void, Dispose_1, app::Socket* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BE6930, void, Finalize, app::Socket* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BE69B0, void, InternalShutdown, app::Socket* this_ptr, app::SocketShutdown__Enum how)
    IL2CPP_REGISTER_METHOD(
        0x01BE6A80,
        app::IAsyncResult*,
        UnsafeBeginSend,
        app::Socket* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t size,
        app::SocketFlags__Enum socket_flags,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(
        0x01BE6A90,
        app::IAsyncResult*,
        UnsafeBeginReceive,
        app::Socket* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t size,
        app::SocketFlags__Enum socket_flags,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(
        0x01BE6AA0,
        app::IAsyncResult*,
        BeginMultipleSend,
        app::Socket* this_ptr,
        app::BufferOffsetSize_1__Array* buffers,
        app::SocketFlags__Enum socket_flags,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x01BE6E60, int32_t, EndMultipleSend, app::Socket* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(0x01BE6E70, void, MultipleSend, app::Socket* this_ptr, app::BufferOffsetSize_1__Array* buffers, app::SocketFlags__Enum socket_flags)
    IL2CPP_REGISTER_METHOD(
        0x01BE7160,
        void,
        SetSocketOption_1,
        app::Socket* this_ptr,
        app::SocketOptionLevel__Enum option_level,
        app::SocketOptionName__Enum option_name,
        int32_t option_value,
        bool silent
    )
    IL2CPP_REGISTER_METHOD(
        0x01BE7300,
        void,
        ctor_2,
        app::Socket* this_ptr,
        app::AddressFamily__Enum family,
        app::SocketType__Enum type,
        app::ProtocolType__Enum proto,
        app::SafeSocketHandle* safe_handle
    )
    IL2CPP_REGISTER_METHOD(0x01BE7590, void, SocketDefaults, app::Socket* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01BE7700,
        void*,
        Socket_internal,
        app::Socket* this_ptr,
        app::AddressFamily__Enum family,
        app::SocketType__Enum type,
        app::ProtocolType__Enum proto,
        int32_t* error
    )
    IL2CPP_REGISTER_METHOD(0x01BE78A0, int32_t, get_Available, app::Socket* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BE7990, int32_t, Available_internal_1, app::SafeSocketHandle* safe_handle, int32_t* error)
    IL2CPP_REGISTER_METHOD(0x01BE7B60, int32_t, Available_internal_2, void* socket, int32_t* error)
    IL2CPP_REGISTER_METHOD(0x00614BA0, bool, get_IsBound, app::Socket* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BE7C10, app::EndPoint*, get_LocalEndPoint, app::Socket* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BE7D50, app::SocketAddress*, LocalEndPoint_internal_1, app::SafeSocketHandle* safe_handle, int32_t family, int32_t* error)
    IL2CPP_REGISTER_METHOD(0x01BE7F50, app::SocketAddress*, LocalEndPoint_internal_2, void* socket, int32_t family, int32_t* error)
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_Blocking, app::Socket* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BE8000, void, set_Blocking, app::Socket* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01BE8100, void, Blocking_internal_1, app::SafeSocketHandle* safe_handle, bool block, int32_t* error)
    IL2CPP_REGISTER_METHOD(0x01BE82B0, void, Blocking_internal_2, void* socket, bool block, int32_t* error)
    IL2CPP_REGISTER_METHOD(0x00EEDBB0, bool, get_Connected, app::Socket* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BE8340, void, set_NoDelay, app::Socket* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01BE8420, app::EndPoint*, get_RemoteEndPoint, app::Socket* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BE8560, app::SocketAddress*, RemoteEndPoint_internal_1, app::SafeSocketHandle* safe_handle, int32_t family, int32_t* error)
    IL2CPP_REGISTER_METHOD(0x01BE8760, app::SocketAddress*, RemoteEndPoint_internal_2, void* socket, int32_t family, int32_t* error)
    IL2CPP_REGISTER_METHOD(0x01BE8810, bool, Poll, app::Socket* this_ptr, int32_t micro_seconds, app::SelectMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x01BE89D0, bool, Poll_internal_1, app::SafeSocketHandle* safe_handle, app::SelectMode__Enum mode, int32_t timeout, int32_t* error)
    IL2CPP_REGISTER_METHOD(0x01BE8B70, bool, Poll_internal_2, void* socket, app::SelectMode__Enum mode, int32_t timeout, int32_t* error)
    IL2CPP_REGISTER_METHOD(0x01BE8B80, app::Socket*, Accept_1, app::Socket* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BE8DB0, void, Accept_2, app::Socket* this_ptr, app::Socket* accept_socket)
    IL2CPP_REGISTER_METHOD(0x01BE8F00, bool, AcceptAsync, app::Socket* this_ptr, app::SocketAsyncEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x01BE9250, app::Socket*, EndAccept_1, app::Socket* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(
        0x01BE9350,
        app::Socket*,
        EndAccept_2,
        app::Socket* this_ptr,
        app::Byte__Array** buffer,
        int32_t* bytes_transferred,
        app::IAsyncResult* async_result
    )
    IL2CPP_REGISTER_METHOD(0x01BE9480, app::SafeSocketHandle*, Accept_internal_1, app::SafeSocketHandle* safe_handle, int32_t* error, bool blocking)
    IL2CPP_REGISTER_METHOD(0x01BE97D0, void*, Accept_internal_2, void* sock, int32_t* error, bool blocking)
    IL2CPP_REGISTER_METHOD(0x01BE9910, void, Bind, app::Socket* this_ptr, app::EndPoint* local_e_p)
    IL2CPP_REGISTER_METHOD(0x01BE9AD0, void, Bind_internal_1, app::SafeSocketHandle* safe_handle, app::SocketAddress* sa, int32_t* error)
    IL2CPP_REGISTER_METHOD(0x01BE9C40, void, Bind_internal_2, void* sock, app::SocketAddress* sa, int32_t* error)
    IL2CPP_REGISTER_METHOD(0x01BE9C50, void, Listen, app::Socket* this_ptr, int32_t backlog)
    IL2CPP_REGISTER_METHOD(0x01BE9D90, void, Listen_internal_1, app::SafeSocketHandle* safe_handle, int32_t backlog, int32_t* error)
    IL2CPP_REGISTER_METHOD(0x01BE9F40, void, Listen_internal_2, void* sock, int32_t backlog, int32_t* error)
    IL2CPP_REGISTER_METHOD(0x01BE9FC0, void, Connect_1, app::Socket* this_ptr, app::IPAddress* address, int32_t port)
    IL2CPP_REGISTER_METHOD(0x01BEA130, void, Connect_2, app::Socket* this_ptr, app::EndPoint* remote_e_p)
    IL2CPP_REGISTER_METHOD(
        0x01BEA540,
        app::IAsyncResult*,
        BeginConnect_1,
        app::Socket* this_ptr,
        app::String* host,
        int32_t port,
        app::AsyncCallback* request_callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(
        0x01BEA720,
        app::IAsyncResult*,
        BeginConnect_2,
        app::Socket* this_ptr,
        app::IPAddress__Array* addresses,
        int32_t port,
        app::AsyncCallback* request_callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x01BEAA10, void, BeginMConnect, app::SocketAsyncResult* sockares)
    IL2CPP_REGISTER_METHOD(0x01BEAC50, void, BeginSConnect, app::SocketAsyncResult* sockares)
    IL2CPP_REGISTER_METHOD(0x01BEB480, void, EndConnect, app::Socket* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(0x01BEB580, void, Connect_internal_1, app::SafeSocketHandle* safe_handle, app::SocketAddress* sa, int32_t* error, bool blocking)
    IL2CPP_REGISTER_METHOD(0x01BEB6E0, void, Connect_internal_2, void* sock, app::SocketAddress* sa, int32_t* error, bool blocking)
    IL2CPP_REGISTER_METHOD(0x01BEB6F0, void, Disconnect, app::Socket* this_ptr, bool reuse_socket)
    IL2CPP_REGISTER_METHOD(0x01BEB820, void, EndDisconnect, app::Socket* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(0x01BEB920, void, Disconnect_internal_1, app::SafeSocketHandle* safe_handle, bool reuse, int32_t* error)
    IL2CPP_REGISTER_METHOD(0x01BEBAC0, void, Disconnect_internal_2, void* sock, bool reuse, int32_t* error)
    IL2CPP_REGISTER_METHOD(
        0x01BEBB40,
        int32_t,
        Receive_3,
        app::Socket* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t size,
        app::SocketFlags__Enum socket_flags,
        app::SocketError__Enum* error_code
    )
    IL2CPP_REGISTER_METHOD(
        0x01BEBCB0,
        int32_t,
        Receive_4,
        app::Socket* this_ptr,
        app::IList_1_System_ArraySegment_1_* buffers,
        app::SocketFlags__Enum socket_flags,
        app::SocketError__Enum* error_code
    )
    IL2CPP_REGISTER_METHOD(
        0x01BEC190,
        app::IAsyncResult*,
        BeginReceive_2,
        app::Socket* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t size,
        app::SocketFlags__Enum socket_flags,
        app::SocketError__Enum* error_code,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x01BEC490, int32_t, EndReceive_2, app::Socket* this_ptr, app::IAsyncResult* async_result, app::SocketError__Enum* error_code)
    IL2CPP_REGISTER_METHOD(
        0x01BEC5C0,
        int32_t,
        Receive_internal_1,
        app::SafeSocketHandle* safe_handle,
        app::Socket_WSABUF* bufarray,
        int32_t count,
        app::SocketFlags__Enum flags,
        int32_t* error,
        bool blocking
    )
    IL2CPP_REGISTER_METHOD(
        0x01BEC7A0,
        int32_t,
        Receive_internal_2,
        void* sock,
        app::Socket_WSABUF* bufarray,
        int32_t count,
        app::SocketFlags__Enum flags,
        int32_t* error,
        bool blocking
    )
    IL2CPP_REGISTER_METHOD(
        0x01BEC860,
        int32_t,
        Receive_internal_3,
        app::SafeSocketHandle* safe_handle,
        uint8_t* buffer,
        int32_t count,
        app::SocketFlags__Enum flags,
        int32_t* error,
        bool blocking
    )
    IL2CPP_REGISTER_METHOD(
        0x01BECA80,
        int32_t,
        Receive_internal_4,
        void* sock,
        uint8_t* buffer,
        int32_t count,
        app::SocketFlags__Enum flags,
        int32_t* error,
        bool blocking
    )
    IL2CPP_REGISTER_METHOD(
        0x01BECB90,
        int32_t,
        ReceiveFrom,
        app::Socket* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t size,
        app::SocketFlags__Enum socket_flags,
        app::EndPoint** remote_e_p,
        app::SocketError__Enum* error_code
    )
    IL2CPP_REGISTER_METHOD(0x01BECD60, int32_t, EndReceiveFrom, app::Socket* this_ptr, app::IAsyncResult* async_result, app::EndPoint** end_point)
    IL2CPP_REGISTER_METHOD(
        0x01BECEB0,
        int32_t,
        ReceiveFrom_internal_1,
        app::SafeSocketHandle* safe_handle,
        uint8_t* buffer,
        int32_t count,
        app::SocketFlags__Enum flags,
        app::SocketAddress** sockaddr,
        int32_t* error,
        bool blocking
    )
    IL2CPP_REGISTER_METHOD(
        0x01BED050,
        int32_t,
        ReceiveFrom_internal_2,
        void* sock,
        uint8_t* buffer,
        int32_t count,
        app::SocketFlags__Enum flags,
        app::SocketAddress** sockaddr,
        int32_t* error,
        bool blocking
    )
    IL2CPP_REGISTER_METHOD(
        0x01BED060,
        int32_t,
        Send_3,
        app::Socket* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t size,
        app::SocketFlags__Enum socket_flags,
        app::SocketError__Enum* error_code
    )
    IL2CPP_REGISTER_METHOD(
        0x01BED200,
        int32_t,
        Send_4,
        app::Socket* this_ptr,
        app::IList_1_System_ArraySegment_1_* buffers,
        app::SocketFlags__Enum socket_flags,
        app::SocketError__Enum* error_code
    )
    IL2CPP_REGISTER_METHOD(
        0x01BED710,
        app::IAsyncResult*,
        BeginSend_3,
        app::Socket* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t size,
        app::SocketFlags__Enum socket_flags,
        app::SocketError__Enum* error_code,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x01BEDB30, void, BeginSendCallback, app::SocketAsyncResult* sockares, int32_t sent_so_far)
    IL2CPP_REGISTER_METHOD(
        0x01BEDFC0,
        app::IAsyncResult*,
        BeginSend_4,
        app::Socket* this_ptr,
        app::IList_1_System_ArraySegment_1_* buffers,
        app::SocketFlags__Enum socket_flags,
        app::SocketError__Enum* error_code,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x01BEE2D0, int32_t, EndSend_2, app::Socket* this_ptr, app::IAsyncResult* async_result, app::SocketError__Enum* error_code)
    IL2CPP_REGISTER_METHOD(
        0x01BEE400,
        int32_t,
        Send_internal_1,
        app::SafeSocketHandle* safe_handle,
        app::Socket_WSABUF* bufarray,
        int32_t count,
        app::SocketFlags__Enum flags,
        int32_t* error,
        bool blocking
    )
    IL2CPP_REGISTER_METHOD(
        0x01BEE5E0,
        int32_t,
        Send_internal_2,
        void* sock,
        app::Socket_WSABUF* bufarray,
        int32_t count,
        app::SocketFlags__Enum flags,
        int32_t* error,
        bool blocking
    )
    IL2CPP_REGISTER_METHOD(
        0x01BEE6A0,
        int32_t,
        Send_internal_3,
        app::SafeSocketHandle* safe_handle,
        uint8_t* buffer,
        int32_t count,
        app::SocketFlags__Enum flags,
        int32_t* error,
        bool blocking
    )
    IL2CPP_REGISTER_METHOD(
        0x01BEE870,
        int32_t,
        Send_internal_4,
        void* sock,
        uint8_t* buffer,
        int32_t count,
        app::SocketFlags__Enum flags,
        int32_t* error,
        bool blocking
    )
    IL2CPP_REGISTER_METHOD(0x01BEE930, int32_t, EndSendTo, app::Socket* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(
        0x01BEEA30,
        app::Object*,
        GetSocketOption,
        app::Socket* this_ptr,
        app::SocketOptionLevel__Enum option_level,
        app::SocketOptionName__Enum option_name
    )
    IL2CPP_REGISTER_METHOD(
        0x01BEEBE0,
        void,
        GetSocketOption_obj_internal_1,
        app::SafeSocketHandle* safe_handle,
        app::SocketOptionLevel__Enum level,
        app::SocketOptionName__Enum name,
        app::Object** obj_val,
        int32_t* error
    )
    IL2CPP_REGISTER_METHOD(
        0x01BEED70,
        void,
        GetSocketOption_obj_internal_2,
        void* socket,
        app::SocketOptionLevel__Enum level,
        app::SocketOptionName__Enum name,
        app::Object** obj_val,
        int32_t* error
    )
    IL2CPP_REGISTER_METHOD(
        0x01BEED80,
        void,
        SetSocketOption_2,
        app::Socket* this_ptr,
        app::SocketOptionLevel__Enum option_level,
        app::SocketOptionName__Enum option_name,
        int32_t option_value
    )
    IL2CPP_REGISTER_METHOD(
        0x01BEEEE0,
        void,
        SetSocketOption_internal_1,
        app::SafeSocketHandle* safe_handle,
        app::SocketOptionLevel__Enum level,
        app::SocketOptionName__Enum name,
        app::Object* obj_val,
        app::Byte__Array* byte_val,
        int32_t int_val,
        int32_t* error
    )
    IL2CPP_REGISTER_METHOD(
        0x01BEF090,
        void,
        SetSocketOption_internal_2,
        void* socket,
        app::SocketOptionLevel__Enum level,
        app::SocketOptionName__Enum name,
        app::Object* obj_val,
        app::Byte__Array* byte_val,
        int32_t int_val,
        int32_t* error
    )
    IL2CPP_REGISTER_METHOD(
        0x01BEF0A0,
        int32_t,
        IOControl_2,
        app::Socket* this_ptr,
        int32_t io_control_code,
        app::Byte__Array* option_in_value,
        app::Byte__Array* option_out_value
    )
    IL2CPP_REGISTER_METHOD(
        0x01BEF240,
        int32_t,
        IOControl_internal_1,
        app::SafeSocketHandle* safe_handle,
        int32_t ioctl_code,
        app::Byte__Array* input,
        app::Byte__Array* output,
        int32_t* error
    )
    IL2CPP_REGISTER_METHOD(
        0x01BEF490,
        int32_t,
        IOControl_internal_2,
        void* sock,
        int32_t ioctl_code,
        app::Byte__Array* input,
        app::Byte__Array* output,
        int32_t* error
    )
    IL2CPP_REGISTER_METHOD(0x01BEF5C0, void, Close_1, app::Socket* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BEF5D0, void, Close_2, app::Socket* this_ptr, int32_t timeout)
    IL2CPP_REGISTER_METHOD(0x01BEF5E0, void, Close_internal, void* socket, int32_t* error)
    IL2CPP_REGISTER_METHOD(0x01BEF6A0, void, Shutdown, app::Socket* this_ptr, app::SocketShutdown__Enum how)
    IL2CPP_REGISTER_METHOD(0x01BEF7D0, void, Shutdown_internal_1, app::SafeSocketHandle* safe_handle, app::SocketShutdown__Enum how, int32_t* error)
    IL2CPP_REGISTER_METHOD(0x01BEF980, void, Shutdown_internal_2, void* socket, app::SocketShutdown__Enum how, int32_t* error)
    IL2CPP_REGISTER_METHOD(0x01BEFA00, void, Dispose_2, app::Socket* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x01BEFA70, void, Linger, app::Socket* this_ptr, void* handle)
    IL2CPP_REGISTER_METHOD(0x01BEFDB0, void, ThrowIfDisposedAndClosed, app::Socket* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BEFE90, void, ThrowIfBufferNull, app::Socket* this_ptr, app::Byte__Array* buffer)
    IL2CPP_REGISTER_METHOD(0x01BEFF40, void, ThrowIfBufferOutOfRange, app::Socket* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size)
    IL2CPP_REGISTER_METHOD(0x01BF00E0, void, ThrowIfUdp, app::Socket* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01BF0190,
        app::SocketAsyncResult*,
        ValidateEndIAsyncResult,
        app::Socket* this_ptr,
        app::IAsyncResult* ares,
        app::String* method_name,
        app::String* arg_name
    )
    IL2CPP_REGISTER_METHOD(0x01BF02F0, void, QueueIOSelectorJob, app::Socket* this_ptr, app::SemaphoreSlim* sem, void* handle, app::IOSelectorJob* job)
    IL2CPP_REGISTER_METHOD(
        0x01BF05D0,
        void,
        InitSocketAsyncEventArgs,
        app::Socket* this_ptr,
        app::SocketAsyncEventArgs* e,
        app::AsyncCallback* callback,
        app::Object* state,
        app::SocketOperation__Enum operation
    )
    IL2CPP_REGISTER_METHOD(
        0x01BF08D0,
        app::SocketAsyncOperation__Enum,
        SocketOperationToSocketAsyncOperation,
        app::Socket* this_ptr,
        app::SocketOperation__Enum op
    )
    IL2CPP_REGISTER_METHOD(0x01BF0A60, app::IPEndPoint*, RemapIPEndPoint, app::Socket* this_ptr, app::IPEndPoint* input)
    IL2CPP_REGISTER_METHOD(0x01BF0D10, void, cancel_blocking_socket_operation, app::Thread* thread)
    IL2CPP_REGISTER_METHOD(0x01BF0D30, int32_t, get_FamilyHint, )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsProtocolSupported_internal, app::NetworkInterfaceComponent__Enum network_interface)
    IL2CPP_REGISTER_METHOD(0x01BF0E10, bool, IsProtocolSupported, app::NetworkInterfaceComponent__Enum network_interface)
    IL2CPP_REGISTER_METHOD(0x01BF0EA0, void, cctor, )
} // namespace app::classes::System::Net::Sockets::Socket
