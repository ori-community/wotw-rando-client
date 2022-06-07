#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Race::RaceStopAction {
    IL2CPP_REGISTER_METHOD(0x00C49910, void, Perform, (app::RaceStopAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::RaceStopAction * this_ptr))
}
