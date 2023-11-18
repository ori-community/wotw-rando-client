#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_Paper.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Drawing_Paper {
    IL2CPP_REGISTER_METHOD(0x024F89F0, app::Material*, get_material, (app::CameraFilterPack_Drawing_Paper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F8BD0, void, Start, (app::CameraFilterPack_Drawing_Paper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F8D50, void, OnRenderImage, (app::CameraFilterPack_Drawing_Paper * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Drawing_Paper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F9230, void, OnDisable, (app::CameraFilterPack_Drawing_Paper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F9310, void, ctor, (app::CameraFilterPack_Drawing_Paper * this_ptr))
} // namespace app::classes::CameraFilterPack_Drawing_Paper
