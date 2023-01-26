#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Divide.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Blend2Camera_Divide {
    IL2CPP_REGISTER_METHOD(0x0274A360, app::Material*, get_material, (app::CameraFilterPack_Blend2Camera_Divide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274A540, void, Start, (app::CameraFilterPack_Blend2Camera_Divide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274A900, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_Divide * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x0274ACF0, void, OnValidate, (app::CameraFilterPack_Blend2Camera_Divide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274AFE0, void, Update, (app::CameraFilterPack_Blend2Camera_Divide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274B070, void, OnEnable, (app::CameraFilterPack_Blend2Camera_Divide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274B340, void, OnDisable, (app::CameraFilterPack_Blend2Camera_Divide * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274B530, void, ctor, (app::CameraFilterPack_Blend2Camera_Divide * this_ptr))
} // namespace app::classes::CameraFilterPack_Blend2Camera_Divide
