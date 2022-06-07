#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::IsPositionInNoGoZoneCondition {
    IL2CPP_REGISTER_METHOD(0x00CBA2C0, app::String *, get_Info, (app::IsPositionInNoGoZoneCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBA360, bool, OnCheck, (app::IsPositionInNoGoZoneCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00CB75E0, void, ctor, (app::IsPositionInNoGoZoneCondition * this_ptr))
}
