#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneMetaData_WorldMapIcon.h>
#include <Modloader/app/structs/VisibleOnWorldMap.h>

namespace app::classes::SceneMetaData_WorldMapIcon {
    IL2CPP_REGISTER_METHOD(0x00BB0840, void, ctor, app::SceneMetaData_WorldMapIcon* this_ptr, app::VisibleOnWorldMap* visible_on_world_map)
}
