#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Race::RaceProximityAction {
    IL2CPP_REGISTER_METHOD(0x00C497D0, void, Perform, (app::RaceProximityAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::RaceProximityAction * this_ptr))
} // namespace app::classes::Moon::Race::RaceProximityAction
