#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::PositionInBoxColliderCondition {
    IL2CPP_REGISTER_METHOD(0x00CBAB10, app::String *, get_Info, (app::PositionInBoxColliderCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBAC10, bool, IsPositionInside, (app::PositionInBoxColliderCondition * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00CBAC40, bool, PointInOABB, (app::PositionInBoxColliderCondition * this_ptr, app::Vector3 point, app::BoxCollider * box))
    IL2CPP_REGISTER_METHOD(0x00CBAFE0, bool, OnCheck, (app::PositionInBoxColliderCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00CB75E0, void, ctor, (app::PositionInBoxColliderCondition * this_ptr))
}
