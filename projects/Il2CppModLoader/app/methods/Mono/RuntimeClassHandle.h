#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Mono::RuntimeClassHandle {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor_1, (app::RuntimeClassHandle__Boxed * this_ptr, app::RuntimeStructs_MonoClass* value))
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor_2, (app::RuntimeClassHandle__Boxed * this_ptr, void* ptr))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::RuntimeStructs_MonoClass*, get_Value, (app::RuntimeClassHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EA310, bool, Equals, (app::RuntimeClassHandle__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::RuntimeClassHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023CE770, void*, GetTypeFromClass, (app::RuntimeStructs_MonoClass * klass))
    IL2CPP_REGISTER_METHOD(0x001EA440, app::RuntimeTypeHandle, GetTypeHandle, (app::RuntimeClassHandle__Boxed * this_ptr))
} // namespace app::classes::Mono::RuntimeClassHandle
