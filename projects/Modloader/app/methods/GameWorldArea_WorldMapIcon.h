#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameWorldArea_WorldMapIcon.h>
#include <Modloader/app/structs/SceneMetaData_WorldMapIcon.h>

namespace app::classes::GameWorldArea_WorldMapIcon {
    IL2CPP_REGISTER_METHOD(0x0040B050, void, ctor, app::GameWorldArea_WorldMapIcon* this_ptr, app::SceneMetaData_WorldMapIcon* world_map_icon)
}
