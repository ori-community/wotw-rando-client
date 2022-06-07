#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PetrifiedOwlBossOffLimitsBehaviour {
    IL2CPP_REGISTER_METHOD(0x0177A4A0, void, CopyData, (app::PetrifiedOwlBossOffLimitsBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour * other))
    IL2CPP_REGISTER_METHOD(0x017640A0, void, InitializeCancellableController, (app::PetrifiedOwlBossOffLimitsBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0177A580, void, OnEnter, (app::PetrifiedOwlBossOffLimitsBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x017644B0, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossOffLimitsBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0177A8F0, void, OnExit, (app::PetrifiedOwlBossOffLimitsBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0177ABF0, void, OnAnticipationPlayEvent, (app::PetrifiedOwlBossOffLimitsBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04791E90, PetrifiedOwlBossOffLimitsBehaviour_OnAnticipationPlayEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0177AD40, void, OnArenaOffLimitsVFXPlayEvent, (app::PetrifiedOwlBossOffLimitsBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474AA58, PetrifiedOwlBossOffLimitsBehaviour_OnArenaOffLimitsVFXPlayEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017657C0, void, ctor, (app::PetrifiedOwlBossOffLimitsBehaviour * this_ptr))
}
