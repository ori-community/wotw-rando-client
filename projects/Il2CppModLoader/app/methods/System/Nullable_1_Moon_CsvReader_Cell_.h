#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Nullable_1_Moon_CsvReader_Cell_ {
    IL2CPP_REGISTER_METHOD(0x001F4750, bool, get_HasValue, (app::Nullable_1_Moon_CsvReader_Cell___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477D520, Nullable_1_Moon_CsvReader_Cell__get_HasValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F4760, app::CsvReader_Cell, get_Value, (app::Nullable_1_Moon_CsvReader_Cell___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04772920, Nullable_1_Moon_CsvReader_Cell__get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00120520, void, ctor, (app::Nullable_1_Moon_CsvReader_Cell___Boxed * this_ptr, app::CsvReader_Cell value))
    IL2CPP_REGISTER_METHODINFO(0x0470C978, Nullable_1_Moon_CsvReader_Cell___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F4850, bool, Equals_1, (app::Nullable_1_Moon_CsvReader_Cell___Boxed * this_ptr, app::Object * other))
    IL2CPP_REGISTER_METHOD(0x001F48A0, bool, Equals_2, (app::Nullable_1_Moon_CsvReader_Cell___Boxed * this_ptr, app::Nullable_1_Moon_CsvReader_Cell_ other))
    IL2CPP_REGISTER_METHOD(0x001F4900, int32_t, GetHashCode, (app::Nullable_1_Moon_CsvReader_Cell___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010A980, app::CsvReader_Cell, GetValueOrDefault_1, (app::Nullable_1_Moon_CsvReader_Cell___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F49C0, app::CsvReader_Cell, GetValueOrDefault_2, (app::Nullable_1_Moon_CsvReader_Cell___Boxed * this_ptr, app::CsvReader_Cell default_value))
    IL2CPP_REGISTER_METHOD(0x001F49F0, app::String *, ToString, (app::Nullable_1_Moon_CsvReader_Cell___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0254E8A0, app::Object *, Box, (app::Nullable_1_Moon_CsvReader_Cell_ o))
    IL2CPP_REGISTER_METHOD(0x0254E930, app::Nullable_1_Moon_CsvReader_Cell_, Unbox, (app::Object * o))
}
