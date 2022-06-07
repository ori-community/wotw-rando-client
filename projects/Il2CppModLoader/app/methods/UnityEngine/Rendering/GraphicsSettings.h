#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Rendering::GraphicsSettings {
    IL2CPP_REGISTER_METHOD(0x02977C40, void, set_useScriptableRenderPipelineBatching, (bool value))
    IL2CPP_REGISTER_METHOD(0x02977C90, app::ScriptableObject *, get_INTERNAL_renderPipelineAsset, ())
    IL2CPP_REGISTER_METHOD(0x007A2FE0, void, set_INTERNAL_renderPipelineAsset, (app::ScriptableObject * value))
    IL2CPP_REGISTER_METHOD(0x02977CE0, app::RenderPipelineAsset *, get_renderPipelineAsset, ())
    IL2CPP_REGISTER_METHOD(0x007A2FE0, void, set_renderPipelineAsset, (app::RenderPipelineAsset * value))
}
