#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ScenesManagerHelper {
    IL2CPP_REGISTER_METHOD(0x010648E0, bool, LinecastIgnoringSand, (app::Vector3 p1, app::Vector3 p2, app::RaycastHit * hit_info, app::LayerMask raycast_mask))
    IL2CPP_REGISTER_METHOD(0x01064C80, app::Vector2, GetExtrapolatedPosition, (app::Vector2 current_position, app::Vector2 extrapolated_position, app::Vector2 speed, float speed_multiplier, float max_prediction_distance, app::LayerMask raycast_mask, app::ScenesManagerContext * context, app::Color debug_color))
    IL2CPP_REGISTER_METHOD(0x01065480, void, cctor, ())
}
