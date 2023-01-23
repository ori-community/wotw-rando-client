#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_DamageWeightMask_.h>
#include <Modloader/app/structs/BlockDamageInterruption.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Timeline::BlockDamageInterruption {
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::Action_1_DamageWeightMask_*, get_EventStart, (app::BlockDamageInterruption * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_EventStart, (app::BlockDamageInterruption * this_ptr, app::Action_1_DamageWeightMask_* value))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::Action_1_DamageWeightMask_*, get_EventStay, (app::BlockDamageInterruption * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_EventStay, (app::BlockDamageInterruption * this_ptr, app::Action_1_DamageWeightMask_* value))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::Action_1_DamageWeightMask_*, get_EventEnd, (app::BlockDamageInterruption * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_EventEnd, (app::BlockDamageInterruption * this_ptr, app::Action_1_DamageWeightMask_* value))
    IL2CPP_REGISTER_METHOD(0x010C7CC0, void, OnStartPlayback, (app::BlockDamageInterruption * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x010C7D60, void, OnStopPlayback, (app::BlockDamageInterruption * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C7E00, void, OnUpdateEntity, (app::BlockDamageInterruption * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x010C7EC0, void, ctor, (app::BlockDamageInterruption * this_ptr))
} // namespace app::classes::Moon::Timeline::BlockDamageInterruption
