#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVRChaperoneSetup_GetLivePhysicalBoundsInfo.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/HmdQuad_t__Array.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetLivePhysicalBoundsInfo {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x019D6DD0, bool, Invoke, (app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo * this_ptr, app::HmdQuad_t__Array* p_quads_buffer, uint32_t* pun_quads_count))
    IL2CPP_REGISTER_METHOD(0x02F402B0, app::IAsyncResult*, BeginInvoke, (app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo * this_ptr, app::HmdQuad_t__Array* p_quads_buffer, uint32_t* pun_quads_count, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo * this_ptr, uint32_t* pun_quads_count, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetLivePhysicalBoundsInfo
