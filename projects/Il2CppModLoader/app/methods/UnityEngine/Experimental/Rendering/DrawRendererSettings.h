#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Experimental::Rendering::DrawRendererSettings {
    IL2CPP_REGISTER_METHOD(0x001EC740, void, ctor, (app::DrawRendererSettings__Boxed * this_ptr, app::Camera * camera, app::ShaderPassName shader_pass_name))
    IL2CPP_REGISTER_METHOD(0x001EC750, void, SetShaderPassName, (app::DrawRendererSettings__Boxed * this_ptr, int32_t index, app::ShaderPassName shader_pass_name))
    IL2CPP_REGISTER_METHODINFO(0x0477D4F0, DrawRendererSettings_SetShaderPassName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02433D60, void, InitializeSortSettings, (app::Camera * camera, app::DrawRendererSortSettings * sort_settings))
    IL2CPP_REGISTER_METHOD(0x02433DC0, void, cctor, ())
}
