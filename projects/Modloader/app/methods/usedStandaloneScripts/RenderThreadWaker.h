#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerLoopSystem.h>
#include <Modloader/app/structs/RenderThreadWaker.h>

namespace app::classes::usedStandaloneScripts::RenderThreadWaker {
    IL2CPP_REGISTER_METHOD(0x03126C00, bool, get_Enabled, )
    IL2CPP_REGISTER_METHOD(0x03126CA0, void, set_Enabled, bool value)
    IL2CPP_REGISTER_METHOD(0x03126D50, void, WakeupRT, )
    IL2CPP_REGISTER_METHOD(0x03126F10, void, InjectToPlayerLoop, app::PlayerLoopSystem* player_loop)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RenderThreadWaker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03127190, void, cctor, )
} // namespace app::classes::usedStandaloneScripts::RenderThreadWaker
