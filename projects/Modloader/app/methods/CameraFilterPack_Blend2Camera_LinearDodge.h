#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_LinearDodge.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Blend2Camera_LinearDodge {
    IL2CPP_REGISTER_METHOD(0x02754380, app::Material*, get_material, app::CameraFilterPack_Blend2Camera_LinearDodge* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02754560, void, Start, app::CameraFilterPack_Blend2Camera_LinearDodge* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02754920,
        void,
        OnRenderImage,
        app::CameraFilterPack_Blend2Camera_LinearDodge* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x02754D10, void, OnValidate, app::CameraFilterPack_Blend2Camera_LinearDodge* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02755000, void, Update, app::CameraFilterPack_Blend2Camera_LinearDodge* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02755090, void, OnEnable, app::CameraFilterPack_Blend2Camera_LinearDodge* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02755360, void, OnDisable, app::CameraFilterPack_Blend2Camera_LinearDodge* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02755550, void, ctor, app::CameraFilterPack_Blend2Camera_LinearDodge* this_ptr)
} // namespace app::classes::CameraFilterPack_Blend2Camera_LinearDodge
