#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CVRSystem_GetControllerStatePacked.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/VRControllerState_t_Packed.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRSystem__GetControllerStatePacked {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::CVRSystem_GetControllerStatePacked * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0167D2B0, bool, Invoke, (app::CVRSystem_GetControllerStatePacked * this_ptr, uint32_t un_controller_device_index, app::VRControllerState_t_Packed* p_controller_state, uint32_t un_controller_state_size))
    IL2CPP_REGISTER_METHOD(0x0167D650, app::IAsyncResult*, BeginInvoke, (app::CVRSystem_GetControllerStatePacked * this_ptr, uint32_t un_controller_device_index, app::VRControllerState_t_Packed* p_controller_state, uint32_t un_controller_state_size, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::CVRSystem_GetControllerStatePacked * this_ptr, app::VRControllerState_t_Packed* p_controller_state, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRSystem__GetControllerStatePacked
