#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_FX_Drunk.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_FX_Drunk {
    IL2CPP_REGISTER_METHOD(0x0246BA60, app::Material*, get_material, (app::CameraFilterPack_FX_Drunk * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246BC40, void, Start, (app::CameraFilterPack_FX_Drunk * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246BDB0, void, OnRenderImage, (app::CameraFilterPack_FX_Drunk * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x0246C0D0, void, OnValidate, (app::CameraFilterPack_FX_Drunk * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246C160, void, Update, (app::CameraFilterPack_FX_Drunk * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246C1F0, void, OnDisable, (app::CameraFilterPack_FX_Drunk * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246C2D0, void, ctor, (app::CameraFilterPack_FX_Drunk * this_ptr))
} // namespace app::classes::CameraFilterPack_FX_Drunk
