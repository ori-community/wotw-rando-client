#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Edge_Sigmoid {
    IL2CPP_REGISTER_METHOD(0x02465DD0, app::Material *, get_material, (app::CameraFilterPack_Edge_Sigmoid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02465FB0, void, Start, (app::CameraFilterPack_Edge_Sigmoid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02466120, void, OnRenderImage, (app::CameraFilterPack_Edge_Sigmoid * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x024664C0, void, OnValidate, (app::CameraFilterPack_Edge_Sigmoid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02466550, void, Update, (app::CameraFilterPack_Edge_Sigmoid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024665E0, void, OnDisable, (app::CameraFilterPack_Edge_Sigmoid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024666C0, void, ctor, (app::CameraFilterPack_Edge_Sigmoid * this_ptr))
}
