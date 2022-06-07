#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::PropertyNameUtils {
    IL2CPP_REGISTER_METHOD(0x0296A4C0, app::PropertyName, PropertyNameFromString, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x0296A530, void, PropertyNameFromString_Injected, (app::String * name, app::PropertyName * ret))
}
