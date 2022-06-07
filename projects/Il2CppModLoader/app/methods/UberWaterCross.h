#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberWaterCross {
    IL2CPP_REGISTER_METHOD(0x0129DEA0, void, OnEnable, (app::UberWaterCross * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0129DFE0, void, OnDisable, (app::UberWaterCross * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0129E0A0, void, QueueGrabPass, (app::UberWaterCross * this_ptr, app::UberPostProcess * uber_post_process))
    IL2CPP_REGISTER_METHOD(0x0129E220, void, ctor, (app::UberWaterCross * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0129E230, void, cctor, ())
}
