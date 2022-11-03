#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_NightVision_4 {
    IL2CPP_REGISTER_METHOD(0x02481790, app::Material*, get_material, (app::CameraFilterPack_NightVision_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02481970, void, ChangeFilters, (app::CameraFilterPack_NightVision_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02481A20, void, Start, (app::CameraFilterPack_NightVision_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02481B10, void, OnRenderImage, (app::CameraFilterPack_NightVision_4 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02482350, void, OnValidate, (app::CameraFilterPack_NightVision_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_NightVision_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02482360, void, OnDisable, (app::CameraFilterPack_NightVision_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02482440, void, ctor, (app::CameraFilterPack_NightVision_4 * this_ptr))
} // namespace app::classes::CameraFilterPack_NightVision_4
