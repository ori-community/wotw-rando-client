#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Light_Water2 {
    IL2CPP_REGISTER_METHOD(0x0247FE20, app::Material *, get_material, (app::CameraFilterPack_Light_Water2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02480000, void, Start, (app::CameraFilterPack_Light_Water2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02480180, void, OnRenderImage, (app::CameraFilterPack_Light_Water2 * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x02480550, void, OnValidate, (app::CameraFilterPack_Light_Water2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024805F0, void, Update, (app::CameraFilterPack_Light_Water2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02480690, void, OnDisable, (app::CameraFilterPack_Light_Water2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02480770, void, ctor, (app::CameraFilterPack_Light_Water2 * this_ptr))
}
