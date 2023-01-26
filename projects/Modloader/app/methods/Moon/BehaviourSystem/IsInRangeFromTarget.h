#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IsInRangeFromTarget.h>

namespace app::classes::Moon::BehaviourSystem::IsInRangeFromTarget {
    IL2CPP_REGISTER_METHOD(0x00CB98E0, app::String*, get_Info, (app::IsInRangeFromTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB9DC0, bool, OnCheck, (app::IsInRangeFromTarget * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CB9FA0, void, OnDrawGizmosSelected, (app::IsInRangeFromTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB75E0, void, ctor, (app::IsInRangeFromTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBA1A0, app::String*, _get_Info_b__1_0, (app::IsInRangeFromTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBA230, app::String*, _get_Info_b__1_1, (app::IsInRangeFromTarget * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::IsInRangeFromTarget
