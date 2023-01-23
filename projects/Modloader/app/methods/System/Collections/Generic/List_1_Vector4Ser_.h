#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector4Ser.h>
#include <Modloader/app/structs/List_1_Vector4Ser_.h>

namespace app::classes::System::Collections::Generic::List_1_Vector4Ser_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Vector4Ser*, get_Item, (app::List_1_Vector4Ser_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04735130, List_1_Vector4Ser__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Vector4Ser_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477DE40, List_1_Vector4Ser__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Vector4Ser_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04782F48, List_1_Vector4Ser___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Vector4Ser_ * this_ptr, app::Vector4Ser* item))
    IL2CPP_REGISTER_METHODINFO(0x04767308, List_1_Vector4Ser__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Vector4Ser_
