#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OptionsScreenLegendController.h>

namespace app::classes::OptionsScreenLegendController {
    IL2CPP_REGISTER_METHOD(0x00619220, void, Update, (app::OptionsScreenLegendController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::OptionsScreenLegendController * this_ptr))
} // namespace app::classes::OptionsScreenLegendController
