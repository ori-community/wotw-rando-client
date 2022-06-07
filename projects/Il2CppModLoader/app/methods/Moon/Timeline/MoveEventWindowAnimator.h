#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::MoveEventWindowAnimator {
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::Action_1_Moon_Timeline_MoveEventType_ *, get_EventStart, (app::MoveEventWindowAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_EventStart, (app::MoveEventWindowAnimator * this_ptr, app::Action_1_Moon_Timeline_MoveEventType_ * value))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::Action_1_Moon_Timeline_MoveEventType_ *, get_EventStay, (app::MoveEventWindowAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_EventStay, (app::MoveEventWindowAnimator * this_ptr, app::Action_1_Moon_Timeline_MoveEventType_ * value))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::Action_1_Moon_Timeline_MoveEventType_ *, get_EventEnd, (app::MoveEventWindowAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_EventEnd, (app::MoveEventWindowAnimator * this_ptr, app::Action_1_Moon_Timeline_MoveEventType_ * value))
    IL2CPP_REGISTER_METHOD(0x00777080, void, OnStartPlayback, (app::MoveEventWindowAnimator * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00777120, void, OnStopPlayback, (app::MoveEventWindowAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007771C0, void, OnUpdateEntity, (app::MoveEventWindowAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00777280, void, ctor, (app::MoveEventWindowAnimator * this_ptr))
}
