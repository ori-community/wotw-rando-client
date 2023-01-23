#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CancelRaceAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::CancelRaceAction {
    IL2CPP_REGISTER_METHOD(0x00B22810, void, Perform, (app::CancelRaceAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::CancelRaceAction * this_ptr))
} // namespace app::classes::CancelRaceAction
