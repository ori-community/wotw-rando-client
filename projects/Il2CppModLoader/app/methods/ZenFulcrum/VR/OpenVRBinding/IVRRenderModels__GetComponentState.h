#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetComponentState {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRRenderModels_GetComponentState * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x0167AA00, bool, Invoke, (app::IVRRenderModels_GetComponentState * this_ptr, app::String * pch_render_model_name, app::String * pch_component_name, app::VRControllerState_t * p_controller_state, app::RenderModel_ControllerMode_State_t * p_state, app::RenderModel_ComponentState_t * p_component_state))
    IL2CPP_REGISTER_METHOD(0x02CE3B70, app::IAsyncResult *, BeginInvoke, (app::IVRRenderModels_GetComponentState * this_ptr, app::String * pch_render_model_name, app::String * pch_component_name, app::VRControllerState_t * p_controller_state, app::RenderModel_ControllerMode_State_t * p_state, app::RenderModel_ComponentState_t * p_component_state, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x0167B230, bool, EndInvoke, (app::IVRRenderModels_GetComponentState * this_ptr, app::VRControllerState_t * p_controller_state, app::RenderModel_ControllerMode_State_t * p_state, app::RenderModel_ComponentState_t * p_component_state, app::IAsyncResult * result))
}
