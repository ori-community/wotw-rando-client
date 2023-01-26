#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/KeyValuePair_2_System_DateTime_System_TimeType___Boxed.h>
#include <Modloader/app/structs/TimeType.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_DateTime_System_TimeType_ {
    IL2CPP_REGISTER_METHOD(0x00107C00, app::DateTime, get_Key, (app::KeyValuePair_2_System_DateTime_System_TimeType___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C10, app::TimeType*, get_Value, (app::KeyValuePair_2_System_DateTime_System_TimeType___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00110270, void, ctor, (app::KeyValuePair_2_System_DateTime_System_TimeType___Boxed * this_ptr, app::DateTime key, app::TimeType* value))
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_DateTime_System_TimeType_
