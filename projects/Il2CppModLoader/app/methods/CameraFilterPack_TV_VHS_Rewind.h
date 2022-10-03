#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_TV_VHS_Rewind {
    IL2CPP_REGISTER_METHOD(0x020EEDE0, app::Material*, get_material, (app::CameraFilterPack_TV_VHS_Rewind * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EEFC0, void, Start, (app::CameraFilterPack_TV_VHS_Rewind * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EF140, void, OnRenderImage, (app::CameraFilterPack_TV_VHS_Rewind * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x020EF510, void, OnValidate, (app::CameraFilterPack_TV_VHS_Rewind * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EF5B0, void, Update, (app::CameraFilterPack_TV_VHS_Rewind * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EF650, void, OnDisable, (app::CameraFilterPack_TV_VHS_Rewind * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EF730, void, ctor, (app::CameraFilterPack_TV_VHS_Rewind * this_ptr))
} // namespace app::classes::CameraFilterPack_TV_VHS_Rewind
