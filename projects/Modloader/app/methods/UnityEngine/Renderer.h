#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/LightmapType__Enum.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/MaterialPropertyBlock.h>
#include <Modloader/app/structs/Material__Array.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/ShadowCastingMode__Enum.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::UnityEngine::Renderer {
    IL2CPP_REGISTER_METHOD(0x02972900, app::Bounds, get_bounds, app::Renderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02972990, app::Material*, GetMaterial, app::Renderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029729E0, app::Material*, GetSharedMaterial, app::Renderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02972A30, void, SetMaterial, app::Renderer* this_ptr, app::Material* m)
    IL2CPP_REGISTER_METHOD(0x02972A90, app::Material__Array*, GetMaterialArray, app::Renderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02972AE0, void, SetMaterialArray, app::Renderer* this_ptr, app::Material__Array* m)
    IL2CPP_REGISTER_METHOD(0x02972B40, void, Internal_SetPropertyBlock, app::Renderer* this_ptr, app::MaterialPropertyBlock* properties)
    IL2CPP_REGISTER_METHOD(
        0x02972BA0,
        void,
        Internal_SetPropertyBlockMaterialIndex,
        app::Renderer* this_ptr,
        app::MaterialPropertyBlock* properties,
        int32_t material_index
    )
    IL2CPP_REGISTER_METHOD(0x02972B40, void, SetPropertyBlock_1, app::Renderer* this_ptr, app::MaterialPropertyBlock* properties)
    IL2CPP_REGISTER_METHOD(0x02972BA0, void, SetPropertyBlock_2, app::Renderer* this_ptr, app::MaterialPropertyBlock* properties, int32_t material_index)
    IL2CPP_REGISTER_METHOD(0x02972C10, app::Bounds, get_customBounds, app::Renderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02972CA0, void, set_customBounds, app::Renderer* this_ptr, app::Bounds value)
    IL2CPP_REGISTER_METHOD(0x02972D00, uint32_t, get_cullingCategoryMask, app::Renderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02972D50, void, set_cullingCategoryMask, app::Renderer* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x02972DB0, bool, get_enabled, app::Renderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02972E00, void, set_enabled, app::Renderer* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02972E60, bool, get_isVisible, app::Renderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02972EB0, void, set_shadowCastingMode, app::Renderer* this_ptr, app::ShadowCastingMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x02972F10, void, set_receiveShadows, app::Renderer* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02972F70, uint32_t, get_renderingLayerMask, app::Renderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02972FC0, void, set_renderingLayerMask, app::Renderer* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x02973020, int32_t, get_sortingLayerID, app::Renderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02973070, void, set_sortingLayerID, app::Renderer* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x029730D0, int32_t, get_sortingOrder, app::Renderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02973120, void, set_sortingOrder, app::Renderer* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02973180, bool, get_moonHidden, app::Renderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029731D0, void, set_moonHidden, app::Renderer* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02973230, bool, get_moonHidden2, app::Renderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02973280, void, set_moonHidden2, app::Renderer* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x029732E0, bool, get_moonHidden3, app::Renderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02973330, void, set_moonHidden3, app::Renderer* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02973390, float, get_moonOffsetZ, app::Renderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029733E0, void, set_moonOffsetZ, app::Renderer* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x02973440, app::Vector4, GetLightmapST, app::Renderer* this_ptr, app::LightmapType__Enum lt)
    IL2CPP_REGISTER_METHOD(0x029734D0, app::Vector4, get_lightmapScaleOffset, app::Renderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02973550, app::Material__Array*, GetSharedMaterialArray, app::Renderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02972A90, app::Material__Array*, get_materials, app::Renderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029735A0, app::Material*, get_cachedMaterial, app::Renderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02972990, app::Material*, get_material, app::Renderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02972A30, void, set_material, app::Renderer* this_ptr, app::Material* value)
    IL2CPP_REGISTER_METHOD(0x029729E0, app::Material*, get_sharedMaterial, app::Renderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02972A30, void, set_sharedMaterial, app::Renderer* this_ptr, app::Material* value)
    IL2CPP_REGISTER_METHOD(0x02973550, app::Material__Array*, get_sharedMaterials, app::Renderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02972AE0, void, set_sharedMaterials, app::Renderer* this_ptr, app::Material__Array* value)
    IL2CPP_REGISTER_METHOD(0x029736A0, void, get_bounds_Injected, app::Renderer* this_ptr, app::Bounds* ret)
    IL2CPP_REGISTER_METHOD(0x02973700, void, get_customBounds_Injected, app::Renderer* this_ptr, app::Bounds* ret)
    IL2CPP_REGISTER_METHOD(0x02973760, void, set_customBounds_Injected, app::Renderer* this_ptr, app::Bounds* value)
    IL2CPP_REGISTER_METHOD(0x029737C0, void, GetLightmapST_Injected, app::Renderer* this_ptr, app::LightmapType__Enum lt, app::Vector4* ret)
} // namespace app::classes::UnityEngine::Renderer
