#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Vision_Plasma {
    IL2CPP_REGISTER_METHOD(0x020F8380, app::Material *, get_material, (app::CameraFilterPack_Vision_Plasma * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F8560, void, Start, (app::CameraFilterPack_Vision_Plasma * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F86E0, void, OnRenderImage, (app::CameraFilterPack_Vision_Plasma * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x020F8AB0, void, OnValidate, (app::CameraFilterPack_Vision_Plasma * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F8B50, void, Update, (app::CameraFilterPack_Vision_Plasma * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F8BF0, void, OnDisable, (app::CameraFilterPack_Vision_Plasma * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F8CD0, void, ctor, (app::CameraFilterPack_Vision_Plasma * this_ptr))
}
