#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PerformBackOutAction {
    IL2CPP_REGISTER_METHOD(0x0044C0D0, void, ClearAbandonChallangeCondition, ())
    IL2CPP_REGISTER_METHOD(0x0044C160, bool, get_IsAbandonChallangeActive, ())
    IL2CPP_REGISTER_METHOD(0x0044C490, void, ActivateAbandonChallange, (app::ConditionUberState * abandon_challange_condition))
    IL2CPP_REGISTER_METHOD(0x0044C530, void, Perform, (app::PerformBackOutAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C690, app::IEnumerator*, AbandonChallange, (app::PerformBackOutAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C7D0, app::String*, GetNiceName, (app::PerformBackOutAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::PerformBackOutAction * this_ptr))
} // namespace app::classes::PerformBackOutAction
