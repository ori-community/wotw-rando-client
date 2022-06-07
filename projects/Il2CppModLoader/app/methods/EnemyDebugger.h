#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::EnemyDebugger {
    IL2CPP_REGISTER_METHOD(0x00C048B0, void, DrawGeneralInfo, ())
    IL2CPP_REGISTER_METHOD(0x00C05070, void, DrawWormInfo, ())
}
