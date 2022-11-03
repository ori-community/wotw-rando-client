#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LoadSceneAction {
    IL2CPP_REGISTER_METHOD(0x00FB4A40, void, Perform, (app::LoadSceneAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FB4BD0, app::String*, GetNiceName, (app::LoadSceneAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::LoadSceneAction * this_ptr))
} // namespace app::classes::LoadSceneAction
