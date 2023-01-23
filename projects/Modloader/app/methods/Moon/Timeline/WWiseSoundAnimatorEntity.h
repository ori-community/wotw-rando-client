#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/WWiseSoundAnimatorEntity.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Timeline::WWiseSoundAnimatorEntity {
    IL2CPP_REGISTER_METHOD(0x00D1D730, app::GameObject*, get_ExternalTarget, (app::WWiseSoundAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::WWiseSoundAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D1D750, app::Transform*, get_EffectiveTransform, (app::WWiseSoundAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D1D830, app::SoundHost*, get_EffectiveSoundHost, (app::WWiseSoundAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D1D9F0, void, OnStartPlayback, (app::WWiseSoundAnimatorEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00D1DD70, void, OnStopPlayback, (app::WWiseSoundAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D1DD90, void, OnUpdateEntity, (app::WWiseSoundAnimatorEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00413160, bool, get_LoopContext, (app::WWiseSoundAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00413170, void, set_LoopContext, (app::WWiseSoundAnimatorEntity * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00D1DE00, void, OnLoopExit, (app::WWiseSoundAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D1DE20, void, OnRootScopeStopped, (app::WWiseSoundAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D1DED0, void, ForceStopSound, (app::WWiseSoundAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D1DF50, void, ctor, (app::WWiseSoundAnimatorEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::WWiseSoundAnimatorEntity
