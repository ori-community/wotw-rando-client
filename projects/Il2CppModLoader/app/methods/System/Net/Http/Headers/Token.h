#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::Http::Headers::Token {
    IL2CPP_REGISTER_METHOD(0x00234C30, void, ctor, (app::Token__Boxed * this_ptr, app::Token_Type__Enum type, int32_t start_position, int32_t end_position))
    IL2CPP_REGISTER_METHOD(0x00113CE0, int32_t, get_StartPosition, (app::Token__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00113CF0, void, set_StartPosition, (app::Token__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0010A860, int32_t, get_EndPosition, (app::Token__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00127510, void, set_EndPosition, (app::Token__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0010E170, app::Token_Type__Enum, get_Kind, (app::Token__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D182F0, app::Token_Type__Enum, op_Implicit, (app::Token token))
    IL2CPP_REGISTER_METHOD(0x00234C50, app::String *, ToString, (app::Token__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D183C0, void, cctor, ())
}
