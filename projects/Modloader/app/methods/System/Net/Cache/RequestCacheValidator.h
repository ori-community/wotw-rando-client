#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RequestCacheValidator.h>

namespace app::classes::System::Net::Cache::RequestCacheValidator {
    IL2CPP_REGISTER_METHOD(0x020164C0, app::Object*, CreateValidator, (app::RequestCacheValidator * this_ptr))
}
