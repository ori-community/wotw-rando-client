#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RaceStopAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Race::RaceStopAction {
    IL2CPP_REGISTER_METHOD(0x00C49910, void, Perform, (app::RaceStopAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::RaceStopAction * this_ptr))
} // namespace app::classes::Moon::Race::RaceStopAction
