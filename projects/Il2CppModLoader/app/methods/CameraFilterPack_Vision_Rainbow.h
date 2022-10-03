#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Vision_Rainbow {
    IL2CPP_REGISTER_METHOD(0x020F9650, app::Material*, get_material, (app::CameraFilterPack_Vision_Rainbow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F9830, void, Start, (app::CameraFilterPack_Vision_Rainbow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F99B0, void, OnRenderImage, (app::CameraFilterPack_Vision_Rainbow * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x020F9DC0, void, OnValidate, (app::CameraFilterPack_Vision_Rainbow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F9E60, void, Update, (app::CameraFilterPack_Vision_Rainbow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F9F00, void, OnDisable, (app::CameraFilterPack_Vision_Rainbow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F9FE0, void, ctor, (app::CameraFilterPack_Vision_Rainbow * this_ptr))
} // namespace app::classes::CameraFilterPack_Vision_Rainbow
