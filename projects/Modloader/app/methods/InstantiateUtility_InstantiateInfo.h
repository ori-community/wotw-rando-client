#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::InstantiateUtility_InstantiateInfo {
    IL2CPP_REGISTER_METHOD(0x00113920, void, ctor, (app::InstantiateUtility_InstantiateInfo__Boxed * this_ptr, app::Object_1* obj, app::Vector3 position, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x00113920, void, SetValues, (app::InstantiateUtility_InstantiateInfo__Boxed * this_ptr, app::Object_1* obj, app::Vector3 position, app::Quaternion rotation))
} // namespace app::classes::InstantiateUtility_InstantiateInfo
