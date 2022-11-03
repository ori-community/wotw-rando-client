#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_TV_Vintage {
    IL2CPP_REGISTER_METHOD(0x020F0CF0, app::Material*, get_material, (app::CameraFilterPack_TV_Vintage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F0ED0, void, Start, (app::CameraFilterPack_TV_Vintage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F1040, void, OnRenderImage, (app::CameraFilterPack_TV_Vintage * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x020F1280, void, OnValidate, (app::CameraFilterPack_TV_Vintage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F1310, void, Update, (app::CameraFilterPack_TV_Vintage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F13A0, void, OnDisable, (app::CameraFilterPack_TV_Vintage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E8940, void, ctor, (app::CameraFilterPack_TV_Vintage * this_ptr))
} // namespace app::classes::CameraFilterPack_TV_Vintage
