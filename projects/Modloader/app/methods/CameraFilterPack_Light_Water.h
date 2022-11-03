#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Light_Water {
    IL2CPP_REGISTER_METHOD(0x0247F500, app::Material*, get_material, (app::CameraFilterPack_Light_Water * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247F6E0, void, Start, (app::CameraFilterPack_Light_Water * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247F850, void, OnRenderImage, (app::CameraFilterPack_Light_Water * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x0247FBF0, void, OnValidate, (app::CameraFilterPack_Light_Water * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247FC80, void, Update, (app::CameraFilterPack_Light_Water * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247FD10, void, OnDisable, (app::CameraFilterPack_Light_Water * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247FDF0, void, ctor, (app::CameraFilterPack_Light_Water * this_ptr))
} // namespace app::classes::CameraFilterPack_Light_Water
