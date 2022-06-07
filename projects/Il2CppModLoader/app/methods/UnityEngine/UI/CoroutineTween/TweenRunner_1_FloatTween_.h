#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::UI::CoroutineTween::TweenRunner_1_FloatTween_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::TweenRunner_1_FloatTween_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047402E0, TweenRunner_1_FloatTween___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, Init, (app::TweenRunner_1_FloatTween_ * this_ptr, app::MonoBehaviour * coroutine_container))
    IL2CPP_REGISTER_METHODINFO(0x04725BA0, TweenRunner_1_FloatTween__Init__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ACE4F0, void, StartTween, (app::TweenRunner_1_FloatTween_ * this_ptr, app::FloatTween info))
    IL2CPP_REGISTER_METHODINFO(0x04751178, TweenRunner_1_FloatTween__StartTween__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ACE370, app::IEnumerator *, Start, (app::FloatTween tween_info))
    IL2CPP_REGISTER_METHOD(0x02ACE330, void, StopTween, (app::TweenRunner_1_FloatTween_ * this_ptr))
}
