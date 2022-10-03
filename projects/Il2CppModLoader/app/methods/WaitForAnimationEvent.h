#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::WaitForAnimationEvent {
    IL2CPP_REGISTER_METHOD(0x008C5AC0, void, Start, (app::WaitForAnimationEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C5C30, void, OnDestroy, (app::WaitForAnimationEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C5DA0, bool, get_IsPerforming, (app::WaitForAnimationEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlocking, (app::WaitForAnimationEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C5DB0, bool, get_IsSuspended, (app::WaitForAnimationEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C5DC0, void, set_IsSuspended, (app::WaitForAnimationEvent * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FDCE0, app::SuspendableMask__Enum, get_Mask, (app::WaitForAnimationEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C5DD0, void, set_Mask, (app::WaitForAnimationEvent * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Perform, (app::WaitForAnimationEvent * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (app::WaitForAnimationEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C5DE0, void, OnAnimationEvent, (app::WaitForAnimationEvent * this_ptr, app::String* received_event_id))
    IL2CPP_REGISTER_METHODINFO(0x047639F8, WaitForAnimationEvent_OnAnimationEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008009A0, bool, ShouldPlayAnimation, (app::WaitForAnimationEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C5E20, void, ctor, (app::WaitForAnimationEvent * this_ptr))
} // namespace app::classes::WaitForAnimationEvent
