#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::OriPositionPrediction {
    IL2CPP_REGISTER_METHOD(0x0043EAE0, void, ctor, (app::OriPositionPrediction * this_ptr, app::Transform* owner_transform))
    IL2CPP_REGISTER_METHOD(0x0043EC50, bool, PredictOriPosition, (app::OriPositionPrediction * this_ptr, app::Vector3* prediction))
    IL2CPP_REGISTER_METHOD(0x0043F600, bool, PredictOriDoubleJumpGroundPosition, (app::OriPositionPrediction * this_ptr, app::Vector3* ground_position))
    IL2CPP_REGISTER_METHOD(0x0043FC60, bool, PredictOriGroundPosition, (app::OriPositionPrediction * this_ptr, app::Vector3* prediction))
} // namespace app::classes::OriPositionPrediction
