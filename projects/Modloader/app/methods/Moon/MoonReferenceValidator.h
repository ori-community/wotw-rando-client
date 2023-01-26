#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>

namespace app::classes::Moon::MoonReferenceValidator {
    IL2CPP_REGISTER_METHOD(0x02F97ED0, bool, IsTypeValidForMoonReference, (app::Type * t, app::IMoonTypeResolver* resolver))
    IL2CPP_REGISTER_METHOD(0x02F97FD0, void, CheckMoonTypeGenericTypeUsage, (app::Type * t, app::IMoonTypeResolver* resolver))
    IL2CPP_REGISTER_METHOD(0x02F98320, void, cctor, ())
} // namespace app::classes::Moon::MoonReferenceValidator
