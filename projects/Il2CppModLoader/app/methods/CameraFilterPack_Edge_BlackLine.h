#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Edge_BlackLine {
    IL2CPP_REGISTER_METHOD(0x02463C80, app::Material*, get_material, (app::CameraFilterPack_Edge_BlackLine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02463E60, void, Start, (app::CameraFilterPack_Edge_BlackLine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02463FB0, void, OnRenderImage, (app::CameraFilterPack_Edge_BlackLine * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Edge_BlackLine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02464310, void, OnDisable, (app::CameraFilterPack_Edge_BlackLine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, (app::CameraFilterPack_Edge_BlackLine * this_ptr))
} // namespace app::classes::CameraFilterPack_Edge_BlackLine
