#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Vision_Drost {
    IL2CPP_REGISTER_METHOD(0x020F7070, app::Material*, get_material, (app::CameraFilterPack_Vision_Drost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F7250, void, Start, (app::CameraFilterPack_Vision_Drost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F73D0, void, OnRenderImage, (app::CameraFilterPack_Vision_Drost * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x020F77A0, void, OnValidate, (app::CameraFilterPack_Vision_Drost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F7840, void, Update, (app::CameraFilterPack_Vision_Drost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F78E0, void, OnDisable, (app::CameraFilterPack_Vision_Drost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F79C0, void, ctor, (app::CameraFilterPack_Vision_Drost * this_ptr))
} // namespace app::classes::CameraFilterPack_Vision_Drost
