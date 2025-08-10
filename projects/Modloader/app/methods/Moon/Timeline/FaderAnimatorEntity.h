#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FaderAnimatorEntity.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Timeline::FaderAnimatorEntity {
    IL2CPP_REGISTER_METHOD(0x00769F00, void, OnStartPlayback, app::FaderAnimatorEntity* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0076A050, void, OnStopPlayback, app::FaderAnimatorEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076A1B0, void, OnUpdateEntity, app::FaderAnimatorEntity* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x0076A1D0, void, SampleValue, app::FaderAnimatorEntity* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0076A3C0, void, ctor, app::FaderAnimatorEntity* this_ptr)
} // namespace app::classes::Moon::Timeline::FaderAnimatorEntity
