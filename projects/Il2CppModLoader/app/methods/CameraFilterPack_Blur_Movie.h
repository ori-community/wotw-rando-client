#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Blur_Movie {
    IL2CPP_REGISTER_METHOD(0x024D2150, app::Material *, get_material, (app::CameraFilterPack_Blur_Movie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D2330, void, Start, (app::CameraFilterPack_Blur_Movie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D24A0, void, OnRenderImage, (app::CameraFilterPack_Blur_Movie * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x024D29D0, void, OnValidate, (app::CameraFilterPack_Blur_Movie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D2A60, void, Update, (app::CameraFilterPack_Blur_Movie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D2B10, void, OnDisable, (app::CameraFilterPack_Blur_Movie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D2BF0, void, ctor, (app::CameraFilterPack_Blur_Movie * this_ptr))
}
