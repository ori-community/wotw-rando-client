#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SerializableGenericAttribute.h>

namespace app::classes::UnityEngine::SerializableGenericAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SerializableGenericAttribute* this_ptr)
}
