#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Base64Encoder {
    IL2CPP_REGISTER_METHOD(0x021E1290, void, ctor, (app::Base64Encoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021E1320, void, Encode, (app::Base64Encoder * this_ptr, app::Byte__Array * buffer, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x0475D2B0, Base64Encoder_Encode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021E16E0, void, Flush, (app::Base64Encoder * this_ptr))
}
