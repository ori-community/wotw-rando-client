#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IComparer_1_Moon_JsonParser_.h>
#include <Modloader/app/structs/JsonParser.h>
#include <Modloader/app/structs/List_1_Moon_JsonParser_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_JsonParser_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Moon_JsonParser_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Moon_JsonParser_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::JsonParser*, get_Item, app::List_1_Moon_JsonParser_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, app::List_1_Moon_JsonParser_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x02F1E380,
        int32_t,
        BinarySearch,
        app::List_1_Moon_JsonParser_* this_ptr,
        app::JsonParser* item,
        app::IComparer_1_Moon_JsonParser_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, app::List_1_Moon_JsonParser_* this_ptr, int32_t index, app::JsonParser* item)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_JsonParser_
