#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_FX_Spot {
    IL2CPP_REGISTER_METHOD(0x024747A0, app::Material*, get_material, (app::CameraFilterPack_FX_Spot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02474980, void, Start, (app::CameraFilterPack_FX_Spot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02474B10, void, OnRenderImage, (app::CameraFilterPack_FX_Spot * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02474EB0, void, OnValidate, (app::CameraFilterPack_FX_Spot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02474F60, void, Update, (app::CameraFilterPack_FX_Spot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02475010, void, OnDisable, (app::CameraFilterPack_FX_Spot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024750F0, void, ctor, (app::CameraFilterPack_FX_Spot * this_ptr))
} // namespace app::classes::CameraFilterPack_FX_Spot
