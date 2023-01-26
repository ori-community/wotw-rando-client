#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_fsm_IState_List_1_fsm_Transition_.h>
#include <Modloader/app/structs/IState_2.h>
#include <Modloader/app/structs/List_1_fsm_Transition_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_fsm_IState_List_1_fsm_Transition__ {
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_fsm_IState_List_1_fsm_Transition_ * this_ptr, app::IState_2* key, app::List_1_fsm_Transition_** value))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_fsm_IState_List_1_fsm_Transition_ * this_ptr, app::IState_2* key, app::List_1_fsm_Transition_* value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_fsm_IState_List_1_fsm_Transition_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_fsm_IState_List_1_fsm_Transition__
