#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SimpleBoolToggleProfilingSetting.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::SimpleBoolToggleProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3FCE0, void, Enable, (app::SimpleBoolToggleProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3FD00, void, Disable, (app::SimpleBoolToggleProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SimpleBoolToggleProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::SimpleBoolToggleProfilingSetting
