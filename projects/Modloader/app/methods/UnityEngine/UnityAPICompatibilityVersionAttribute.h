#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UnityAPICompatibilityVersionAttribute.h>

namespace app::classes::UnityEngine::UnityAPICompatibilityVersionAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::UnityAPICompatibilityVersionAttribute* this_ptr, app::String* version)
}
