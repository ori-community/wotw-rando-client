#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Drawing_BluePrint {
    IL2CPP_REGISTER_METHOD(0x024EDFF0, app::Material*, get_material, (app::CameraFilterPack_Drawing_BluePrint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EE1D0, void, Start, (app::CameraFilterPack_Drawing_BluePrint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EE350, void, OnRenderImage, (app::CameraFilterPack_Drawing_BluePrint * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Drawing_BluePrint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EE830, void, OnDisable, (app::CameraFilterPack_Drawing_BluePrint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EE910, void, ctor, (app::CameraFilterPack_Drawing_BluePrint * this_ptr))
} // namespace app::classes::CameraFilterPack_Drawing_BluePrint
