#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FloatTween.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/MonoBehaviour.h>
#include <Modloader/app/structs/TweenRunner_1_FloatTween_.h>

namespace app::classes::UnityEngine::UI::CoroutineTween::TweenRunner_1_FloatTween_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::TweenRunner_1_FloatTween_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, Init, app::TweenRunner_1_FloatTween_* this_ptr, app::MonoBehaviour* coroutine_container)
    IL2CPP_REGISTER_METHOD(0x02ACE4F0, void, StartTween, app::TweenRunner_1_FloatTween_* this_ptr, app::FloatTween info)
    IL2CPP_REGISTER_METHOD(0x02ACE370, app::IEnumerator*, Start, app::FloatTween tween_info)
    IL2CPP_REGISTER_METHOD(0x02ACE330, void, StopTween, app::TweenRunner_1_FloatTween_* this_ptr)
} // namespace app::classes::UnityEngine::UI::CoroutineTween::TweenRunner_1_FloatTween_
