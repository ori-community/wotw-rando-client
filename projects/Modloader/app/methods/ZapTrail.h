#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ZapTrail.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::ZapTrail {
    IL2CPP_REGISTER_METHOD(0x01C603B0, void, Zap, (app::ZapTrail * this_ptr, app::Transform* start_position, app::Transform* end_position))
    IL2CPP_REGISTER_METHOD(0x01C60530, void, FixedUpdate, (app::ZapTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0113FD00, void, ctor, (app::ZapTrail * this_ptr))
} // namespace app::classes::ZapTrail
