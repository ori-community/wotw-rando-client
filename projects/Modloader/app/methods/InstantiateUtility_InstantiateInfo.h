#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InstantiateUtility_InstantiateInfo__Boxed.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::InstantiateUtility_InstantiateInfo {
    IL2CPP_REGISTER_METHOD(0x00113920, void, ctor, (app::InstantiateUtility_InstantiateInfo__Boxed * this_ptr, app::Object_1* obj, app::Vector3 position, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x00113920, void, SetValues, (app::InstantiateUtility_InstantiateInfo__Boxed * this_ptr, app::Object_1* obj, app::Vector3 position, app::Quaternion rotation))
} // namespace app::classes::InstantiateUtility_InstantiateInfo
