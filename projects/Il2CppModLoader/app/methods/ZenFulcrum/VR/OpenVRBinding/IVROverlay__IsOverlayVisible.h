#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__IsOverlayVisible {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_IsOverlayVisible * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02A521E0, bool, Invoke, (app::IVROverlay_IsOverlayVisible * this_ptr, uint64_t ul_overlay_handle))
    IL2CPP_REGISTER_METHOD(0x02D7DCC0, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_IsOverlayVisible * this_ptr, uint64_t ul_overlay_handle, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::IVROverlay_IsOverlayVisible * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__IsOverlayVisible
