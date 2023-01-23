#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberWaterCross.h>
#include <Modloader/app/structs/UberPostProcess.h>

namespace app::classes::UberWaterCross {
    IL2CPP_REGISTER_METHOD(0x0129DEA0, void, OnEnable, (app::UberWaterCross * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0129DFE0, void, OnDisable, (app::UberWaterCross * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0129E0A0, void, QueueGrabPass, (app::UberWaterCross * this_ptr, app::UberPostProcess* uber_post_process))
    IL2CPP_REGISTER_METHOD(0x0129E220, void, ctor, (app::UberWaterCross * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0129E230, void, cctor, ())
} // namespace app::classes::UberWaterCross
