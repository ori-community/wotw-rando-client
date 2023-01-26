#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVROverlay_SetOverlayAlpha.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayAlpha {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_SetOverlayAlpha * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02D7E860, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayAlpha * this_ptr, uint64_t ul_overlay_handle, float f_alpha))
    IL2CPP_REGISTER_METHOD(0x02D7EBE0, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_SetOverlayAlpha * this_ptr, uint64_t ul_overlay_handle, float f_alpha, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayAlpha * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayAlpha
