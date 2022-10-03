#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SpringVinedController {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, (app::SpringVinedController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A99B0, void, OnEnable, (app::SpringVinedController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, AllowJumpModifier, (app::SpringVinedController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472ADC0, SpringVinedController_AllowJumpModifier__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009A9B80, void, OnDisable, (app::SpringVinedController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A9C20, void, OnUpdate, (app::SpringVinedController * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x009A9D40, void, ctor, (app::SpringVinedController * this_ptr))
} // namespace app::classes::SpringVinedController
