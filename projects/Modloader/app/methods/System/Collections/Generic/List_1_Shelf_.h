#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_Shelf_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Shelf_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04763DF8, List_1_Shelf__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Shelf*, get_Item, (app::List_1_Shelf_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0475C700, List_1_Shelf__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0BE0, int32_t, IndexOf, (app::List_1_Shelf_ * this_ptr, app::Shelf* item))
    IL2CPP_REGISTER_METHODINFO(0x04744BC8, List_1_Shelf__IndexOf__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Shelf_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473F780, List_1_Shelf___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Shelf_
