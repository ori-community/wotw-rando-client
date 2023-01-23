#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_EXTRA_SHOWFPS.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::CameraFilterPack_EXTRA_SHOWFPS {
    IL2CPP_REGISTER_METHOD(0x02462D60, app::Material*, get_material, (app::CameraFilterPack_EXTRA_SHOWFPS * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02462F40, void, Start, (app::CameraFilterPack_EXTRA_SHOWFPS * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024631F0, void, OnRenderImage, (app::CameraFilterPack_EXTRA_SHOWFPS * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024635C0, void, OnValidate, (app::CameraFilterPack_EXTRA_SHOWFPS * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02463670, app::IEnumerator*, FPSX, (app::CameraFilterPack_EXTRA_SHOWFPS * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024637C0, void, Update, (app::CameraFilterPack_EXTRA_SHOWFPS * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02463950, void, OnDisable, (app::CameraFilterPack_EXTRA_SHOWFPS * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02463A30, void, ctor, (app::CameraFilterPack_EXTRA_SHOWFPS * this_ptr))
} // namespace app::classes::CameraFilterPack_EXTRA_SHOWFPS
