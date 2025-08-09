#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/servernetadr_t.h>
#include <Modloader/app/structs/servernetadr_t__Boxed.h>

namespace app::classes::Steamworks::servernetadr_t {
    IL2CPP_REGISTER_METHOD(0x00113C90, void, Init, app::servernetadr_t__Boxed* this_ptr, uint32_t ip, uint16_t us_query_port, uint16_t us_connection_port)
    IL2CPP_REGISTER_METHOD(0x00113CA0, uint16_t, GetQueryPort, app::servernetadr_t__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00113CB0, void, SetQueryPort, app::servernetadr_t__Boxed* this_ptr, uint16_t us_port)
    IL2CPP_REGISTER_METHOD(0x00113CC0, uint16_t, GetConnectionPort, app::servernetadr_t__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00113CD0, void, SetConnectionPort, app::servernetadr_t__Boxed* this_ptr, uint16_t us_port)
    IL2CPP_REGISTER_METHOD(0x00113CE0, uint32_t, GetIP, app::servernetadr_t__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00113CF0, void, SetIP, app::servernetadr_t__Boxed* this_ptr, uint32_t un_i_p)
    IL2CPP_REGISTER_METHOD(0x00113D00, app::String*, GetConnectionAddressString, app::servernetadr_t__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00113D10, app::String*, GetQueryAddressString, app::servernetadr_t__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0064E190, app::String*, ToString, uint32_t un_i_p, uint16_t us_port)
    IL2CPP_REGISTER_METHOD(0x0064E470, bool, op_LessThan, app::servernetadr_t x, app::servernetadr_t y)
    IL2CPP_REGISTER_METHOD(0x0064E4A0, bool, op_GreaterThan, app::servernetadr_t x, app::servernetadr_t y)
    IL2CPP_REGISTER_METHOD(0x00113D20, bool, Equals_1, app::servernetadr_t__Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x00113E20, int32_t, GetHashCode, app::servernetadr_t__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0064E4D0, bool, op_Equality, app::servernetadr_t x, app::servernetadr_t y)
    IL2CPP_REGISTER_METHOD(0x0064E510, bool, op_Inequality, app::servernetadr_t x, app::servernetadr_t y)
    IL2CPP_REGISTER_METHOD(0x00113E30, bool, Equals_2, app::servernetadr_t__Boxed* this_ptr, app::servernetadr_t other)
    IL2CPP_REGISTER_METHOD(0x00113E60, int32_t, CompareTo, app::servernetadr_t__Boxed* this_ptr, app::servernetadr_t other)
    inline bool operator<(app::servernetadr_t x, app::servernetadr_t y) { return op_LessThan(x, y); }
    inline bool operator>(app::servernetadr_t x, app::servernetadr_t y) { return op_GreaterThan(x, y); }
    inline bool operator==(app::servernetadr_t x, app::servernetadr_t y) { return op_Equality(x, y); }
    inline bool operator!=(app::servernetadr_t x, app::servernetadr_t y) { return op_Inequality(x, y); }
} // namespace app::classes::Steamworks::servernetadr_t
