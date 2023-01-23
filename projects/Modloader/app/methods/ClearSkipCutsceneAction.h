#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ClearSkipCutsceneAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ClearSkipCutsceneAction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Perform, (app::ClearSkipCutsceneAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ClearSkipCutsceneAction * this_ptr))
} // namespace app::classes::ClearSkipCutsceneAction
