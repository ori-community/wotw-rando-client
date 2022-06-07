#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TransformProvider {
    IL2CPP_REGISTER_METHOD(0x031189D0, app::Transform *, GetTransform, (app::TransformProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TransformProvider * this_ptr))
}
