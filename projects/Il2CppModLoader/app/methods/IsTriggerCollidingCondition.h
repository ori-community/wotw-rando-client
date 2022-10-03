#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::IsTriggerCollidingCondition {
    IL2CPP_REGISTER_METHOD(0x00647DD0, void, Start, (app::IsTriggerCollidingCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00647DE0, void, Update, (app::IsTriggerCollidingCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00647DF0, void, UpdateState, (app::IsTriggerCollidingCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, Validate, (app::IsTriggerCollidingCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00648000, void, OnCollisionEnter, (app::IsTriggerCollidingCondition * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00648190, void, OnCollisionExit, (app::IsTriggerCollidingCondition * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00648320, void, OnTriggerEnter, (app::IsTriggerCollidingCondition * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x006483F0, void, OnTriggerExit, (app::IsTriggerCollidingCondition * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x006484C0, void, ProcessEnter, (app::IsTriggerCollidingCondition * this_ptr, app::GameObject* game_object, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00648700, void, ProcessExit, (app::IsTriggerCollidingCondition * this_ptr, app::GameObject* game_object, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x006487E0, void, ctor, (app::IsTriggerCollidingCondition * this_ptr))
} // namespace app::classes::IsTriggerCollidingCondition
