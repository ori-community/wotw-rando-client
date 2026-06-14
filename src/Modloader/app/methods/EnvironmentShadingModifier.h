#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnvironmentLight.h>
#include <Modloader/app/structs/EnvironmentShadingModifier.h>
#include <Modloader/app/structs/Rect.h>

namespace app::classes::EnvironmentShadingModifier {
    IL2CPP_REGISTER_METHOD(0x006D41F0, float, get_FadeTime, app::EnvironmentShadingModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CA9F10, float, get_CurFade, app::EnvironmentShadingModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CAA030, app::Rect, get_RendererRect, app::EnvironmentShadingModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CAA180, void, Update, app::EnvironmentShadingModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CAA6F0, void, StartFade, app::EnvironmentShadingModifier* this_ptr, app::EnvironmentLight* from)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, DoStrip, app::EnvironmentShadingModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, app::EnvironmentShadingModifier* this_ptr)
} // namespace app::classes::EnvironmentShadingModifier
