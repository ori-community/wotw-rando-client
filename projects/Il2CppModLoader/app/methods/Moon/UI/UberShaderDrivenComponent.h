#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::UI::UberShaderDrivenComponent {
    IL2CPP_REGISTER_METHOD(0x008009A0, void, Awake, (app::UberShaderDrivenComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D24000, void, OnActivated, (app::UberShaderDrivenComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0118B8C0, void, OnDeactivated, (app::UberShaderDrivenComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0118B8D0, void, Update, (app::UberShaderDrivenComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpriteCreated, (app::UberShaderDrivenComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, UpdateViewMode, (app::UberShaderDrivenComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0118BA10, app::Transform*, get_Sprite, (app::UberShaderDrivenComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0118BB80, app::UberShaderComponent*, get_UberShader, (app::UberShaderDrivenComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::UberShaderDrivenComponent * this_ptr))
} // namespace app::classes::Moon::UI::UberShaderDrivenComponent
