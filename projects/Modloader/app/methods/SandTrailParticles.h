#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SandTrailParticles {
    IL2CPP_REGISTER_METHOD(0x0057AAC0, app::SuspendableMask__Enum, get_Mask, (app::SandTrailParticles * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C08D30, void, set_Mask, (app::SandTrailParticles * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsSuspended, (app::SandTrailParticles * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C08D40, void, set_IsSuspended, (app::SandTrailParticles * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00C08D60, void, Awake, (app::SandTrailParticles * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C08F10, void, OnEnable, (app::SandTrailParticles * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C08FB0, void, OnDisable, (app::SandTrailParticles * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C09050, void, OnDestroy, (app::SandTrailParticles * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C091F0, void, Stop, (app::SandTrailParticles * this_ptr, int32_t frame_delay))
    IL2CPP_REGISTER_METHOD(0x00C09380, void, StopParticlePlayback, (app::SandTrailParticles * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047680B0, SandTrailParticles_StopParticlePlayback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C093F0, void, OnSuspended, (app::SandTrailParticles * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C09410, void, OnParticleSystemStopped, (app::SandTrailParticles * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C09500, void, OnRestoreCheckpoint, (app::SandTrailParticles * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470C820, SandTrailParticles_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C095F0, void, ctor, (app::SandTrailParticles * this_ptr))
} // namespace app::classes::SandTrailParticles
