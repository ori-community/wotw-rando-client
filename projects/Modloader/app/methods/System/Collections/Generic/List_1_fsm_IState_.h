#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_fsm_IState_.h>
#include <Modloader/app/structs/IEnumerable_1_fsm_IState_.h>
#include <Modloader/app/structs/IState_2.h>
#include <Modloader/app/structs/List_1_T_Enumerator_fsm_IState_.h>
#include <Modloader/app/structs/Predicate_1_fsm_IState_.h>

namespace app::classes::System::Collections::Generic::List_1_fsm_IState_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_fsm_IState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_fsm_IState_ * this_ptr, app::IEnumerable_1_fsm_IState_* collection))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_fsm_IState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, (app::List_1_fsm_IState_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_fsm_IState_, GetEnumerator, (app::List_1_fsm_IState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_fsm_IState_ * this_ptr, app::IState_2* item))
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex, (app::List_1_fsm_IState_ * this_ptr, app::Predicate_1_fsm_IState_* match))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::IState_2*, get_Item, (app::List_1_fsm_IState_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_fsm_IState_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_fsm_IState_
