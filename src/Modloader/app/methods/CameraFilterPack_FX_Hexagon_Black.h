#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_FX_Hexagon_Black.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_FX_Hexagon_Black {
    IL2CPP_REGISTER_METHOD(0x024704A0, app::Material*, get_material, app::CameraFilterPack_FX_Hexagon_Black* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02470680, void, Start, app::CameraFilterPack_FX_Hexagon_Black* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024707F0,
        void,
        OnRenderImage,
        app::CameraFilterPack_FX_Hexagon_Black* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x02470B10, void, OnValidate, app::CameraFilterPack_FX_Hexagon_Black* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02470BA0, void, Update, app::CameraFilterPack_FX_Hexagon_Black* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02470C30, void, OnDisable, app::CameraFilterPack_FX_Hexagon_Black* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020E70F0, void, ctor, app::CameraFilterPack_FX_Hexagon_Black* this_ptr)
} // namespace app::classes::CameraFilterPack_FX_Hexagon_Black
