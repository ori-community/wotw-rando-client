#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/LoadFirstBuildSceneAction.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::LoadFirstBuildSceneAction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, app::LoadFirstBuildSceneAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FB3E70, void, Perform, app::LoadFirstBuildSceneAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00FB4020, app::String*, GetNiceName, app::LoadFirstBuildSceneAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FB4110, void, ctor, app::LoadFirstBuildSceneAction* this_ptr)
} // namespace app::classes::LoadFirstBuildSceneAction
