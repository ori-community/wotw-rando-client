#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_DateTime___Boxed.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_DateTime_ {
    IL2CPP_REGISTER_METHOD(0x001F8960, bool, get_HasValue, (app::Nullable_1_DateTime___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::Nullable_1_DateTime___Boxed * this_ptr, app::DateTime value))
    IL2CPP_REGISTER_METHOD(0x001F90A0, app::DateTime, get_Value, (app::Nullable_1_DateTime___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::DateTime, GetValueOrDefault_1, (app::Nullable_1_DateTime___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F9180, bool, Equals_1, (app::Nullable_1_DateTime___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x001F91D0, bool, Equals_2, (app::Nullable_1_DateTime___Boxed * this_ptr, app::Nullable_1_DateTime_ other))
    IL2CPP_REGISTER_METHOD(0x001F92A0, int32_t, GetHashCode, (app::Nullable_1_DateTime___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F8BF0, app::DateTime, GetValueOrDefault_2, (app::Nullable_1_DateTime___Boxed * this_ptr, app::DateTime default_value))
    IL2CPP_REGISTER_METHOD(0x001F92D0, app::String*, ToString, (app::Nullable_1_DateTime___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02551710, app::Object*, Box, (app::Nullable_1_DateTime_ o))
    IL2CPP_REGISTER_METHOD(0x02551790, app::Nullable_1_DateTime_, Unbox, (app::Object * o))
} // namespace app::classes::System::Nullable_1_DateTime_
