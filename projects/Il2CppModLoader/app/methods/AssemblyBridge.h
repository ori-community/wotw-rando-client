#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AssemblyBridge {
    IL2CPP_REGISTER_METHOD(0x03136110, app::Type*, GetTypeGlobal, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AssemblyBridge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03136420, void, cctor, ())
} // namespace app::classes::AssemblyBridge
