#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::SecurityProtocol {
    IL2CPP_REGISTER_METHOD(0x01BD3210, void, ThrowOnNotAllowed, (app::SslProtocols__Enum protocols, bool allow_none))
    IL2CPP_REGISTER_METHODINFO(0x04709940, SecurityProtocol_ThrowOnNotAllowed__MethodInfo)
}
