#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoadGameAction.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MessageProvider.h>

namespace app::classes::LoadGameAction {
    IL2CPP_REGISTER_METHOD(0x00FB44F0, void, Perform, (app::LoadGameAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FB4500, void, LoadGame, (bool is_bckup_load, app::MessageProvider* failed_to_load_message_provider))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::LoadGameAction * this_ptr))
} // namespace app::classes::LoadGameAction
