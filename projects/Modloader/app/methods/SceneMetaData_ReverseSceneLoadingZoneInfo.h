#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SceneMetaData_ReverseSceneLoadingZoneInfo.h>
#include <Modloader/app/structs/ReverseSceneLoadingZone.h>

namespace app::classes::SceneMetaData_ReverseSceneLoadingZoneInfo {
    IL2CPP_REGISTER_METHOD(0x00BADA70, void, ctor, (app::SceneMetaData_ReverseSceneLoadingZoneInfo * this_ptr, app::ReverseSceneLoadingZone* reverse_scene_loading_zone))
}
