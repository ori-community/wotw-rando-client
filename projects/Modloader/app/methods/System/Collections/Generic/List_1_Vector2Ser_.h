#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector2Ser.h>
#include <Modloader/app/structs/List_1_Vector2Ser_.h>

namespace app::classes::System::Collections::Generic::List_1_Vector2Ser_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Vector2Ser*, get_Item, (app::List_1_Vector2Ser_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047277A8, List_1_Vector2Ser__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Vector2Ser_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04724360, List_1_Vector2Ser__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Vector2Ser_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474E868, List_1_Vector2Ser___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Vector2Ser_ * this_ptr, app::Vector2Ser* item))
    IL2CPP_REGISTER_METHODINFO(0x0478D390, List_1_Vector2Ser__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Vector2Ser_
