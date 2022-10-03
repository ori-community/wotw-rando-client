#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SwarmAllowedArea {
    IL2CPP_REGISTER_METHOD(0x01812CD0, void, Start, (app::SwarmAllowedArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01812EE0, void, Update, (app::SwarmAllowedArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01812EF0, void, FollowTransform, (app::SwarmAllowedArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01813920, void, CalculateNumberOfAgents, (app::SwarmAllowedArea * this_ptr, int32_t agents_count))
    IL2CPP_REGISTER_METHOD(0x018139E0, app::List_1_UnityEngine_Transform_*, GenerateTargets, (app::SwarmAllowedArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01813F60, void, RandomizeTargetPosition, (app::SwarmAllowedArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018142B0, bool, GetNextTarget, (app::SwarmAllowedArea * this_ptr, app::Transform** target))
    IL2CPP_REGISTER_METHOD(0x00651F80, void, ResetTargetIndex, (app::SwarmAllowedArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01814380, void, EnableSpin, (app::SwarmAllowedArea * this_ptr, float spin_step))
    IL2CPP_REGISTER_METHOD(0x018143A0, void, DisableSpin, (app::SwarmAllowedArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018143B0, void, ctor, (app::SwarmAllowedArea * this_ptr))
} // namespace app::classes::SwarmAllowedArea
