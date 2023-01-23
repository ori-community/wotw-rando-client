#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Nullable_1_System_Data_DataKey___Boxed.h>
#include <Modloader/app/structs/DataKey.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Nullable_1_System_Data_DataKey_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_System_Data_DataKey_ {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::Nullable_1_System_Data_DataKey___Boxed * this_ptr, app::DataKey value))
    IL2CPP_REGISTER_METHODINFO(0x04743270, Nullable_1_System_Data_DataKey___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F8970, app::DataKey, get_Value, (app::Nullable_1_System_Data_DataKey___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478BA60, Nullable_1_System_Data_DataKey__get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F8960, bool, get_HasValue, (app::Nullable_1_System_Data_DataKey___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F8A50, bool, Equals_1, (app::Nullable_1_System_Data_DataKey___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x001F8AA0, bool, Equals_2, (app::Nullable_1_System_Data_DataKey___Boxed * this_ptr, app::Nullable_1_System_Data_DataKey_ other))
    IL2CPP_REGISTER_METHOD(0x001F8B70, int32_t, GetHashCode, (app::Nullable_1_System_Data_DataKey___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::DataKey, GetValueOrDefault_1, (app::Nullable_1_System_Data_DataKey___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F8BF0, app::DataKey, GetValueOrDefault_2, (app::Nullable_1_System_Data_DataKey___Boxed * this_ptr, app::DataKey default_value))
    IL2CPP_REGISTER_METHOD(0x001F8C10, app::String*, ToString, (app::Nullable_1_System_Data_DataKey___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02551710, app::Object*, Box, (app::Nullable_1_System_Data_DataKey_ o))
    IL2CPP_REGISTER_METHOD(0x02551790, app::Nullable_1_System_Data_DataKey_, Unbox, (app::Object * o))
} // namespace app::classes::System::Nullable_1_System_Data_DataKey_
