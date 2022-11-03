#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ProtectiveLightRadial {
    IL2CPP_REGISTER_METHOD(0x00C7EA80, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00C7EB60, void, OnEnable, (app::ProtectiveLightRadial * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7ED30, void, OnDisable, (app::ProtectiveLightRadial * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7EF10, bool, IsPointUnderLight, (app::Vector2 point))
    IL2CPP_REGISTER_METHOD(0x00C7F100, void, OnActivate, (app::ProtectiveLightRadial * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7F370, void, OnDeactivate, (app::ProtectiveLightRadial * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7F4E0, bool, ContainsPoint, (app::ProtectiveLightRadial * this_ptr, app::Vector2 point))
    IL2CPP_REGISTER_METHOD(0x00C7F6E0, void, SetEffectScale, (app::ProtectiveLightRadial * this_ptr, float radius))
    IL2CPP_REGISTER_METHOD(0x00C7F880, void, ctor, (app::ProtectiveLightRadial * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7F940, void, cctor, ())
} // namespace app::classes::ProtectiveLightRadial
