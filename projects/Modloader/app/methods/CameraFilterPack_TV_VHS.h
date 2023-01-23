#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_TV_VHS.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_TV_VHS {
    IL2CPP_REGISTER_METHOD(0x020EE460, app::Material*, get_material, (app::CameraFilterPack_TV_VHS * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EE640, void, Start, (app::CameraFilterPack_TV_VHS * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EE7C0, void, OnRenderImage, (app::CameraFilterPack_TV_VHS * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x020EEB90, void, OnValidate, (app::CameraFilterPack_TV_VHS * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EEC30, void, Update, (app::CameraFilterPack_TV_VHS * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EECD0, void, OnDisable, (app::CameraFilterPack_TV_VHS * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EEDB0, void, ctor, (app::CameraFilterPack_TV_VHS * this_ptr))
} // namespace app::classes::CameraFilterPack_TV_VHS
