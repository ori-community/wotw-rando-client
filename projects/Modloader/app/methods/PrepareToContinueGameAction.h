#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PrepareToContinueGameAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::PrepareToContinueGameAction {
    IL2CPP_REGISTER_METHOD(0x00C6F550, void, Perform, (app::PrepareToContinueGameAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::PrepareToContinueGameAction * this_ptr))
} // namespace app::classes::PrepareToContinueGameAction
