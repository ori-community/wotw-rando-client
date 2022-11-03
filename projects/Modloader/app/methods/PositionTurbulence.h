#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PositionTurbulence {
    IL2CPP_REGISTER_METHOD(0x00B1B670, bool, get_CanUpdateInEditor, (app::PositionTurbulence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C68D00, app::Transform*, get_MyTransform, (app::PositionTurbulence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, OnValidate, (app::PositionTurbulence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, OnEnable, (app::PositionTurbulence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C68DC0, void, LateUpdate, (app::PositionTurbulence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C690F0, void, ctor, (app::PositionTurbulence * this_ptr))
} // namespace app::classes::PositionTurbulence
