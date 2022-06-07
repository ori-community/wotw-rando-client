#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Drawing_CellShading {
    IL2CPP_REGISTER_METHOD(0x024EE970, app::Material *, get_material, (app::CameraFilterPack_Drawing_CellShading * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EEB50, void, Start, (app::CameraFilterPack_Drawing_CellShading * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EECC0, void, OnRenderImage, (app::CameraFilterPack_Drawing_CellShading * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x024EF090, void, OnValidate, (app::CameraFilterPack_Drawing_CellShading * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EF120, void, Update, (app::CameraFilterPack_Drawing_CellShading * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EF1B0, void, OnDisable, (app::CameraFilterPack_Drawing_CellShading * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EF290, void, ctor, (app::CameraFilterPack_Drawing_CellShading * this_ptr))
}
