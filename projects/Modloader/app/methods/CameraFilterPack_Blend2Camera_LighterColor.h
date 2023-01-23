#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_LighterColor.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Blend2Camera_LighterColor {
    IL2CPP_REGISTER_METHOD(0x02751EA0, app::Material*, get_material, (app::CameraFilterPack_Blend2Camera_LighterColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02752080, void, Start, (app::CameraFilterPack_Blend2Camera_LighterColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02752440, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_LighterColor * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02752830, void, OnValidate, (app::CameraFilterPack_Blend2Camera_LighterColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02752B20, void, Update, (app::CameraFilterPack_Blend2Camera_LighterColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02752BB0, void, OnEnable, (app::CameraFilterPack_Blend2Camera_LighterColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02752E80, void, OnDisable, (app::CameraFilterPack_Blend2Camera_LighterColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02753070, void, ctor, (app::CameraFilterPack_Blend2Camera_LighterColor * this_ptr))
} // namespace app::classes::CameraFilterPack_Blend2Camera_LighterColor
