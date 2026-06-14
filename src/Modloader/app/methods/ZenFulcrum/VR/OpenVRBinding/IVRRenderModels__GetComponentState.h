#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRRenderModels_GetComponentState.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RenderModel_ComponentState_t.h>
#include <Modloader/app/structs/RenderModel_ControllerMode_State_t.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/VRControllerState_t.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetComponentState {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRRenderModels_GetComponentState* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x0167AA00,
        bool,
        Invoke,
        app::IVRRenderModels_GetComponentState* this_ptr,
        app::String* pch_render_model_name,
        app::String* pch_component_name,
        app::VRControllerState_t* p_controller_state,
        app::RenderModel_ControllerMode_State_t* p_state,
        app::RenderModel_ComponentState_t* p_component_state
    )
    IL2CPP_REGISTER_METHOD(
        0x02CE3B70,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRRenderModels_GetComponentState* this_ptr,
        app::String* pch_render_model_name,
        app::String* pch_component_name,
        app::VRControllerState_t* p_controller_state,
        app::RenderModel_ControllerMode_State_t* p_state,
        app::RenderModel_ComponentState_t* p_component_state,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x0167B230,
        bool,
        EndInvoke,
        app::IVRRenderModels_GetComponentState* this_ptr,
        app::VRControllerState_t* p_controller_state,
        app::RenderModel_ControllerMode_State_t* p_state,
        app::RenderModel_ComponentState_t* p_component_state,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetComponentState
