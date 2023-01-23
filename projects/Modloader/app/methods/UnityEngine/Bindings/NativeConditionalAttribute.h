#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NativeConditionalAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::Bindings::NativeConditionalAttribute {
    IL2CPP_REGISTER_METHOD(0x020D0390, void, ctor, (app::NativeConditionalAttribute * this_ptr, app::String* condition))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Condition, (app::NativeConditionalAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_Enabled, (app::NativeConditionalAttribute * this_ptr, bool value))
} // namespace app::classes::UnityEngine::Bindings::NativeConditionalAttribute
