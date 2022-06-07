#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayAnimatorAction {
    IL2CPP_REGISTER_METHOD(0x01175E40, app::LegacyAnimator__Array *, get_Animators, (app::PlayAnimatorAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01175F60, void, Update, (app::PlayAnimatorAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01175FE0, void, Perform, (app::PlayAnimatorAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x011760C0, void, Stop, (app::PlayAnimatorAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_IsPerforming, (app::PlayAnimatorAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011761E0, app::IEnumerator *, PerformActionCoroutine, (app::PlayAnimatorAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01050D20, float, get_Duration, (app::PlayAnimatorAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01176330, void, set_Duration, (app::PlayAnimatorAction * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01176340, void, ctor, (app::PlayAnimatorAction * this_ptr))
}
