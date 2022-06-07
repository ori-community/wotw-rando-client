#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::VerletBody {
    IL2CPP_REGISTER_METHOD(0x02125B80, void, Update, (app::VerletBody * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x02125FF0, void, Clear, (app::VerletBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021260D0, void, ctor, (app::VerletBody * this_ptr))
}
