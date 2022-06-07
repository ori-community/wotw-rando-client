#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_TV_Old {
    IL2CPP_REGISTER_METHOD(0x020EAC30, app::Material *, get_material, (app::CameraFilterPack_TV_Old * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EAE10, void, Start, (app::CameraFilterPack_TV_Old * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EAF80, void, OnRenderImage, (app::CameraFilterPack_TV_Old * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x020EB1C0, void, OnValidate, (app::CameraFilterPack_TV_Old * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EB250, void, Update, (app::CameraFilterPack_TV_Old * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EB2E0, void, OnDisable, (app::CameraFilterPack_TV_Old * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E8940, void, ctor, (app::CameraFilterPack_TV_Old * this_ptr))
}
