#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_TV_CompressionFX {
    IL2CPP_REGISTER_METHOD(0x020E8210, app::Material *, get_material, (app::CameraFilterPack_TV_CompressionFX * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E83F0, void, Start, (app::CameraFilterPack_TV_CompressionFX * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E8540, void, OnRenderImage, (app::CameraFilterPack_TV_CompressionFX * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_TV_CompressionFX * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E8860, void, OnDisable, (app::CameraFilterPack_TV_CompressionFX * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E8940, void, ctor, (app::CameraFilterPack_TV_CompressionFX * this_ptr))
}
