#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SaveSerialize {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RegisterToSaveSceneManager, (app::SaveSerialize * this_ptr, app::SaveSceneManager* save_scene_manager))
    IL2CPP_REGISTER_METHOD(0x0091D7F0, void, ctor, (app::SaveSerialize * this_ptr))
} // namespace app::classes::SaveSerialize
