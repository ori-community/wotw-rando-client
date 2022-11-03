#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__ExportLiveToBuffer {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRChaperoneSetup_ExportLiveToBuffer * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01D3D560, bool, Invoke, (app::IVRChaperoneSetup_ExportLiveToBuffer * this_ptr, app::StringBuilder* p_buffer, uint32_t* pn_buffer_length))
    IL2CPP_REGISTER_METHOD(0x02F40010, app::IAsyncResult*, BeginInvoke, (app::IVRChaperoneSetup_ExportLiveToBuffer * this_ptr, app::StringBuilder* p_buffer, uint32_t* pn_buffer_length, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::IVRChaperoneSetup_ExportLiveToBuffer * this_ptr, uint32_t* pn_buffer_length, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__ExportLiveToBuffer
