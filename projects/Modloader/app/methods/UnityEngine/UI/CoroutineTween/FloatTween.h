#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FloatTween__Boxed.h>
#include <Modloader/app/structs/UnityAction_1_System_Single_.h>

namespace app::classes::UnityEngine::UI::CoroutineTween::FloatTween {
    IL2CPP_REGISTER_METHOD(0x001D9B90, float, get_startValue, app::FloatTween__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00115B30, void, set_startValue, app::FloatTween__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x001D9BA0, float, get_targetValue, app::FloatTween__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00115B40, void, set_targetValue, app::FloatTween__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x001D9BB0, float, get_duration, app::FloatTween__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00115B50, void, set_duration, app::FloatTween__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x001D9BC0, bool, get_ignoreTimeScale, app::FloatTween__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001D9BD0, void, set_ignoreTimeScale, app::FloatTween__Boxed* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x001D9BE0, void, TweenValue, app::FloatTween__Boxed* this_ptr, float float_percentage)
    IL2CPP_REGISTER_METHOD(0x001D9BF0, void, AddOnChangedCallback, app::FloatTween__Boxed* this_ptr, app::UnityAction_1_System_Single_* callback)
    IL2CPP_REGISTER_METHOD(0x001D9BC0, bool, GetIgnoreTimescale, app::FloatTween__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001D9BB0, float, GetDuration, app::FloatTween__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001D9B60, bool, ValidTarget, app::FloatTween__Boxed* this_ptr)
} // namespace app::classes::UnityEngine::UI::CoroutineTween::FloatTween
