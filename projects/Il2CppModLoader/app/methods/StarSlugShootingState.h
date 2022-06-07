#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::StarSlugShootingState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::StarSlugShootingState * this_ptr, app::StarSlugEnemy * slug))
    IL2CPP_REGISTER_METHOD(0x009B1860, void, OnEnter, (app::StarSlugShootingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SpawnStarSpikes, (app::StarSlugShootingState * this_ptr, app::Vector3 up, app::Vector3 right))
}
