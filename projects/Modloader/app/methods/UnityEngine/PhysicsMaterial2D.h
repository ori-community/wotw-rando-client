#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PhysicsMaterial2D.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::PhysicsMaterial2D {
    IL2CPP_REGISTER_METHOD(0x03171A60, void, ctor, (app::PhysicsMaterial2D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03171B40, void, Create_Internal, (app::PhysicsMaterial2D * script_material, app::String* name))
} // namespace app::classes::UnityEngine::PhysicsMaterial2D
