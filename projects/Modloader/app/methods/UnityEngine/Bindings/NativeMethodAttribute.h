#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NativeMethodAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::Bindings::NativeMethodAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::NativeMethodAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BB340, void, ctor_2, (app::NativeMethodAttribute * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHODINFO(0x04769900, NativeMethodAttribute__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BB460, void, ctor_3, (app::NativeMethodAttribute * this_ptr, app::String* name, bool is_free_function))
    IL2CPP_REGISTER_METHOD(0x031BB490, void, ctor_4, (app::NativeMethodAttribute * this_ptr, app::String* name, bool is_free_function, bool is_thread_safe))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (app::NativeMethodAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsThreadSafe, (app::NativeMethodAttribute * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00533170, void, set_IsFreeFunction, (app::NativeMethodAttribute * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01E98B80, void, set_ThrowsException, (app::NativeMethodAttribute * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x031BB4D0, void, set_HasExplicitThis, (app::NativeMethodAttribute * this_ptr, bool value))
} // namespace app::classes::UnityEngine::Bindings::NativeMethodAttribute
