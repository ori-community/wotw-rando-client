#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_Moon_JsonBuilder_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_JsonBuilder_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047703C8, List_1_Moon_JsonBuilder___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_JsonBuilder_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04767670, List_1_Moon_JsonBuilder__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::JsonBuilder *, get_Item, (app::List_1_Moon_JsonBuilder_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0477C100, List_1_Moon_JsonBuilder__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_Moon_JsonBuilder_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04745118, List_1_Moon_JsonBuilder__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E380, int32_t, BinarySearch, (app::List_1_Moon_JsonBuilder_ * this_ptr, app::JsonBuilder * item, app::IComparer_1_Moon_JsonBuilder_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0477B618, List_1_Moon_JsonBuilder__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, (app::List_1_Moon_JsonBuilder_ * this_ptr, int32_t index, app::JsonBuilder * item))
    IL2CPP_REGISTER_METHODINFO(0x0471FF18, List_1_Moon_JsonBuilder__Insert__MethodInfo)
}
