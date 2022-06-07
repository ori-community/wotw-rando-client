#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Motion {
    IL2CPP_REGISTER_METHOD(0x030872F0, void, ctor, (app::Motion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03087380, bool, get_isLooping, (app::Motion * this_ptr))
}
