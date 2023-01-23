#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Film_ColorPerfection.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Film_ColorPerfection {
    IL2CPP_REGISTER_METHOD(0x02476090, app::Material*, get_material, (app::CameraFilterPack_Film_ColorPerfection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02476270, void, Start, (app::CameraFilterPack_Film_ColorPerfection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024763F0, void, OnRenderImage, (app::CameraFilterPack_Film_ColorPerfection * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024767C0, void, OnValidate, (app::CameraFilterPack_Film_ColorPerfection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02476860, void, Update, (app::CameraFilterPack_Film_ColorPerfection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02476900, void, OnDisable, (app::CameraFilterPack_Film_ColorPerfection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024769E0, void, ctor, (app::CameraFilterPack_Film_ColorPerfection * this_ptr))
} // namespace app::classes::CameraFilterPack_Film_ColorPerfection
