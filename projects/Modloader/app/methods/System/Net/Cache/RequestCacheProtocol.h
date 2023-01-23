#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RequestCacheProtocol.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Net::Cache::RequestCacheProtocol {
    IL2CPP_REGISTER_METHOD(0x02016470, void, ctor, (app::RequestCacheProtocol * this_ptr, app::Object* arg1, app::Object* arg2))
    IL2CPP_REGISTER_METHODINFO(0x0476F0E8, RequestCacheProtocol__ctor__MethodInfo)
} // namespace app::classes::System::Net::Cache::RequestCacheProtocol
