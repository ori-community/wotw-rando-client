#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ThreadSafeAttribute.h>

namespace app::classes::UnityEngine::Bindings::ThreadSafeAttribute {
    IL2CPP_REGISTER_METHOD(0x0049C100, void, ctor, app::ThreadSafeAttribute* this_ptr)
}
