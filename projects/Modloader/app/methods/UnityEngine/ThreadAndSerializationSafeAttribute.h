#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ThreadAndSerializationSafeAttribute.h>

namespace app::classes::UnityEngine::ThreadAndSerializationSafeAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ThreadAndSerializationSafeAttribute* this_ptr)
}
