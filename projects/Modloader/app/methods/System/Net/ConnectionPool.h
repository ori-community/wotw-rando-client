#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Mutex.h>
#include <Modloader/app/structs/ConnectionPool.h>
#include <Modloader/app/structs/ConnectionPool_AsyncConnectionPoolRequest.h>
#include <Modloader/app/structs/CreateConnectionDelegate.h>
#include <Modloader/app/structs/GeneralAsyncDelegate.h>
#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PooledStream.h>
#include <Modloader/app/structs/Semaphore_1.h>
#include <Modloader/app/structs/ServicePoint.h>
#include <Modloader/app/structs/TimerThread_Timer.h>
#include <Modloader/app/structs/WaitHandle__Array.h>

namespace app::classes::System::Net::ConnectionPool {
    IL2CPP_REGISTER_METHOD(0x01E99BC0, app::Mutex*, get_CreationMutex, (app::ConnectionPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E99C90, app::ManualResetEvent*, get_ErrorEvent, (app::ConnectionPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E99D60, app::Semaphore_1*, get_Semaphore, (app::ConnectionPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E99E30, void, ctor, (app::ConnectionPool * this_ptr, app::ServicePoint* service_point, int32_t max_pool_size, int32_t min_pool_size, int32_t idle_timeout, app::CreateConnectionDelegate* create_connection_callback))
    IL2CPP_REGISTER_METHOD(0x01E99FA0, void, Initialize, (app::ConnectionPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E9A700, void, QueueRequest, (app::ConnectionPool * this_ptr, app::ConnectionPool_AsyncConnectionPoolRequest* async_request))
    IL2CPP_REGISTER_METHOD(0x01E9AA60, void, AsyncThread, (app::ConnectionPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD750, int32_t, get_Count, (app::ConnectionPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::ServicePoint*, get_ServicePoint, (app::ConnectionPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FF8B0, int32_t, get_MaxPoolSize, (app::ConnectionPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DC050, int32_t, get_MinPoolSize, (app::ConnectionPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E9AEC0, bool, get_ErrorOccurred, (app::ConnectionPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E9AED0, void, CleanupCallbackWrapper, (app::TimerThread_Timer * timer, int32_t time_noticed, app::Object* context))
    IL2CPP_REGISTER_METHOD(0x01E9B0B0, void, ForceCleanup, (app::ConnectionPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E9B220, void, CleanupCallback, (app::ConnectionPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E9B460, app::PooledStream*, Create, (app::ConnectionPool * this_ptr, app::CreateConnectionDelegate* create_connection_callback))
    IL2CPP_REGISTER_METHOD(0x01E9B6D0, void, Destroy, (app::ConnectionPool * this_ptr, app::PooledStream* pooled_stream))
    IL2CPP_REGISTER_METHOD(0x01E9B870, void, CancelErrorCallbackWrapper, (app::TimerThread_Timer * timer, int32_t time_noticed, app::Object* context))
    IL2CPP_REGISTER_METHOD(0x01E9B9D0, void, CancelErrorCallback, (app::ConnectionPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E9BA30, app::PooledStream*, GetFromPool, (app::ConnectionPool * this_ptr, app::Object* owning_object))
    IL2CPP_REGISTER_METHOD(0x01E9BB90, app::PooledStream*, Get, (app::ConnectionPool * this_ptr, app::Object* owning_object, int32_t result, bool* continue_loop, app::WaitHandle__Array** wait_handles))
    IL2CPP_REGISTER_METHOD(0x01E9BF00, void, Abort, (app::ConnectionPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E9C110, app::PooledStream*, GetConnection, (app::ConnectionPool * this_ptr, app::Object* owning_object, app::GeneralAsyncDelegate* async_callback, int32_t creation_timeout))
    IL2CPP_REGISTER_METHOD(0x01E9C470, void, PutConnection_1, (app::ConnectionPool * this_ptr, app::PooledStream* pooled_stream, app::Object* owning_object, int32_t creation_timeout))
    IL2CPP_REGISTER_METHOD(0x01E9C490, void, PutConnection_2, (app::ConnectionPool * this_ptr, app::PooledStream* pooled_stream, app::Object* owning_object, int32_t creation_timeout, bool can_reuse))
    IL2CPP_REGISTER_METHOD(0x01E9C840, void, PutNew, (app::ConnectionPool * this_ptr, app::PooledStream* pooled_stream))
    IL2CPP_REGISTER_METHOD(0x01E9C8C0, bool, ReclaimEmancipatedObjects, (app::ConnectionPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E9CBC0, app::PooledStream*, UserCreateRequest, (app::ConnectionPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E9CC20, void, cctor, ())
} // namespace app::classes::System::Net::ConnectionPool
