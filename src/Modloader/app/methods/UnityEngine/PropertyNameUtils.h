#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PropertyName.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::PropertyNameUtils {
    IL2CPP_REGISTER_METHOD(0x0296A4C0, app::PropertyName, PropertyNameFromString, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0296A530, void, PropertyNameFromString_Injected, app::String* name, app::PropertyName* ret)
} // namespace app::classes::UnityEngine::PropertyNameUtils
