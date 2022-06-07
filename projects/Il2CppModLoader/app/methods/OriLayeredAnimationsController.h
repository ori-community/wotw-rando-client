#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::OriLayeredAnimationsController {
    IL2CPP_REGISTER_METHOD(0x0043DA30, app::MoonAnimator *, get_OriAnimator, (app::OriLayeredAnimationsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043DB30, app::List_1_ICondition_ *, get_ResolvedConditions, (app::OriLayeredAnimationsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043DD50, void, OnEnable, (app::OriLayeredAnimationsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043DF80, void, OnDisable, (app::OriLayeredAnimationsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043DFA0, void, LateUpdate, (app::OriLayeredAnimationsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043E350, void, OnMatchAnimationTrigered, (app::OriLayeredAnimationsController * this_ptr, app::MoonAnimation * matched_animation, app::ActiveAnimationHandle source_active_animation, int32_t priority, app::Func_1_Boolean_ * source_continue_condition))
    IL2CPP_REGISTER_METHODINFO(0x04764218, OriLayeredAnimationsController_OnMatchAnimationTrigered__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0043E680, bool, ShouldSync, (app::OriLayeredAnimationsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::OriLayeredAnimationsController * this_ptr))
}
