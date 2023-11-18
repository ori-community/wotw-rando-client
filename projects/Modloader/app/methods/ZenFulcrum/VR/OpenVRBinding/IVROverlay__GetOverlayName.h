#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVROverlay_GetOverlayName.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StringBuilder.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayName {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_GetOverlayName * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02D7B390, uint32_t, Invoke, (app::IVROverlay_GetOverlayName * this_ptr, uint64_t ul_overlay_handle, app::StringBuilder* pch_value, uint32_t un_buffer_size, app::EVROverlayError__Enum* p_error))
    IL2CPP_REGISTER_METHOD(0x02D7B990, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_GetOverlayName * this_ptr, uint64_t ul_overlay_handle, app::StringBuilder* pch_value, uint32_t un_buffer_size, app::EVROverlayError__Enum* p_error, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, uint32_t, EndInvoke, (app::IVROverlay_GetOverlayName * this_ptr, app::EVROverlayError__Enum* p_error, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayName
