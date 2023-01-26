#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_ActionMethod_.h>
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/Comparison_1_ActionMethod_.h>

namespace app::classes::System::Collections::Generic::List_1_ActionMethod_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_ActionMethod_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_ActionMethod_ * this_ptr, app::ActionMethod* item))
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (app::List_1_ActionMethod_ * this_ptr, app::Comparison_1_ActionMethod_* comparison))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_ActionMethod_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::ActionMethod*, get_Item, (app::List_1_ActionMethod_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_ActionMethod_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_ActionMethod_
