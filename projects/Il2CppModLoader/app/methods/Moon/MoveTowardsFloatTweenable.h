#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::MoveTowardsFloatTweenable {
    IL2CPP_REGISTER_METHOD(0x01BAB1E0, float, Update, (app::MoveTowardsFloatTweenable * this_ptr, float current_value, float start_value, float end_value, float speed))
    IL2CPP_REGISTER_METHOD(0x01BAB2C0, bool, HasFinished, (app::MoveTowardsFloatTweenable * this_ptr, float current_value, float start_value, float end_value, float speed))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoveTowardsFloatTweenable * this_ptr))
}
