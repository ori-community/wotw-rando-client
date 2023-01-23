#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem___Boxed.h>
#include <Modloader/app/structs/EventHistoryItem.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem_ {
    IL2CPP_REGISTER_METHOD(0x00150620, void, ctor, (app::KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem___Boxed * this_ptr, int32_t key, app::EventHistoryItem value))
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, get_Key, (app::KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00150640, app::EventHistoryItem, get_Value, (app::KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00150660, app::String*, ToString, (app::KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem_
