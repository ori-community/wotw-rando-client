#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Mono::RuntimeEventHandle {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::RuntimeEventHandle__Boxed * this_ptr, void* v))
    IL2CPP_REGISTER_METHOD(0x00107C00, void*, get_Value, (app::RuntimeEventHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EA450, bool, Equals, (app::RuntimeEventHandle__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::RuntimeEventHandle__Boxed * this_ptr))
} // namespace app::classes::Mono::RuntimeEventHandle
