#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/HmdQuad_t__Array.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0167DDE0, bool, Invoke, (app::IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo * this_ptr, app::HmdQuad_t__Array* p_quads_buffer, uint32_t un_quads_count))
    IL2CPP_REGISTER_METHOD(0x02F40BD0, app::IAsyncResult*, BeginInvoke, (app::IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo * this_ptr, app::HmdQuad_t__Array* p_quads_buffer, uint32_t un_quads_count, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo
