#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/SuspendWhenOtherOutOfFrustrum.h>
#include <Modloader/app/structs/Bounds.h>

namespace app::classes::SuspendWhenOtherOutOfFrustrum {
    IL2CPP_REGISTER_METHOD(0x00674220, app::Transform*, get_CachedTransform, (app::SuspendWhenOtherOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00674300, app::Bounds, get_Bounds, (app::SuspendWhenOtherOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00674590, void, ctor, (app::SuspendWhenOtherOutOfFrustrum * this_ptr))
} // namespace app::classes::SuspendWhenOtherOutOfFrustrum
