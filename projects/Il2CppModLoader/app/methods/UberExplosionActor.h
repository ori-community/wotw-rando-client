#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberExplosionActor {
    IL2CPP_REGISTER_METHOD(0x013E84D0, void, Start, (app::UberExplosionActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E8500, void, ExplodeThis, (app::UberExplosionActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E84D0, void, OnPoolSpawned, (app::UberExplosionActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058F360, void, OnPoolDespawned, (app::UberExplosionActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E84D0, void, ExplodeAtStartIfNeeded, (app::UberExplosionActor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E86E0, void, ctor, (app::UberExplosionActor * this_ptr))
}
