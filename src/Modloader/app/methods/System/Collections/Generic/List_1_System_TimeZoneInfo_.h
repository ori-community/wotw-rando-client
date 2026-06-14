#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_System_TimeZoneInfo_.h>
#include <Modloader/app/structs/List_1_System_TimeZoneInfo_.h>
#include <Modloader/app/structs/TimeZoneInfo.h>

namespace app::classes::System::Collections::Generic::List_1_System_TimeZoneInfo_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_System_TimeZoneInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_System_TimeZoneInfo_* this_ptr, app::TimeZoneInfo* item)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_System_TimeZoneInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, app::List_1_System_TimeZoneInfo_* this_ptr, app::IEnumerable_1_System_TimeZoneInfo_* collection)
} // namespace app::classes::System::Collections::Generic::List_1_System_TimeZoneInfo_
