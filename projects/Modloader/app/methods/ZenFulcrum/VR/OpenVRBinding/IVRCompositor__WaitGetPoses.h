#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRCompositor_WaitGetPoses.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/EVRCompositorError__Enum.h>
#include <Modloader/app/structs/TrackedDevicePose_t__Array.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__WaitGetPoses {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_WaitGetPoses * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02D77C70, app::EVRCompositorError__Enum, Invoke, (app::IVRCompositor_WaitGetPoses * this_ptr, app::TrackedDevicePose_t__Array* p_render_pose_array, uint32_t un_render_pose_array_count, app::TrackedDevicePose_t__Array* p_game_pose_array, uint32_t un_game_pose_array_count))
    IL2CPP_REGISTER_METHOD(0x02D78080, app::IAsyncResult*, BeginInvoke, (app::IVRCompositor_WaitGetPoses * this_ptr, app::TrackedDevicePose_t__Array* p_render_pose_array, uint32_t un_render_pose_array_count, app::TrackedDevicePose_t__Array* p_game_pose_array, uint32_t un_game_pose_array_count, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVRCompositorError__Enum, EndInvoke, (app::IVRCompositor_WaitGetPoses * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__WaitGetPoses
