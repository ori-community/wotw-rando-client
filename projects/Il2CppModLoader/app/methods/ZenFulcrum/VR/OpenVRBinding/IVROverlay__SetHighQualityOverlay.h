#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetHighQualityOverlay {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_SetHighQualityOverlay * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x00F55110, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_SetHighQualityOverlay * this_ptr, uint64_t ul_overlay_handle))
    IL2CPP_REGISTER_METHOD(0x02D7E1A0, app::IAsyncResult *, BeginInvoke, (app::IVROverlay_SetHighQualityOverlay * this_ptr, uint64_t ul_overlay_handle, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetHighQualityOverlay * this_ptr, app::IAsyncResult * result))
}
