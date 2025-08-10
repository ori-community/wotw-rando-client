#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IDrivable.h>
#include <Modloader/app/structs/List_1_Moon_IDrivable_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_IDrivable_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_Moon_IDrivable_* this_ptr, app::IDrivable* item)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, app::List_1_Moon_IDrivable_* this_ptr, app::IDrivable* item)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Moon_IDrivable_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::IDrivable*, get_Item, app::List_1_Moon_IDrivable_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_Moon_IDrivable_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Moon_IDrivable_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, app::List_1_Moon_IDrivable_* this_ptr, int32_t index, app::IDrivable* item)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_IDrivable_
