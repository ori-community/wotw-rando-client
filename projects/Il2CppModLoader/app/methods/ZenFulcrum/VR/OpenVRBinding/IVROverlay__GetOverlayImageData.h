#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayImageData {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_GetOverlayImageData * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02D7ACF0, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayImageData * this_ptr, uint64_t ul_overlay_handle, void* pv_buffer, uint32_t un_buffer_size, uint32_t* pun_width, uint32_t* pun_height))
    IL2CPP_REGISTER_METHOD(0x02D7B190, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_GetOverlayImageData * this_ptr, uint64_t ul_overlay_handle, void* pv_buffer, uint32_t un_buffer_size, uint32_t* pun_width, uint32_t* pun_height, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F530B0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayImageData * this_ptr, uint32_t* pun_width, uint32_t* pun_height, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayImageData
