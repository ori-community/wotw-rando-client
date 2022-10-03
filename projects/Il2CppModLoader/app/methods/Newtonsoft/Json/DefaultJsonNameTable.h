#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::DefaultJsonNameTable {
    IL2CPP_REGISTER_METHOD(0x01A63F40, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01A63FF0, void, ctor, (app::DefaultJsonNameTable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A64080, app::String*, Get, (app::DefaultJsonNameTable * this_ptr, app::Char__Array* key, int32_t start, int32_t length))
    IL2CPP_REGISTER_METHOD(0x01A642A0, app::String*, Add, (app::DefaultJsonNameTable * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHODINFO(0x04717610, DefaultJsonNameTable_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A64480, app::String*, AddEntry, (app::DefaultJsonNameTable * this_ptr, app::String* str, int32_t hash_code))
    IL2CPP_REGISTER_METHOD(0x01A64690, void, Grow, (app::DefaultJsonNameTable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0199E370, bool, TextEquals, (app::String * str1, app::Char__Array* str2, int32_t str2_start, int32_t str2_length))
} // namespace app::classes::Newtonsoft::Json::DefaultJsonNameTable
