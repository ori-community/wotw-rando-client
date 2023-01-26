#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberShaderAtlasUtilities.h>

namespace app::classes::UberShaderAtlasUtilities {
    IL2CPP_REGISTER_METHOD(0x0190AB80, bool, get_DisableAtlas, ())
    IL2CPP_REGISTER_METHOD(0x0190AC20, void, set_DisableAtlas, (bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UberShaderAtlasUtilities * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190ACD0, void, cctor, ())
} // namespace app::classes::UberShaderAtlasUtilities
