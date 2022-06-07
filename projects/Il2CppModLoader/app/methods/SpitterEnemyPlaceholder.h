#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpitterEnemyPlaceholder {
    IL2CPP_REGISTER_METHOD(0x0099F850, app::LegacyEntity *, Instantiate, (app::SpitterEnemyPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A0030, void, ctor, (app::SpitterEnemyPlaceholder * this_ptr))
}
