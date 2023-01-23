#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Blur_DitherOffset.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Blur_DitherOffset {
    IL2CPP_REGISTER_METHOD(0x027659D0, app::Material*, get_material, (app::CameraFilterPack_Blur_DitherOffset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02765BB0, void, Start, (app::CameraFilterPack_Blur_DitherOffset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02765D40, void, OnRenderImage, (app::CameraFilterPack_Blur_DitherOffset * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02766150, void, OnValidate, (app::CameraFilterPack_Blur_DitherOffset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02766200, void, Update, (app::CameraFilterPack_Blur_DitherOffset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027662B0, void, OnDisable, (app::CameraFilterPack_Blur_DitherOffset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D35E0, void, ctor, (app::CameraFilterPack_Blur_DitherOffset * this_ptr))
} // namespace app::classes::CameraFilterPack_Blur_DitherOffset
