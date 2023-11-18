#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConnectionPool_AsyncConnectionPoolRequest.h>
#include <Modloader/app/structs/ConnectionPool.h>
#include <Modloader/app/structs/GeneralAsyncDelegate.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Net::ConnectionPool_AsyncConnectionPoolRequest {
    IL2CPP_REGISTER_METHOD(0x01E9CEA0, void, ctor, (app::ConnectionPool_AsyncConnectionPoolRequest * this_ptr, app::ConnectionPool* pool, app::Object* owning_object, app::GeneralAsyncDelegate* async_callback, int32_t creation_timeout))
}
