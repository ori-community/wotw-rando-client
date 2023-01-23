#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RequestCacheBinding.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Cache::RequestCacheManager {
    IL2CPP_REGISTER_METHOD(0x020157B0, app::RequestCacheBinding*, GetBinding, (app::String * interned_scheme))
    IL2CPP_REGISTER_METHODINFO(0x04714AA0, RequestCacheManager_GetBinding__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02015AA0, void, SetBinding, (app::String * uri_scheme, app::RequestCacheBinding* binding))
    IL2CPP_REGISTER_METHODINFO(0x0474B128, RequestCacheManager_SetBinding__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02015DD0, void, LoadConfigSettings, ())
    IL2CPP_REGISTER_METHOD(0x02016070, void, cctor, ())
} // namespace app::classes::System::Net::Cache::RequestCacheManager
