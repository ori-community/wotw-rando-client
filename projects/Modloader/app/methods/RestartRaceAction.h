#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RestartRaceAction {
    IL2CPP_REGISTER_METHOD(0x0090B530, void, Perform, (app::RestartRaceAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::RestartRaceAction * this_ptr))
} // namespace app::classes::RestartRaceAction
