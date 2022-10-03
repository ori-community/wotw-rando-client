#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::LayerMask {
    IL2CPP_REGISTER_METHOD(0x0252E560, int32_t, op_Implicit_1, (app::LayerMask mask))
    IL2CPP_REGISTER_METHOD(0x0252E560, app::LayerMask, op_Implicit_2, (int32_t int_val))
    IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, get_value, (app::LayerMask__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_value, (app::LayerMask__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0252E580, app::String*, LayerToName, (int32_t layer))
    IL2CPP_REGISTER_METHOD(0x0252E5D0, int32_t, NameToLayer, (app::String * layer_name))
    IL2CPP_REGISTER_METHOD(0x0252E620, int32_t, GetMask, (app::String__Array * layer_names))
    IL2CPP_REGISTER_METHODINFO(0x0476C820, LayerMask_GetMask__MethodInfo)
} // namespace app::classes::UnityEngine::LayerMask
