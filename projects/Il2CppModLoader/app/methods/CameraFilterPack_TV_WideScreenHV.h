#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_TV_WideScreenHV {
    IL2CPP_REGISTER_METHOD(0x020F1E00, app::Material*, get_material, (app::CameraFilterPack_TV_WideScreenHV * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F1FE0, void, Start, (app::CameraFilterPack_TV_WideScreenHV * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F2160, void, OnRenderImage, (app::CameraFilterPack_TV_WideScreenHV * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x020F2530, void, OnValidate, (app::CameraFilterPack_TV_WideScreenHV * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F25D0, void, Update, (app::CameraFilterPack_TV_WideScreenHV * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F2670, void, OnDisable, (app::CameraFilterPack_TV_WideScreenHV * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F1DD0, void, ctor, (app::CameraFilterPack_TV_WideScreenHV * this_ptr))
} // namespace app::classes::CameraFilterPack_TV_WideScreenHV
