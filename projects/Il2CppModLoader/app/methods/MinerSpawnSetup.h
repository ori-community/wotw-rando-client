#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MinerSpawnSetup {
    IL2CPP_REGISTER_METHOD(0x0144FAF0, void, TriggerWallBurstTimeline, (app::MinerSpawnSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0144FB30, void, OnCheckpointRestore, (app::MinerSpawnSetup * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471A1E0, MinerSpawnSetup_OnCheckpointRestore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0144FC90, void, Awake, (app::MinerSpawnSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0144FE30, void, OnDestroy, (app::MinerSpawnSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0144FFD0, void, OnDrawGizmos, (app::MinerSpawnSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MinerSpawnSetup * this_ptr))
} // namespace app::classes::MinerSpawnSetup
