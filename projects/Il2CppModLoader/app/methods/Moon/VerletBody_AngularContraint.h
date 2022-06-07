#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::VerletBody_AngularContraint {
    IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_MaxAngle, (app::VerletBody_AngularContraint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A64050, void, set_MaxAngle, (app::VerletBody_AngularContraint * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0126FF10, void, ctor, (app::VerletBody_AngularContraint * this_ptr, app::VerletBody_Link * link0, app::VerletBody_Link * link1, float max_angle))
    IL2CPP_REGISTER_METHOD(0x02126400, void, Update, (app::VerletBody_AngularContraint * this_ptr, float dt))
}
