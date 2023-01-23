#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RenderModel_t_Packed__Boxed.h>
#include <Modloader/app/structs/RenderModel_t.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::RenderModel_t_Packed {
    IL2CPP_REGISTER_METHOD(0x00121380, void, ctor, (app::RenderModel_t_Packed__Boxed * this_ptr, app::RenderModel_t unpacked))
    IL2CPP_REGISTER_METHOD(0x001213D0, void, Unpack, (app::RenderModel_t_Packed__Boxed * this_ptr, app::RenderModel_t* unpacked))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::RenderModel_t_Packed
