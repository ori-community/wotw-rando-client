#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_TV_Posterize {
    IL2CPP_REGISTER_METHOD(0x020ECC00, app::Material *, get_material, (app::CameraFilterPack_TV_Posterize * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020ECDE0, void, Start, (app::CameraFilterPack_TV_Posterize * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020ECF50, void, OnRenderImage, (app::CameraFilterPack_TV_Posterize * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x020ED190, void, OnValidate, (app::CameraFilterPack_TV_Posterize * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020ED220, void, Update, (app::CameraFilterPack_TV_Posterize * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020ED2B0, void, OnDisable, (app::CameraFilterPack_TV_Posterize * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020ED390, void, ctor, (app::CameraFilterPack_TV_Posterize * this_ptr))
}
