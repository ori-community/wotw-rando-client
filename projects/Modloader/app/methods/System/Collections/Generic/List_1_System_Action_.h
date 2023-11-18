#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Action_.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action__Array.h>
#include <Modloader/app/structs/IEnumerable_1_System_Action_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Action_.h>

namespace app::classes::System::Collections::Generic::List_1_System_Action_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_System_Action_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_Action_ * this_ptr, app::Action* item))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Action*, get_Item, (app::List_1_System_Action_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_System_Action_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_System_Action_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_System_Action_ * this_ptr, app::Action* item))
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_System_Action_ * this_ptr, app::Action* item))
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::Action__Array*, ToArray, (app::List_1_System_Action_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_Action_, GetEnumerator, (app::List_1_System_Action_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_System_Action_ * this_ptr, app::IEnumerable_1_System_Action_* collection))
} // namespace app::classes::System::Collections::Generic::List_1_System_Action_
