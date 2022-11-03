#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Race::RaceStartAction {
    IL2CPP_REGISTER_METHOD(0x00C498E0, void, Perform, (app::RaceStartAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::RaceStartAction * this_ptr))
} // namespace app::classes::Moon::Race::RaceStartAction
