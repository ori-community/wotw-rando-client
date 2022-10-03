#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CrossFadeControl {
    IL2CPP_REGISTER_METHOD(0x00DB8960, void, Awake, (app::CrossFadeControl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB8A30, void, Update, (app::CrossFadeControl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB8AC0, void, OnRenderImage, (app::CrossFadeControl * this_ptr, app::RenderTexture* from, app::RenderTexture* to))
    IL2CPP_REGISTER_METHOD(0x00DB92A0, void, ApplySettings, (app::CrossFadeControl * this_ptr, app::Color p0))
    IL2CPP_REGISTER_METHOD(0x00DB9390, void, OnDestroy, (app::CrossFadeControl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB9430, void, ctor, (app::CrossFadeControl * this_ptr))
} // namespace app::classes::CrossFadeControl
