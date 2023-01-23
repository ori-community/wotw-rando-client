#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TrailAnimatorEntity.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTrail.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Timeline::TrailAnimatorEntity {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::TrailAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E8F0E0, app::GameObject*, get_ExternalTarget, (app::TrailAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E8F190, app::MoonTrail*, get_EffectiveTrail, (app::TrailAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E8F250, void, OnStartPlayback, (app::TrailAnimatorEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01E8F390, void, OnStopPlayback, (app::TrailAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E8F490, void, ctor, (app::TrailAnimatorEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::TrailAnimatorEntity
