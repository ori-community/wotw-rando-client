#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::BoxCollider2D {
    IL2CPP_REGISTER_METHOD(0x0316CB60, app::Vector2, get_size, (app::BoxCollider2D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0316CBD0, void, get_size_Injected, (app::BoxCollider2D * this_ptr, app::Vector2 * ret))
}
