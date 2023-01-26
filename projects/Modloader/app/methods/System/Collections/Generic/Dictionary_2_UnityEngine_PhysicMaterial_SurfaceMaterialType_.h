#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_UnityEngine_PhysicMaterial_SurfaceMaterialType_.h>
#include <Modloader/app/structs/PhysicMaterial.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_PhysicMaterial_SurfaceMaterialType_ {
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_UnityEngine_PhysicMaterial_SurfaceMaterialType_ * this_ptr, app::PhysicMaterial* key, app::SurfaceMaterialType__Enum value))
    IL2CPP_REGISTER_METHOD(0x02BCDF80, bool, TryGetValue, (app::Dictionary_2_UnityEngine_PhysicMaterial_SurfaceMaterialType_ * this_ptr, app::PhysicMaterial* key, app::SurfaceMaterialType__Enum* value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_UnityEngine_PhysicMaterial_SurfaceMaterialType_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_PhysicMaterial_SurfaceMaterialType_
