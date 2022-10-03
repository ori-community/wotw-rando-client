#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SandWormReturnToWaterBehaviour {
    IL2CPP_REGISTER_METHOD(0x00C22AF0, void, OnEntityInitialized, (app::SandWormReturnToWaterBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C22C10, bool, DoRaycastsForNewTargetPosition, (app::SandWormReturnToWaterBehaviour * this_ptr, app::Vector2__Array* directions_to_check, float target_position_depth))
    IL2CPP_REGISTER_METHOD(0x00C231A0, void, OnEnter, (app::SandWormReturnToWaterBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00C23600, bool, TryToFindNewTarget, (app::SandWormReturnToWaterBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C23E30, app::BehaviourStatus__Enum, OnExecute, (app::SandWormReturnToWaterBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::SandWormReturnToWaterBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00C24430, void, Kill, (app::SandWormReturnToWaterBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C24610, bool, IsFullyInWater, (app::SandWormReturnToWaterBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C24850, bool, IsHeadTopInWater, (app::SandWormReturnToWaterBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C249A0, bool, IsFullOutsideWater, (app::SandWormReturnToWaterBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C24CC0, void, ctor, (app::SandWormReturnToWaterBehaviour * this_ptr))
} // namespace app::classes::SandWormReturnToWaterBehaviour
