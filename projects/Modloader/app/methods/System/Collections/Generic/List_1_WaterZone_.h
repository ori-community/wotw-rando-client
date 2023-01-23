#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_T_Enumerator_WaterZone_.h>
#include <Modloader/app/structs/List_1_WaterZone_.h>
#include <Modloader/app/structs/WaterZone.h>

namespace app::classes::System::Collections::Generic::List_1_WaterZone_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_WaterZone_, GetEnumerator, (app::List_1_WaterZone_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04797A30, List_1_WaterZone__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::WaterZone*, get_Item, (app::List_1_WaterZone_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04718100, List_1_WaterZone__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_WaterZone_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470C2C0, List_1_WaterZone__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_WaterZone_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04729C80, List_1_WaterZone__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_WaterZone_ * this_ptr, app::WaterZone* item))
    IL2CPP_REGISTER_METHODINFO(0x0472C5E8, List_1_WaterZone__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_WaterZone_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047589C0, List_1_WaterZone___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_WaterZone_ * this_ptr, app::WaterZone* item))
    IL2CPP_REGISTER_METHODINFO(0x0472D458, List_1_WaterZone__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_WaterZone_ * this_ptr, app::WaterZone* item))
    IL2CPP_REGISTER_METHODINFO(0x04733A28, List_1_WaterZone__Remove__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_WaterZone_
