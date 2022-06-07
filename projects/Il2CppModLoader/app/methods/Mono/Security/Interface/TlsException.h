#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Security::Interface::TlsException {
    IL2CPP_REGISTER_METHOD(0x02A46F60, void, ctor_1, (app::TlsException_1 * this_ptr, app::Alert_1 * alert, app::String * message))
    IL2CPP_REGISTER_METHOD(0x02A47020, void, ctor_2, (app::TlsException_1 * this_ptr, app::AlertDescription__Enum description, app::String * message))
}
