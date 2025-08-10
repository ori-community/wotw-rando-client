#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_MoonGuid_fsm_StateMachine_.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/StateMachine_2.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_MoonGuid_fsm_StateMachine_ {
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, app::Dictionary_2_MoonGuid_fsm_StateMachine_* this_ptr, app::MoonGuid* key, app::StateMachine_2* value)
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, app::Dictionary_2_MoonGuid_fsm_StateMachine_* this_ptr, app::MoonGuid* key)
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_MoonGuid_fsm_StateMachine_* this_ptr,
        app::MoonGuid* key,
        app::StateMachine_2** value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_MoonGuid_fsm_StateMachine_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_MoonGuid_fsm_StateMachine_
