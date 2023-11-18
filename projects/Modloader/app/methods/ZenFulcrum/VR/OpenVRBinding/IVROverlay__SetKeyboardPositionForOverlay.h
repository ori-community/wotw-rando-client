#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVROverlay_SetKeyboardPositionForOverlay.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/HmdRect2_t.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetKeyboardPositionForOverlay {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_SetKeyboardPositionForOverlay * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02D7E260, void, Invoke, (app::IVROverlay_SetKeyboardPositionForOverlay * this_ptr, uint64_t ul_overlay_handle, app::HmdRect2_t avoid_rect))
    IL2CPP_REGISTER_METHOD(0x02D7E6A0, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_SetKeyboardPositionForOverlay * this_ptr, uint64_t ul_overlay_handle, app::HmdRect2_t avoid_rect, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVROverlay_SetKeyboardPositionForOverlay * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetKeyboardPositionForOverlay
