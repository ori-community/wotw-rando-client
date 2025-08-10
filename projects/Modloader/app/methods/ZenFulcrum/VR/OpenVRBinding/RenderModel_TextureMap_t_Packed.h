#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RenderModel_TextureMap_t.h>
#include <Modloader/app/structs/RenderModel_TextureMap_t_Packed__Boxed.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::RenderModel_TextureMap_t_Packed {
    IL2CPP_REGISTER_METHOD(0x00121340, void, ctor, app::RenderModel_TextureMap_t_Packed__Boxed* this_ptr, app::RenderModel_TextureMap_t unpacked)
    IL2CPP_REGISTER_METHOD(0x00121360, void, Unpack, app::RenderModel_TextureMap_t_Packed__Boxed* this_ptr, app::RenderModel_TextureMap_t* unpacked)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::RenderModel_TextureMap_t_Packed
