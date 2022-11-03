#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RaceConfiguration {
    IL2CPP_REGISTER_METHOD(0x00E976D0, app::String*, get_RaceName, (app::RaceConfiguration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E97760, app::Vector3, get_EndPosition, (app::RaceConfiguration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E976D0, app::String*, GetRaceName, (app::RaceConfiguration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RaceConfiguration * this_ptr))
} // namespace app::classes::RaceConfiguration
