#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RaceSkipAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Race::RaceSkipAction {
    IL2CPP_REGISTER_METHOD(0x00C49810, void, Perform, (app::RaceSkipAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::RaceSkipAction * this_ptr))
} // namespace app::classes::Moon::Race::RaceSkipAction
