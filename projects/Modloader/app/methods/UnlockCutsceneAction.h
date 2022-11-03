#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnlockCutsceneAction {
    IL2CPP_REGISTER_METHOD(0x013AC0E0, void, Perform, (app::UnlockCutsceneAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x013AC310, app::String*, GetNiceName, (app::UnlockCutsceneAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::UnlockCutsceneAction * this_ptr))
} // namespace app::classes::UnlockCutsceneAction
