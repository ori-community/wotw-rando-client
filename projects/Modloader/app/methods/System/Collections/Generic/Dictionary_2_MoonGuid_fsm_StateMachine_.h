#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_MoonGuid_fsm_StateMachine_.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/StateMachine_2.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_MoonGuid_fsm_StateMachine_ {
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_MoonGuid_fsm_StateMachine_ * this_ptr, app::MoonGuid* key, app::StateMachine_2* value))
    IL2CPP_REGISTER_METHODINFO(0x04734978, Dictionary_2_MoonGuid_fsm_StateMachine__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_MoonGuid_fsm_StateMachine_ * this_ptr, app::MoonGuid* key))
    IL2CPP_REGISTER_METHODINFO(0x0472D6D0, Dictionary_2_MoonGuid_fsm_StateMachine__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_MoonGuid_fsm_StateMachine_ * this_ptr, app::MoonGuid* key, app::StateMachine_2** value))
    IL2CPP_REGISTER_METHODINFO(0x04737858, Dictionary_2_MoonGuid_fsm_StateMachine__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_MoonGuid_fsm_StateMachine_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047126F8, Dictionary_2_MoonGuid_fsm_StateMachine___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_MoonGuid_fsm_StateMachine_
