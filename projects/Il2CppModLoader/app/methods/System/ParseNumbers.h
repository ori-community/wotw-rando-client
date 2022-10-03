#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ParseNumbers {
    IL2CPP_REGISTER_METHOD(0x0227EBF0, int32_t, StringToInt_1, (app::String * value, int32_t from_base, int32_t flags))
    IL2CPP_REGISTER_METHOD(0x0227EC10, int32_t, StringToInt_2, (app::String * value, int32_t from_base, int32_t flags, int32_t* parse_pos))
    IL2CPP_REGISTER_METHODINFO(0x04736EA0, ParseNumbers_StringToInt_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0227F090, int64_t, StringToLong_1, (app::String * value, int32_t from_base, int32_t flags))
    IL2CPP_REGISTER_METHOD(0x0227F0B0, int64_t, StringToLong_2, (app::String * value, int32_t from_base, int32_t flags, int32_t* parse_pos))
    IL2CPP_REGISTER_METHODINFO(0x04795470, ParseNumbers_StringToLong_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0227F5F0, app::String*, IntToString, (int32_t value, int32_t to_base, int32_t width, uint16_t padding_char, int32_t flags))
    IL2CPP_REGISTER_METHODINFO(0x04775FA0, ParseNumbers_IntToString__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0227F9F0, void, EndianSwap, (app::Byte__Array * *value))
    IL2CPP_REGISTER_METHOD(0x0227FB20, app::StringBuilder*, ConvertToBase2, (app::Byte__Array * value))
    IL2CPP_REGISTER_METHOD(0x0227FD50, app::StringBuilder*, ConvertToBase8, (app::Byte__Array * value))
    IL2CPP_REGISTER_METHODINFO(0x0474CF30, ParseNumbers_ConvertToBase8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02280170, app::StringBuilder*, ConvertToBase16, (app::Byte__Array * value))
} // namespace app::classes::System::ParseNumbers
