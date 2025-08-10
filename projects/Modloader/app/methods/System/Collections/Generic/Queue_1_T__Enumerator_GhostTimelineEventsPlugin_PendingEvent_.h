#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GhostTimelineEventsPlugin_PendingEvent.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Queue_1_GhostTimelineEventsPlugin_PendingEvent_.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_GhostTimelineEventsPlugin_PendingEvent___Boxed.h>

namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_GhostTimelineEventsPlugin_PendingEvent_ {
    IL2CPP_REGISTER_METHOD(
        0x001ECDC0,
        void,
        ctor,
        app::Queue_1_T_Enumerator_GhostTimelineEventsPlugin_PendingEvent___Boxed* this_ptr,
        app::Queue_1_GhostTimelineEventsPlugin_PendingEvent_* q
    )
    IL2CPP_REGISTER_METHOD(0x001ECE00, void, Dispose, app::Queue_1_T_Enumerator_GhostTimelineEventsPlugin_PendingEvent___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001ED020, bool, MoveNext, app::Queue_1_T_Enumerator_GhostTimelineEventsPlugin_PendingEvent___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001ED030,
        app::GhostTimelineEventsPlugin_PendingEvent,
        get_Current,
        app::Queue_1_T_Enumerator_GhostTimelineEventsPlugin_PendingEvent___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001ED080,
        void,
        ThrowEnumerationNotStartedOrEnded,
        app::Queue_1_T_Enumerator_GhostTimelineEventsPlugin_PendingEvent___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001ED090,
        app::Object*,
        IEnumerator_get_Current,
        app::Queue_1_T_Enumerator_GhostTimelineEventsPlugin_PendingEvent___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x001ED150, void, IEnumerator_Reset, app::Queue_1_T_Enumerator_GhostTimelineEventsPlugin_PendingEvent___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_GhostTimelineEventsPlugin_PendingEvent_
