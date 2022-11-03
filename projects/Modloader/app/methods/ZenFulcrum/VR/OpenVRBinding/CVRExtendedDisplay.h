#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRExtendedDisplay {
    IL2CPP_REGISTER_METHOD(0x016786F0, void, ctor, (app::CVRExtendedDisplay * this_ptr, void* p_interface))
    IL2CPP_REGISTER_METHOD(0x01678810, void, GetWindowBounds, (app::CVRExtendedDisplay * this_ptr, int32_t* pn_x, int32_t* pn_y, uint32_t* pn_width, uint32_t* pn_height))
    IL2CPP_REGISTER_METHOD(0x01678850, void, GetEyeOutputViewport, (app::CVRExtendedDisplay * this_ptr, app::EVREye__Enum e_eye, uint32_t* pn_x, uint32_t* pn_y, uint32_t* pn_width, uint32_t* pn_height))
    IL2CPP_REGISTER_METHOD(0x01678890, void, GetDXGIOutputInfo, (app::CVRExtendedDisplay * this_ptr, int32_t* pn_adapter_index, int32_t* pn_adapter_output_index))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRExtendedDisplay
