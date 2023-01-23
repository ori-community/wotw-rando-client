#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FormerlySerializedAsAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::Serialization::FormerlySerializedAsAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FormerlySerializedAsAttribute * this_ptr, app::String* old_name))
}
