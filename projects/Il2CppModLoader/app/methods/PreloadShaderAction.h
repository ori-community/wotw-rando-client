#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PreloadShaderAction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Perform, (app::PreloadShaderAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::PreloadShaderAction * this_ptr))
}
