#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Colorful::BaseEffect {
    IL2CPP_REGISTER_METHOD(0x0303DB90, app::Shader*, get_ShaderSafe, (app::BaseEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0303DCA0, app::Material*, get_Material, (app::BaseEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0303DE90, void, Start, (app::BaseEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0303E0C0, void, OnDisable, (app::BaseEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0303E1A0, void, Apply, (app::BaseEffect * this_ptr, app::Texture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRenderImage, (app::BaseEffect * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x0303E3A0, app::String*, GetShaderName, (app::BaseEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::BaseEffect * this_ptr))
} // namespace app::classes::Colorful::BaseEffect
