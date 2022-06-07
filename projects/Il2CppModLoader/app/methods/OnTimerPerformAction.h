#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::OnTimerPerformAction {
    IL2CPP_REGISTER_METHOD(0x006142D0, bool, get_IsSuspended, (app::OnTimerPerformAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006142E0, void, set_IsSuspended, (app::OnTimerPerformAction * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x004C6660, app::SuspendableMask__Enum, get_Mask, (app::OnTimerPerformAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006142F0, void, set_Mask, (app::OnTimerPerformAction * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x006143A0, void, Awake, (app::OnTimerPerformAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00614440, void, Start, (app::OnTimerPerformAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00614450, void, OnDestroy, (app::OnTimerPerformAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006144F0, void, FixedUpdate, (app::OnTimerPerformAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006146C0, void, Serialize, (app::OnTimerPerformAction * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x006146F0, void, ctor, (app::OnTimerPerformAction * this_ptr))
}
