#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_AAA_SuperComputer {
    IL2CPP_REGISTER_METHOD(0x0273C630, app::Material *, get_material, (app::CameraFilterPack_AAA_SuperComputer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273C810, void, Start, (app::CameraFilterPack_AAA_SuperComputer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273CA00, void, OnRenderImage, (app::CameraFilterPack_AAA_SuperComputer * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x0273CF40, void, OnValidate, (app::CameraFilterPack_AAA_SuperComputer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273D050, void, Update, (app::CameraFilterPack_AAA_SuperComputer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273D180, void, OnDisable, (app::CameraFilterPack_AAA_SuperComputer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273D260, void, ctor, (app::CameraFilterPack_AAA_SuperComputer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273D2B0, void, cctor, ())
}
