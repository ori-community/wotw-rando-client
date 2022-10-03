#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Light_Rainbow2 {
    IL2CPP_REGISTER_METHOD(0x0247EC90, app::Material*, get_material, (app::CameraFilterPack_Light_Rainbow2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247EE70, void, Start, (app::CameraFilterPack_Light_Rainbow2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247EFE0, void, OnRenderImage, (app::CameraFilterPack_Light_Rainbow2 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x0247F300, void, OnValidate, (app::CameraFilterPack_Light_Rainbow2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247F390, void, Update, (app::CameraFilterPack_Light_Rainbow2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247F420, void, OnDisable, (app::CameraFilterPack_Light_Rainbow2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247EC70, void, ctor, (app::CameraFilterPack_Light_Rainbow2 * this_ptr))
} // namespace app::classes::CameraFilterPack_Light_Rainbow2
