#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVROverlay_SetOverlayTransformOverlayRelative.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#include <Modloader/app/structs/HmdMatrix34_t.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTransformOverlayRelative {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_SetOverlayTransformOverlayRelative * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CE61E0, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayTransformOverlayRelative * this_ptr, uint64_t ul_overlay_handle, uint64_t ul_overlay_handle_parent, app::HmdMatrix34_t* pmat_parent_overlay_to_overlay_transform))
    IL2CPP_REGISTER_METHOD(0x02D81190, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_SetOverlayTransformOverlayRelative * this_ptr, uint64_t ul_overlay_handle, uint64_t ul_overlay_handle_parent, app::HmdMatrix34_t* pmat_parent_overlay_to_overlay_transform, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayTransformOverlayRelative * this_ptr, app::HmdMatrix34_t* pmat_parent_overlay_to_overlay_transform, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTransformOverlayRelative
