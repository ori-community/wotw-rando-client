#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Pixel_Pixelisation.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Pixel_Pixelisation {
    IL2CPP_REGISTER_METHOD(0x02488710, app::Material*, get_material, (app::CameraFilterPack_Pixel_Pixelisation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024888F0, void, Start, (app::CameraFilterPack_Pixel_Pixelisation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02488A60, void, OnRenderImage, (app::CameraFilterPack_Pixel_Pixelisation * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02488C60, void, OnValidate, (app::CameraFilterPack_Pixel_Pixelisation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02488CF0, void, Update, (app::CameraFilterPack_Pixel_Pixelisation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02488D80, void, OnDisable, (app::CameraFilterPack_Pixel_Pixelisation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02488E60, void, ctor, (app::CameraFilterPack_Pixel_Pixelisation * this_ptr))
} // namespace app::classes::CameraFilterPack_Pixel_Pixelisation
