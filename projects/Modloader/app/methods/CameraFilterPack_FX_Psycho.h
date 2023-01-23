#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_FX_Psycho.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_FX_Psycho {
    IL2CPP_REGISTER_METHOD(0x02472D00, app::Material*, get_material, (app::CameraFilterPack_FX_Psycho * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02472EE0, void, Start, (app::CameraFilterPack_FX_Psycho * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02473050, void, OnRenderImage, (app::CameraFilterPack_FX_Psycho * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02473290, void, OnValidate, (app::CameraFilterPack_FX_Psycho * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02473320, void, Update, (app::CameraFilterPack_FX_Psycho * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024733B0, void, OnDisable, (app::CameraFilterPack_FX_Psycho * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02473490, void, ctor, (app::CameraFilterPack_FX_Psycho * this_ptr))
} // namespace app::classes::CameraFilterPack_FX_Psycho
