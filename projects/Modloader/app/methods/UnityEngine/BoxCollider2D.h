#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/BoxCollider2D.h>

namespace app::classes::UnityEngine::BoxCollider2D {
    IL2CPP_REGISTER_METHOD(0x0316CB60, app::Vector2, get_size, (app::BoxCollider2D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0316CBD0, void, get_size_Injected, (app::BoxCollider2D * this_ptr, app::Vector2* ret))
} // namespace app::classes::UnityEngine::BoxCollider2D
