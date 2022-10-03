#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Light_Rainbow {
    IL2CPP_REGISTER_METHOD(0x0247E400, app::Material*, get_material, (app::CameraFilterPack_Light_Rainbow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247E5E0, void, Start, (app::CameraFilterPack_Light_Rainbow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247E750, void, OnRenderImage, (app::CameraFilterPack_Light_Rainbow * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x0247EA70, void, OnValidate, (app::CameraFilterPack_Light_Rainbow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247EB00, void, Update, (app::CameraFilterPack_Light_Rainbow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247EB90, void, OnDisable, (app::CameraFilterPack_Light_Rainbow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247EC70, void, ctor, (app::CameraFilterPack_Light_Rainbow * this_ptr))
} // namespace app::classes::CameraFilterPack_Light_Rainbow
