#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NativeNameAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::Bindings::NativeNameAttribute {
    IL2CPP_REGISTER_METHOD(0x031BB4E0, void, ctor, app::NativeNameAttribute* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, app::NativeNameAttribute* this_ptr, app::String* value)
} // namespace app::classes::UnityEngine::Bindings::NativeNameAttribute
