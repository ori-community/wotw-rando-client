#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ISceneWarningSource.h>
#include <Modloader/app/structs/SceneWarningManager.h>

namespace app::classes::SceneWarningManager {
    IL2CPP_REGISTER_METHOD(0x03113CC0, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Register, app::ISceneWarningSource* source)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Unregister, app::ISceneWarningSource* source)
    IL2CPP_REGISTER_METHOD(0x03113DA0, void, RemoveNulls, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SceneWarningManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03113F20, void, cctor, )
} // namespace app::classes::SceneWarningManager
