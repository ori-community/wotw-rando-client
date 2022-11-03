#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Blend2Camera_BlueScreen {
    IL2CPP_REGISTER_METHOD(0x02742770, app::Material*, get_material, (app::CameraFilterPack_Blend2Camera_BlueScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02742950, void, Start, (app::CameraFilterPack_Blend2Camera_BlueScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02742D40, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_BlueScreen * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02743170, void, Update, (app::CameraFilterPack_Blend2Camera_BlueScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02743220, void, OnEnable, (app::CameraFilterPack_Blend2Camera_BlueScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02743230, void, OnDisable, (app::CameraFilterPack_Blend2Camera_BlueScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02743420, void, ctor, (app::CameraFilterPack_Blend2Camera_BlueScreen * this_ptr))
} // namespace app::classes::CameraFilterPack_Blend2Camera_BlueScreen
