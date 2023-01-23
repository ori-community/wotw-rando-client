#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRSystem_GetTimeSinceLastVsync.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetTimeSinceLastVsync {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_GetTimeSinceLastVsync * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x019D6DD0, bool, Invoke, (app::IVRSystem_GetTimeSinceLastVsync * this_ptr, float* pf_seconds_since_last_vsync, uint64_t* pul_frame_counter))
    IL2CPP_REGISTER_METHOD(0x02CEEBF0, app::IAsyncResult*, BeginInvoke, (app::IVRSystem_GetTimeSinceLastVsync * this_ptr, float* pf_seconds_since_last_vsync, uint64_t* pul_frame_counter, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0167DD00, bool, EndInvoke, (app::IVRSystem_GetTimeSinceLastVsync * this_ptr, float* pf_seconds_since_last_vsync, uint64_t* pul_frame_counter, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetTimeSinceLastVsync
