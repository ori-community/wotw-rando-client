#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RetryConditionHeaderValue.h>
#include <Modloader/app/structs/DateTimeOffset.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/Nullable_1_DateTimeOffset_.h>
#include <Modloader/app/structs/Nullable_1_TimeSpan_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Http::Headers::RetryConditionHeaderValue {
    IL2CPP_REGISTER_METHOD(0x02D16BF0, void, ctor_1, (app::RetryConditionHeaderValue * this_ptr, app::DateTimeOffset date))
    IL2CPP_REGISTER_METHOD(0x02D16C90, void, ctor_2, (app::RetryConditionHeaderValue * this_ptr, app::TimeSpan delta))
    IL2CPP_REGISTER_METHODINFO(0x04702918, RetryConditionHeaderValue__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D14680, app::Nullable_1_DateTimeOffset_, get_Date, (app::RetryConditionHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007F2CB0, void, set_Date, (app::RetryConditionHeaderValue * this_ptr, app::Nullable_1_DateTimeOffset_ value))
    IL2CPP_REGISTER_METHOD(0x00CB5CB0, app::Nullable_1_TimeSpan_, get_Delta, (app::RetryConditionHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB5CC0, void, set_Delta, (app::RetryConditionHeaderValue * this_ptr, app::Nullable_1_TimeSpan_ value))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, ICloneable_Clone, (app::RetryConditionHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D16D80, bool, Equals, (app::RetryConditionHeaderValue * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02D16F40, int32_t, GetHashCode, (app::RetryConditionHeaderValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D17030, bool, TryParse, (app::String * input, app::RetryConditionHeaderValue** parsed_value))
    IL2CPP_REGISTER_METHODINFO(0x0478CF30, RetryConditionHeaderValue_TryParse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D17590, app::String*, ToString, (app::RetryConditionHeaderValue * this_ptr))
} // namespace app::classes::System::Net::Http::Headers::RetryConditionHeaderValue
