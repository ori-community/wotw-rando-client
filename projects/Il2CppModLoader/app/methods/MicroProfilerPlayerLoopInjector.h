#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MicroProfilerPlayerLoopInjector {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InjectToPlayerLoop, (app::PlayerLoopSystem * player_loop))
}
