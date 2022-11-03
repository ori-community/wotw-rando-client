#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::Base64Stream_ReadStateInfo {
    IL2CPP_REGISTER_METHOD(0x0052B590, uint8_t, get_Val, (app::Base64Stream_ReadStateInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_Val, (app::Base64Stream_ReadStateInfo * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x00504D80, uint8_t, get_Pos, (app::Base64Stream_ReadStateInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C660, void, set_Pos, (app::Base64Stream_ReadStateInfo * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Base64Stream_ReadStateInfo * this_ptr))
} // namespace app::classes::System::Net::Base64Stream_ReadStateInfo
