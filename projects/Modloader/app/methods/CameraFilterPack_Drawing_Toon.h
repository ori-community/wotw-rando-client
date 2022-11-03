#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Drawing_Toon {
    IL2CPP_REGISTER_METHOD(0x02461BE0, app::Material*, get_material, (app::CameraFilterPack_Drawing_Toon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02461DC0, void, Start, (app::CameraFilterPack_Drawing_Toon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02461F30, void, OnRenderImage, (app::CameraFilterPack_Drawing_Toon * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024621B0, void, OnValidate, (app::CameraFilterPack_Drawing_Toon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02462240, void, Update, (app::CameraFilterPack_Drawing_Toon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024622D0, void, OnDisable, (app::CameraFilterPack_Drawing_Toon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024623B0, void, ctor, (app::CameraFilterPack_Drawing_Toon * this_ptr))
} // namespace app::classes::CameraFilterPack_Drawing_Toon
