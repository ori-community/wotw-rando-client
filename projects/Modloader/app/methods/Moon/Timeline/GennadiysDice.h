#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/EventDescriptorSet.h>
#include <Modloader/app/structs/GennadiysDice.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_IEventDescriptor_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::Moon::Timeline::GennadiysDice {
    IL2CPP_REGISTER_METHOD(0x01BC0070, app::Int32__Array*, GetEventsIds, (app::GennadiysDice * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BC0250, app::String__Array*, GetEventsNames, (app::GennadiysDice * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BC0340, app::String*, GetEventName, (app::GennadiysDice * this_ptr, int32_t evt))
    IL2CPP_REGISTER_METHOD(0x01BC03F0, void, CollectEvents, (app::GennadiysDice * this_ptr, app::List_1_Moon_Timeline_IEventDescriptor_* events))
    IL2CPP_REGISTER_METHOD(0x01BC0560, void, OnUpdateEntity, (app::GennadiysDice * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01BC06D0, void, Roll, (app::GennadiysDice * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BC07E0, bool, HasFinished, (app::GennadiysDice * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x01BC0860, void, OnStartPlayback, (app::GennadiysDice * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01BC0860, void, Reset, (app::GennadiysDice * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BC0870, app::EventDescriptorSet*, get_Events, (app::GennadiysDice * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BC0AA0, bool, ApproximateEvent, (app::GennadiysDice * this_ptr, int32_t evt, float* time))
    IL2CPP_REGISTER_METHOD(0x01BC0BE0, void, ctor, (app::GennadiysDice * this_ptr))
} // namespace app::classes::Moon::Timeline::GennadiysDice
