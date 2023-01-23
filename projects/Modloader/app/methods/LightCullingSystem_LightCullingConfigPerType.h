#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LightCullingSystem_LightCullingConfigPerType__Boxed.h>
#include <Modloader/app/structs/LightCullingSystem_LightCullingGroupId__Enum.h>

namespace app::classes::LightCullingSystem_LightCullingConfigPerType {
    IL2CPP_REGISTER_METHOD(0x00124930, void, ctor, (app::LightCullingSystem_LightCullingConfigPerType__Boxed * this_ptr, app::LightCullingSystem_LightCullingGroupId__Enum id, bool enabled, int32_t max_amount))
}
