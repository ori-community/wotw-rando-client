#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetRecommendedRenderTargetSize {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_GetRecommendedRenderTargetSize * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x012E7480, void, Invoke, (app::IVRSystem_GetRecommendedRenderTargetSize * this_ptr, uint32_t* pn_width, uint32_t* pn_height))
    IL2CPP_REGISTER_METHOD(0x02CEE4D0, app::IAsyncResult*, BeginInvoke, (app::IVRSystem_GetRecommendedRenderTargetSize * this_ptr, uint32_t* pn_width, uint32_t* pn_height, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x012E78E0, void, EndInvoke, (app::IVRSystem_GetRecommendedRenderTargetSize * this_ptr, uint32_t* pn_width, uint32_t* pn_height, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetRecommendedRenderTargetSize
