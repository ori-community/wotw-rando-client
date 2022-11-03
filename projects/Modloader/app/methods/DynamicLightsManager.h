#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DynamicLightsManager {
    IL2CPP_REGISTER_METHOD(0x00BEC850, app::SceneRoot*, SceneRootFromPosition, (app::DynamicLightsManager * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00BEC950, void, OnRenderObject, (app::DynamicLightsManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DynamicLightsManager * this_ptr))
} // namespace app::classes::DynamicLightsManager
