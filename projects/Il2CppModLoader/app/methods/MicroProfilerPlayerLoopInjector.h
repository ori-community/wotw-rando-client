#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MicroProfilerPlayerLoopInjector {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InjectToPlayerLoop, (app::PlayerLoopSystem * player_loop))
}
