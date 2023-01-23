#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/KeyValuePair_2_System_DateTime_System_TimeType___Boxed.h>
#include <Modloader/app/structs/TimeType.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_DateTime_System_TimeType_ {
    IL2CPP_REGISTER_METHOD(0x00107C00, app::DateTime, get_Key, (app::KeyValuePair_2_System_DateTime_System_TimeType___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04719F48, KeyValuePair_2_System_DateTime_System_TimeType__get_Key__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00107C10, app::TimeType*, get_Value, (app::KeyValuePair_2_System_DateTime_System_TimeType___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047724E8, KeyValuePair_2_System_DateTime_System_TimeType__get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00110270, void, ctor, (app::KeyValuePair_2_System_DateTime_System_TimeType___Boxed * this_ptr, app::DateTime key, app::TimeType* value))
    IL2CPP_REGISTER_METHODINFO(0x0472A388, KeyValuePair_2_System_DateTime_System_TimeType___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_DateTime_System_TimeType_
