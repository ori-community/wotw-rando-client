#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/StartCutsceneMusicPlayerAction.h>

namespace app::classes::StartCutsceneMusicPlayerAction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Perform, app::StartCutsceneMusicPlayerAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::StartCutsceneMusicPlayerAction* this_ptr)
} // namespace app::classes::StartCutsceneMusicPlayerAction
