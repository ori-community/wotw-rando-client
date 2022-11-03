#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::HornBugSpawnSetup {
    IL2CPP_REGISTER_METHOD(0x00B6D770, void, TriggerWallBurstTimeline, (app::HornBugSpawnSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B6D7B0, void, OnCheckpointRestore, (app::HornBugSpawnSetup * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04718538, HornBugSpawnSetup_OnCheckpointRestore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B6D910, void, Awake, (app::HornBugSpawnSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B6DAB0, void, OnDestroy, (app::HornBugSpawnSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B6DC50, void, OnDrawGizmos, (app::HornBugSpawnSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HornBugSpawnSetup * this_ptr))
} // namespace app::classes::HornBugSpawnSetup
