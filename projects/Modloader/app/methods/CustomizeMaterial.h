#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CustomizeMaterial {
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::Texture*, get_LastMainTexture, (app::CustomizeMaterial * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_LastMainTexture, (app::CustomizeMaterial * this_ptr, app::Texture* value))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::CustomizeMaterial * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DBD4D0, void, ctor, (app::CustomizeMaterial * this_ptr))
} // namespace app::classes::CustomizeMaterial
