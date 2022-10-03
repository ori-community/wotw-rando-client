#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::Cache::RequestCacheBinding {
    IL2CPP_REGISTER_METHOD(0x00522850, void, ctor, (app::RequestCacheBinding * this_ptr, app::RequestCache* request_cache, app::RequestCacheValidator* cache_validator, app::RequestCachePolicy* policy))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::RequestCache*, get_Cache, (app::RequestCacheBinding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::RequestCacheValidator*, get_Validator, (app::RequestCacheBinding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::RequestCachePolicy*, get_Policy, (app::RequestCacheBinding * this_ptr))
} // namespace app::classes::System::Net::Cache::RequestCacheBinding
