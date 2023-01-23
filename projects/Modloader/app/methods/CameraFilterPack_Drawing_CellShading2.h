#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_CellShading2.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Drawing_CellShading2 {
    IL2CPP_REGISTER_METHOD(0x024EF2B0, app::Material*, get_material, (app::CameraFilterPack_Drawing_CellShading2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EF490, void, Start, (app::CameraFilterPack_Drawing_CellShading2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EF600, void, OnRenderImage, (app::CameraFilterPack_Drawing_CellShading2 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024EFA10, void, OnValidate, (app::CameraFilterPack_Drawing_CellShading2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EFAA0, void, Update, (app::CameraFilterPack_Drawing_CellShading2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EFB30, void, OnDisable, (app::CameraFilterPack_Drawing_CellShading2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EFC10, void, ctor, (app::CameraFilterPack_Drawing_CellShading2 * this_ptr))
} // namespace app::classes::CameraFilterPack_Drawing_CellShading2
