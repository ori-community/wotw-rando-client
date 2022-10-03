#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TriggerWithCondition {
    IL2CPP_REGISTER_METHOD(0x00B143B0, void, Awake, (app::TriggerWithCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B14450, void, OnDestroy, (app::TriggerWithCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B144F0, void, FixedUpdate, (app::TriggerWithCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_IsSuspended, (app::TriggerWithCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C15D0, void, set_IsSuspended, (app::TriggerWithCondition * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0057AAC0, app::SuspendableMask__Enum, get_Mask, (app::TriggerWithCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B14570, void, set_Mask, (app::TriggerWithCondition * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0057AB80, void, ctor, (app::TriggerWithCondition * this_ptr))
} // namespace app::classes::TriggerWithCondition
