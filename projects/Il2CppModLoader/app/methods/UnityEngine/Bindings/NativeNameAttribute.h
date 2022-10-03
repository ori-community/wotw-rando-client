#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Bindings::NativeNameAttribute {
    IL2CPP_REGISTER_METHOD(0x031BB4E0, void, ctor, (app::NativeNameAttribute * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHODINFO(0x04749F58, NativeNameAttribute__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (app::NativeNameAttribute * this_ptr, app::String* value))
} // namespace app::classes::UnityEngine::Bindings::NativeNameAttribute
