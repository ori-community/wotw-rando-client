#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_Moon_JsonParser_.h>
#include <Modloader/app/structs/JsonParser.h>
#include <Modloader/app/structs/IComparer_1_Moon_JsonParser_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_JsonParser_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_JsonParser_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477F908, List_1_Moon_JsonParser___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_JsonParser_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047290A8, List_1_Moon_JsonParser__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::JsonParser*, get_Item, (app::List_1_Moon_JsonParser_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0477F508, List_1_Moon_JsonParser__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_Moon_JsonParser_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04782A68, List_1_Moon_JsonParser__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E380, int32_t, BinarySearch, (app::List_1_Moon_JsonParser_ * this_ptr, app::JsonParser* item, app::IComparer_1_Moon_JsonParser_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0475BDC0, List_1_Moon_JsonParser__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, (app::List_1_Moon_JsonParser_ * this_ptr, int32_t index, app::JsonParser* item))
    IL2CPP_REGISTER_METHODINFO(0x04742EA0, List_1_Moon_JsonParser__Insert__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_JsonParser_
