#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::PhysicsMaterial2D {
    IL2CPP_REGISTER_METHOD(0x03171A60, void, ctor, (app::PhysicsMaterial2D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03171B40, void, Create_Internal, (app::PhysicsMaterial2D * script_material, app::String * name))
}
