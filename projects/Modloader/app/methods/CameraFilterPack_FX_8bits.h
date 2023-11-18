#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_FX_8bits.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_FX_8bits {
    IL2CPP_REGISTER_METHOD(0x02467CF0, app::Material*, get_material, (app::CameraFilterPack_FX_8bits * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02467ED0, void, Start, (app::CameraFilterPack_FX_8bits * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02468050, void, OnRenderImage, (app::CameraFilterPack_FX_8bits * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024683F0, void, OnValidate, (app::CameraFilterPack_FX_8bits * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02468490, void, Update, (app::CameraFilterPack_FX_8bits * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02468540, void, OnDisable, (app::CameraFilterPack_FX_8bits * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02468620, void, ctor, (app::CameraFilterPack_FX_8bits * this_ptr))
} // namespace app::classes::CameraFilterPack_FX_8bits
