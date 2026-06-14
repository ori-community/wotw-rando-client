#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PropertyAttribute.h>

namespace app::classes::UnityEngine::PropertyAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PropertyAttribute* this_ptr)
}
