#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::Net::Security::NoReflectionHelper {
    IL2CPP_REGISTER_METHOD(0x021853D0, app::Object*, GetInternalValidator, (app::Object * provider, app::Object* settings))
    IL2CPP_REGISTER_METHOD(0x021854E0, app::Object*, GetProvider, ())
} // namespace app::classes::Mono::Net::Security::NoReflectionHelper
