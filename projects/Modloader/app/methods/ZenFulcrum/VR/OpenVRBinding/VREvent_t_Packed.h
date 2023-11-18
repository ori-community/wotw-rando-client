#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VREvent_t_Packed__Boxed.h>
#include <Modloader/app/structs/VREvent_t.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::VREvent_t_Packed {
    IL2CPP_REGISTER_METHOD(0x00121520, void, ctor, (app::VREvent_t_Packed__Boxed * this_ptr, app::VREvent_t unpacked))
    IL2CPP_REGISTER_METHOD(0x00121560, void, Unpack, (app::VREvent_t_Packed__Boxed * this_ptr, app::VREvent_t* unpacked))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::VREvent_t_Packed
