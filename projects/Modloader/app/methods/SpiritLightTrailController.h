#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpiritLightTrailController {
    IL2CPP_REGISTER_METHOD(0x00D62EB0, void, Update, (app::SpiritLightTrailController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SpiritLightTrailController * this_ptr))
} // namespace app::classes::SpiritLightTrailController
