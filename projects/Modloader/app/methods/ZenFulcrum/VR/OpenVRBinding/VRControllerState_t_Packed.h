#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VRControllerState_t_Packed__Boxed.h>
#include <Modloader/app/structs/VRControllerState_t.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed {
    IL2CPP_REGISTER_METHOD(0x00121400, void, ctor, (app::VRControllerState_t_Packed__Boxed * this_ptr, app::VRControllerState_t unpacked))
    IL2CPP_REGISTER_METHOD(0x001214A0, void, Unpack, (app::VRControllerState_t_Packed__Boxed * this_ptr, app::VRControllerState_t* unpacked))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed
