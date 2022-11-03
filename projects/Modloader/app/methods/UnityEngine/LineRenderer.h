#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::LineRenderer {
    IL2CPP_REGISTER_METHOD(0x0252FEC0, void, SetWidth, (app::LineRenderer * this_ptr, float start, float end))
    IL2CPP_REGISTER_METHOD(0x0252FF80, void, SetVertexCount, (app::LineRenderer * this_ptr, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0252FFE0, void, set_startWidth, (app::LineRenderer * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02530040, void, set_endWidth, (app::LineRenderer * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x025300A0, void, set_widthMultiplier, (app::LineRenderer * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02530100, void, set_useWorldSpace, (app::LineRenderer * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02530160, void, set_startColor, (app::LineRenderer * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x025301C0, void, set_endColor, (app::LineRenderer * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x02530220, int32_t, get_positionCount, (app::LineRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252FF80, void, set_positionCount, (app::LineRenderer * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x02530270, void, SetPosition, (app::LineRenderer * this_ptr, int32_t index, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x025302E0, app::Vector3, GetPosition, (app::LineRenderer * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02530370, void, SetPositions, (app::LineRenderer * this_ptr, app::Vector3__Array* positions))
    IL2CPP_REGISTER_METHOD(0x025303D0, void, set_startColor_Injected, (app::LineRenderer * this_ptr, app::Color* value))
    IL2CPP_REGISTER_METHOD(0x02530430, void, set_endColor_Injected, (app::LineRenderer * this_ptr, app::Color* value))
    IL2CPP_REGISTER_METHOD(0x02530490, void, SetPosition_Injected, (app::LineRenderer * this_ptr, int32_t index, app::Vector3* position))
    IL2CPP_REGISTER_METHOD(0x02530500, void, GetPosition_Injected, (app::LineRenderer * this_ptr, int32_t index, app::Vector3* ret))
} // namespace app::classes::UnityEngine::LineRenderer
