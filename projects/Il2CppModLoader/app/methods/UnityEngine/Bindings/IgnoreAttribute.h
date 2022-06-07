#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Bindings::IgnoreAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::IgnoreAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_DoesNotContributeToSize, (app::IgnoreAttribute * this_ptr, bool value))
}
