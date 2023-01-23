#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_PickupBase_.h>
#include <Modloader/app/structs/PickupBase.h>

namespace app::classes::System::Collections::Generic::List_1_PickupBase_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_PickupBase_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473B538, List_1_PickupBase__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_PickupBase_ * this_ptr, app::PickupBase* item))
    IL2CPP_REGISTER_METHODINFO(0x04714C70, List_1_PickupBase__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_PickupBase_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470EB20, List_1_PickupBase__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, (app::List_1_PickupBase_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473E8C0, List_1_PickupBase__get_Capacity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0BE0, int32_t, IndexOf, (app::List_1_PickupBase_ * this_ptr, app::PickupBase* item))
    IL2CPP_REGISTER_METHODINFO(0x0473A9F0, List_1_PickupBase__IndexOf__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_PickupBase_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04702AA8, List_1_PickupBase__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::PickupBase*, get_Item, (app::List_1_PickupBase_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04725F78, List_1_PickupBase__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_PickupBase_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04705040, List_1_PickupBase___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_PickupBase_
