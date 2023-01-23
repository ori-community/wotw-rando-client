#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TweenRunner_1_ColorTween_.h>
#include <Modloader/app/structs/MonoBehaviour.h>
#include <Modloader/app/structs/ColorTween.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::UnityEngine::UI::CoroutineTween::TweenRunner_1_ColorTween_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::TweenRunner_1_ColorTween_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476E4C8, TweenRunner_1_ColorTween___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, Init, (app::TweenRunner_1_ColorTween_ * this_ptr, app::MonoBehaviour* coroutine_container))
    IL2CPP_REGISTER_METHODINFO(0x04784F20, TweenRunner_1_ColorTween__Init__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ACE330, void, StopTween, (app::TweenRunner_1_ColorTween_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04764B48, TweenRunner_1_ColorTween__StopTween__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ACE130, void, StartTween, (app::TweenRunner_1_ColorTween_ * this_ptr, app::ColorTween info))
    IL2CPP_REGISTER_METHODINFO(0x04719700, TweenRunner_1_ColorTween__StartTween__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ACDFA0, app::IEnumerator*, Start, (app::ColorTween tween_info))
} // namespace app::classes::UnityEngine::UI::CoroutineTween::TweenRunner_1_ColorTween_
