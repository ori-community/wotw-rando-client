#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerLoopSystem.h>

namespace app::classes::MicroProfilerPlayerLoopInjector {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InjectToPlayerLoop, (app::PlayerLoopSystem * player_loop))
}
