#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_AAA_SuperHexagon.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_AAA_SuperHexagon {
    IL2CPP_REGISTER_METHOD(0x0273D340, app::Material*, get_material, (app::CameraFilterPack_AAA_SuperHexagon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273D520, void, Start, (app::CameraFilterPack_AAA_SuperHexagon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273D720, void, OnRenderImage, (app::CameraFilterPack_AAA_SuperHexagon * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x0273DCA0, void, OnValidate, (app::CameraFilterPack_AAA_SuperHexagon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273DDC0, void, Update, (app::CameraFilterPack_AAA_SuperHexagon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273DF10, void, OnDisable, (app::CameraFilterPack_AAA_SuperHexagon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273DFF0, void, ctor, (app::CameraFilterPack_AAA_SuperHexagon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273E050, void, cctor, ())
} // namespace app::classes::CameraFilterPack_AAA_SuperHexagon
