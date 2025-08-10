#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventContents.h>
#include <Modloader/app/structs/Queue_1_PlayFab_EventsModels_EventContents_.h>

namespace app::classes::System::Collections::Generic::Queue_1_PlayFab_EventsModels_EventContents_ {
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, app::Queue_1_PlayFab_EventsModels_EventContents_* this_ptr, app::EventContents* item)
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::EventContents*, Dequeue, app::Queue_1_PlayFab_EventsModels_EventContents_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, app::Queue_1_PlayFab_EventsModels_EventContents_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, app::Queue_1_PlayFab_EventsModels_EventContents_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Queue_1_PlayFab_EventsModels_EventContents_
