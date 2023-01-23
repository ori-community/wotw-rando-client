#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Data_Index_.h>
#include <Modloader/app/structs/List_1_System_Data_Index_.h>
#include <Modloader/app/structs/Index.h>
#include <Modloader/app/structs/IEnumerable_1_System_Data_Index_.h>

namespace app::classes::System::Collections::Generic::List_1_System_Data_Index_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_Data_Index_, GetEnumerator, (app::List_1_System_Data_Index_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04765A28, List_1_System_Data_Index__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_System_Data_Index_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04799508, List_1_System_Data_Index___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_System_Data_Index_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04766CA8, List_1_System_Data_Index__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Index*, get_Item, (app::List_1_System_Data_Index_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0477B8B8, List_1_System_Data_Index__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_System_Data_Index_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475DC50, List_1_System_Data_Index__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8360, void, ctor_2, (app::List_1_System_Data_Index_ * this_ptr, app::IEnumerable_1_System_Data_Index_* collection))
    IL2CPP_REGISTER_METHODINFO(0x04762120, List_1_System_Data_Index___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_Data_Index_ * this_ptr, app::Index* item))
    IL2CPP_REGISTER_METHODINFO(0x0470CCC8, List_1_System_Data_Index__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_System_Data_Index_ * this_ptr, app::Index* item))
    IL2CPP_REGISTER_METHODINFO(0x0478C888, List_1_System_Data_Index__Remove__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_System_Data_Index_
