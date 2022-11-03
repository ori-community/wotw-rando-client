#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Drawing_Crosshatch {
    IL2CPP_REGISTER_METHOD(0x024F03F0, app::Material*, get_material, (app::CameraFilterPack_Drawing_Crosshatch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F05D0, void, Start, (app::CameraFilterPack_Drawing_Crosshatch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F0740, void, OnRenderImage, (app::CameraFilterPack_Drawing_Crosshatch * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024F0A60, void, OnValidate, (app::CameraFilterPack_Drawing_Crosshatch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F0AF0, void, Update, (app::CameraFilterPack_Drawing_Crosshatch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F0B80, void, OnDisable, (app::CameraFilterPack_Drawing_Crosshatch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0248A900, void, ctor, (app::CameraFilterPack_Drawing_Crosshatch * this_ptr))
} // namespace app::classes::CameraFilterPack_Drawing_Crosshatch
