#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberShaderAtlasUtilities {
    IL2CPP_REGISTER_METHOD(0x0190AB80, bool, get_DisableAtlas, ())
    IL2CPP_REGISTER_METHOD(0x0190AC20, void, set_DisableAtlas, (bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UberShaderAtlasUtilities * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190ACD0, void, cctor, ())
}
