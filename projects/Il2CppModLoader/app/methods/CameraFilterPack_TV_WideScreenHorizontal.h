#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_TV_WideScreenHorizontal {
    IL2CPP_REGISTER_METHOD(0x020F2750, app::Material *, get_material, (app::CameraFilterPack_TV_WideScreenHorizontal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F2930, void, Start, (app::CameraFilterPack_TV_WideScreenHorizontal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F2AB0, void, OnRenderImage, (app::CameraFilterPack_TV_WideScreenHorizontal * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x020F2E80, void, OnValidate, (app::CameraFilterPack_TV_WideScreenHorizontal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F2F20, void, Update, (app::CameraFilterPack_TV_WideScreenHorizontal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F2FC0, void, OnDisable, (app::CameraFilterPack_TV_WideScreenHorizontal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F1DD0, void, ctor, (app::CameraFilterPack_TV_WideScreenHorizontal * this_ptr))
}
