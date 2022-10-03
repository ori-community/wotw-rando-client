#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Experimental::Rendering::ScriptableRenderContext {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::ScriptableRenderContext__Boxed * this_ptr, void* ptr))
    IL2CPP_REGISTER_METHOD(0x001F1CA0, void, Submit_Internal, (app::ScriptableRenderContext__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F1D00, void, PrepareDrawRenderers_Internal, (app::ScriptableRenderContext__Boxed * this_ptr, app::FilterResults renderers, app::DrawRendererSettings* draw_settings, app::FilterRenderersSettings filter_settings))
    IL2CPP_REGISTER_METHOD(0x001F1DA0, void, DrawRenderers_Internal, (app::ScriptableRenderContext__Boxed * this_ptr, app::FilterResults renderers, app::DrawRendererSettings* draw_settings, app::FilterRenderersSettings filter_settings))
    IL2CPP_REGISTER_METHOD(0x001F1E40, void, DrawRenderers_StateBlock_Internal, (app::ScriptableRenderContext__Boxed * this_ptr, app::FilterResults renderers, app::DrawRendererSettings* draw_settings, app::FilterRenderersSettings filter_settings, app::RenderStateBlock state_block))
    IL2CPP_REGISTER_METHOD(0x001F1F40, void, ExecuteCommandBuffer_Internal, (app::ScriptableRenderContext__Boxed * this_ptr, app::CommandBuffer* command_buffer, bool copy))
    IL2CPP_REGISTER_METHOD(0x001F1F50, void, SetupCameraProperties_Internal, (app::ScriptableRenderContext__Boxed * this_ptr, app::Camera* camera, bool stereo_setup))
    IL2CPP_REGISTER_METHOD(0x001F1F60, void, DrawSkybox_Internal, (app::ScriptableRenderContext__Boxed * this_ptr, app::Camera* camera))
    IL2CPP_REGISTER_METHOD(0x001F1F70, void, Submit, (app::ScriptableRenderContext__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F1FD0, void, DrawRenderers_1, (app::ScriptableRenderContext__Boxed * this_ptr, app::FilterResults renderers, app::DrawRendererSettings* draw_settings, app::FilterRenderersSettings filter_settings, bool pre_warm))
    IL2CPP_REGISTER_METHOD(0x001F2020, void, DrawRenderers_2, (app::ScriptableRenderContext__Boxed * this_ptr, app::FilterResults renderers, app::DrawRendererSettings* draw_settings, app::FilterRenderersSettings filter_settings, app::RenderStateBlock state_block))
    IL2CPP_REGISTER_METHOD(0x001F20D0, void, ExecuteCommandBuffer, (app::ScriptableRenderContext__Boxed * this_ptr, app::CommandBuffer* command_buffer, bool copy))
    IL2CPP_REGISTER_METHODINFO(0x0476DC58, ScriptableRenderContext_ExecuteCommandBuffer__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F20E0, void, SetupCameraProperties, (app::ScriptableRenderContext__Boxed * this_ptr, app::Camera* camera, bool stereo_setup))
    IL2CPP_REGISTER_METHOD(0x001F2120, void, DrawSkybox, (app::ScriptableRenderContext__Boxed * this_ptr, app::Camera* camera))
    IL2CPP_REGISTER_METHOD(0x001F2130, void, CheckValid, (app::ScriptableRenderContext__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04750CC0, ScriptableRenderContext_CheckValid__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02524AA0, void, Submit_Internal_Injected, (app::ScriptableRenderContext * _unity_self))
    IL2CPP_REGISTER_METHOD(0x02524AF0, void, PrepareDrawRenderers_Internal_Injected, (app::ScriptableRenderContext * _unity_self, app::FilterResults* renderers, app::DrawRendererSettings* draw_settings, app::FilterRenderersSettings* filter_settings))
    IL2CPP_REGISTER_METHOD(0x02524B70, void, DrawRenderers_Internal_Injected, (app::ScriptableRenderContext * _unity_self, app::FilterResults* renderers, app::DrawRendererSettings* draw_settings, app::FilterRenderersSettings* filter_settings))
    IL2CPP_REGISTER_METHOD(0x02524BF0, void, DrawRenderers_StateBlock_Internal_Injected, (app::ScriptableRenderContext * _unity_self, app::FilterResults* renderers, app::DrawRendererSettings* draw_settings, app::FilterRenderersSettings* filter_settings, app::RenderStateBlock* state_block))
    IL2CPP_REGISTER_METHOD(0x02524500, void, ExecuteCommandBuffer_Internal_Injected, (app::ScriptableRenderContext * _unity_self, app::CommandBuffer* command_buffer, bool copy))
    IL2CPP_REGISTER_METHOD(0x02524580, void, SetupCameraProperties_Internal_Injected, (app::ScriptableRenderContext * _unity_self, app::Camera* camera, bool stereo_setup))
    IL2CPP_REGISTER_METHOD(0x02524600, void, DrawSkybox_Internal_Injected, (app::ScriptableRenderContext * _unity_self, app::Camera* camera))
} // namespace app::classes::UnityEngine::Experimental::Rendering::ScriptableRenderContext
