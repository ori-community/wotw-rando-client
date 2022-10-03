#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRExtendedDisplay__GetEyeOutputViewport {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRExtendedDisplay_GetEyeOutputViewport * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CEDA90, void, Invoke, (app::IVRExtendedDisplay_GetEyeOutputViewport * this_ptr, app::EVREye__Enum e_eye, uint32_t* pn_x, uint32_t* pn_y, uint32_t* pn_width, uint32_t* pn_height))
    IL2CPP_REGISTER_METHOD(0x02D78340, app::IAsyncResult*, BeginInvoke, (app::IVRExtendedDisplay_GetEyeOutputViewport * this_ptr, app::EVREye__Enum e_eye, uint32_t* pn_x, uint32_t* pn_y, uint32_t* pn_width, uint32_t* pn_height, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x012DE400, void, EndInvoke, (app::IVRExtendedDisplay_GetEyeOutputViewport * this_ptr, uint32_t* pn_x, uint32_t* pn_y, uint32_t* pn_width, uint32_t* pn_height, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRExtendedDisplay__GetEyeOutputViewport
