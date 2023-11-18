#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_VividLight.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Blend2Camera_VividLight {
    IL2CPP_REGISTER_METHOD(0x027621D0, app::Material*, get_material, (app::CameraFilterPack_Blend2Camera_VividLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027623B0, void, Start, (app::CameraFilterPack_Blend2Camera_VividLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02762770, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_VividLight * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02762B60, void, OnValidate, (app::CameraFilterPack_Blend2Camera_VividLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02762E50, void, Update, (app::CameraFilterPack_Blend2Camera_VividLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02762EE0, void, OnEnable, (app::CameraFilterPack_Blend2Camera_VividLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027631B0, void, OnDisable, (app::CameraFilterPack_Blend2Camera_VividLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027633A0, void, ctor, (app::CameraFilterPack_Blend2Camera_VividLight * this_ptr))
} // namespace app::classes::CameraFilterPack_Blend2Camera_VividLight
