#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HornBugSlamEffects.h>
#include <Modloader/app/structs/LizardAttackEffects.h>
#include <Modloader/app/structs/LizardMovementEffects.h>
#include <Modloader/app/structs/MaterialBasedResourceMap.h>
#include <Modloader/app/structs/MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PhysicsEffects.h>
#include <Modloader/app/structs/SeinPlatformingEffects.h>
#include <Modloader/app/structs/SeinPoleEffects.h>
#include <Modloader/app/structs/SeinWeaponsEffects.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>

namespace app::classes::MaterialBasedResourceMap {
    IL2CPP_REGISTER_METHOD(
        0x01380A60,
        app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache*,
        get_RuntimeCache,
        app::MaterialBasedResourceMap* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x002FBAF0, void, ClearCache, app::MaterialBasedResourceMap* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        PopulateRuntimeCache,
        app::MaterialBasedResourceMap* this_ptr,
        app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache* cache
    )
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, app::MaterialBasedResourceMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01580170, app::Object*, Get_1, app::MaterialBasedResourceMap* this_ptr, app::SurfaceMaterialType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01580170, app::HornBugSlamEffects*, Get_2, app::MaterialBasedResourceMap* this_ptr, app::SurfaceMaterialType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01580170, app::LizardMovementEffects*, Get_3, app::MaterialBasedResourceMap* this_ptr, app::SurfaceMaterialType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01580170, app::SeinWeaponsEffects*, Get_4, app::MaterialBasedResourceMap* this_ptr, app::SurfaceMaterialType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01580170, app::LizardAttackEffects*, Get_5, app::MaterialBasedResourceMap* this_ptr, app::SurfaceMaterialType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01580170, app::PhysicsEffects*, Get_6, app::MaterialBasedResourceMap* this_ptr, app::SurfaceMaterialType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01580170, app::SeinPlatformingEffects*, Get_7, app::MaterialBasedResourceMap* this_ptr, app::SurfaceMaterialType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01580170, app::SeinPoleEffects*, Get_8, app::MaterialBasedResourceMap* this_ptr, app::SurfaceMaterialType__Enum type)
} // namespace app::classes::MaterialBasedResourceMap
