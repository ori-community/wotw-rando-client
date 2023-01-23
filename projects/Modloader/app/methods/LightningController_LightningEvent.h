#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LightningController_LightningEvent__Boxed.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::LightningController_LightningEvent {
    IL2CPP_REGISTER_METHOD(0x00122F50, void, ctor, (app::LightningController_LightningEvent__Boxed * this_ptr, float lightning_time, app::MoonTimeline* lightning_timeline, app::MoonTimeline* camera_shake_timeline, app::MoonTimeline* brightness_timeline))
}
