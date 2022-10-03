#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::Mime::Base64WriteStateInfo {
    IL2CPP_REGISTER_METHOD(0x01E6ECF0, void, ctor, (app::Base64WriteStateInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_Padding, (app::Base64WriteStateInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00617D40, void, set_Padding, (app::Base64WriteStateInfo * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x004E5A00, uint8_t, get_LastBits, (app::Base64WriteStateInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004E5A10, void, set_LastBits, (app::Base64WriteStateInfo * this_ptr, uint8_t value))
} // namespace app::classes::System::Net::Mime::Base64WriteStateInfo
