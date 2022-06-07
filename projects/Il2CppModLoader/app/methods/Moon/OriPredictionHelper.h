#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::OriPredictionHelper {
    IL2CPP_REGISTER_METHOD(0x0064EB90, app::Vector3, get_SmoothedWorldSpeed, (app::OriPredictionHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C31FF0, void, Update, (app::OriPredictionHelper * this_ptr, app::Vector3 default_ori_pos))
    IL2CPP_REGISTER_METHOD(0x00C320F0, void, UpdateOriWorldSpeed, (app::OriPredictionHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C32360, void, UpdateOriPredictedPosition, (app::OriPredictionHelper * this_ptr, app::Vector3 default_ori_pos))
    IL2CPP_REGISTER_METHOD(0x00B8DCD0, app::Vector3, GetOriPredictedPosition, (app::OriPredictionHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C32620, void, ctor, (app::OriPredictionHelper * this_ptr))
}
