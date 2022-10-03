#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MistyWoodsKuroGameplayHideZone {
    IL2CPP_REGISTER_METHOD(0x0132A7D0, bool, PositionInside, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0132AA40, void, Start, (app::MistyWoodsKuroGameplayHideZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0132AA40, void, FixedUpdate, (app::MistyWoodsKuroGameplayHideZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0132ACC0, void, OnEnable, (app::MistyWoodsKuroGameplayHideZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0132AD80, void, OnDisable, (app::MistyWoodsKuroGameplayHideZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0132AE40, void, OnDrawGizmos, (app::MistyWoodsKuroGameplayHideZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A3140, void, Serialize, (app::MistyWoodsKuroGameplayHideZone * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x005A4CC0, void, ctor, (app::MistyWoodsKuroGameplayHideZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0132AF40, void, cctor, ())
} // namespace app::classes::MistyWoodsKuroGameplayHideZone
