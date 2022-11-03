#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::NameTable {
    IL2CPP_REGISTER_METHOD(0x0199D9A0, void, ctor, (app::NameTable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0199DA70, app::String*, Add_1, (app::NameTable * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHODINFO(0x04742480, NameTable_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0199DC20, app::String*, Add_2, (app::NameTable * this_ptr, app::Char__Array* key, int32_t start, int32_t len))
    IL2CPP_REGISTER_METHOD(0x0199DE20, app::String*, Get, (app::NameTable * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04767570, NameTable_Get__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0199DFC0, app::String*, AddEntry, (app::NameTable * this_ptr, app::String* str, int32_t hash_code))
    IL2CPP_REGISTER_METHOD(0x0199E1D0, void, Grow, (app::NameTable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0199E370, bool, TextEquals, (app::String * str1, app::Char__Array* str2, int32_t str2_start, int32_t str2_length))
} // namespace app::classes::System::Xml::NameTable
