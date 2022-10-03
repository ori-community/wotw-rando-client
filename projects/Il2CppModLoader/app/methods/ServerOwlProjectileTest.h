#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ServerOwlProjectileTest {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerOwlProjectileTest * this_ptr, app::Object* original_component))
    IL2CPP_REGISTER_METHOD(0x00AC2C60, app::Object*, CreateData, (app::ServerOwlProjectileTest * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x00AC2DC0, app::Component_1*, ApplyData, (app::ServerOwlProjectileTest * this_ptr, app::GameObject** gameobj))
    IL2CPP_REGISTER_METHOD(0x00AC2ED0, void, RebuildReferences, (app::ServerOwlProjectileTest * this_ptr))
} // namespace app::classes::ServerOwlProjectileTest
