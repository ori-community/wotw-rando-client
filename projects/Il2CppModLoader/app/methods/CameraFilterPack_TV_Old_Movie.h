#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_TV_Old_Movie {
    IL2CPP_REGISTER_METHOD(0x020EB3C0, app::Material*, get_material, (app::CameraFilterPack_TV_Old_Movie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EB5A0, void, Start, (app::CameraFilterPack_TV_Old_Movie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EB710, void, OnRenderImage, (app::CameraFilterPack_TV_Old_Movie * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x020EB950, void, OnValidate, (app::CameraFilterPack_TV_Old_Movie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EB9E0, void, Update, (app::CameraFilterPack_TV_Old_Movie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EBA70, void, OnDisable, (app::CameraFilterPack_TV_Old_Movie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E8940, void, ctor, (app::CameraFilterPack_TV_Old_Movie * this_ptr))
} // namespace app::classes::CameraFilterPack_TV_Old_Movie
