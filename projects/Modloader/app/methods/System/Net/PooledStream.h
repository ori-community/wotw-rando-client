#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PooledStream.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ConnectionPool.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/IPAddress.h>
#include <Modloader/app/structs/ServicePoint.h>
#include <Modloader/app/structs/GeneralAsyncDelegate.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Socket.h>
#include <Modloader/app/structs/NetworkStream.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/BufferOffsetSize_1__Array.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/SocketShutdown__Enum.h>
#include <Modloader/app/structs/SelectMode__Enum.h>

namespace app::classes::System::Net::PooledStream {
    IL2CPP_REGISTER_METHOD(0x01BCBCB0, void, ctor_1, (app::PooledStream * this_ptr, app::Object* owner))
    IL2CPP_REGISTER_METHOD(0x01BCBF20, void, ctor_2, (app::PooledStream * this_ptr, app::ConnectionPool* connection_pool, app::TimeSpan lifetime, bool check_lifetime))
    IL2CPP_REGISTER_METHOD(0x01BCC0D0, bool, get_JustConnected, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::IPAddress*, get_ServerAddress, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F2320, bool, get_IsInitalizing, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCC0F0, bool, get_CanBePooled, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCC160, void, set_CanBePooled, (app::PooledStream * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01BCC170, bool, get_IsEmancipated, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCC1B0, app::Object*, get_Owner, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCC200, void, set_Owner, (app::PooledStream * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::ConnectionPool*, get_Pool, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCC2F0, app::ServicePoint*, get_ServicePoint, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCC310, bool, Activate_1, (app::PooledStream * this_ptr, app::Object* owning_object, app::GeneralAsyncDelegate* async_callback))
    IL2CPP_REGISTER_METHOD(0x01BCC340, bool, Activate_2, (app::PooledStream * this_ptr, app::Object* owning_object, bool async, app::GeneralAsyncDelegate* async_callback))
    IL2CPP_REGISTER_METHODINFO(0x047995A0, PooledStream_Activate_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BCC4A0, void, Deactivate, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCC5D0, void, ConnectionCallback, (app::PooledStream * this_ptr, app::Object* owning_object, app::Exception* e, app::Socket* socket, app::IPAddress* address))
    IL2CPP_REGISTER_METHODINFO(0x0476B670, PooledStream_ConnectionCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BCC730, void, CheckLifetime, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCC840, void, UpdateLifetime, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCC890, void, PrePush, (app::PooledStream * this_ptr, app::Object* expected_owner))
    IL2CPP_REGISTER_METHODINFO(0x047606D0, PooledStream_PrePush__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BCCAC0, void, PostPop, (app::PooledStream * this_ptr, app::Object* new_owner))
    IL2CPP_REGISTER_METHODINFO(0x04709C70, PooledStream_PostPop__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UsingSecureStream, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::NetworkStream*, get_NetworkStream, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCCDE0, void, set_NetworkStream, (app::PooledStream * this_ptr, app::NetworkStream* value))
    IL2CPP_REGISTER_METHOD(0x01BCCDF0, app::Socket*, get_Socket, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCCEE0, bool, get_CanRead, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCCF10, bool, get_CanSeek, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCCF40, bool, get_CanWrite, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCCF70, bool, get_CanTimeout, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCCFA0, int32_t, get_ReadTimeout, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCCFD0, void, set_ReadTimeout, (app::PooledStream * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01BCD000, int32_t, get_WriteTimeout, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCD030, void, set_WriteTimeout, (app::PooledStream * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01BCD060, int64_t, get_Length, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCD090, int64_t, get_Position, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCD0C0, void, set_Position, (app::PooledStream * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x01BCD0F0, int64_t, Seek, (app::PooledStream * this_ptr, int64_t offset, app::SeekOrigin__Enum origin))
    IL2CPP_REGISTER_METHOD(0x01BCD120, int32_t, Read, (app::PooledStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size))
    IL2CPP_REGISTER_METHOD(0x01BCD150, void, Write, (app::PooledStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size))
    IL2CPP_REGISTER_METHOD(0x01BCD180, void, MultipleWrite, (app::PooledStream * this_ptr, app::BufferOffsetSize_1__Array* buffers))
    IL2CPP_REGISTER_METHOD(0x01BCD1B0, void, Dispose, (app::PooledStream * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x01BCD290, void, CloseSocket, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCD300, void, Close, (app::PooledStream * this_ptr, int32_t timeout))
    IL2CPP_REGISTER_METHOD(0x01BCD420, app::IAsyncResult*, BeginRead, (app::PooledStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01BCD450, app::IAsyncResult*, UnsafeBeginRead, (app::PooledStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01BCD480, int32_t, EndRead, (app::PooledStream * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHOD(0x01BCD4B0, app::IAsyncResult*, BeginWrite, (app::PooledStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01BCD4E0, app::IAsyncResult*, UnsafeBeginWrite, (app::PooledStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01BCD510, void, EndWrite, (app::PooledStream * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHOD(0x01BCD540, app::IAsyncResult*, BeginMultipleWrite, (app::PooledStream * this_ptr, app::BufferOffsetSize_1__Array* buffers, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01BCD570, void, EndMultipleWrite, (app::PooledStream * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHOD(0x01BCD5A0, void, Flush, (app::PooledStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCD5D0, app::Task*, FlushAsync, (app::PooledStream * this_ptr, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHOD(0x01BCD600, void, SetLength, (app::PooledStream * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x01BCD630, void, SetSocketTimeoutOption, (app::PooledStream * this_ptr, app::SocketShutdown__Enum mode, int32_t timeout, bool silent))
    IL2CPP_REGISTER_METHOD(0x01BCD660, bool, Poll, (app::PooledStream * this_ptr, int32_t micro_seconds, app::SelectMode__Enum mode))
    IL2CPP_REGISTER_METHOD(0x01BCD7F0, bool, PollRead, (app::PooledStream * this_ptr))
} // namespace app::classes::System::Net::PooledStream
