#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ActivationParent {
    IL2CPP_REGISTER_METHOD(0x004C9330, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x004C93D0, void, OnEnable, (app::ActivationParent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C9550, void, OnDisable, (app::ActivationParent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C96D0, void, ctor, (app::ActivationParent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::ActivationParent
