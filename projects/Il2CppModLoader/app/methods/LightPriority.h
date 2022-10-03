#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LightPriority {
    IL2CPP_REGISTER_METHOD(0x0114E930, app::Dictionary_2_LightPriority_Layer_System_Int32_*, get_DarkeningErasingPriorityMap, ())
    IL2CPP_REGISTER_METHOD(0x0114ED30, app::Dictionary_2_LightPriority_Layer_System_Int32_*, get_CullingPriorityMap, ())
    IL2CPP_REGISTER_METHOD(0x0114F160, int32_t, GetDarkeningErasingPriorityForLayer, (app::LightPriority_Layer__Enum group))
    IL2CPP_REGISTER_METHOD(0x0114F200, int32_t, GetCullingPriorityForLayer, (app::LightPriority_Layer__Enum group))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LightPriority * this_ptr))
} // namespace app::classes::LightPriority
