#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/SceneUberStateCondition.h>
#include <Modloader/app/structs/SceneUberStateCondition_PositionSource__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SceneUberStateCondition {
    IL2CPP_REGISTER_METHOD(0x00BC0750, app::MoonGuid*, get_MoonGuid, (app::SceneUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BC0950, app::SceneMetaData*, get_SceneMetaData, (app::SceneUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BC0A10, void, set_SceneMetaData, (app::SceneUberStateCondition * this_ptr, app::SceneMetaData* value))
    IL2CPP_REGISTER_METHOD(0x00BC0C70, app::SceneMetaData*, CurrentMetaData, (app::SceneUberStateCondition * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00BC0D30, bool, get_IsInside, (app::SceneUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BC0DE0, app::SceneUberStateCondition_PositionSource__Enum, get_Source, (app::SceneUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BC0E90, void, ctor, (app::SceneUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BC12F0, bool, Validate, (app::SceneUberStateCondition * this_ptr))
} // namespace app::classes::SceneUberStateCondition
