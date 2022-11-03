#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RotationTrackingChain_ChainEntry {
    IL2CPP_REGISTER_METHOD(0x01371930, void, Update, (app::RotationTrackingChain_ChainEntry * this_ptr, float delta_time, app::Vector3 target))
    IL2CPP_REGISTER_METHOD(0x01371E80, float, HandleAngleLimit, (app::RotationTrackingChain_ChainEntry * this_ptr, float angle, float limit))
    IL2CPP_REGISTER_METHOD(0x01371F60, void, ctor, (app::RotationTrackingChain_ChainEntry * this_ptr))
} // namespace app::classes::RotationTrackingChain_ChainEntry
