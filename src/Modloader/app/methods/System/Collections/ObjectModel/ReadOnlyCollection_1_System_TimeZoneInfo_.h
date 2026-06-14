#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator_1_System_TimeZoneInfo_.h>
#include <Modloader/app/structs/IList_1_System_TimeZoneInfo_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_TimeZoneInfo_.h>

namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_System_TimeZoneInfo_ {
    IL2CPP_REGISTER_METHOD(0x02B7DF30, app::IEnumerator_1_System_TimeZoneInfo_*, GetEnumerator, app::ReadOnlyCollection_1_System_TimeZoneInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B7DCF0, void, ctor, app::ReadOnlyCollection_1_System_TimeZoneInfo_* this_ptr, app::IList_1_System_TimeZoneInfo_* list)
} // namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_System_TimeZoneInfo_
