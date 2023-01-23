#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AsyncLocal_1_System_Globalization_CultureInfo_.h>
#include <Modloader/app/structs/Action_1_System_Threading_AsyncLocalValueChangedArgs_1_.h>
#include <Modloader/app/structs/CultureInfo.h>

namespace app::classes::System::Threading::AsyncLocal_1_System_Globalization_CultureInfo_ {
    IL2CPP_REGISTER_METHOD(0x019D6B90, void, ctor, (app::AsyncLocal_1_System_Globalization_CultureInfo_ * this_ptr, app::Action_1_System_Threading_AsyncLocalValueChangedArgs_1_* value_changed_handler))
    IL2CPP_REGISTER_METHODINFO(0x0476E908, AsyncLocal_1_System_Globalization_CultureInfo___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027751A0, void, set_Value, (app::AsyncLocal_1_System_Globalization_CultureInfo_ * this_ptr, app::CultureInfo* value))
    IL2CPP_REGISTER_METHODINFO(0x047995D8, AsyncLocal_1_System_Globalization_CultureInfo__set_Value__MethodInfo)
} // namespace app::classes::System::Threading::AsyncLocal_1_System_Globalization_CultureInfo_
