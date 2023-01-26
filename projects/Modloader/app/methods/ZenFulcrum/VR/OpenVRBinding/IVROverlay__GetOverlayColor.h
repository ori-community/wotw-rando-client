#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVROverlay_GetOverlayColor.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayColor {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_GetOverlayColor * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02D7A530, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayColor * this_ptr, uint64_t ul_overlay_handle, float* pf_red, float* pf_green, float* pf_blue))
    IL2CPP_REGISTER_METHOD(0x02D7A950, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_GetOverlayColor * this_ptr, uint64_t ul_overlay_handle, float* pf_red, float* pf_green, float* pf_blue, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F52A90, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayColor * this_ptr, float* pf_red, float* pf_green, float* pf_blue, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayColor
