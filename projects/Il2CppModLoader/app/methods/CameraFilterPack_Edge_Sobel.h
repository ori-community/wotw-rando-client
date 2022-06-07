#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Edge_Sobel {
    IL2CPP_REGISTER_METHOD(0x024666E0, app::Material *, get_material, (app::CameraFilterPack_Edge_Sobel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024668C0, void, Start, (app::CameraFilterPack_Edge_Sobel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02466A10, void, OnRenderImage, (app::CameraFilterPack_Edge_Sobel * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Edge_Sobel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02466D00, void, OnDisable, (app::CameraFilterPack_Edge_Sobel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, (app::CameraFilterPack_Edge_Sobel * this_ptr))
}
