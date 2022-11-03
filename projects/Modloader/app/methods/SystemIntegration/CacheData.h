#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SystemIntegration::CacheData {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::SortingOrder__Enum, get_SortingOrder, (app::CacheData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_SortingOrder, (app::CacheData * this_ptr, app::SortingOrder__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Name, (app::CacheData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Name, (app::CacheData * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Value, (app::CacheData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_Value, (app::CacheData * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CacheData * this_ptr))
} // namespace app::classes::SystemIntegration::CacheData
