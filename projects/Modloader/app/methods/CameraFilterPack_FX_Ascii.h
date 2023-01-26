#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_FX_Ascii.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_FX_Ascii {
    IL2CPP_REGISTER_METHOD(0x02468F30, app::Material*, get_material, (app::CameraFilterPack_FX_Ascii * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02469110, void, Start, (app::CameraFilterPack_FX_Ascii * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02469260, void, OnRenderImage, (app::CameraFilterPack_FX_Ascii * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_FX_Ascii * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02469550, void, OnDisable, (app::CameraFilterPack_FX_Ascii * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, (app::CameraFilterPack_FX_Ascii * this_ptr))
} // namespace app::classes::CameraFilterPack_FX_Ascii
