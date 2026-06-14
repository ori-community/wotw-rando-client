#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NativeThrowsAttribute.h>

namespace app::classes::UnityEngine::Bindings::NativeThrowsAttribute {
    IL2CPP_REGISTER_METHOD(0x00B80D80, void, ctor, app::NativeThrowsAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_ThrowsException, app::NativeThrowsAttribute* this_ptr, bool value)
} // namespace app::classes::UnityEngine::Bindings::NativeThrowsAttribute
