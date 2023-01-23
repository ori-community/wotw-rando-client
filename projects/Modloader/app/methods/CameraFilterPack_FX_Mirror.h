#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_FX_Mirror.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_FX_Mirror {
    IL2CPP_REGISTER_METHOD(0x02471D90, app::Material*, get_material, (app::CameraFilterPack_FX_Mirror * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02471F70, void, Start, (app::CameraFilterPack_FX_Mirror * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024720C0, void, OnRenderImage, (app::CameraFilterPack_FX_Mirror * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_FX_Mirror * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024723B0, void, OnDisable, (app::CameraFilterPack_FX_Mirror * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, (app::CameraFilterPack_FX_Mirror * this_ptr))
} // namespace app::classes::CameraFilterPack_FX_Mirror
