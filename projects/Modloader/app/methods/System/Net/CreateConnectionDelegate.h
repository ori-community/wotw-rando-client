#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CreateConnectionDelegate.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PooledStream.h>
#include <Modloader/app/structs/ConnectionPool.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Net::CreateConnectionDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::CreateConnectionDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x014347E0, app::PooledStream*, Invoke, (app::CreateConnectionDelegate * this_ptr, app::ConnectionPool* pool))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::CreateConnectionDelegate * this_ptr, app::ConnectionPool* pool, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::PooledStream*, EndInvoke, (app::CreateConnectionDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Net::CreateConnectionDelegate
