#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::SphereCollider {
    IL2CPP_REGISTER_METHOD(0x030AF4E0, app::Vector3, get_center, (app::SphereCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030AF560, void, set_center, (app::SphereCollider * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x030AF5C0, float, get_radius, (app::SphereCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030AF610, void, set_radius, (app::SphereCollider * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x030AF670, void, set_moonFastResize, (app::SphereCollider * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x030AF6D0, void, get_center_Injected, (app::SphereCollider * this_ptr, app::Vector3 * ret))
    IL2CPP_REGISTER_METHOD(0x030AF730, void, set_center_Injected, (app::SphereCollider * this_ptr, app::Vector3 * value))
}
