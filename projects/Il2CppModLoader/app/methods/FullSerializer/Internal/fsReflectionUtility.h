#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FullSerializer::Internal::fsReflectionUtility {
    IL2CPP_REGISTER_METHOD(0x0165D140, app::Type *, GetInterface, (app::Type * type, app::Type * interface_type))
    IL2CPP_REGISTER_METHODINFO(0x04766CC0, fsReflectionUtility_GetInterface__MethodInfo)
}
