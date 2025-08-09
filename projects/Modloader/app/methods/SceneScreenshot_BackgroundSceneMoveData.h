#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/SceneScreenshot_BackgroundSceneMoveData.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::SceneScreenshot_BackgroundSceneMoveData {
    IL2CPP_REGISTER_METHOD(0x00BBA720, void, ctor, app::SceneScreenshot_BackgroundSceneMoveData* this_ptr, app::SceneMetaData* meta_data, app::Vector2 delta)
}
