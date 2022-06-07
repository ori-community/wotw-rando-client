#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Keyframe {
    IL2CPP_REGISTER_METHOD(0x001F2820, void, ctor_1, (app::Keyframe__Boxed * this_ptr, float time, float value))
    IL2CPP_REGISTER_METHOD(0x001F2840, void, ctor_2, (app::Keyframe__Boxed * this_ptr, float time, float value, float in_tangent, float out_tangent))
    IL2CPP_REGISTER_METHOD(0x001EB400, float, get_time, (app::Keyframe__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00114F30, void, set_time, (app::Keyframe__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x001EB410, float, get_value, (app::Keyframe__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001155C0, void, set_value, (app::Keyframe__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x001D9B90, float, get_inTangent, (app::Keyframe__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00115B30, void, set_inTangent, (app::Keyframe__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x001D9BA0, float, get_outTangent, (app::Keyframe__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00115B40, void, set_outTangent, (app::Keyframe__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x001F2870, float, get_inWeight, (app::Keyframe__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F2880, float, get_outWeight, (app::Keyframe__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00120160, app::WeightedMode__Enum, get_weightedMode, (app::Keyframe__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F2890, int32_t, get_tangentMode, (app::Keyframe__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00002890, void, set_tangentMode, (app::Keyframe__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x001F2890, int32_t, get_tangentModeInternal, (app::Keyframe__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00002890, void, set_tangentModeInternal, (app::Keyframe__Boxed * this_ptr, int32_t value))
}
