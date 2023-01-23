#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_MessageBox_.h>
#include <Modloader/app/structs/MessageBox.h>

namespace app::classes::System::Collections::Generic::List_1_MessageBox_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_MessageBox_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047465C0, List_1_MessageBox___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_MessageBox_ * this_ptr, app::MessageBox* item))
    IL2CPP_REGISTER_METHODINFO(0x047309F0, List_1_MessageBox__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_MessageBox_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04761F50, List_1_MessageBox__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MessageBox*, get_Item, (app::List_1_MessageBox_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0472D258, List_1_MessageBox__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_MessageBox_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04758680, List_1_MessageBox__Clear__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_MessageBox_
