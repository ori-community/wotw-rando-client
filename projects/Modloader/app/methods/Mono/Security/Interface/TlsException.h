#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TlsException_1.h>
#include <Modloader/app/structs/Alert_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/AlertDescription__Enum.h>

namespace app::classes::Mono::Security::Interface::TlsException {
    IL2CPP_REGISTER_METHOD(0x02A46F60, void, ctor_1, (app::TlsException_1 * this_ptr, app::Alert_1* alert, app::String* message))
    IL2CPP_REGISTER_METHOD(0x02A47020, void, ctor_2, (app::TlsException_1 * this_ptr, app::AlertDescription__Enum description, app::String* message))
} // namespace app::classes::Mono::Security::Interface::TlsException
