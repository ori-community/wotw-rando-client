#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Vision_Hell_Blood {
    IL2CPP_REGISTER_METHOD(0x020F79F0, app::Material *, get_material, (app::CameraFilterPack_Vision_Hell_Blood * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F7BD0, void, Start, (app::CameraFilterPack_Vision_Hell_Blood * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F7D50, void, OnRenderImage, (app::CameraFilterPack_Vision_Hell_Blood * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x020F8130, void, OnValidate, (app::CameraFilterPack_Vision_Hell_Blood * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F81D0, void, Update, (app::CameraFilterPack_Vision_Hell_Blood * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F8270, void, OnDisable, (app::CameraFilterPack_Vision_Hell_Blood * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F8350, void, ctor, (app::CameraFilterPack_Vision_Hell_Blood * this_ptr))
}
