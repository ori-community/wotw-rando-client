#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::EnemyDebugger {
    IL2CPP_REGISTER_METHOD(0x00C048B0, void, DrawGeneralInfo, )
    IL2CPP_REGISTER_METHOD(0x00C05070, void, DrawWormInfo, )
} // namespace app::classes::EnemyDebugger
