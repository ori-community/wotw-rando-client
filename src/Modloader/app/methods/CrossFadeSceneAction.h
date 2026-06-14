#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CrossFadeSceneAction.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::CrossFadeSceneAction {
    IL2CPP_REGISTER_METHOD(0x00DB9450, void, Perform, app::CrossFadeSceneAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00DB9550, app::String*, GetNiceName, app::CrossFadeSceneAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::CrossFadeSceneAction* this_ptr)
} // namespace app::classes::CrossFadeSceneAction
