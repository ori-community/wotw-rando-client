#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVROverlay_SetOverlayTextureColorSpace.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EColorSpace__Enum.h>
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTextureColorSpace {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_SetOverlayTextureColorSpace * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00F54C90, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayTextureColorSpace * this_ptr, uint64_t ul_overlay_handle, app::EColorSpace__Enum e_texture_color_space))
    IL2CPP_REGISTER_METHOD(0x02D80FD0, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_SetOverlayTextureColorSpace * this_ptr, uint64_t ul_overlay_handle, app::EColorSpace__Enum e_texture_color_space, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayTextureColorSpace * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTextureColorSpace
