#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IgnoreAttribute.h>

namespace app::classes::UnityEngine::Bindings::IgnoreAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::IgnoreAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_DoesNotContributeToSize, app::IgnoreAttribute* this_ptr, bool value)
} // namespace app::classes::UnityEngine::Bindings::IgnoreAttribute
