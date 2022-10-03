#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PlaySoundPhaseAction {
    IL2CPP_REGISTER_METHOD(0x0117B380, bool, get_IsPerforming, (app::PlaySoundPhaseAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (app::PlaySoundPhaseAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0117B430, void, Perform, (app::PlaySoundPhaseAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::PlaySoundPhaseAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C944C0, void, _Perform_b__7_0, (app::PlaySoundPhaseAction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04754DB8, PlaySoundPhaseAction__Perform_b__7_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C944C0, void, _Perform_b__7_1, (app::PlaySoundPhaseAction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047677A8, PlaySoundPhaseAction__Perform_b__7_1__MethodInfo)
} // namespace app::classes::PlaySoundPhaseAction
