#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayFromFile {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_SetOverlayFromFile * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02188B40, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayFromFile * this_ptr, uint64_t ul_overlay_handle, app::String* pch_file_path))
    IL2CPP_REGISTER_METHOD(0x02D7FBA0, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_SetOverlayFromFile * this_ptr, uint64_t ul_overlay_handle, app::String* pch_file_path, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayFromFile * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayFromFile
