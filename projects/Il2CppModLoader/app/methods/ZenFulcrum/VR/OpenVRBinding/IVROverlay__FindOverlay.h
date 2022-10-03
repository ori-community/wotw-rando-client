#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__FindOverlay {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_FindOverlay * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02AD6B00, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_FindOverlay * this_ptr, app::String* pch_overlay_key, uint64_t* p_overlay_handle))
    IL2CPP_REGISTER_METHOD(0x02D79B90, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_FindOverlay * this_ptr, app::String* pch_overlay_key, uint64_t* p_overlay_handle, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_FindOverlay * this_ptr, uint64_t* p_overlay_handle, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__FindOverlay
