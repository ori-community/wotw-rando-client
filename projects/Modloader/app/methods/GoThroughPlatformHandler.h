#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GoThroughPlatformHandler.h>

namespace app::classes::GoThroughPlatformHandler {
    IL2CPP_REGISTER_METHOD(0x007FC330, void, ProvideComponent, (app::GoThroughPlatformHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FC410, void, Awake, (app::GoThroughPlatformHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FC6F0, void, OnDestroy, (app::GoThroughPlatformHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FC890, bool, FallThroughPlatform, (app::GoThroughPlatformHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FD110, void, FixedUpdate, (app::GoThroughPlatformHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FD110, void, OnRestoreCheckpoint, (app::GoThroughPlatformHandler * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471E7F8, GoThroughPlatformHandler_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x007FD120, void, OnEnable, (app::GoThroughPlatformHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FD130, void, UpdateColliders, (app::GoThroughPlatformHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FDC50, bool, get_Ignore, ())
    IL2CPP_REGISTER_METHOD(0x007FDCF0, void, UpdateLayerCollision, (app::GoThroughPlatformHandler * this_ptr, bool ignore, bool force))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::GoThroughPlatformHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FDE70, void, cctor, ())
} // namespace app::classes::GoThroughPlatformHandler
