#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Nullable_1_System_Data_SqlTypes_SqlBinary_ {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::Nullable_1_System_Data_SqlTypes_SqlBinary___Boxed * this_ptr, app::SqlBinary value))
    IL2CPP_REGISTER_METHOD(0x001F8960, bool, get_HasValue, (app::Nullable_1_System_Data_SqlTypes_SqlBinary___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F8D50, app::SqlBinary, get_Value, (app::Nullable_1_System_Data_SqlTypes_SqlBinary___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04752F98, Nullable_1_System_Data_SqlTypes_SqlBinary__get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F8E30, bool, Equals_1, (app::Nullable_1_System_Data_SqlTypes_SqlBinary___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x001F8E80, bool, Equals_2, (app::Nullable_1_System_Data_SqlTypes_SqlBinary___Boxed * this_ptr, app::Nullable_1_System_Data_SqlTypes_SqlBinary_ other))
    IL2CPP_REGISTER_METHOD(0x001F8F50, int32_t, GetHashCode, (app::Nullable_1_System_Data_SqlTypes_SqlBinary___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::SqlBinary, GetValueOrDefault_1, (app::Nullable_1_System_Data_SqlTypes_SqlBinary___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F8BF0, app::SqlBinary, GetValueOrDefault_2, (app::Nullable_1_System_Data_SqlTypes_SqlBinary___Boxed * this_ptr, app::SqlBinary default_value))
    IL2CPP_REGISTER_METHOD(0x001F8FD0, app::String*, ToString, (app::Nullable_1_System_Data_SqlTypes_SqlBinary___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02551710, app::Object*, Box, (app::Nullable_1_System_Data_SqlTypes_SqlBinary_ o))
    IL2CPP_REGISTER_METHOD(0x02551790, app::Nullable_1_System_Data_SqlTypes_SqlBinary_, Unbox, (app::Object * o))
} // namespace app::classes::System::Nullable_1_System_Data_SqlTypes_SqlBinary_
