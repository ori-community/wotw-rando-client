#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ClearOverlayTexture {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_ClearOverlayTexture * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x00F55110, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_ClearOverlayTexture * this_ptr, uint64_t ul_overlay_handle))
    IL2CPP_REGISTER_METHOD(0x02D78D60, app::IAsyncResult *, BeginInvoke, (app::IVROverlay_ClearOverlayTexture * this_ptr, uint64_t ul_overlay_handle, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_ClearOverlayTexture * this_ptr, app::IAsyncResult * result))
}
