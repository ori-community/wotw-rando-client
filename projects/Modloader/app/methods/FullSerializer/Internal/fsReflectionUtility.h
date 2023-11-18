#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Type.h>

namespace app::classes::FullSerializer::Internal::fsReflectionUtility {
    IL2CPP_REGISTER_METHOD(0x0165D140, app::Type*, GetInterface, (app::Type * type, app::Type* interface_type))
}
