#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_TimedActionExecuter_.h>
#include <Modloader/app/structs/List_1_TimedActionExecuter_.h>
#include <Modloader/app/structs/TimedActionExecuter.h>

namespace app::classes::System::Collections::Generic::List_1_TimedActionExecuter_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_TimedActionExecuter_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_TimedActionExecuter_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_TimedActionExecuter_* this_ptr, app::TimedActionExecuter* item)
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, app::List_1_TimedActionExecuter_* this_ptr, app::Comparison_1_TimedActionExecuter_* comparison)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::TimedActionExecuter*, get_Item, app::List_1_TimedActionExecuter_* this_ptr, int32_t index)
} // namespace app::classes::System::Collections::Generic::List_1_TimedActionExecuter_
