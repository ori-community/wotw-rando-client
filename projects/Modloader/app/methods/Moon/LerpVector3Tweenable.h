#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/LerpVector3Tweenable.h>

namespace app::classes::Moon::LerpVector3Tweenable {
    IL2CPP_REGISTER_METHOD(0x01BAA680, app::Vector3, Update, (app::LerpVector3Tweenable * this_ptr, app::Vector3 start_value, app::Vector3 end_value, float normalized_input))
    IL2CPP_REGISTER_METHOD(0x01BAA670, bool, HasFinished, (app::LerpVector3Tweenable * this_ptr, app::Vector3 current_value, app::Vector3 end_value, float normalized_input))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LerpVector3Tweenable * this_ptr))
} // namespace app::classes::Moon::LerpVector3Tweenable
