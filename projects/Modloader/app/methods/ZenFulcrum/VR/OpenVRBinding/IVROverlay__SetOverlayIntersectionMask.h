#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayIntersectionMask {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_SetOverlayIntersectionMask * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02D7FD40, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayIntersectionMask * this_ptr, uint64_t ul_overlay_handle, app::VROverlayIntersectionMaskPrimitive_t* p_mask_primitives, uint32_t un_num_mask_primitives, uint32_t un_primitive_size))
    IL2CPP_REGISTER_METHOD(0x02D80150, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_SetOverlayIntersectionMask * this_ptr, uint64_t ul_overlay_handle, app::VROverlayIntersectionMaskPrimitive_t* p_mask_primitives, uint32_t un_num_mask_primitives, uint32_t un_primitive_size, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayIntersectionMask * this_ptr, app::VROverlayIntersectionMaskPrimitive_t* p_mask_primitives, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayIntersectionMask
