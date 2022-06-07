#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::CVRRenderModels__GetComponentStatePacked {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::CVRRenderModels_GetComponentStatePacked * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x0167AA00, bool, Invoke, (app::CVRRenderModels_GetComponentStatePacked * this_ptr, app::String * pch_render_model_name, app::String * pch_component_name, app::VRControllerState_t_Packed * p_controller_state, app::RenderModel_ControllerMode_State_t * p_state, app::RenderModel_ComponentState_t * p_component_state))
    IL2CPP_REGISTER_METHOD(0x0167B110, app::IAsyncResult *, BeginInvoke, (app::CVRRenderModels_GetComponentStatePacked * this_ptr, app::String * pch_render_model_name, app::String * pch_component_name, app::VRControllerState_t_Packed * p_controller_state, app::RenderModel_ControllerMode_State_t * p_state, app::RenderModel_ComponentState_t * p_component_state, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x0167B230, bool, EndInvoke, (app::CVRRenderModels_GetComponentStatePacked * this_ptr, app::VRControllerState_t_Packed * p_controller_state, app::RenderModel_ControllerMode_State_t * p_state, app::RenderModel_ComponentState_t * p_component_state, app::IAsyncResult * result))
}
