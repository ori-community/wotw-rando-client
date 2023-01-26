#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Colors_Adjust_FullColors.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Colors_Adjust_FullColors {
    IL2CPP_REGISTER_METHOD(0x024DDBF0, app::Material*, get_material, (app::CameraFilterPack_Colors_Adjust_FullColors * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024DDDD0, void, Start, (app::CameraFilterPack_Colors_Adjust_FullColors * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024DDF20, void, OnRenderImage, (app::CameraFilterPack_Colors_Adjust_FullColors * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, Update, (app::CameraFilterPack_Colors_Adjust_FullColors * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024DE4F0, void, OnDisable, (app::CameraFilterPack_Colors_Adjust_FullColors * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024DE5D0, void, ctor, (app::CameraFilterPack_Colors_Adjust_FullColors * this_ptr))
} // namespace app::classes::CameraFilterPack_Colors_Adjust_FullColors
