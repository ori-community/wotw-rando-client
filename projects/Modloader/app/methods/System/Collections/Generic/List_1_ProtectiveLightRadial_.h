#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_ProtectiveLightRadial_.h>
#include <Modloader/app/structs/ProtectiveLightRadial.h>

namespace app::classes::System::Collections::Generic::List_1_ProtectiveLightRadial_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_ProtectiveLightRadial_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04798070, List_1_ProtectiveLightRadial__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_ProtectiveLightRadial_ * this_ptr, app::ProtectiveLightRadial* item))
    IL2CPP_REGISTER_METHODINFO(0x04702698, List_1_ProtectiveLightRadial__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_ProtectiveLightRadial_ * this_ptr, app::ProtectiveLightRadial* item))
    IL2CPP_REGISTER_METHODINFO(0x0472B840, List_1_ProtectiveLightRadial__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_ProtectiveLightRadial_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470C9D0, List_1_ProtectiveLightRadial__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::ProtectiveLightRadial*, get_Item, (app::List_1_ProtectiveLightRadial_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04789F90, List_1_ProtectiveLightRadial__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_ProtectiveLightRadial_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04711290, List_1_ProtectiveLightRadial___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_ProtectiveLightRadial_ * this_ptr, app::ProtectiveLightRadial* item))
    IL2CPP_REGISTER_METHODINFO(0x047028C0, List_1_ProtectiveLightRadial__Contains__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_ProtectiveLightRadial_
