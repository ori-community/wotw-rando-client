#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::ScalableAnimationPlayer_Event {
    IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_SimulatedTime, (app::ScalableAnimationPlayer_Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A64050, void, set_SimulatedTime, (app::ScalableAnimationPlayer_Event * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x007EC400, bool, get_IsSent, (app::ScalableAnimationPlayer_Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC410, void, set_IsSent, (app::ScalableAnimationPlayer_Event * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_EventId, (app::ScalableAnimationPlayer_Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStatic, (app::ScalableAnimationPlayer_Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_StaticTime, (app::ScalableAnimationPlayer_Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Name, (app::ScalableAnimationPlayer_Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3DD50, float, get_VolatilePreviewTime, (app::ScalableAnimationPlayer_Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3DD60, void, set_VolatilePreviewTime, (app::ScalableAnimationPlayer_Event * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsConstrainable, (app::ScalableAnimationPlayer_Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsDeletable, (app::ScalableAnimationPlayer_Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanBeDragged, (app::ScalableAnimationPlayer_Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_EventNormalizedTime, (app::ScalableAnimationPlayer_Event * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C87C0, void, set_EventNormalizedTime, (app::ScalableAnimationPlayer_Event * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ScalableAnimationPlayer_Event * this_ptr))
} // namespace app::classes::Moon::ScalableAnimationPlayer_Event
