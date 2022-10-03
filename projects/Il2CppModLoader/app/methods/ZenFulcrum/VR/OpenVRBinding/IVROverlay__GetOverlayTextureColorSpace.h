#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTextureColorSpace {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_GetOverlayTextureColorSpace * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02188B40, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayTextureColorSpace * this_ptr, uint64_t ul_overlay_handle, app::EColorSpace__Enum* pe_texture_color_space))
    IL2CPP_REGISTER_METHOD(0x02D7C8E0, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_GetOverlayTextureColorSpace * this_ptr, uint64_t ul_overlay_handle, app::EColorSpace__Enum* pe_texture_color_space, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayTextureColorSpace * this_ptr, app::EColorSpace__Enum* pe_texture_color_space, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTextureColorSpace
