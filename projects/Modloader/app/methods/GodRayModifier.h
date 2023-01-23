#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GodRayModifier.h>
#include <Modloader/app/structs/Renderer.h>

namespace app::classes::GodRayModifier {
    IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_Renderered, (app::GodRayModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00800850, void, set_Renderered, (app::GodRayModifier * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00800860, app::Renderer*, GetRenderer, (app::GodRayModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetProperties, (app::GodRayModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00800870, void, UberShaderEditorUpdate, (app::GodRayModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008009A0, void, OnValidate, (app::GodRayModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, DoStrip, (app::GodRayModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008009C0, void, OnEnable, (app::GodRayModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00800AA0, void, OnDisable, (app::GodRayModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00800B80, void, ctor, (app::GodRayModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00800BE0, void, cctor, ())
} // namespace app::classes::GodRayModifier
