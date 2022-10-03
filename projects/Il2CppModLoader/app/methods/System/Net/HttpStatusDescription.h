#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::HttpStatusDescription {
    IL2CPP_REGISTER_METHOD(0x01E58EB0, app::String*, Get_1, (app::HttpStatusCode__Enum code))
    IL2CPP_REGISTER_METHOD(0x01E58EC0, app::String*, Get_2, (int32_t code))
} // namespace app::classes::System::Net::HttpStatusDescription
