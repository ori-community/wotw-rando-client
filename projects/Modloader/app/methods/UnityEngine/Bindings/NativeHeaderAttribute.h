#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NativeHeaderAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::Bindings::NativeHeaderAttribute {
    IL2CPP_REGISTER_METHOD(0x031BB220, void, ctor, (app::NativeHeaderAttribute * this_ptr, app::String* header))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Header, (app::NativeHeaderAttribute * this_ptr, app::String* value))
} // namespace app::classes::UnityEngine::Bindings::NativeHeaderAttribute
