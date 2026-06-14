#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_2_HornBugMovementEffects_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MaterialBasedHornBugEffectsMap.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum__Array.h>
#include <Modloader/app/structs/SurfaceTypeVFXHandler_2_MaterialBasedHornBugEffectsMap_HornBugMovementEffects_.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::SurfaceTypeVFXHandler_2_MaterialBasedHornBugEffectsMap_HornBugMovementEffects_ {
    IL2CPP_REGISTER_METHOD(
        0x01D1D130,
        void,
        ctor,
        app::SurfaceTypeVFXHandler_2_MaterialBasedHornBugEffectsMap_HornBugMovementEffects_* this_ptr,
        app::MaterialBasedHornBugEffectsMap* effects_map,
        app::Transform* vfx_hodler,
        app::Func_2_HornBugMovementEffects_UnityEngine_GameObject_* get_effects_prefab_function,
        app::SurfaceMaterialType__Enum__Array* surfaces_handled,
        app::String* state_name
    )
    IL2CPP_REGISTER_METHOD(
        0x01D1D400,
        void,
        UpdateVFX,
        app::SurfaceTypeVFXHandler_2_MaterialBasedHornBugEffectsMap_HornBugMovementEffects_* this_ptr,
        app::SurfaceMaterialType__Enum surface_type
    )
    IL2CPP_REGISTER_METHOD(0x01D1D9E0, void, StopCurrentEfffect, app::SurfaceTypeVFXHandler_2_MaterialBasedHornBugEffectsMap_HornBugMovementEffects_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D1DAF0, void, StopAllEfffects, app::SurfaceTypeVFXHandler_2_MaterialBasedHornBugEffectsMap_HornBugMovementEffects_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D1DD60, void, ReleaseAllEffects, app::SurfaceTypeVFXHandler_2_MaterialBasedHornBugEffectsMap_HornBugMovementEffects_* this_ptr)
} // namespace app::classes::SurfaceTypeVFXHandler_2_MaterialBasedHornBugEffectsMap_HornBugMovementEffects_
