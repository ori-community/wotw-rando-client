#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Vision_Blood {
    IL2CPP_REGISTER_METHOD(0x020F5700, app::Material*, get_material, (app::CameraFilterPack_Vision_Blood * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F58E0, void, Start, (app::CameraFilterPack_Vision_Blood * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F5A30, void, OnRenderImage, (app::CameraFilterPack_Vision_Blood * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Vision_Blood * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F5E00, void, OnDisable, (app::CameraFilterPack_Vision_Blood * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F5EE0, void, ctor, (app::CameraFilterPack_Vision_Blood * this_ptr))
} // namespace app::classes::CameraFilterPack_Vision_Blood
