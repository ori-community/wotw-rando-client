#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneMetaData_RaceInfo.h>
#include <Modloader/app/structs/RaceData.h>

namespace app::classes::SceneMetaData_RaceInfo {
    IL2CPP_REGISTER_METHOD(0x00BAD7E0, void, ctor, (app::SceneMetaData_RaceInfo * this_ptr, app::RaceData* data))
}
