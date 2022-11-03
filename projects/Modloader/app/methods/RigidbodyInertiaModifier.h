#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RigidbodyInertiaModifier {
    IL2CPP_REGISTER_METHOD(0x00912030, void, OnEnable, (app::RigidbodyInertiaModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00912150, void, ApplyInertia, (app::RigidbodyInertiaModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00912360, void, OnDisable, (app::RigidbodyInertiaModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009124A0, void, ctor, (app::RigidbodyInertiaModifier * this_ptr))
} // namespace app::classes::RigidbodyInertiaModifier
