#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UberStateBoolCondition {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::UberStateBoolCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0128B020, app::IUberState__Array*, get_AffectingUberStates, (app::UberStateBoolCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::UberStateBoolCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_AllTargets, (app::UberStateBoolCondition * this_ptr, app::List_1_UnityEngine_GameObject_* value))
    IL2CPP_REGISTER_METHOD(0x0128B120, void, OnEnable, (app::UberStateBoolCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0128B1C0, void, OnDisable, (app::UberStateBoolCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0128B260, bool, Validate, (app::UberStateBoolCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0128B340, void, Apply, (app::UberStateBoolCondition * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x0128B370, void, ctor, (app::UberStateBoolCondition * this_ptr))
} // namespace app::classes::UberStateBoolCondition
