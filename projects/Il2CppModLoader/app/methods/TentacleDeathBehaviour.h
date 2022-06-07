#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TentacleDeathBehaviour {
    IL2CPP_REGISTER_METHOD(0x00CEE830, void, OnCacheSerializedComponents, (app::TentacleDeathBehaviour * this_ptr, app::Entity * owner))
    IL2CPP_REGISTER_METHOD(0x00CEE8F0, void, OnInitializeTask, (app::TentacleDeathBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00CEEAD0, void, ModifyDeathKickbackForce, (app::TentacleDeathBehaviour * this_ptr, app::Damage * damage, float min_boost, float min_magntiude, float min_up_direction))
    IL2CPP_REGISTER_METHOD(0x00CEEDB0, void, OnEnterTask, (app::TentacleDeathBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00CEEF40, app::BehaviourStatus__Enum, OnExecuteTask, (app::TentacleDeathBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00CEEFA0, void, OnExitTask, (app::TentacleDeathBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00CEF000, void, ctor, (app::TentacleDeathBehaviour * this_ptr))
}
