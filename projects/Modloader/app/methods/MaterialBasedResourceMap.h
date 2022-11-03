#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MaterialBasedResourceMap {
    IL2CPP_REGISTER_METHOD(0x01380A60, app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache*, get_RuntimeCache, (app::MaterialBasedResourceMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBAF0, void, ClearCache, (app::MaterialBasedResourceMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PopulateRuntimeCache, (app::MaterialBasedResourceMap * this_ptr, app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache* cache))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::MaterialBasedResourceMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01580170, app::Object*, Get_1, (app::MaterialBasedResourceMap * this_ptr, app::SurfaceMaterialType__Enum type))
    IL2CPP_REGISTER_METHOD(0x01580170, app::HornBugSlamEffects*, Get_2, (app::MaterialBasedResourceMap * this_ptr, app::SurfaceMaterialType__Enum type))
    IL2CPP_REGISTER_METHODINFO(0x0474C790, MaterialBasedResourceMap_Get_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01580170, app::LizardMovementEffects*, Get_3, (app::MaterialBasedResourceMap * this_ptr, app::SurfaceMaterialType__Enum type))
    IL2CPP_REGISTER_METHODINFO(0x0471EB58, MaterialBasedResourceMap_Get_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01580170, app::SeinWeaponsEffects*, Get_4, (app::MaterialBasedResourceMap * this_ptr, app::SurfaceMaterialType__Enum type))
    IL2CPP_REGISTER_METHODINFO(0x0470CBC8, MaterialBasedResourceMap_Get_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01580170, app::LizardAttackEffects*, Get_5, (app::MaterialBasedResourceMap * this_ptr, app::SurfaceMaterialType__Enum type))
    IL2CPP_REGISTER_METHODINFO(0x0477D958, MaterialBasedResourceMap_Get_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01580170, app::PhysicsEffects*, Get_6, (app::MaterialBasedResourceMap * this_ptr, app::SurfaceMaterialType__Enum type))
    IL2CPP_REGISTER_METHODINFO(0x04787208, MaterialBasedResourceMap_Get_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01580170, app::SeinPlatformingEffects*, Get_7, (app::MaterialBasedResourceMap * this_ptr, app::SurfaceMaterialType__Enum type))
    IL2CPP_REGISTER_METHODINFO(0x04715628, MaterialBasedResourceMap_Get_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01580170, app::SeinPoleEffects*, Get_8, (app::MaterialBasedResourceMap * this_ptr, app::SurfaceMaterialType__Enum type))
    IL2CPP_REGISTER_METHODINFO(0x0477DD50, MaterialBasedResourceMap_Get_7__MethodInfo)
} // namespace app::classes::MaterialBasedResourceMap
