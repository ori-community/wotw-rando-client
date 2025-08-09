#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ShowRaceFinishMessageAction.h>

namespace app::classes::ShowRaceFinishMessageAction {
    IL2CPP_REGISTER_METHOD(0x00736CF0, void, Perform, app::ShowRaceFinishMessageAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x007371F0, void, ctor, app::ShowRaceFinishMessageAction* this_ptr)
} // namespace app::classes::ShowRaceFinishMessageAction
