#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PlayerInRangeChecker.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::PlayerInRangeChecker {
    IL2CPP_REGISTER_METHOD(0x0140FEC0, bool, get_IsInside, app::PlayerInRangeChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0140FFC0, bool, IsPositionInside, app::PlayerInRangeChecker* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x01410560, bool, WillBeInside, app::PlayerInRangeChecker* this_ptr, float prediction_time)
    IL2CPP_REGISTER_METHOD(0x01410790, void, FixedUpdate, app::PlayerInRangeChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01410800, void, Start, app::PlayerInRangeChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01410890, bool, Validate, app::PlayerInRangeChecker* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::PlayerInRangeChecker* this_ptr)
} // namespace app::classes::PlayerInRangeChecker
