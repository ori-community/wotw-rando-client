#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpriteAnimatorSerializer {
    IL2CPP_REGISTER_METHOD(0x009AC500, void, OnValidate, (app::SpriteAnimatorSerializer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AC590, void, Serialize, (app::SpriteAnimatorSerializer * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SpriteAnimatorSerializer * this_ptr))
}
