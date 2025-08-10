#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerLoopSystem.h>

namespace app::classes::FrameProfilerPlayerLoopInjector {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginPreloadingCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndPreloadingCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginPlayerLoopCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndPlayerLoopCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginPhysicsCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndPhysicsCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginUpdateTimeCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndUpdateTimeCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginWaitForPresentCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginFixedUpdateCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndFixedUpdateCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginParticleUpdateCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndParticleUpdateCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginParticleEndUpdateCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndParticleEndUpdateCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginUpdateCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndUpdateCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginEarlyUpdateCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndEarlyUpdateCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginPreUpdateCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndPreUpdateCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginPreLateUpdateCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndPreLateUpdateCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginPostLateUpdateCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndPostLateUpdateCallback, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InjectToPlayerLoopEarly, app::PlayerLoopSystem* player_loop)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InjectToPlayerLoopLate, app::PlayerLoopSystem* player_loop)
    IL2CPP_REGISTER_METHOD(0x03152F00, void, cctor, )
} // namespace app::classes::FrameProfilerPlayerLoopInjector
