#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HitStop_Entry.h>
#include <Modloader/app/structs/List_1_Moon_HitStop_Entry_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_HitStop_Entry_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_Moon_HitStop_Entry_* this_ptr, app::HitStop_Entry* item)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::HitStop_Entry*, get_Item, app::List_1_Moon_HitStop_Entry_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, app::List_1_Moon_HitStop_Entry_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Moon_HitStop_Entry_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_Moon_HitStop_Entry_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Moon_HitStop_Entry_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_HitStop_Entry_
