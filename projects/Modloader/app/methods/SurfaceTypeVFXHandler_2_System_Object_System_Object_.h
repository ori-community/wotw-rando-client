#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SurfaceTypeVFXHandler_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsEditor, (app::SurfaceTypeVFXHandler_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D1D130, void, ctor, (app::SurfaceTypeVFXHandler_2_System_Object_System_Object_ * this_ptr, app::Object* effects_map, app::Transform* vfx_hodler, app::Func_2_Object_UnityEngine_GameObject_* get_effects_prefab_function, app::SurfaceMaterialType__Enum__Array* surfaces_handled, app::String* state_name))
    IL2CPP_REGISTER_METHOD(0x01D1D400, void, UpdateVFX, (app::SurfaceTypeVFXHandler_2_System_Object_System_Object_ * this_ptr, app::SurfaceMaterialType__Enum surface_type))
    IL2CPP_REGISTER_METHOD(0x01D1D9E0, void, StopCurrentEfffect, (app::SurfaceTypeVFXHandler_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D1DAF0, void, StopAllEfffects, (app::SurfaceTypeVFXHandler_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D1DD60, void, ReleaseAllEffects, (app::SurfaceTypeVFXHandler_2_System_Object_System_Object_ * this_ptr))
} // namespace app::classes::SurfaceTypeVFXHandler_2_System_Object_System_Object_
