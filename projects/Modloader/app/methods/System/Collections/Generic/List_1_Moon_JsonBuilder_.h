#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_JsonBuilder_.h>
#include <Modloader/app/structs/IComparer_1_Moon_JsonBuilder_.h>
#include <Modloader/app/structs/JsonBuilder.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_JsonBuilder_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_JsonBuilder_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_JsonBuilder_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::JsonBuilder*, get_Item, (app::List_1_Moon_JsonBuilder_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_Moon_JsonBuilder_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02F1E380, int32_t, BinarySearch, (app::List_1_Moon_JsonBuilder_ * this_ptr, app::JsonBuilder* item, app::IComparer_1_Moon_JsonBuilder_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, (app::List_1_Moon_JsonBuilder_ * this_ptr, int32_t index, app::JsonBuilder* item))
} // namespace app::classes::System::Collections::Generic::List_1_Moon_JsonBuilder_
