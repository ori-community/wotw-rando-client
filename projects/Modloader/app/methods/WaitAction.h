#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::WaitAction {
    IL2CPP_REGISTER_METHOD(0x008C4680, void, Awake, (app::WaitAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C4740, void, OnDestroy, (app::WaitAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C4800, void, Perform, (app::WaitAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008C48F0, app::String*, GetNiceName, (app::WaitAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (app::WaitAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C5360, bool, get_OtherStuff, (app::WaitAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C5480, bool, get_IsPerforming, (app::WaitAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlocking, (app::WaitAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C54A0, void, OnUpdate, (app::WaitAction * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsSuspended, (app::WaitAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_IsSuspended, (app::WaitAction * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00608710, app::SuspendableMask__Enum, get_Mask, (app::WaitAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00608720, void, set_Mask, (app::WaitAction * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::UpdateType__Enum, get_UpdateType, (app::WaitAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C5500, void, ctor, (app::WaitAction * this_ptr))
} // namespace app::classes::WaitAction
