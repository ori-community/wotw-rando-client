#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberInteractionShaderManager {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::UberInteractionShaderManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::UberInteractionShaderManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UberInteractionShaderManager * this_ptr))
}
