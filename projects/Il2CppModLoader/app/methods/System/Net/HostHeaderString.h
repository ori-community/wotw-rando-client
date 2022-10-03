#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::HostHeaderString {
    IL2CPP_REGISTER_METHOD(0x01D3D310, void, ctor_1, (app::HostHeaderString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D3D320, void, ctor_2, (app::HostHeaderString * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x01D3D320, void, Init, (app::HostHeaderString * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x01D3D340, void, Convert, (app::HostHeaderString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_String, (app::HostHeaderString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D3D320, void, set_String, (app::HostHeaderString * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01D3D4B0, int32_t, get_ByteCount, (app::HostHeaderString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D3D4E0, app::Byte__Array*, get_Bytes, (app::HostHeaderString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D3D500, void, Copy, (app::HostHeaderString * this_ptr, app::Byte__Array* dest_bytes, int32_t dest_byte_index))
} // namespace app::classes::System::Net::HostHeaderString
