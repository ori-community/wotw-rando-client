#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Blend2Camera_PhotoshopFilters {
    IL2CPP_REGISTER_METHOD(0x02759FB0, app::Material*, get_material, (app::CameraFilterPack_Blend2Camera_PhotoshopFilters * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275A190, void, ChangeFilters, (app::CameraFilterPack_Blend2Camera_PhotoshopFilters * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275A430, void, Start, (app::CameraFilterPack_Blend2Camera_PhotoshopFilters * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275A800, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_PhotoshopFilters * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x0275ABF0, void, OnValidate, (app::CameraFilterPack_Blend2Camera_PhotoshopFilters * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275B070, void, Update, (app::CameraFilterPack_Blend2Camera_PhotoshopFilters * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275B100, void, OnEnable, (app::CameraFilterPack_Blend2Camera_PhotoshopFilters * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275B3D0, void, OnDisable, (app::CameraFilterPack_Blend2Camera_PhotoshopFilters * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275B5C0, void, ctor, (app::CameraFilterPack_Blend2Camera_PhotoshopFilters * this_ptr))
} // namespace app::classes::CameraFilterPack_Blend2Camera_PhotoshopFilters
