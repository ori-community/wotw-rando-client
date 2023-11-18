#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneSettings.h>
#include <Modloader/app/structs/SceneSettingsComponent.h>

namespace app::classes::SceneSettings {
    IL2CPP_REGISTER_METHOD(0x00BBDCF0, void, ctor, (app::SceneSettings * this_ptr, app::SceneSettingsComponent* scene_settings))
}
