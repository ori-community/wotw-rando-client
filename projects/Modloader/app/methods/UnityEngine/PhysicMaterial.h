#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PhysicMaterial.h>
#include <Modloader/app/structs/PhysicMaterialCombine__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::PhysicMaterial {
    IL2CPP_REGISTER_METHOD(0x030A3870, void, ctor, (app::PhysicMaterial * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030A3960, void, Internal_CreateDynamicsMaterial, (app::PhysicMaterial * mat, app::String* name))
    IL2CPP_REGISTER_METHOD(0x030A39C0, float, get_bounciness, (app::PhysicMaterial * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030A3A10, void, set_bounciness, (app::PhysicMaterial * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x030A3A70, float, get_dynamicFriction, (app::PhysicMaterial * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030A3AC0, void, set_dynamicFriction, (app::PhysicMaterial * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x030A3B20, float, get_staticFriction, (app::PhysicMaterial * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030A3B70, void, set_staticFriction, (app::PhysicMaterial * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x030A3BD0, app::PhysicMaterialCombine__Enum, get_frictionCombine, (app::PhysicMaterial * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030A3C20, void, set_frictionCombine, (app::PhysicMaterial * this_ptr, app::PhysicMaterialCombine__Enum value))
    IL2CPP_REGISTER_METHOD(0x030A3C80, app::PhysicMaterialCombine__Enum, get_bounceCombine, (app::PhysicMaterial * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030A3CD0, void, set_bounceCombine, (app::PhysicMaterial * this_ptr, app::PhysicMaterialCombine__Enum value))
} // namespace app::classes::UnityEngine::PhysicMaterial
