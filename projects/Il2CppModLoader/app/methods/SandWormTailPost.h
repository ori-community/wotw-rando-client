#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SandWormTailPost {
    IL2CPP_REGISTER_METHOD(0x00C26B90, void, InitializeSnakeSolver, (app::SandWormTailPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C26E30, void, Awake, (app::SandWormTailPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C26ED0, void, OnEnable, (app::SandWormTailPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C26EE0, void, LateUpdate, (app::SandWormTailPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C27660, void, ctor, (app::SandWormTailPost * this_ptr))
}
