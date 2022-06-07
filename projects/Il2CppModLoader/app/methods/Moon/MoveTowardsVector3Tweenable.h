#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::MoveTowardsVector3Tweenable {
    IL2CPP_REGISTER_METHOD(0x01BAB570, app::Vector3, Update, (app::MoveTowardsVector3Tweenable * this_ptr, app::Vector3 current_value, app::Vector3 start_value, app::Vector3 end_value, float speed))
    IL2CPP_REGISTER_METHOD(0x01BAB780, bool, HasFinished, (app::MoveTowardsVector3Tweenable * this_ptr, app::Vector3 current_value, app::Vector3 start_value, app::Vector3 end_value, float speed))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoveTowardsVector3Tweenable * this_ptr))
}
