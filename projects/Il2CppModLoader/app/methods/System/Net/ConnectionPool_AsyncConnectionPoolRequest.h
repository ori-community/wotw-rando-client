#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::ConnectionPool_AsyncConnectionPoolRequest {
    IL2CPP_REGISTER_METHOD(0x01E9CEA0, void, ctor, (app::ConnectionPool_AsyncConnectionPoolRequest * this_ptr, app::ConnectionPool * pool, app::Object * owning_object, app::GeneralAsyncDelegate * async_callback, int32_t creation_timeout))
}
