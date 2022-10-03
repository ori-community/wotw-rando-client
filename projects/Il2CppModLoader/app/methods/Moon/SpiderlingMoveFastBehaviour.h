#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::SpiderlingMoveFastBehaviour {
    IL2CPP_REGISTER_METHOD(0x007586C0, app::Vector3, get_PatrolOrigin, (app::SpiderlingMoveFastBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2D530, app::Vector3, get_TargetPosition, (app::SpiderlingMoveFastBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2E920, void, OnEntityInitialized, (app::SpiderlingMoveFastBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2E9F0, void, OnEnter, (app::SpiderlingMoveFastBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00E2EC50, app::Vector2, get_MovingDirectionRotated, (app::SpiderlingMoveFastBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2ED70, app::BehaviourStatus__Enum, OnExecute, (app::SpiderlingMoveFastBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00E2F2C0, void, OnExit, (app::SpiderlingMoveFastBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00E2F370, float, DirectionToTarget, (app::SpiderlingMoveFastBehaviour * this_ptr, app::Vector3 target_position))
    IL2CPP_REGISTER_METHOD(0x00E2F5E0, void, ctor, (app::SpiderlingMoveFastBehaviour * this_ptr))
} // namespace app::classes::Moon::SpiderlingMoveFastBehaviour
